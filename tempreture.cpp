#include <iostream>
using namespace std;

float calc(float a) {
	return (9.0 / 5) * (a - 273.15) + 32;
}

int main(){
	float a;
	cout << "Enter temperature in Kelvin" << endl;
	cin >> a;
	cout <<"The temperature in Fahrenheit :" << calc(a) << endl;
	return 0;
}
