#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num = 5, i;
    char vetor[num];

    for(i = 0; i < num; i++){
        cout << "Digite uma letra: ";
        cin >> vetor[i];
    }

    for(i = 0; i < num; i++){
        cout << "\nA letra armazenada na posi��o " << i << " do vetor �: " << vetor[i] << endl << endl;
     }

     cout << "O vetor armazena as letras: " << vetor << endl;
     cout << "A segunda posi��o do vetor armazena a letra: " << vetor[1] << endl;

    return 0;
}
