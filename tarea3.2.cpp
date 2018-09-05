#include <iostream>

using namespace std;

int main()
{
    int base, potencial, total=1;
    cout << "Ingresar base: ";
    cin >> base;
    cout << "Ingresar potencial: ";
    cin >> potencial;
    total=base;
    for(int i=1;i<potencial;i++)
    {
        total*=base;
    }
    cout <<"El resultado es: " << total;

    return 0;
}
