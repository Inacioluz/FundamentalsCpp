#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    cout << "**************************************************" << endl;
    cout << "******** BEM-VINDO AO GAME DA ADIVINHAÇÃO !!******" << endl;
    cout << """**************************************************" << endl;

    cout << "escolha o seu nível de dificuldade" << endl;
    cout << "Escolha (F) - Fácil, (M) - Médio (D) - Difícil" << endl;

    char dificuldade;
    cin >> dificuldade;

    int numero_tentetivas;

    if(dificuldade == 'F'){
        numero_tentetivas = 15;
    } else if ( dificuldade == 'M'){
        numero_tentetivas = 10;
    } else {
        numero_tentetivas = 5;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    cout << "Numero é: " << NUMERO_SECRETO << endl;
    bool nao_acertou = true;
    int tentativas = 0;
    double pontos = 1000;

    for(tentativas = 1;tentativas <= numero_tentetivas;tentativas++){
        int random;
        cout << "Tentativas " << tentativas << endl;
        cout << "Qual seu chute? ";
        cin >> random;

        double pontos_perdidos = abs(random - NUMERO_SECRETO)/2;
        pontos = pontos - pontos_perdidos;

        cout << "O valor random é: " << random << endl;
        bool acertou = random == NUMERO_SECRETO;
        bool maior = random > NUMERO_SECRETO;

        if(acertou) {
            cout << "Parabéns você acertou o número" << endl;
            nao_acertou = false;
            break;
        } else if (maior) {
            cout << "O número random é maior que o número oculto" << endl;
        } else {
            cout << "O número random é menor que o número oculto" << endl;
        }
    }
    cout << "Fim de jogo!! " << endl;
    if(nao_acertou){
        cout << "Você perdeu! Tente novamente! " << endl;
    } else {
        cout << "Você acertou o número cecreto em " << tentativas << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "Sua pontuação foi de " << pontos << " pontos " << endl;
    }
}
