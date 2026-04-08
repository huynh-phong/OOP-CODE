#include <iostream>
#include "SoPhuc.h"

using namespace std;

void SOPHUC::Nhap() {
    cout << "Nhap phan thuc: ";
    cin >> iThuc;
    cout << "Nhap phan ao: ";
    cin >> iAo;
}

void SOPHUC::Xuat() const {
    cout << iThuc;
    if (iAo >= 0)
        cout << " + " << iAo << "i";
    else
        cout << " - " << -iAo << "i";
}

SOPHUC SOPHUC::Tong(const SOPHUC& sp) const {
    SOPHUC kq;
    kq.iThuc = iThuc + sp.iThuc;
    kq.iAo = iAo + sp.iAo;
    return kq;
}

SOPHUC SOPHUC::Hieu(const SOPHUC& sp) const {
    SOPHUC kq;
    kq.iThuc = iThuc - sp.iThuc;
    kq.iAo = iAo - sp.iAo;
    return kq;
}

SOPHUC SOPHUC::Tich(const SOPHUC& sp) const {
    SOPHUC kq;
    kq.iThuc = iThuc * sp.iThuc - iAo * sp.iAo;
    kq.iAo = iThuc * sp.iAo + iAo * sp.iThuc;
    return kq;
}

SOPHUC SOPHUC::Thuong(const SOPHUC& sp) const {
    SOPHUC kq;
    float mau = sp.iThuc * sp.iThuc + sp.iAo * sp.iAo;

    kq.iThuc = (iThuc * sp.iThuc + iAo * sp.iAo) / mau;
    kq.iAo = (iAo * sp.iThuc - iThuc * sp.iAo) / mau;

    return kq;
}