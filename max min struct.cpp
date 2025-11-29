
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
float DTB(Hocsinh hs) {
    return (hs.d1 + hs.d2 + hs.d3) / 3;
}
void TM(Hocsinh lop[], int n, int &vtmax, int &vtmin) {
    float max = DTB(lop[0]), min = DTB(lop[0]);
    for (int i = 1; i < n; i++)
    {
        if (DTB(lop[i]) > max) {
            max = DTB(lop[i]); vtmax = i;}
        if (DTB(lop[i]) < min) {
            min = DTB(lop[i]); vtmin = i;}
    }
}
void InHS(Hocsinh hs) {
    cout << "\n Ho ten hoc sinh: " << hs.hoten;
    cout << "\n Ma hoc sinh: " << hs.ms;
    cout << "\n Diem mon 1: " << hs.d1;
    cout << "\n Diem mon 2: " << hs.d2;
    cout << "\n Diem mon 3: " << hs.d3;
    cout << "\n Diem trung binh: " << DTB(hs);
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
    int vtmin = 0, vtmax = 0;
    Hocsinh lop[30];
    cout << "Nhap so hs: ";
    cin >> t;
    cin.ignore();
    NhapLop(lop, t);
    //InLop(lop, t);
    TM(lop, t, vtmax, vtmin);
    cout << "\n--------------------------------";
    cout << "\nHs co DTB cao nhat ";
    InHS(lop[vtmax]);
    cout << "\n--------------------------------";
    cout << "\nHs co DTB thap nhat ";
    InHS(lop[vtmin]);
}

