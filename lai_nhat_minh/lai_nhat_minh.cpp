#include <stdio.h>

void main() {
    char str[] = "hello";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Chuoi sau khi chuyen doi: %s", str);
}

