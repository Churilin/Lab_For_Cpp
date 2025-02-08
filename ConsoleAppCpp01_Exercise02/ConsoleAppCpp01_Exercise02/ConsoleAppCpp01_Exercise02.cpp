#include <iostream>

using namespace std;

int main()
{
	//cout.precision(3);
	//system("chcp 1251");
	//double a, b;
	//cout << "Enter a and b:\n";
	//cin >> a;
	//cin >> b;
	//double x = a / b;
	//cout << sizeof(a / b) << ends << sizeof(x) << endl;
	//cout << "\n x = " << x << endl;
	//return 0;
	system("chcp 1251");
	string name;
	cout << "Введите свое имя\n";
	double a, b;
	cout << "Введите a и b:\n";
	cin >> a;
	cin >> name;
	cin >> b;
	double x = a / b;
	cout << "\nx = " << x << endl;
	cout << "Привет, " << name << "!\n";
	return 0;
}