﻿#include <string.h>
#include <stdio.h>
#include <malloc.h>
int SoLuongKyTu(char* str)
{
    int sl = 0;
    while (str[sl] != 0)
    {
        sl++;
    }
    return sl;
}

// Chức nâng: dùng để tìm ký tự c trong chuỗi str
// Input:
//	char* chuoi - chuổi cần tìm
//	char c - ký tự cần tìm trong chuổi str
// Output: (char*) địa chỉ của ký tự c trong chuổi str
char* TimKyTu(char* chuoi, char ky_tu)
{
    int chieu_dai_chuoi = SoLuongKyTu(chuoi);
    for (int i = 0; i < chieu_dai_chuoi; i++)
    {
        if (chuoi[i] == ky_tu)
            return chuoi + i;
    }
    return 0;
}

// Chức nâng: dùng để tìm chuỗi subStr trong chuỗi str
// Input:
//	char* str - chuỗi cần tìm
//	char* sub_str - chuỗi từ khóa cần tìm
// Output: (char*) địa chỉ của chuổi sub_str trong str
char* TimChuoi(char* str, char* sub_str)
{
    int chieu_dai_str = SoLuongKyTu(str);
    int chieu_dai_sub_str = SoLuongKyTu(sub_str);
    for (int i = 0; i < chieu_dai_str; i++)
    {
        int j = 0;
        for (j = 0; j < chieu_dai_sub_str; j++)
        {
            if (str[i + j] != sub_str[j])
                break;
        }
        if (j == chieu_dai_sub_str)
            return str + i;
    }
    return 0;
}

// Chức nâng: Lấy trang thái của "fan" trong dữ liệu gửi về từ server
// Input: 
//	char* data - chuỗi dữ liệu dducc lấy về từ server
// Output:
//	0: tương ứng trạng thái "off"
//	1: tương ứng trạng thái "on"
int TrangThaiFan(char* data)
{
    // format data: HTTP1.1 200 OK{"light": "on","fan" : "off","motor" : "off"}

    // B1: search tới "fan" : "
    char tu_khoa[] = "\"fan\" : \"";
    char* x = TimChuoi(data, tu_khoa);
    if (!x) return -1; // Tránh lỗi nếu không tìm thấy "fan"

    x += SoLuongKyTu(tu_khoa);

    // B2: Đếm số ký tự đến khi gặp dấu " (dấu kết thúc chuỗi trạng thái)
    int dem = 0;
    while (x[dem] != '"' && x[dem] != '\0') // Tránh lỗi nếu x[dem] == '\0'
    {
        dem++;
    }

    // Cấp phát động fan_state thay vì dùng mảng tĩnh
    char* fan_state = (char*)malloc(dem + 1);
    if (!fan_state) return -1; // Kiểm tra cấp phát bộ nhớ

    // Copy chuỗi trạng thái của fan
    memcpy(fan_state, x, dem);
    fan_state[dem] = '\0'; // Đảm bảo chuỗi kết thúc đúng

    // B3: So sánh với "on" hoặc "off" để return kết quả
    int result = (strcmp(fan_state, "on") == 0) ? 1 : 0;

    free(fan_state); // Giải phóng bộ nhớ sau khi sử dụng
    return result;
}


void main()
{
    char data[] = "HTTP1.1 200 OK{"\
        "\"light\": \"on\","\
        "\"fan\" : \"asdasdsad\","\
        "\"motor\" : \"off\"}";
    TrangThaiFan(data);

    printf("data: %s", data);

}