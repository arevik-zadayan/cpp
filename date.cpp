#include <iostream>
#include <ctime>
using namespace std;


int main(){
	
	time_t now = time(0);
	tm *ltm = localtime(&now);
	cout << "Year:" << 1900 + ltm->tm_year<<endl;
    cout << "Month: "<< 1 + ltm->tm_mon<< endl;
    cout << "Day: "<< ltm->tm_mday << endl;
	cout << "WeekDay: "<< ltm->tm_wday <<endl;
	cout << "Day of Year: "<< ltm->tm_yday <<endl;
    cout << "Current Time: "<< ltm->tm_hour << ":";
	cout << ltm->tm_min << ":";
  	cout << ltm->tm_sec << endl;
	cout <<"Current Date: " <<ltm ->tm_mday  << "/" <<1 + ltm -> tm_mon << "/" <<	1900 + ltm->tm_year << endl;
	return 0;
}
