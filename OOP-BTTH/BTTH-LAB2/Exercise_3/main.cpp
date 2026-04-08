#include <iostream>
#include "SoPhuc.h"

using namespace std;

int main() {
    SOPHUC a, b, tong, hieu, tich, thuong;

    cout << "Nhap so phuc thu nhat:\n";
    a.Nhap();

    cout << "Nhap so phuc thu hai:\n";
    b.Nhap();

    cout << "\nSo phuc thu nhat: ";
    a.Xuat();

    cout << "\nSo phuc thu hai: ";
    b.Xuat();

    tong = a.Tong(b);
    hieu = a.Hieu(b);
    tich = a.Tich(b);
    thuong = a.Thuong(b);

    cout << "\nTong: ";
    tong.Xuat();

    cout << "\nHieu: ";
    hieu.Xuat();

    cout << "\nTich: ";
    tich.Xuat();

    cout << "\nThuong: ";
    thuong.Xuat();

    return 0;
}