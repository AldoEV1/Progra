#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Ingrese el primer numero: ";
    cin >> a;
    cout << "Ingrese el segundo numero: ";
    cin >> b;
    if (a>b)
    {
        if (a%b>=1)
            cout << "No es multiplo.";
        else
            cout << a << " es multiplo de " << b;
    }
    else
        cout << "No es multiplo.";

    return 0;
}
