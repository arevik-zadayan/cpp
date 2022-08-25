#include <iostream>
using namespace std;

int volume(int a){
	return a*a*a;
}
int main(){
	int a;
	cout << "Enter a cube side" <<endl;
	cin >> a;
	cout << volume(a) << endl;
	return 0;
}
