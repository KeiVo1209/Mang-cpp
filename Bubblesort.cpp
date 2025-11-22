#include <iostream>
#define For(i,a,b) for(int i=a;i<b;i++)
#define Max 30
using namespace std;

void nhap(int a[], int n) {
    For(i,0,n) {
        cout << "\nNhap phan tu thu " << i << ": ";
        cin >> a[i];
    }
}
void xuat(int a[], int n) {
    For(i, 0, n) {
        cout << a[i]<<" ";
    }
}
void bubblesort(int a[], int n) {
    int t = 0;
    For(i, 0, n) {
        for (int j = n - 1; j > i; j--) {
            if (a[j] < a[j - 1]) {
                t = a[j - 1];
                a[j - 1] = a[j];
                a[j] = t;
            }
        }
    }
}
 main()
{
    int a[Max],n=0;
    do {
        cout << "\nNhap n(n<0): ";
        cin >> n;
    } while (n <= 0);
    nhap(a,n);
    xuat(a,n);
    bubblesort(a,n);
    cout<<"\nMang sau khi sap xep: ";
    xuat(a,n);
}
