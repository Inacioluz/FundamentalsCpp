#include <iostream>

using namespace std;

int main()
{
    cout << "**************************************************" << endl;
    cout << "******** BEM-VINDO AO GAME DA ADIVINHAÇÃO !!******" << endl;
    cout << """**************************************************" << endl;


    const int NUMERO_SECRETO = 12;
    bool nao_acertou = true;
    int tentativas = 0;

    while(nao_acertou){
        tentativas++;
        int random;
        cout << "Tentativas " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> random;

        cout << "O valor random é: " << random << endl;
        bool acertou = random == NUMERO_SECRETO;
        bool maior = random > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns você acertou o número" << endl;
            nao_acertou = false;
        } else if (maior) {
            cout << "O número random é maior que o número oculto" << endl;
        } else {
            cout << "O número random é menor que o número oculto" << endl;
        }
    }
    cout << "Fim de jogo!! " << endl;
    cout << "Você acertou o número cecreto em " << tentativas << " tentativas" << endl;
}
