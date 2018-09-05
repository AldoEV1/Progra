#include <iostream>

using namespace std;

int main()
{
    int n, total=1;
    cout << "Ingresar numero menor a 20: ";
    cin >> n;
    if(n<20)
    {
        for(int i=1;i<=n;i++)
        {
            total*=i;
        }
        cout << n << "! = " << total;
    }
    else
        cout << "El numero es mayor a 19.";

    return 0;
}
