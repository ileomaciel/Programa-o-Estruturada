#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int notas[5], media = 0, i;

    for(i = 0; i < 5; i++){
        cout << "Digite a nota do " << (i+1) << "� Aluno: ";
        cin >> notas[i];
        media += notas[i];
    }
    cout << "\nM�dia das notas: " << (media/5) << endl;

    return 0;
}
