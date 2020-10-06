#include <iostream>

using namespace std;

void test1(int& t){

}

int main(){
	int t;		//testcase
	cin>> t;
	int arr[t] = {0};
	for(int i = 0; i< t; i++)cin>>arr[i];
	for(int i = 0; i< t; i++){
		int coins = arr[i];
		int x = 0;
		int a = 0;			//person1
		int b = 0;			//person2
		int turn = 1;
		while(coins != 0){
			if(coins%2 == 0){	//even
				x = coins/2;
				coins = coins/2;
			}else{			//odd
				x = 1;
				coins--;
			}
			if(turn == 1){		//turn of person1
				a += x;
				turn = 2;
			}
			else {			//turn of person2
				b += x;
				turn = 1;
			}
		}
		cout << a <<endl;
	}
	return 0;
}
