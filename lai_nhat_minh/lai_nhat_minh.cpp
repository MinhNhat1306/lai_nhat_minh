#include <stdio.h>
#include <iostream>
#include "toan.h"
int Cong(int a, int b);  
int Tru(int a, int b);
int Nhan(int a, int b);
int Chia(int a, int b);
int main()
{
    int a, b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int x = Cong(a, b);
    int y = Tru(a, b);
    int z = Nhan(a, b);
    int w = Chia(a, b);
    return 0;  
}

