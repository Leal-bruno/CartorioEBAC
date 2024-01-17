#include <stdio.h> // biblioteca de comunica��o com o usu�rio
#include <stdlib.h> // biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> // biblioteca de aloca��o por regi�o
#include <string.h> // biblioteca responsavel por cuidar das string

int Registro() //Fuun��oresponsavel por cadastrar os usuarios no sistema
{
	// INICIO CRIA��O DE VARIAVEIS/STRING
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//FINAL DA CRIA��O DE VARIAVEIS/STRING
	printf("Digite o CPF a ser cadastrado: ");//COLETANDO INFORMA�OES DO USUARIO
	scanf("%s",cpf); //%S REFERE-SE A STRING
	
 
    strcpy(arquivo, cpf); // responsavel por copiar os valores das strings
     
     
	FILE *file; 
	file = fopen(arquivo, "w"); // cria arquivo e o "w"
	fprintf(file, cpf);//salvo valor da variavel
	fclose(file);//fecho arquivo

	file = fopen(arquivo,"a");
	fprintf(file, ",");
	fclose(file);


	printf("Digite o nome a ser cadastrado! ");
	scanf("%s",nome);

	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);

	printf("Digite o sobrenome a ser cadastrado! ");
	scanf("%s",sobrenome);

	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);


	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);


	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);

	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	system("pause"); // responsavel por limpar a tela
	
}


int Consultar()
{
	setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem

	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas s�o as informa�oes do usu�rio:");
		printf("%s", conteudo);
		printf("\n\n");
		
	}

	system("pause");

}

int Deletar()
{
	char cpf[40];
	
	printf("Digite o CPF a ser deletado");
	scanf("%s", cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf("o usur�rio n�o se encontra no sistema! \n");
		system("pause");
	}
	
	
	}
int main()
		{
	int opcao=0; // Definindo as variaveis
	int laco=1;
	char senhadigitada[10]="a";
	int comparacao;
		
	printf("###Cartorio da EBAC ###\n\n");
	printf("Loguin de admnistrador! \n\nDigite a sua senha: ");
	scanf("%s",senhadigitada);
	
	comparacao = strcmp(senhadigitada, "admin");
	
	if(comparacao == 0)
	{
	

		system("cls");
		for(laco=1;laco=1;)
	
		{
	
	
				system("cls");
	
	
				setlocale(LC_ALL, "Portuguese"); // Definindo a linguagem
		
				printf("### Cart�rio da EBAC ###\n"); //Inicio do Menu
				printf("Escolha a op��o desejada do menu: \n \n");
				printf("\t1 - Registrar nomes \n");
				printf("\t2 - Consultar nomes\n");
				printf("\t3 - Deletar nomes \n");// Final do Menu
				printf("\t4 - Sair do Sistema\n\n");
				printf("Op�ao:");
		
				scanf("%d", &opcao);// armazenando a escolha do usuario
		
				system("cls");
		
				switch(opcao)
				{
				case 1:
				Registro();
				break;
			
				case 2:
				Consultar();
				break;
			
				case 3:
				Deletar();
				break;
				
				case 4:
				printf("Obrigado por utilizar o sistema!\n");
				return 0;
				break;
			
			
				default:
				printf("Esta op��o n�o est� disponivel\n"); // Final da sele��o3
				system("Pause");
				break;
				
				}
				
			}	
	}
		else
			printf("Senha errada");	
	 }		
	
			
			
		
	
