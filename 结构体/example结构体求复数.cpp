#include<stdio.h>
typedef struct{
    double real;  // 实数部分
    double imag;  // 虚数部分
} ;Complex
Complex add(Complex c1, Complex c2) {
    Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}
Complex subtract(Complex c1, Complex c2) {
    Complex diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}
Complex multiply(Complex c1, Complex c2) {
    Complex product;
    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;
    return product;
}
Complex divide(Complex c1, Complex c2) {
    Complex quotient;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    quotient.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    quotient.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return quotient;
}
int main() {
    Complex c1, c2, result;
    
    // 设置第一个复数的值
    c1.real = 2;
    c1.imag = 3;
    
    // 设置第二个复数的值
    c2.real = 4;
    c2.imag = 5;
    
    // 执行加法操作
    result = add(c1, c2);
    printf("Addition: %.2f + %.2fi\n", result.real, result.imag);
    
    // 执行减法操作
    result = subtract(c1, c2);
    printf("Subtraction: %.2f + %.2fi\n", result.real, result.imag);
    
    // 执行乘法操作
    result = multiply(c1, c2);
    printf("Multiplication: %.2f + %.2fi\n", result.real, result.imag);
    
    // 执行除法操作
    result = divide(c1, c2);
    printf("Division: %.2f + %.2fi\n", result.real, result.imag);
    
    return 0;
}
