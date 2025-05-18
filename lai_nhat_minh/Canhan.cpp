#include "CaNhan.h"

// Setter
void CaNhan::setTen(const std::string& t) {
    ten = t;
}

void CaNhan::setTuoi(int t) {
    tuoi = t;
}

void CaNhan::setGioiTinh(const std::string& gt) {
    gioiTinh = gt;
}

// Getter
std::string CaNhan::getTen() const {
    return ten;
}

int CaNhan::getTuoi() const {
    return tuoi;
}

std::string CaNhan::getGioiTinh() const {
    return gioiTinh;
}
