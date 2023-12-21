// Main.cpp
#include <iostream>
#include "UstBilgi.h"
using namespace std;
int main() {
	using namespace Math;


	int num1, num2;
	cout << "Birinci sayinizi giriniz: ";
	cin >> num1;
	cout << "Ikinci sayinizi giriniz: ";
	cin >> num2;
	cout << "Toplam: " << topla(num1, num2) << endl;
	cout << "Fark: " << cikar(num1, num2) << endl;

	double radius = 3.0;
	cout << "Dairenin Alani: " << daireninAlaniniHesapla(radius) << endl;

	return 0;
}