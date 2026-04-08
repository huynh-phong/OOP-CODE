#ifndef SOPHUC_H
#define SOPHUC_H

class SOPHUC {
private:
    float iThuc;
    float iAo;

public:
    void Nhap();
    void Xuat() const;

    SOPHUC Tong(const SOPHUC& sp) const;
    SOPHUC Hieu(const SOPHUC& sp) const;
    SOPHUC Tich(const SOPHUC& sp) const;
    SOPHUC Thuong(const SOPHUC& sp) const;
};

#endif