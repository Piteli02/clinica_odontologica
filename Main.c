#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Estrutura da hora
typedef struct
{
	int hora;
	int min;
}Hora;

//Estrutura da Data
typedef struct 
{
	int ano;
	int mes;
	int dia;
}Data;

//Estrutura dos pacientes
typedef struct 
{
	int cpf_paciente;
	char nome[20];
	int telefone;
}Paciente;

//Estrutura da consulta
typedef struct
{
	int cod_consulta;
	Paciente paciente_da_consulta;
	Hora hora_consulta;
	Data data_consulta;
}Consulta;

//Variaveis com o usuario e senha do txt
char usuario_setado[6], senha_setada[6];

//Recebo os dados de login
void fazer_login();

//Opcoes de escolha para o que fazer no software
int menu_principal();

//Sequencia depois de ter decidido o que será feito no sofware
void escolha_menu(int operador);

//Vejo se o usuario digitado eh o mesmo que o usuario presente no arquivo "file_login"
void verificar_login(char usuario_entrada[20], char senha_entrada[20]);

int main(){

	int operador = 0;

	//Seleciono o arquivo com o login e senha_setada	
	FILE *file_login;
	file_login = fopen("login.txt", "r"); // "r" - porque quero pegar informacao do arquivo
	//Caso o usuario n tenha colocado o txt na mesma pasta que o executavel
	if(file_login== NULL){
		system("clear"); //limpar terminal windows
		printf("\nERRO: Insira o arquivo 'login.txt' na mesma pasta que o executavel!!\n");
		exit (0);
	}

	fscanf(file_login, "%s %s", usuario_setado, senha_setada); //recebo a senha e o usuario do arquivo txt
	fclose(file_login);

	fazer_login();

	operador = menu_principal();

	escolha_menu(operador);

	return 0;
}

void fazer_login(){
	system("clear"); //limpar terminal windows

	char usuario_entrada[20], senha_entrada[20];

	printf("--------------------BEM VINDO(A)--------------------\n\n");
	printf("LOGIN:\n");

	printf("Digite o nome de usuario: ");
	fgets(usuario_entrada, 20, stdin);
	usuario_entrada[strcspn(usuario_entrada, "\n")] = 0; //tirando o "\n" da string
	printf("Digite a sua senha: ");
	fgets(senha_entrada, 20, stdin);
	senha_entrada[strcspn(senha_entrada, "\n")] = 0; //tirando o "\n" da string

	verificar_login(usuario_entrada, senha_entrada);
}

void verificar_login(char usuario_entrada[20], char senha_entrada[20]) {

	int verificar_usuario, verificar_senha;
	
	verificar_usuario = strcmp(usuario_setado, usuario_entrada);
	verificar_senha = strcmp(senha_setada, senha_entrada);
	
	while(verificar_senha != 0 || verificar_usuario != 0){

			system("clear"); //limpar terminal windows

			printf("--------------------LOGIN OU SENHA INCORRETO--------------------\n");

			printf("Digite o nome de usuario novamente: ");
			fgets(usuario_entrada, 20, stdin);
			usuario_entrada[strcspn(usuario_entrada, "\n")] = 0; //tirando o "\n" da string
			printf("Digite a sua senha novamente: ");
			fgets(senha_entrada, 20, stdin);
			senha_entrada[strcspn(senha_entrada, "\n")] = 0; //tirando o "\n" da string


			verificar_usuario = strcmp(usuario_setado, usuario_entrada);
			verificar_senha = strcmp(senha_setada, senha_entrada);

	}

}

int menu_principal(){

	int escolha_menu_func=0;

	int controlador_menu_principal=0;

	system("clear"); //limpar terminal windows
	
	printf("--------------------MENU PRINCIPAL--------------------\n");

	//Usuario escolhe o que ele vai fazer no software a partir de um numero
	while(escolha_menu_func==0 || escolha_menu_func != 1 && escolha_menu_func != 2 && escolha_menu_func != 3 && escolha_menu_func != 4 && escolha_menu_func != 5){
		if(controlador_menu_principal!=0){
			printf("--------------------OPCAO INVALIDA, TENTE NOVAMENTE--------------------\n");
		}
		printf("\nAPERTE:\n");
		printf("1 para CADASTRAR NOVO CLIENTE\n");
		printf("2 para AGENDAR NOVA CONSULTA\n");
		printf("3 para ALTERAR CONSULTA EXISTENTE\n");
		printf("4 para VISUALIZAR CONSULTAS DO DIA\n");
		printf("5 para VISUALIZAR CONSULTAS DO PACIENTE\n\n");
		printf("Escolha: ");
		scanf("%d",&escolha_menu_func);

		controlador_menu_principal++;
		system("clear"); //limpar terminal windows
	}

	return escolha_menu_func;
}

void escolha_menu(int operador){
	
	switch(operador)
	{
		case 1:
			printf("FUNCAO PARA CADASTRAR NOVO CLIENTE\n");
			break;
		case 2:
			printf("FUNCAO PARA AGENDAR NOVA CONSULTA\n");
			break;
		case 3:
			printf("FUNCAO PARA ALTERAR CONSULTA EXISTENTE\n");
			break;
		case 4:
			printf("FUNCAO PARA VISUALIZAR CONSULTAS DO DIA\n");
			break;
		case 5:
			printf("FUNCAO PARA VISUALIZAR CONSULTAS DO PACIENTE\n");
			break;
	}

}