#include <iostream>
#include <locale>

using namespace std;

    void troca(int &a, int &b){
        int temp;
        temp = a;
        a = b;
        b = temp;
    }

int main(){

    setlocale(LC_ALL, "Portuguese");

    int a, b;
    cout << "Digite 2 n�meros: ";
    cin >> a >> b;

    cout << "\nVoc� entrou com  " << a << " e " << b << endl;

    troca(a, b);

    cout << "Trocados, eles s�o " << a <<  " e " << b << endl;

    return 0;
}
