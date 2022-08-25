#include <iostream>
using namespace std;

float sum(float a, float b){
	return a+b;
}
float mul(float a, float b){
	return a*b;
}
float sub(float a, float b){
	return a-b;
}
float div(float a, float b){
	return a/b;
}
int main(){
	float  a,b;
	cin >> a >> b;
	cout <<"the numbers sum is :" << sum(a,b) << endl;
	cout <<"the numbers mul is :" << mul(a,b) << endl;
	cout <<"the numbers sub is :" << sub(a,b) << endl;
	cout <<"the numbers div is :" << div(a,b) << endl;
	return 0;
}
