#include <iostream>
using namespace std;


void  mul(int num){
	for(int i = 1;i<=10;i++){
		cout << num <<" x "<< i << " = " <<  num*i << endl;
	}

}

int main(){
	int num;
	cout << "Enter number :";
	cin >> num;
	mul(num);
	return 0;
}
