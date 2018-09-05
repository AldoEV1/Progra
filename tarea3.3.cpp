#include <iostream>

using namespace std;

int main()
{
    int a,b,year=1;
    cout << "Ingresar poblacion de a: ";
    cin >> a;
    cout << "Ingresar poblacion de b: ";
    cin >> b;
    if(a<b)
    {
        do
        {
            a*=1.6;
            b*=1.3;
            year++;
            cout << "Poblacion del año " << year << " :"
            << endl << "a = " << a << "."
            << endl << "b = " << b << "." << endl;
        }while(a<=b);
        cout << "La poblacion de a ya es mayor a la de b";
    }
    else
        cout <<"a ya tiene mas poblacion que b.";

    return 0;
}
