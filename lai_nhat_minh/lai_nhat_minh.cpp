#include <iostream>
#include <stdio.h>

int main() {
    int arr[] = { 1, 2, 99, 67, 20 };
    int giatri_gc = arr[0];

    for (int i = 1; i < 5; i++) {
        if (giatri_gc < arr[i]) {
            giatri_gc = arr[i];
        }
    }

    printf("gia tri lon nhat trong mang: %d", giatri_gc);
    return 0;
}
