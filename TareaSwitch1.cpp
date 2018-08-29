#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Inserte numero de 5 digitos: ";
    cin >> num;
    if(num>=10000)
    {
        cout << num/10000 << "   ";
        num=num%10000;
        cout << num/1000 << "   ";
        num=num%1000;
        cout << num/100 << "   ";
        num=num%100;
        cout << num/10 << "   ";
        num=num%10;
        cout << num;
    }
    else
        cout << "Numero menor a 5 digitos.";

    return 0;
}
