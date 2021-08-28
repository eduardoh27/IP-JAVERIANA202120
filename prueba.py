"""
Parcial 1 Barrera
"""


def main ():
    total = int(input("Ingrese el # de casilleros: "))
    abiertos = 0
    cerrados = 0

    i=1
    while i <= total:
        divs = divisores(i)
        if divs%2 != 0:
            print(i, " queda abierto")
            abiertos += 1
        
        i+=1

    cerrados = total - abiertos 
    print(cerrados,"casilleros cerrados")
    return None

def divisores(n):
    divs = 0
    i = 1
    while i <= n:
        if n%i == 0:
            divs += 1
        i+=1
    return divs

main()

