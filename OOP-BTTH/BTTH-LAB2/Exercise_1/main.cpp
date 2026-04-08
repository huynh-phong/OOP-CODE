#include <iostream>
#include "NgayThangNam.h"
using namespace std;

int main() {
    NGAYTHANGNAM d;
    d.Nhap();
    cout << "Ngay vua nhap: ";
    d.Xuat();
    d.NgayThangNamTiepTheo();
    cout <<endl<< "Ngay tiep theo: ";
    d.Xuat();
    return 0;
}