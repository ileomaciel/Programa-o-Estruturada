#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int i = 0, num;

    cout << "Informe um n�mero: ";
    cin >> num;

    do{
        cout << "Informe um n�mero: ";
        cin >> num;
        i = i + 1;

    }while(num != 0);
        cout << "A quantidade de n�meros digitados foram " << i << endl;
    return 0;
}
