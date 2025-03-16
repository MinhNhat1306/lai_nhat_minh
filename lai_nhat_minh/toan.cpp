#include "toan.h"
#include <stdio.h>


int Cong(int a, int b)
{
    int ketqua = a + b;
    printf("Ket qua bang %d\n", ketqua);
    return ketqua;
}

int Tru(int a, int b)
{
    int ketqua = a - b;
    printf("Ket qua bang %d\n", ketqua);
    return ketqua;
}

int Nhan(int a, int b)
{
    int ketqua = a * b;
    printf("Ket qua bang %d\n", ketqua);
    return ketqua;
}

float Chia(int a, int b)
{
    float ketqua = (float)a / b;
    printf("Ket qua bang %.2f\n", ketqua);
    return ketqua;
}