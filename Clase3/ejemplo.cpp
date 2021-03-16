// Calcular los números pares entre 1 y 15 y la suma de ellos
#include <iostream>
#include <cmath>

void print_even( int nmin, int nmax );

int main(void)
{
    const int m=1;
    const int n=15;

    print_even (m,n);

    return 0;

}

void print_even( int nmin, int nmax )
{
    int suma =0;
    for (int ii=nmin; ii <=nmax;ii= ii+1)
    {
        if (ii%2==0)
        {
            std::cout << ii << " ";
            suma=suma+ii;
        }
    }
        std::cout << "\n";
        std::cout << suma << "\n";
}
