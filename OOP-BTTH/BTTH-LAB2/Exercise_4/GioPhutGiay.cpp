#include <iostream>
#include "GioPhutGiay.h"

using namespace std;

bool HopLe(int h, int m, int s) {
    if (h < 0 || h >= 24) return false;
    if (m < 0 || m >= 60) return false;
    if (s < 0 || s >= 60) return false;
    return true;
}

void GIOPHUTGIAY::Nhap() {
    do {
        cout << "Nhap gio: ";
        cin >> iGio;
        cout << "Nhap phut: ";
        cin >> iPhut;
        cout << "Nhap giay: ";
        cin >> iGiay;

        if (!HopLe(iGio, iPhut, iGiay)) {
            cout << "Thoi gian khong hop le. Nhap lai!\n";
        }
    } while (!HopLe(iGio, iPhut, iGiay));
}

void GIOPHUTGIAY::Xuat() const {
    cout << iGio << ":" << iPhut << ":" << iGiay;
}

void GIOPHUTGIAY::TinhCongThemMotGiay() {
    iGiay++;

    if (iGiay == 60) {
        iGiay = 0;
        iPhut++;

        if (iPhut == 60) {
            iPhut = 0;
            iGio++;

            if (iGio == 24) {
                iGio = 0;
            }
        }
    }
}