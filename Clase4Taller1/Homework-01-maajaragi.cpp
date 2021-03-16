// Homework 01 Marco Antonio Jara Giraldo
// Sumar los inversos al cuadrado de los números naturales desde 10 hasta 1500


#include <iostream>
#include <cmath>

void print_even(int nmin,int nmax);

int  main (void)

{
    int  m=10;
    int  n=1500;

    std::cout << "m: "<< m  << "\n";
    std::cout << "n: "<< n  << "\n";

    print_even(m,n);

        return 0;
}

void print_even(int nmin,int  nmax)
{
    double suma =0.0000;
    for(int ii=nmin; ii<=nmax; ii=ii+1)
    {
        suma=suma+(1.0000/(ii*ii));
    }
    std::cout << "\n";
    std::cout << suma<< "\n";
}
