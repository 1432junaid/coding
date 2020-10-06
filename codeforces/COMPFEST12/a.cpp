#include <iostream>

using namespace std;

void test1(int& t){
	int arr[t] = {0};
	for(int i = 0; i< t; i++)cin>>arr[i];
	for(int i = 0; i< t; i++){
		int coins = arr[i];
		cout << "coins : "<<coins<<endl;
		int x = 0;
		int a = 0;
		int b = 0;
		int turn = 1;
		while(coins != 0){
			cout << "a = "<<a << "\tb = "<<  b <<"\tcoins = "<<coins<< endl;

			if(coins%2 == 0){	//even
				x = coins/2;
				coins = coins/2;
			}else{			//odd
				x = 1;
				coins--;
			}
			if(turn == 1){
				a += x;
				turn = 2;
			}
			else {
				b += x;
				turn = 1;
			}
		}
		cout << "\t\t\na  = "<< a << endl<< endl;
	}
}

int main(){
	int t;		//testcase
	cin>> t;
	test1(t);
	return 0;
}
