// this code have a bug
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void bubblesortc(int vetor[], int size)//M�todo bubblesort para ordenar o vetor em ordem crescente
{
   int tmp;//cria um vari�vel do tipo inteiro com nome de tmp
        size=7;//seta o valor 7 no tamanho
   for (int i = 0; i < size; ++i) {//para i menor que tamanho ele repetira o processo
      for (int j = 0; j < size; ++j) {//para j menor que tamanho ele repetira o processo
         if (vetor[j] > vetor[j+1]) {//se o vetor �ndice j for maior que o vetor �ndice j+1 ele far� o seguinte processo
                                //(ex: se vetor[0]=2 � maior vetor[1]=3)ent�o ele far� o seguinte processo
                                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
            tmp = vetor[j+1];//a vari�vel tmp receber� o valor de j+1(que � o posterior do que ele esta comparando)
            vetor[j+1] = vetor[j];//o vetor posterior(j+1) recebera o conte�do de j(o qual ele est� verificando)
            vetor[j] = tmp;//o vetor �ndice j receber� o conte�do de tmp
                                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
         }
                        //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
         //printf("\t\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
      }
                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo(ajuda na visualiza��o)
      //puts("");
   }
}
void bubblesortd(int vetor[], int size)//M�todo bubblesort para ordenar o vetor em ordem decrescente
{
   int tmp;//cria um vari�vel do tipo inteiro com nome de tmp
        size=7;//seta o valor 7 no tamanho
   for (int i = 0; i < size; ++i) {//para i menor que tamanho ele repetira o processo
      for (int j = 0; j < size; ++j) {//para j menor que tamanho ele repetira o processo
         if (vetor[j] < vetor[j+1]) {//se o vetor �ndice j for menor que o vetor �ndice j+1 ele far� o seguinte processo
                                //(ex: se vetor[0]=2 � maior vetor[1]=3)ent�o ele far� o seguinte processo
                                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
            tmp = vetor[j+1];//a vari�vel tmp receber� o valor de j+1(que � o posterior do que ele esta comparando)
            vetor[j+1] = vetor[j];//o vetor posterior(j+1) recebera o conte�do de j(o qual ele est� verificando)
            vetor[j] = tmp;//o vetor �ndice j receber� o conte�do de tmp
                                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
         }
                        //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo
         //printf("\t\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
      }
                //Caso queira acompanhar o procedimento da ordena��o s� descomentar a linha abaixo(Ajuda na visualiza��o)
      //puts("");
   }
}

int main(int argc, char **argv) {
    int vetor[8];//declara um vetor do tipo inteiro com 8 posi��es
    cout<<"---------------------------------------------\n";
    cout<<"--Informe 8 n�meros--\n";
    cout<<"---------------------------------------------\n";
    for(int i=0;i< 8;i++){
        cout<<"Informe um n�mero qualquer na posi��o ["<< i <<"]:";
        cin>>vetor[i];//Efetuara a leitura do n� por 8 vezes armazenado-o no vetor.
    }
    cout<<"---------------------------------------\n";
    cout<<" Vetor atual (";
    for(int i=0;i< 8;i++){//Exibe o vetor preenchido em sua forma atual.
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
   cout<<"\n---------------------------------------\n";
 bubblesortc(vetor, 7);//Chama o m�todo bubblesort crescente(para ordena��o)
  cout<<"\n--------------------------------------------------------------------\n";
 cout<<" Vetor Ordenado pelo bubbleSort_Crescente (";//Exibe o vetor j� ordenado
    for(int i=0;i< 8;i++){
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
    cout<<"\n-------------------------------------------------------------------\n";
    bubblesortd(vetor, 7);//Chama o m�todo bubblesort decrescente(para ordena��o)
    cout<<"\n------------------------------------------------------------------\n";
    cout<<" Vetor Ordenado pelo bubbleSort_Decrescente (";//Exibe o vetor j� ordenado
    for(int i=0;i< 8;i++){
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
    cout<<"\n-------------------------------------------------------------------\n";
    cout<<"\n\n";

    return (EXIT_SUCCESS);
}
