#include <iostream>
using namespace std;

int swap(int a,int b){
	int temp;
	a =a + b;
	b = a - b;
	a = a - b;
	cout << "after swaping first number is : " << a << endl;
	cout << "after swaping second  number is : " << b << endl;
	return 0;

}

int main(){
	int a,b;
	cout << "Enter first number" << endl;
	cin >> a;
	cout << "Enter second  number" << endl;
	cin >> b;
	swap(a,b);
	return 0;

}
