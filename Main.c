#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Vejo se o usuario digitado eh o mesmo que o usuario presente no arquivo "file_login"
Caso nao seja peco pra digitar novamente
*/
int verificar_login(char usuario_setado[6], char senha_setada[6], char usuario_entrada[20], char senha_entrada[20]) {

	int verificar_usuario, verificar_senha;
	int verificacao_final=0;
	
	verificar_usuario = strcmp(usuario_setado, usuario_entrada);
	verificar_senha = strcmp(senha_setada, senha_entrada);
	
	while(verificar_senha != 0 || verificar_usuario != 0){

			system("cls"); //limpar terminal windows

			printf("--------------------LOGIN OU SENHA INCORRETO--------------------\n");

			printf("Digite o nome de usuario novamente: ");
			scanf("%s", usuario_entrada);
			printf("Digite a sua senha novamente: ");
			scanf("%s", senha_entrada);

			verificar_usuario = strcmp(usuario_setado, usuario_entrada);
			verificar_senha = strcmp(senha_setada, senha_entrada);

			if(verificar_senha == 0 && verificar_usuario == 0){
				verificacao_final = 1;
				return(verificacao_final);
			}
	}

}

int main(){
	
	char usuario_setado[6], usuario_entrada[20];
	char senha_setada[6], senha_entrada[20];

	int escolha_menu=0;

	int controlador_menu_principal=0;

	//Seleciono o arquivo com o login e senha_setada	
	FILE *file_login;
	file_login = fopen("login.txt", "r"); // "r" - porque quero pegar informacao do arquivo
	fscanf(file_login, "%s %s", usuario_setado, senha_setada); //recebo a senha e o usuario do arquivo txt
	fclose(file_login);

	system("cls"); //limpar terminal windows

	
	
	printf("--------------------BEM VINDO(A)--------------------\n\n");
	printf("LOGIN:\n");

	printf("Digite o nome de usuario: ");
	scanf("%s", usuario_entrada);
	printf("Digite a sua senha: ");
	scanf("%s", senha_entrada);
	
	verificar_login(usuario_setado, senha_setada, usuario_entrada, senha_entrada);
	
	system("cls"); //limpar terminal windows
	
	printf("--------------------MENU PRINCIPAL--------------------\n");

	//Usuario escolhe o que ele vai fazer no software a partir de um numero
	while(escolha_menu==0 || escolha_menu != 1 && escolha_menu != 2 && escolha_menu != 3 && escolha_menu != 4 && escolha_menu != 5){
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
		scanf("%d",&escolha_menu);

		controlador_menu_principal++;
		system("cls"); //limpar terminal windows
	}

	
	switch(escolha_menu)
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

	return 0;
}
