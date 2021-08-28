"""
Parcial 1 Barrera
Punto 1
"""

#include <iostream>

using namespace std;

#include<stdio.h>

int main()
{   
    int cuenta, basico, premium;
    char cliente;
    
    cout << "Ingrese el número de cuenta: ";
    cin >> cuenta;

    do 
    {
        cout << "Ingrese el tipo de cliente: R o r (Residencial), N o n (Negocios): "; 
        cin >> cliente;
        
        if (cliente != 'R' and cliente != 'r' and cliente != 'N' and cliente != 'n')
        {
            cout << "El número ingresado es inválido." << endl;
        }
    }
    
    while (cliente != 'R' and cliente != 'r' and cliente != 'N' and cliente != 'n');
    
    cout << "Ingrese el número de conexiones de servicio básico: "; 
    cin >> basico; 
    
    cout << "Ingrese el número de canales Premium: " ; 
    cin >> premium;
    
    int total = 0;
  
    if (cliente == 'R' or cliente == 'r')
    {
        total += 4.5;
        total += 20.5;
        total += 7.5*premium;
    }
    
    else
    {   
        total += 15;
        
        int extra = 0;
        
        if (basico > 10)
        {
            extra = basico - 10;
        }
        total += 75 + extra*5;
        total += 50*premium;
    }
    
    cout << "Número de cuenta = " << cuenta << " Cantidad a pagar: " << total;
    
    return 0;
}