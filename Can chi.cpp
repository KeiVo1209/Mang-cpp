#include <string>
#include <iostream>
using namespace std;

int main()

{
	int n;
	string Can[] = { "canh","tan","nham", "quy", "giap", "at", "binh","dinh","mau","ky" };

	string Chi[] = { "than","dau","tuat", "hoi", "ty", "suu", "dan","meo","thin","ty","ngo","mui" };

	cout << "nhap n: ";
	cin >> n;
	cout << Can[n % 10] << " " << Chi[n % 12];
}



