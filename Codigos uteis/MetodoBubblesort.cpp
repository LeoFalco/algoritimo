// this code have a bug
#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

void bubblesortc(int vetor[], int size)//Método bubblesort para ordenar o vetor em ordem crescente
{
   int tmp;//cria um variável do tipo inteiro com nome de tmp
        size=7;//seta o valor 7 no tamanho
   for (int i = 0; i < size; ++i) {//para i menor que tamanho ele repetira o processo
      for (int j = 0; j < size; ++j) {//para j menor que tamanho ele repetira o processo
         if (vetor[j] > vetor[j+1]) {//se o vetor índice j for maior que o vetor índice j+1 ele fará o seguinte processo
                                //(ex: se vetor[0]=2 é maior vetor[1]=3)então ele fará o seguinte processo
                                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
            tmp = vetor[j+1];//a variável tmp receberá o valor de j+1(que é o posterior do que ele esta comparando)
            vetor[j+1] = vetor[j];//o vetor posterior(j+1) recebera o conteúdo de j(o qual ele está verificando)
            vetor[j] = tmp;//o vetor índice j receberá o conteúdo de tmp
                                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
         }
                        //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
         //printf("\t\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
      }
                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo(ajuda na visualização)
      //puts("");
   }
}
void bubblesortd(int vetor[], int size)//Método bubblesort para ordenar o vetor em ordem decrescente
{
   int tmp;//cria um variável do tipo inteiro com nome de tmp
        size=7;//seta o valor 7 no tamanho
   for (int i = 0; i < size; ++i) {//para i menor que tamanho ele repetira o processo
      for (int j = 0; j < size; ++j) {//para j menor que tamanho ele repetira o processo
         if (vetor[j] < vetor[j+1]) {//se o vetor índice j for menor que o vetor índice j+1 ele fará o seguinte processo
                                //(ex: se vetor[0]=2 é maior vetor[1]=3)então ele fará o seguinte processo
                                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
            tmp = vetor[j+1];//a variável tmp receberá o valor de j+1(que é o posterior do que ele esta comparando)
            vetor[j+1] = vetor[j];//o vetor posterior(j+1) recebera o conteúdo de j(o qual ele está verificando)
            vetor[j] = tmp;//o vetor índice j receberá o conteúdo de tmp
                                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
            //printf("\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
         }
                        //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo
         //printf("\t\t%d,%d,%d,%d,%d,%d,%d,%d\n",  vetor[0], vetor[1], vetor[2],vetor[3], vetor[4],vetor[5],vetor[6], vetor[7]);
      }
                //Caso queira acompanhar o procedimento da ordenação só descomentar a linha abaixo(Ajuda na visualização)
      //puts("");
   }
}

int main(int argc, char **argv) {
    int vetor[8];//declara um vetor do tipo inteiro com 8 posições
    cout<<"---------------------------------------------\n";
    cout<<"--Informe 8 números--\n";
    cout<<"---------------------------------------------\n";
    for(int i=0;i< 8;i++){
        cout<<"Informe um número qualquer na posição ["<< i <<"]:";
        cin>>vetor[i];//Efetuara a leitura do nº por 8 vezes armazenado-o no vetor.
    }
    cout<<"---------------------------------------\n";
    cout<<" Vetor atual (";
    for(int i=0;i< 8;i++){//Exibe o vetor preenchido em sua forma atual.
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
   cout<<"\n---------------------------------------\n";
 bubblesortc(vetor, 7);//Chama o método bubblesort crescente(para ordenação)
  cout<<"\n--------------------------------------------------------------------\n";
 cout<<" Vetor Ordenado pelo bubbleSort_Crescente (";//Exibe o vetor já ordenado
    for(int i=0;i< 8;i++){
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
    cout<<"\n-------------------------------------------------------------------\n";
    bubblesortd(vetor, 7);//Chama o método bubblesort decrescente(para ordenação)
    cout<<"\n------------------------------------------------------------------\n";
    cout<<" Vetor Ordenado pelo bubbleSort_Decrescente (";//Exibe o vetor já ordenado
    for(int i=0;i< 8;i++){
        cout<<vetor[i];
        cout<<", ";
    }
    cout<<")";
    cout<<"\n-------------------------------------------------------------------\n";
    cout<<"\n\n";

    return (EXIT_SUCCESS);
}
