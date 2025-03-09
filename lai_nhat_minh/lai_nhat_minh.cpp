#include <stdio.h>
#include <iostream>
#include "toan.h"

int main()
{
    int a, b;
    scanf_s("%d", &a);
    scanf_s("%d", &b);
    int x = Cong(a, b);
    return 0;  // Nên trả về 0
}

