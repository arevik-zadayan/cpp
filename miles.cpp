#include <iostream>
using namespace std;

float calc(float a){
	
	return a* 0.621371;

}
int main(){
	int a;
	cout << "Input the distance in kilometer :"<<endl;
	cin >> a;
	cout <<"the " << a << "Km./hr. means " << calc(a) << " Miles/hr."  << endl;
	return 0;

}
