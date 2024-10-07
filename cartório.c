#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o e mem�ria 
#include <locale.h> //biblioteca de alocac�es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() // fun��o responsavel por cadastrar os usu�rio no sistema
{
	// inicio da cria��o de fari�veis/string
	char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //final da cria��o de vari�veis/string
    
    printf("digite o cpf a ser cadastrado:"); // coletando informa��o do usu�rio
    scanf("%s", cpf); // %s refese-se a string
    
    strcpy(arquivo, cpf); //respons�vel por copiar os valores das string
    
    FILE *file; // cria o arquivo 
    file = fopen(arquivo, "w"); //cria o arquuivo e o "w" significa escrever
    fprintf(file,cpf); // salvo o valor do arquivo
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a"); // abrindo o arquivo
    fprintf(file,","); // colocando a "," para separar as informa��es
    fclose(file); // fechando o arquivo
    
    printf("digite o nome a ser cadastrado: "); // coletando informa��es do usu�rio
    scanf("%s",nome); // refere-se a string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,nome); // salvo o valor do arquivo
    fclose(file); // fecha o arquivo
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,","); //colocando a "," para separar as informa��es
    fclose(file); //fechando o arquivo
    
    printf("digite o sobrenome a ser casdastrado: "); //coletando informa��es do usu�rio
    scanf("%s", sobrenome); //refese-se as string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,sobrenome); //salvo o valor do arquivo
    fclose(file); //fechando o arquivo
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,","); //colocando a "," para separar as informa��es
    fclose(file); //fechando o arquivo
    
    printf("digite o cargo a ser cadastrado: "); //coletando informa��es do usu�rio
    scanf("%s", cargo); //refese-se as string
    
    file = fopen(arquivo, "a"); //abrindo o arquivo
    fprintf(file,cargo); //salvo o valor do arquivo
    fclose(file); //fechou o arquivo
    
    system("pause"); //uma pausa para o usu�rio conseguir ler as perguntas
    
}

int consultar() // fun��o respons�vel por consultar o usu�rio
{
	setlocale(LC_ALL, "portuguese"); //definindo a linguagem
	
	//inicio da cria��o de vari�veis/string
	 char cpf[40];
	 char conteudo[200];
	//fim da cria��o de vsri�veis/string
	
	 printf("digite o CPF a ser consultado: "); //coletando informa��es do usu�rio
	 scanf("%s",cpf); //refere-se as strings
	 
	 FILE *file; //cria o arquivo
	 file = fopen(cpf,"r"); //cria o arquivo e o "r" significa ler
	 
	 if(file == NULL) //quer dizer que o usu�rio n�o foi encontrato
   
    {
    	printf("n�o foi possivel abrir o arquivo, n�o localizado!.\n"); //coletando informa��es do usu�rio
	}
	
	while(fgets(conteudo, 200, file) != NULL)
	{
	    printf("\nEssas s�o as informa��es do usu�rio: "); //coletando informa��es do usu�rio
	    printf("%s", conteudo);
	    printf("\n\n");
    }
    	
	system("pause"); // pausa para o usu�rio ler as informa��es
	
}

int deletar() //fun��o responsal deletar nomes
{
	//inicio da cria��o de vari�veis/string
      char cpf[40];
    //fim da cria��o de vari�veis/string
    
      printf("digite o CPF do usu�rio a ser deletado: "); //coletando informa��es do usu�rio
      scanf("%s", cpf); //refere-se as string
      
      remove(cpf); //exclui o CPF
      
      FILE *file; //cria o arquivo
      file = fopen(cpf,"r"); //cria o arquivo e o "r" significa ler
    
      if(file == NULL); // quer dizer que o usu�rio n�o foi encontrado
    
        {
	      printf("o usu�rio n�o se encontra no sistema!.\n"); //mensagem para o usu�rio 
	      system("pause"); // pausa para o usu�rio ler a mensagem
	    }
}
    
	

int main()
{
    int opcao=0; //definindo vari�veis
	int laco=1;
	
	
	for(laco=1;laco=1;)
	{
		
	    system("cls"); //respons�vel por limpar a tela
         
         setlocale(LC_ALL, "portuguese"); //
	
        printf("cart�rio da ebac\n\n");
	    printf("escolha a op��o desejada do menu:\n\n");
	    printf("\t1 - registrar nomes\n");
	    printf("\t2 - connsultar nomes\n");
	    printf("\t3 - deletar nomes\n\n");
	    printf("op��o: "); // fim do menu 
	
	    scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
	    system("cls"); //raponsavel por limpar a tela
	
	    switch(opcao) //inicio da sele��o do menu
        {
		
            case 1:
            registro(); // chamada de fun��es
	        break;
	     
	        case 2:
		    consultar(); //chamada de fun��es
		    break;
		     
	    	case 3:
		    deletar(); // chamada de fun��es
	        break;
	        	
	        default:
	        printf("essa op��o n�o est� disponevel!\n");
	        system("pause"); 	
	        break; 
	        //fim da sele��o
    	}       
    
	}
}



