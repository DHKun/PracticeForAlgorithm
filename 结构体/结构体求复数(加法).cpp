#include<stdio.h>
struct complex{
    double real;
    double imag;
};

typedef struct complex complex;

complex compadd(complex x, complex y);

int main(){
    complex z1;
    z1.real=3;
    z1.imag=4;
    complex z2;
    z2.real=3;
    z2.imag=4;
    complex z;
    z = compadd(z1, z2);
    printf("%.2f + %.2fi\n", z.real, z.imag);
    return 0;
}

complex compadd(complex x, complex y) {
    complex z;
    z.real = x.real + y.real;
    z.imag = x.imag + y.imag;
    return z;
}