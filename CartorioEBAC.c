#include <stdio.h> // biblioteca de comunicação com o usuário
#include <stdlib.h> // biblioteca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocação por região
#include <string.h> // biblioteca responsavel por cuidar das string

int Registro() //Fuunçãoresponsavel por cadastrar os usuarios no sistema
{
	// INICIO CRIAÇÃO DE VARIAVEIS/STRING
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//FINAL DA CRIAÇÃO DE VARIAVEIS/STRING
	printf("Digite o CPF a ser cadastrado: ");//COLETANDO INFORMAÇOES DO USUARIO
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
		printf("Não foi possivel abrir o arquivo, não localizado!.\n");
	}

	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("\nEssas são as informaçoes do usuário:");
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
		printf("o usurário não se encontra no sistema! \n");
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
		
				printf("### Cartório da EBAC ###\n"); //Inicio do Menu
				printf("Escolha a opção desejada do menu: \n \n");
				printf("\t1 - Registrar nomes \n");
				printf("\t2 - Consultar nomes\n");
				printf("\t3 - Deletar nomes \n");// Final do Menu
				printf("\t4 - Sair do Sistema\n\n");
				printf("Opçao:");
		
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
				printf("Esta opção não está disponivel\n"); // Final da seleção3
				system("Pause");
				break;
				
				}
				
			}	
	}
		else
			printf("Senha errada");	
	 }		
	
			
			
		
	
