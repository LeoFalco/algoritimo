//	O cliente para poder participar do jogo
//	deve gastar no m�nimo R$ 50,00 no restaurante da empresa.
//  Portanto, a cada R$ 50,00 gasto ele poder� participar de uma jogada. Ent�o, se
//	gastar R$ 250,00 poder� jogar 5 vezes. O jogo � capaz de adivinhar o animal que um cliente escolheu, dentre uma lista de animais
//	previamente selecionados e apresentados a ele. Os animais poss�veis s�o: Le�o; Cavalo; Homem; Macaco; Morcego; Baleia; Avestruz;
//	Pinguim; Pato; �guia; Tartaruga; Crocodilo; Cobra. 



# include <iostream>
using namespace std;

int main(){
    
    system("color f0"); // mundado as cores do console
	setlocale(LC_ALL,"portuguese"); // mudando a linguagem para portugues
	
	int jogadas;
	float valorCompra;

    // mensagem de regras do jogo
    cout << "Bem Vindo ao Roleta ZOO!" << endl;
    cout << "A cada R$ 50,00 gastos voc� ganhar� uma jogada." << endl ;
    cout << "O jogo tentara adivinhar o animal que voc� escolheu dentre uma lista de animais." << endl;
    cout << "Cada vez que o Sistema acertar a escolha voc� perde uma chance." << endl;
    cout << "Caso o jogo n�o acerte o animal escolhodo voc� ganha R$ 5,00 de desconto na pr�xima compra." << endl<< endl;
    
	system("pause");
    cout << endl << "Vamos l�!" << endl;
    cout << "Digite o valor gasto: ";
    cin >> valorCompra;
    
    jogadas = valorCompra / 50.00;
	
	while(jogadas){
	    
	    cout << endl << "Voce tem " << jogadas << " Jogadas" << endl;
	    
	    cout << endl << "Escolha um destes animais : " << endl;
        cout << "Le�o, Cavalo, Homem, Macaco, Morcego, Baleia, Avestruz, Pinguim, Pato, �guia, Tartaruga, Crocodilo, Cobra." << endl;
        
        system("pause");
        
        jogadas--;
    }
	
	system("pause");
}
