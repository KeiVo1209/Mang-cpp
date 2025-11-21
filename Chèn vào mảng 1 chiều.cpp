
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

void chencuoi(int a[], int& n, int x) {//su dung tham chieu cua n de tang so pt mang
    a[n] = x; //pt cuoi cung gan bang so can chen 
    n++;
}

void chendau(int a[], int& n, int x) {//su dung tham chieu cua n de tang so pt mang 
    for (int i = n; i > 0; i--) {
        a[i] = a[i - 1];//dịch sang phải 1 ô
    }
    a[0] = x;
    n++;
}

void chengiua(int a[], int& n, int x, int k) {
    if (k < 0 || k > n) {
        cout << "Vi tri khong hop le!";
    }
    // Dịch các phần tử sang phải
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    // Chèn phần tử
    a[k] = x;
    n++;
}
int main()
{
    int a[Max], n = 0,x,k=0;
    char op;
    do {
        cout << "\nNhap n(n>0): ";
        cin >> n;
    } while (n <= 0);
    nhap(a, n);
    cout << "\nMang vua nhap: ";
    xuat(a, n);
    cout << "\nNhap pt can chen: ";
    cin >> x;
    cout << "\nChon vi tri chen phan tu (chon 1 trong 3: d,g,c): ";
    cin >> op;
    switch (op) {
    case 'd': {
        cout << "\nChen pt " << x << " vao dau mang";
        chendau(a, n, x);
        cout << "\nMang sau khi chen: "; xuat(a, n);
        break;
    }
    case 'c': {
        cout << "\nChen pt " << x << " vao cuoi mang";
        chencuoi(a, n, x);
        cout << "\nMang sau khi chen: "; xuat(a, n);
        break;
    }
    case 'g': {
        cout << "\nChen pt " << x << " vao vi tri giua tai mang:"; xuat(a, n);
        cout << "\nChon vi tri chen pt( tinh tu 0 den n-1): "; cin >> k;
        chengiua(a, n, x,k);
        cout << "\nMang sau khi chen: "; xuat(a, n);
        break;
    }
    default:
        cout << "Ky tu khong hop le!";
    }
    return 0;   
}

