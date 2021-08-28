#include<stdio.h>

int main()
{
    int total;
    cout << "Ingrese el numero de casilleros: " ; 
    cin >> total; 
    
    int abiertos, n;
    abiertos = 0;
    
    for (n=1; n<=total; n++)
    {
        int divisores, i;
        divisores = 0;
        for (i=1; i<=n; i++)
        {
            if (n%i == 0)
            {
                divisores++;
            }
        }

        if (divisores%2 != 0)
        {
            abiertos ++;
            cout << "El casillero numero " << n << " queda abierto" << endl;
        }
    }
    
    cout << "La cantidad de casilleros abiertos es " << abiertos;

    return 0;
}
