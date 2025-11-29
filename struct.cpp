
#include <iostream>
#include <string>
using namespace std;
struct Hocsinh {
    char hoten[50];
    char ms[4];
    float d1, d2, d3;
};
//Ham nhap ho ten
void NhapHS(Hocsinh& hs) {
    cout << "\n Nhap ho ten: ";
    cin.getline(hs.hoten, 50);
    do {
        cout << "\n Nhap ma hoc sinh (xxx): ";
        cin>>hs.ms;
    } while (strlen(hs.ms) != 3);//ktra dieu kien nhap
    cout << "\n Diem mon 1: ";
    cin >> hs.d1;
    cout << "\n Diem mon 2: ";
    cin >> hs.d2;
    cout << "\n Diem mon 3: ";
    cin >> hs.d3;
}
//Ham nhap so hoc sinh
void NhapLop(Hocsinh lop[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "\n Hoc sinh thu " << i+1;
        NhapHS(lop[i]);
        cin.ignore();
    }
}
float Longlon(Hocsinh hs) {
    return (hs.d1 + hs.d2 + hs.d3) / 3;
}
void InHS(Hocsinh hs) {
    cout << "\n Ho ten hoc sinh: " << hs.hoten;
    cout << "\n Ma hoc sinh: " << hs.ms;
    cout << "\n Diem mon 1: " << hs.d1;
    cout << "\n Diem mon 2: " << hs.d2;
    cout << "\n Diem mon 3: " << hs.d3;
    cout << "\n Diem trung binh: " << Longlon(hs);
}
void InLop(Hocsinh lop[], int n) {
    for (int i = 0; i < n; i++)
    {
        cout << "\n Hoc sinh thu " << i + 1;
        InHS(lop[i]);     
    }
}
int main()
{
    int t;
    Hocsinh lop[30];
    cout << "Nhap so hs: ";
    cin >> t;
    cin.ignore();
    NhapLop(lop, t);
    InLop(lop, t);
}

