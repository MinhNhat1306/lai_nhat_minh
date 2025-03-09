#include <stdio.h>
#include <iostream>
#include "toan.h"
int Cong(int a, int b);  
int main()
{
    int a, b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int x = Cong(a, b);
    return 0;  
}

