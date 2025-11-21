
#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Max 30
using namespace std;

void nhap(int a[], int n) {
    For(i, 0, n) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    For(i, 0, n) {
        cout << a[i] << " ";
    }
}

void xoacuoi(int a[], int& n) {//sử dụng tham chiếu vào n để giảm số pt mảng
    n--; //Xóa pt cuối có đúng 1 lệnh giảm n đi 1 thui, ko sài hàm add thẳng cũng đc
}

void xoadau(int a[], int& n) {//sử dụng tham chiếu vào n để giảm số pt mảng
    for (int i = 0; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}

void xoagiua(int a[], int& n, int k) {
    if (k < 0 || k >= n) {
        cout << "Vi tri khong hop le!";
        return;
    }
    for (int i = k; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
}
int main()
{
    int a[Max], n = 0,k=0;
    char op;
    do {
        cout << "\nNhap n(n>0): ";
        cin >> n;
    } while (n <= 0);
    nhap(a, n);
    cout << "\nMang vua nhap: ";
    xuat(a, n);
    cout << "\nChon vi tri xoa phan tu (chon 1 trong 3: d,g,c): ";
    cin >> op;
    switch (op) {
    case 'd': {
        xoadau(a, n);
        cout << "\nMang sau khi xoa pt dau: "; xuat(a, n);
        break;
    }
    case 'c': {
        xoacuoi(a, n);
        cout << "\nMang sau khi xoa pt cuoi: "; xuat(a, n);
        break;
    }
    case 'g': {
        cout << "\nChon vi tri xoa pt( tinh tu 0 den n-1): "; cin >> k;
        xoagiua(a, n,k);
        cout << "\nMang sau khi xoa: "; xuat(a, n);
        break;
    }
    default:
        cout << "Ky tu khong hop le!";
    }
    return 0;   
}

