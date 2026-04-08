#include <iostream>
#include <cmath>
#include "NgayThangNam.h"

using namespace std;

bool LaNamNhuan(int nam)
{
    return (nam % 400 == 0) || (nam % 4 == 0 && nam % 100 != 0);
}

int SoNgayTrongThang(int thang, int nam)
{
    switch (thang)
    {
    case 1: case 3: case 5: case 7:
    case 8: case 10: case 12:
        return 31;
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return LaNamNhuan(nam) ? 29 : 28;
    default:
        return 0;
    }
}

bool KiemTraHopLe(int ngay, int thang, int nam)
{
    if (abs(2026 - nam) > 150)
        return false;

    if (thang < 1 || thang > 12)
        return false;

    if (ngay < 1 || ngay > SoNgayTrongThang(thang, nam))
        return false;

    return true;
}

void NGAYTHANGNAM::Nhap()
{
    do
    {
        cout << "Nhap ngay: ";
        cin >> iNgay;
        cout << "Nhap thang: ";
        cin >> iThang;
        cout << "Nhap nam: ";
        cin >> iNam;

        if (!KiemTraHopLe(iNgay, iThang, iNam))
        {
            cout << "Ngay thang nam khong hop le. Nhap lai!\n";
        }

    } while (!KiemTraHopLe(iNgay, iThang, iNam));
}

void NGAYTHANGNAM::Xuat() const
{
    cout << iNgay << "/" << iThang << "/" << iNam;
}

void NGAYTHANGNAM::NgayThangNamTiepTheo()
{
    iNgay++;

    if (iNgay > SoNgayTrongThang(iThang, iNam))
    {
        iNgay = 1;
        iThang++;

        if (iThang > 12)
        {
            iThang = 1;
            iNam++;
        }
    }
}