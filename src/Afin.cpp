#include "Afin.h"

Afin::Afin()
{

}

int Afin::modulo(int a, int b){
    int aux = a + ((abs(a/b)+1)*b);
    return aux - ((aux/b)*b);
}

int Afin::EuclidianRecursive(int m, int n){
    if(n == 0)
        return m;
    else
        return EuclidianRecursive(n, modulo(m,n));
}

int Afin::GenerarA(int n)
{
    int random = (rand()%alfabeto.size());
    if()
}

string Afin::encriptar(string mensaje)
{

}

string Afin::desencriptar(string mensaje)
{

}
