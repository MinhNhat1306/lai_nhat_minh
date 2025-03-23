#include <stdio.h>

void main() {
    char x = 0x12345678;
    char* px;
    // chức năng 1: lưu đia chỉ của biến x
    px = &x;
    // chức năng 2: truy cập tới vùng nhớ có địa chỉ được lưu trong con trỏ
    * px = 1;

    printf("x: %d\n", x);
}

/*void main() {
    char str[] = "hello";
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
        i++;
    }
    printf("Chuoi sau khi chuyen doi: %s", str);
}*/