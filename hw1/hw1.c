#include <stdio.h>

double integrate(double (*f)(double),double a, double b){    //(*f)為函數指針，指向double
    double step = 0.001, sum = 0.0;           //step表示劃分的單位寬度 sum為總面積
    for (double x = a; x < b; x += step){
        sum += f(x) * step;
    }
    return sum;
}

double square(double x) {              //平方
    return x * x;
}

int main() {
    printf("integrate(square, 0.0, 2.0)=%f\n", integrate(square, 0.0, 2.0));   //0到2的積分
}