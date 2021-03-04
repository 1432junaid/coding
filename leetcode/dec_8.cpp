#include <bits/stdc++.h>

using namespace std;

int sol(vector<int> &arr){
	int len = arr.size();
	int count = 0;
	for(int i = 0; i<len-1 ; i++){
		for(int j = i+1; j<len; j++){
			if((arr[i] + arr[j]) % 60 == 0) count++;
		}
	}
	return count;
}

int main(){
	vector<int> arr = {30,20,150,100,40};
	cout << sol(arr);
	return 0;
}
