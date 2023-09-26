#include <iostream>
#include <cmath>


using namespace std;

const double PI = 3.141592653589793;

int main() {
	setlocale(LC_ALL, "ru");

	int r1;
	int r2;
	cout << "Введите радиус круга 1: ";
	cin >> r1;
	do {
		cout << "Введите радиус круга 2: ";
		cin >> r2;
	} while (r2 >= r1);
	double s1, s2, s3;
	cout << "Площадь первого круга = " << PI * pow(r1, 2) << endl;
	cout << "Площадь второго круга = " << PI * pow(r2, 2) << endl;
	cout << "Площадь кольца = " << PI * pow(r1, 2) - PI * pow(r2, 2) << endl;
}
