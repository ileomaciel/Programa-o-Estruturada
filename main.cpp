#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char resultado;
    float n1, n2, soma, subtracao;

    cout << "Escolha a opera��o que voc� deseja!!!" << endl;
    cout << "Digite + para SOMA" << endl;
    cout << "Digite - para SUBTRA��O" << endl;
    cin >> resultado;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;
    cout << "Digite o segundo n�mero: ";
    cin >> n2;

    switch(resultado){
        case '+':
            soma = n1 + n2;
            cout << "o resultado de " << n1 << " + " << n2 << " �: " << soma << endl;
        break;
        case '-':
            subtracao = n1 - n2;
            cout << "o resultado de " << n1 << " - " << n2 << " �: " << subtracao << endl;
        break;
        default:
            cout << "Op��o Inv�lida!!! \n";
    }

    return 0;
}
