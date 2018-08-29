#include <iostream>

using namespace std;

int main()
{
    int distancia,dias;
    float precio, desc=.7*.17;
    cout << "Ingrese distancia: ";
    cin >> distancia;
    distancia=distancia*2;
    cout << "Ingrese tiempo: ";
    cin >> dias;
    if ((dias>7) || (distancia>800))
    {
        precio=distancia*desc;
        cout <<"Total a pagar es: "<< precio;
    }
    else
        cout <<"Total a pagar es: "<< distancia*.17;

    return 0;
}
