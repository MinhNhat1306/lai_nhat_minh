#include "toan.h"
#include <stdio.h>

int Cong(int a, int b)
{
    int ketqua1 = a + b;
    printf("Ket qua bang %d\n", ketqua1);
    return ketqua1;
}

int Tru(int a, int b)
{
    int ketqua2 = a - b;
    printf("Ket qua bang %d\n", ketqua2);
    return ketqua2;
}

int Nhan(int a, int b)
{
    int ketqua3 = a * b;
    printf("Ket qua bang %d\n", ketqua3);
    return ketqua3;
}

int Chia(int a, int b)
{
    int ketqua4 = a / b;
    printf("Ket qua bang %d\n", ketqua4);
    return ketqua4;
}