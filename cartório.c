#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> //biblioteca de alocação de espaço e memória 
#include <locale.h> //biblioteca de alocacões de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro() // função responsavel por cadastrar os usuário no sistema
{
	// inicio da criação de fariáveis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da criação de variáveis/string
    
    printf("digite o cpf a ser cadastrado:"); // coletando informação do usuário
    scanf("%s", cpf); // %s refese-se a string
    
    strcpy(arquivo, cpf); //responsável por copiar os valores das string
    
    FILE *file; // cria o arquivo 
    file = fopen(arquivo, "w"); //cria o arquuivo e o "w" significa escrever
    fprintf(file,cpf); // salvo o valor do arquivo
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a"); // abrindo o arquivo
    fprintf(file,","); // colocando a "," para separar as informações
    fclose(file); // fechando o arquivo
    
    printf("digite o nome a ser cadastrado: "); // coletando informações do usuário
    scanf("%s",nome); // refere-se a string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,nome); // salvo o valor do arquivo
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,","); //colocando a "," para separar as informações
    fclose(file); //fechando o arquivo
    
    printf("digite o sobrenome a ser casdastrado: "); //coletando informações do usuário
    scanf("%s", sobrenome); //refese-se as string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,sobrenome); //salvo o valor do arquivo
    fclose(file); //fechando o arquivo
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,","); //colocando a "," para separar as informações
    fclose(file); //fechando o arquivo
    
    printf("digite o cargo a ser cadastrado: "); //coletando informações do usuário
    scanf("%s", cargo); //refese-se as string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,cargo); //salvo o valor do arquivo
    fclose(file); //fechou o arquivo
    
    system("pause"); //uma pausa para o usuário conseguir ler as perguntas
    
}

int consultar() // função responsável por consultar o usuário
{
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	//inicio da criação de variáveis/string
	 char cpf[40];
	 char conteudo[200];
	//fim da criação de vsriáveis/string
	
	 printf("digite o CPF a ser consultado: "); //coletando informações do usuário
	 scanf("%s",cpf); //refere-se as strings
	 
	 FILE *file; //cria o arquivo
	 file = fopen(cpf,"r"); //cria o arquivo e o "r" significa ler
	 
	 if(file == NULL) //quer dizer que o usuário não foi encontrato
   
    {
    	printf("não foi possivel abrir o arquivo, não localizado!.\n"); //coletando informações do usuário
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
	    printf("\nEssas são as informações do usuário: "); //coletando informações do usuário
	    printf("%s", conteudo);
	    printf("\n\n");
    }
    	
	system("pause"); // pausa para o usuário ler as informações
	
}

int deletar() //função responsal deletar nomes
{
	//inicio da criação de variáveis/string
      char cpf[40];
    //fim da criação de variáveis/string
    
      printf("digite o CPF do usuário a ser deletado: "); //coletando informações do usuário
      scanf("%s", cpf); //refere-se as string
      
      remove(cpf); //exclui o CPF
      
      FILE *file; //cria o arquivo
      file = fopen(cpf,"r"); //cria o arquivo e o "r" significa ler
    
      if(file == NULL); // quer dizer que o usuário não foi encontrado
    
        {
	      printf("o usuário não se encontra no sistema!.\n"); //mensagem para o usuário 
	      system("pause"); // pausa para o usuário ler a mensagem
	    }
}
    
	

int main()
{
    int opcao=0; //definindo variáveis
	int laco=1;
	
	
	for(laco=1;laco=1;)
	{
		
	    system("cls"); //responsável por limpar a tela
         
         setlocale(LC_ALL, "portuguese"); //
	
        printf("cartório da ebac\n\n");
	    printf("escolha a opção desejada do menu:\n\n");
	    printf("\t1 - registrar nomes\n");
	    printf("\t2 - connsultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");
	    printf("opção: "); // fim do menu 
	
	    scanf("%d", &opcao); //armazenando a escolha do usuário
	
	    system("cls"); //raponsavel por limpar a tela
	
	    switch(opcao) //inicio da seleção do menu
        {
		
            case 1:
            registro(); // chamada de funções
	        break;
	     
	        case 2:
		    consultar(); //chamada de funções
		    break;
		     
	    	case 3:
		    deletar(); // chamada de funções
	        break;
	        	
	        default:
	        printf("essa opção não está disponevel!\n");
	        system("pause"); 	
	        break; 
	        //fim da seleção
    	}       
    
	}
}



