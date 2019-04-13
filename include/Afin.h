#ifndef CESAR_H
#define CESAR_H
#include <iostream>
#include <string>
#include <stdlib.h>
#include <cmath>

using namespace std;

class Afin
{
    public:
        Afin();
        int modulo(int, int);
        string encriptar(string );
        string desencriptar(string );
        int EuclidianRecursive(int m, int n);
        int GenerarA(int);
    //private:
        string alfabeto = "abcdefghijklmnopqrstuvwxyz ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789"; //64
        int claveA = EuclidianRecursive(rand(100), );
        int claveB =



};

#endif // CESAR_H
