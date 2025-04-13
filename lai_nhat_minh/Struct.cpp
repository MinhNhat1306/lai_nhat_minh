#include <stdio.h>
#include <stdint.h>
#include <string.h>

typedef struct
{
    char ten[30];
    int tuoi;
    int gioi_tinh;     // 0: Nu, 1: Nam
    float diem_toan;
    float diem_van;
    float diem_tb;
    int xep_hang;      // 0: Yếu, 1: TB, 2: Khá, 3: Giỏi
} hocsinh_t;

hocsinh_t nhap_thong_tin()
{
    hocsinh_t hs = { 0 };

    printf("Nhap ten cho hoc sinh: ");
    scanf_s(" %[^\n]", hs.ten, (unsigned)30);

    printf("Nhap tuoi: ");
    scanf_s("%d", &hs.tuoi);

    printf("Nhap gioi tinh (0: Nu, 1: Nam): ");
    scanf_s("%d", &hs.gioi_tinh);

    printf("Nhap diem Toan: ");
    scanf_s("%f", &hs.diem_toan);

    printf("Nhap diem Van: ");
    scanf_s("%f", &hs.diem_van);

    // Tính điểm trung bình
    hs.diem_tb = (hs.diem_toan + hs.diem_van) / 2;

    // Xếp hạng
    if (hs.diem_tb >= 8.0)
        hs.xep_hang = 3;  // Gioi
    else if (hs.diem_tb >= 6.5)
        hs.xep_hang = 2;  // Kha
    else if (hs.diem_tb >= 5.0)
        hs.xep_hang = 1;  // Trung binh
    else
        hs.xep_hang = 0;  // Yeu

    return hs;
}

void in_thong_tin(hocsinh_t hs)
{
    printf("\n=== Thong tin hoc sinh ===\n");
    printf("Ten: %s\n", hs.ten);
    printf("Tuoi: %d\n", hs.tuoi);
    printf("Gioi tinh: %s\n", hs.gioi_tinh ? "Nam" : "Nu");
    printf("Diem Toan: %.2f\n", hs.diem_toan);
    printf("Diem Van: %.2f\n", hs.diem_van);
    printf("Diem Trung Binh: %.2f\n", hs.diem_tb);

    const char* xep_hang_str[] = { "Yeu", "Trung Binh", "Kha", "Gioi" };
    printf("Xep hang: %s\n", xep_hang_str[hs.xep_hang]);
}

int main()
{
    hocsinh_t A = nhap_thong_tin();
    in_thong_tin(A);
    return 0;
}
