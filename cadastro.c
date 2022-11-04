#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int verificar(char usuario[6], char senha[6], char usuarioent[20], char senhaent[20]) {

// o r é pq quer ler, ai usa ele

	int verificacao_usu, verificacao_sen, verificacao;
	
	verificacao_usu = strcmp(usuario, usuarioent);
	verificacao_sen = strcmp(senha, senhaent);
	
	if(verificacao_sen == 0 && verificacao_usu == 0){
		return 1; 
	}else{
		return 0;
	}

}

int main(){
	
	char usuario[6], usuarioent[20];
	char senha[6], senhaent[20];
	int verificacao;
	
//pego do arquivo	
	FILE *file;
	file = fopen("login.txt", "r");
	fscanf(file, "%s %s", &usuario, &senha);
	
	printf("Digite o Usuario: ");
	scanf("%s", &usuarioent);
	printf("Digite a Senha: ");
	scanf("%s", &senhaent);
	
	
	verificacao = verificar(usuario, senha, usuarioent, senhaent);
	
		while(verificacao != 1){
			printf("\nLogin ou senha errados!\n\n ");
			printf("Digite o Usuario: ");
			scanf("%s", &usuarioent);
			printf("Digite a Senha: ");
			scanf("%s", &senhaent);
			verificacao = verificar(usuario, senha, usuarioent, senhaent);
		}
	
	if(verificacao == 1){
		
		printf("MENU PRINCIPAL");
	}
	
		fclose(file);
	return 0;
}
