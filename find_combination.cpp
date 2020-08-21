#include <iostream>

using namespace std;

int combination(int [],int,int);

int main(){
	int arr[] = {10,8,12,4,7,16};
	int len	= sizeof(arr)/sizeof(arr[0]);
	int num;
	cout << "Enter number  ";
	cin >> num;
	cout << combination(arr,len,num) << endl;
	return 0;
}

int combination(int arr[],int len,int num){
	if(len == 0)return 0;

	for(int i =0; i< len; i++){
		int max = 0;
		for(int j = i; j < len; j++){
			if(max + arr[j] <= num){
				cout <<" " <<arr[j];
				max += arr[j];
			}
			if(max + arr[j] > num || j<len)continue;
		}cout << "\tmax = " << max <<endl;
	}
	cout << endl;
	return 1;
}
