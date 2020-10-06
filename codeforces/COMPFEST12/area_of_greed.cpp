#include <iostream>

using namespace std;

int main(){
	int testcase;
	cout << "testcase = ";
	cin >>testcase;
	int arr[testcase] = {0};
	for(int i = 0; i < testcase;i++){
		cout << "case "<<i+1 <<"  ";
		cin >> arr[i];
		cout  << endl;
	}
//	for(int i = 0; i < testcase; i++ )cout <<  arr[i] << "  ";
//	cout << endl;

	for(int i = 0; i < testcase; i++){
		int coins = arr[i];
		int flag = 1;
		int x = 0;
		int a = 0,b = 0;
		cout << "\n\ncoins : " << coins << endl;
		while(coins >= 0){
			cout << "flag  :" << flag << endl;

			if(flag&1 == 1){			//turn a
				cout << "  A  "<< endl;
				if(coins&1 == 0){		//coins are even
					x += coins/2;
					coins = coins/2;
				}else{				//coins are odd
					x += 1;
					coins--;
				}
				a += x;
				flag = 1;
			}else if(flag&1 == 0){			//turn b
				cout << " B  " << endl;
				b += x;
				flag = 1;
			}
			cout << "a = " << a <<"\tb = "<< b << "\tcoins =  " << coins << endl;
		}
		arr[i] = a;
		cout<< arr[i] <<"  "<< endl;
	}
	return 0;
}


