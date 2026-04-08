#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

int main() {
    GIOPHUTGIAY t;

    t.Nhap();

    cout << "Thoi gian vua nhap: ";
    t.Xuat();

    t.TinhCongThemMotGiay();

    cout << "\nSau khi cong 1 giay: ";
    t.Xuat();

    return 0;
}