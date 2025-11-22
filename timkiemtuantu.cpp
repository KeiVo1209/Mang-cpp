#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Max 30
using namespace std;

void nhap(int a[], int n) {
    For(i, 0, n) {
        cout << "\nNhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    For(i, 0, n) {
        cout << a[i] << " ";
    }
}

int tuantufor(int a[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (a[i] == x) return i;
    }
    return -1;
}
//ko linh canh
int tuantu(int a[], int n, int x) {
    int i = 0;
    while (i < n) {
        if (a[i] == x) return i;
        i++;
    }
    return -1;
}
//co linh canh
int tuantulc(int a[], int n, int x) {
    int i = 0;
    bool co = false;
    while (i < n && !co) {
        if (a[i] == x) {
            co = true;
            return i;
        }
        i++;
    }
    return -1;
}
int main() {
    int a[Max], n, x;
    do {
        cout << "Nhap so pt: ";
        cin >> n;
    } while (n < 0);
    nhap(a, n);
    cout << "\nMang vua nhap la";
    xuat(a, n);
    //hamf tìm kiếm tuần tự
    xuat(a, n);
}
