#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2, n3;

    cout << "Digite o primeiro n�mero: ";
    cin >> n1;

    cout << "Digite o segundo n�mero: ";
    cin >> n2;

    cout << "Digite o terceiro n�mero: ";
    cin >> n3;

    if ((n1 >= n2) && (n1 >= n3)){
        cout << "\nO maior n�mero �: " << n1 << endl;
    }
    else{
        if ((n2 >= n1) && (n2 >= n3)){
            cout << "\nO maior n�mero �: " << n2 << endl;
            }
            else{
                cout << "O maior n�mero �: " << n3 << endl;
            }
    }
    return 0;
}
