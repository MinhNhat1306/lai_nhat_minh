#pragma once
#ifndef CANHAN_H
#define CANHAN_H

#include <string>

class CaNhan {
private:
    std::string ten;
    int tuoi;
    std::string gioiTinh;

public:
    // Setter
    void setTen(const std::string& t);
    void setTuoi(int t);
    void setGioiTinh(const std::string& gt);

    // Getter
    std::string getTen() const;
    int getTuoi() const;
    std::string getGioiTinh() const;
};

#endif // CANHAN_H
