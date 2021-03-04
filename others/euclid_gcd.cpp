		//theoram		GCD(a,b) = gc(a-b,b)
		//					a>b

#include <iostream>

using namespace std;

int gcd(int ,int );

int main(){
	int a,b;
	cout << "Enter two numbers" << endl;
	cin >> a >>b;
	cout << "GCD = " << gcd(a,b) <<endl;
	return 0;
}

int gcd(int a, int b){
	if(b == 0)return a;
	return gcd(b,a%b);
}
