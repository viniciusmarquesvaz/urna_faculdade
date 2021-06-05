#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	setlocale(LC_ALL,"Portuguese");
	int menu=0;  // variável para selecionar opção do menu principal
	int vereadorJoao=0,vereadorMaria=0,vereadorZe=0,vereadorNulo=0,vereadorInvalidos=0,somaVereador=0; //variáveis para vereadores
	int prefeitoZureta=0,prefeitoGomes=0,prefeitoNulo=0,prefeitoInvalidos=0,somaPrefeito=0; //variáveis oara prefeito 
	int votarVereador; // variável para votar em vereador
	int votarPrefeito; //variável para votar no prefeito
	int i; //contador
	while(menu!=3)
	{
		system("cls");
		do
		{
			printf("\n\n\n\t\t\t\t\tPESQUISA ELEITORAL\n");
	    	printf("\t\t\t Observe abaixo a relação para votar nos vereadores: \n\n");
	   		printf("111- Vereador Joao do Frete\n");
	    	printf("222- Vereador Maria da Pamonha\n");
	    	printf("333- Vereador Ze da Farmacia\n");
	    	printf("444- Voto nulo\n");
	  		printf("selecione o candidato a vereador\n");
	   
	   		printf("\t\t\t Observe abaixo a relação abaixo para votar nos prefeitos: \n\n");
	   		printf("11- Prefeito Dr.Zureta\n");
	   		printf("22- Prefeito Senhor Gomes\n");
	  		printf("44- Voto nulo\n");
	   
	  
	   
	   		printf("\t\t\t 1-votar\n");
	  		printf("\t\t\t 2-Apuração dos Votos\n");
	   		printf("\t\t\t 3-Sair\n");
	   		printf("----------------------------------------\n");
	    
			scanf("%d",&menu);
	    	fflush(stdin);
	    	if(menu!=1 && menu !=2 && menu !=3)
	    	{
	    		system("cls");
			}
		}while(menu!=1 && menu !=2 && menu !=3);	  
   
	switch(menu){
  	case 1:
   	    system("cls");
   	    printf("111- Vereador Joao do Frete\n");
        printf("222- Vereador Maria da Pamonha\n");
        printf("333- Vereador Ze da Farmacia\n");
        printf("444- Voto nulo\n\n\n");
		printf("escolha seu cadidato a vereador: \n");
   	    scanf("%d",&votarVereador);
   	    fflush(stdin);
   	    
   	    switch(votarVereador){
   			case 111:
		   		vereadorJoao=vereadorJoao+1;
		   		printf("voto computado com sucesso[Vereador João]  \n");
   				break;
   			case 222:
		   		vereadorMaria=vereadorMaria+1;
		   		printf("voto computado com sucesso[Vereadora Maria]	 \n");
   				break;
   			case 333:
		   		vereadorZe=1+vereadorZe;
		   		printf("voto computado com sucesso[vereador Zé] \n");
   				break;
   			case 444:
		   		vereadorNulo=1+vereadorNulo;
		   		printf("voto computado com sucesso[voto nulo vereador]\n");
   				break;
   			default:
	   		    vereadorInvalidos=vereadorInvalidos+1;
	   			printf("voto inválidado para vereador\n");
   				break;
   		}
   		system("cls");
   		printf("11- Prefeito Dr.Zureta\n");
        printf("22- Prefeito Senhor Gomes\n");
        printf("44- Voto nulo\n");
	   	printf("escolha o seu candidato a prefeito\n");
   		scanf("%d",&votarPrefeito);
   		fflush(stdin);
   		
   		switch(votarPrefeito){
   		case 11:
	   		prefeitoZureta+=1;
	   		printf("voto computado com sucesso[prefeito zureta]\n");
	   		break;
   		case 22:
	   		prefeitoGomes+=1;
	   		printf("voto computado com sucesso[Prefeito Gomes]\n");
	   		break;
   		case 44:
	   		prefeitoNulo+=1;
	   		printf("voto computado com sucesso[voto nulo prefeito] \n");
	   		break;
   		default:
   			prefeitoInvalidos=prefeitoInvalidos+1;
   			printf("voto inválidado para prefeito\n");
   			break;
   		}
   		menu=0;
   		break;
   	
   	case 2:
   		system("cls");
   		somaVereador = vereadorJoao + vereadorMaria + vereadorZe + vereadorNulo + vereadorInvalidos;
   		somaPrefeito = prefeitoZureta + prefeitoGomes + prefeitoNulo + prefeitoInvalidos;
   		printf("\t\t\tAPURAÇÃO DOS VOTOS\n");
   		printf("===VEREADORES===\n\n");
   		printf("Vereador [joão]111 %d votos.\n",vereadorJoao);
   		printf("Vereador [Maria]222 %d votos.\n",vereadorMaria);
   		printf("Vereador [Zé]333 %d votos.\n",vereadorZe);
   		printf("Vereador [Nulos]444 %d votos.\n",vereadorNulo);
   		printf("Vereador [inválidos] %d votos.\n\n",vereadorInvalidos);
		printf("Votos totais: %d\n",somaVereador);
   		system("pause");
   		system("cls");
   		printf("\t\t\tAPURAÇÃO DOS VOTOS\n");
   		printf("===PREFEITO===\n\n");
   		printf("Prefeito [Dr. Zureta]11 %d votos.\n",prefeitoZureta);
   		printf("Prefeito [Senhor Gomes]22 %d votos.\n",prefeitoGomes);
   		printf("Prefeito [Nulos]444 %d votos.\n",prefeitoNulo);
   		printf("Prefeito [inválidos] %d votos.\n\n",prefeitoInvalidos);
   		printf("Votos totais: %d\n",somaPrefeito);
   		menu=0;
   		break;
   	case 3:
   		system("cls");
   		printf("Saindo...");
   	 	system("pause");
   	}
	system("pause");
}
   	return 0; 
}
   		
   		
          
	
	
   		

   
  

   	
   	
   
   

   	
   	 
   
   	
   
   
   
   
  
   
   
 
