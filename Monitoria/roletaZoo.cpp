//	O cliente para poder participar do jogo
//	deve gastar no mínimo R$ 50,00 no restaurante da empresa.
//  Portanto, a cada R$ 50,00 gasto ele poderá participar de uma jogada. Então, se
//	gastar R$ 250,00 poderá jogar 5 vezes. O jogo é capaz de adivinhar o animal que um cliente escolheu, dentre uma lista de animais
//	previamente selecionados e apresentados a ele. Os animais possíveis são: Leão; Cavalo; Homem; Macaco; Morcego; Baleia; Avestruz;
//	Pinguim; Pato; Águia; Tartaruga; Crocodilo; Cobra. 



# include <iostream>
using namespace std;

int main(){
    
    system("color f0"); // mundado as cores do console
	setlocale(LC_ALL,"portuguese"); // mudando a linguagem para portugues
	
	int jogadas;
	float valorCompra;

    // mensagem de regras do jogo
    cout << "Bem Vindo ao Roleta ZOO!" << endl;
    cout << "A cada R$ 50,00 gastos você ganhará uma jogada." << endl ;
    cout << "O jogo tentara adivinhar o animal que você escolheu dentre uma lista de animais." << endl;
    cout << "Cada vez que o Sistema acertar a escolha você perde uma chance." << endl;
    cout << "Caso o jogo não acerte o animal escolhodo você ganha R$ 5,00 de desconto na próxima compra." << endl<< endl;
    
	system("pause");
    cout << endl << "Vamos lá!" << endl;
    cout << "Digite o valor gasto: ";
    cin >> valorCompra;
    
    jogadas = valorCompra / 50.00;
	
	while(jogadas){
	    
	    cout << endl << "Voce tem " << jogadas << " Jogadas" << endl;
	    
	    cout << endl << "Escolha um destes animais : " << endl;
        cout << "Leão, Cavalo, Homem, Macaco, Morcego, Baleia, Avestruz, Pinguim, Pato, Águia, Tartaruga, Crocodilo, Cobra." << endl;
        
        system("pause");
        
        jogadas--;
    }
	
	system("pause");
}
