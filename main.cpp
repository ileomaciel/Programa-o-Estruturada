#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vetor[5], i;

    for(i = 0; i < 5; i++){
        cout << "Digite um valor na posi��o " << i << " do vetor: ";
        cin >> vetor[i];
    }

    return 0;
}
