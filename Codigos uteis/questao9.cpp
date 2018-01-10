#include <stdio.h>
#include <stdlib.h>
#define max 10000
main()
{
     char opcao;
     int n, m, var, vet1[max], vet2[max], vet_resultado[max], sobra, cont;

     /*Artificio para repetir o programa quando desejado pelo usuario.*/         
     while(opcao!='x')     
     { 
          /*Cabecalho do programa*/               
          printf("      %c------------------------------------------------------------------%c\n",218,191);
          printf("      |Programa que l%c duas sequ%cncias com n%cmeros de 0 e 9, e calcula   |\n",136,136,163);
          printf("      |uma outra sequ%cncia que representa a soma das outras duas.        |\n",136);
          printf("      %c------------------------------------------------------------------%c\n\n",192,217);
      
          /*Menu de opcoes*/ 
          printf("                                  %c--------%c\n",201,187);
          printf("                                  |  MENU  |\n");
          printf("                             %c----%c--------%c----%c\n",218,200,188,191);
          printf("                             |    (C)alcular    |\n");
          printf("                             %c------------------%c\n",204,185);
          printf("                             |      Fechar   (x)|\n");       
          printf("                             %c------------------%c\n",192,217);
          
          /*Lendo a opcao do menu*/   
          printf("\n\n    Escolha uma opcao: ");
          scanf("%c", &opcao);    
          
          /*Menu de opcoes*/
          switch(opcao)
          {
             case 'C':
             case 'c': 
          
                 /*Lendo o numero de elementos da primeira sequencia.*/
                 n=0;
                 while(n<=0){
                    printf("\n    Digite o numero de elementos da primeira sequencia: ");
                    scanf("%d",&n);
                    if(n<=0)
                        printf("\n    Numero invalido.\n");
                 }   
             
                 /*Lendo o numero de elementos da segunda sequencia.*/
                 m=0;
                 while(m<=0){
                    printf("    Digite o numero de elementos da segunda sequencia: ");
                    scanf("%d",&m);
                    if(m<=0)
                        printf("\nNumero invalido.\n");
                 }
          
                 if(n>=m)
                 {                          
                        /*Lendo os elementos da primeira sequencia.*/
                        printf("\n    Digite os valores da primeira sequencia.\n\n");
                        for(var=1; var<=n; var++){
                           vet1[var]=-1;
                           while(vet1[var]<0 || vet1[var]>9){
                                printf("    Digite o %d valor da primeira sequencia: ", var);
                                scanf("%d",&vet1[var]);
                                if(vet1[var]<0 || vet1[var]>9)
                                     printf("    Valor invalido.\n");
                           }
                        }
             
                        /*Lendo os elementos da segunda sequencia.*/
                        printf("\n    Digite os valores da segunda sequencia.\n\n");
                        cont=1;
                        for(var=n-m+1; var<=n; var++){
                           vet2[var]=-1;
                           while(vet2[var]<0 || vet2[var]>9){
                                printf("    Digite o %d valor da segunda sequencia: ", cont++);
                                scanf("%d",&vet2[var]);
                                if(vet2[var]<0 || vet2[var]>9){
                                     printf("    Valor invalido.\n");
                                     cont--;
                                }     
                           }
                       }
             
                       /*Completando os espaços vagos com zero para facilitar a soma.*/
                       for(var=0; var<=n-m; var++)
                           vet2[var]=0;
            
                 }
                 else if(m>n)
                 {      
                      /*Lendo os elementos da primeira sequencia.*/
                      printf("\n    Digite os valores da primeira sequencia.\n\n");
                      cont=1;
                      for(var=m-n+1; var<=m; var++){
                           vet2[var]=-1;                 
                           while(vet2[var]<0 || vet2[var]>9){
                                printf("    Digite o %d valor da primeira sequencia: ", cont++);
                                scanf("%d",&vet2[var]);
                                if(vet2[var]<0 || vet2[var]>9){
                                      printf("    Valor invalido.\n");
                                      cont--;
                                } 
                           }
                      }
             
                      /*Lendo os elementos da segunda sequencia.*/
                      printf("\n    Digite os valores da segunda sequencia.\n\n");
                      for(var=1; var<=m; var++){
                           vet1[var]=-1;
                           while(vet1[var]<0 || vet1[var]>9){
                                printf("    Digite o %d valor da segunda sequencia: ", var);
                                scanf("%d",&vet1[var]);
                                if(vet1[var]<0 || vet1[var]>9)
                                      printf("    Valor invalido.\n");
                           }
                      }
             
                      /*Completando os espaços vagos com zero para facilitar a soma.*/
                      for(var=0; var<=m-n; var++)
                           vet2[var]=0;
                 }
          
                 /*Artificio para ter um valor limite para o tamanho do vetor.*/
                 if(m>n)
                 n=m;   
         
                 /*Somando as sequencias.*/
                 sobra=0;
                 for(var=n; var>=0; var--){
                      vet_resultado[var]= vet1[var]+ vet2[var]+sobra; 
                      if(vet_resultado[var]>9){
                           sobra= vet_resultado[var]/10;     
                           vet_resultado[var]=vet_resultado[var]-10;
                      }else
                           sobra=0;
                 }
             
                 /*Imprimindo a soma das sequencias*/
                 printf("\n    A soma das sequencias e:\n    ");
                 if(vet_resultado[0]==0){
                    for(var=1; var<=n; var++)
                       printf("%d ", vet_resultado[var]);     
                 }else{
                    for(var=0; var<=n; var++)
                       printf("%d ", vet_resultado[var]);            
                 } 
             
             printf("\n\n    Concluido.");     
             printf("\n    Pressione qualquer tecla para voltar ao menu...");
             getch();
             system("cls");
             break;                   
             
             case 'X':
             case 'x': 
                 opcao='x';
             
             default:
                 system("cls");        
          }    
     }                     
}
