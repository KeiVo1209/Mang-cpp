
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
    while (i < n&& !co) {
        if (a[i] == x) {
            co = true;
            return i;
        }
        i++;
    }
    return -1;
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
int Binarysearch(int a[], int n, int x) {
    int dau = 0, cuoi = n - 1, giua;
    while (dau != cuoi) {
        giua = (dau + cuoi) / 2;
        if (a[giua] == x) return giua;
        else if (a[giua] < x) cuoi = giua - 1;
        else dau = giua + 1;
    }
    return -1;
}
int main()
{
    int a[Max],n=0;
    do {
        cout << "\nNhap n(n<0): ";
        cin >> n;
    } while (n <= 0);
    nhap(a,n);
    xuat(a,n);
    bubblesort(a,n);
    xuat(a, n);
    int x;
    cout << "\nNhap so can tim: ";
    cin >> x;
    if (tuantulc(a, n, x) == -1) cout << "Khong co x can tim trong day";
    //else cout << "Vi tri so " << x << " trong day la " << tuantulc(a, n, x);
}

