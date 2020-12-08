#include <iostream>
#include <vector>

using namespace std;

bool is_good(int n){
	int temp = 0;
	while(n){
		temp += n%10;
		n = n/10;
	}
	for(int i = 0; i< temp ; i++){
		if(temp%5 != 0)return false;
	}
	return true;
}

void getK(int n,int k){
	int result[k];
	int i = 0;
	while(i != k){
		if(is_good(n)) {
			result[i] = n;
			i++;
		}
		n++;
	}
	cout << result[k-1] << endl;
}

int main(){
	int N,K;
	cin >> N >> K;
	getK(N,K);
	return 0;
}
