#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int golsSaoPaulo, golsPalmeiras;

    cout << "***Placar S�o Paulo x Palmeiras ***" << endl;

    cout << "Digite a quantidade de gols do S�o Paulo: ";
    cin >> golsSaoPaulo;

    cout << "Digite a quantidade de gols do Palmeiras: ";
    cin >> golsPalmeiras;

    if (golsSaoPaulo > golsPalmeiras){
        cout << "\nA festa � Tricolor" << endl;
    }
    else{
        cout << "\nA festa � do Palmeiras" << endl;

    }
    return 0;
}
