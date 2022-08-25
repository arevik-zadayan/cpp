#include <iostream>
using namespace std;

int area(int a, int b){
	return a*b;
}
int diametr(int a,int b){
	return 2*(a+b);
}
int main() {
	int a, b;
	cout << "input length of rectangle" << endl;
	cin >> a;
	cout << "input width  of rectangle" << endl;
	cin >> b;
	cout << area(a,b) << endl;
	cout << diametr(a,b) << endl;
	return 0;

}
