#include <iostream>
#include <string>
#include <vector>

using namespace std;

int sol(vector<int> arr, string s, int n){
	int sum = 0;
	for(int i = 0; i<n; i++){
		if(s[i] == 'N') {
			sum -= arr[i];
		}else sum += arr[i];
	}
	if(sum<0) sum = -sum;
	return sum*100;
}

int main(){
	vector<int> arr = {2,3};
	string s = "PN";
	int n = 2;
	cout << sol(arr,s,n)<< endl;
}
