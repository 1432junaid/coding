#include <iostream>

using namespace std;

bool ugly_number(int );

int main(){
	int a ;
	cout << "Enter a number" << endl;
	cin >> a;
	cout << ugly_number(a) << endl;
	return 0;
}


bool ugly_number(int a){
	if(a <= 0)return false;
	int temp = a;
	while(temp % 2 == 0)temp = temp/2;
	while(temp % 3 == 0)temp = temp/3;
	while(temp % 5 == 0)temp = temp/5;
	return temp == 1;
}
