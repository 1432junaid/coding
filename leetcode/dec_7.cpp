//			spiral matrix

#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin << n;
	a = 1;
	vector<vector<int>> arr(n,0);
	arr[0][0] = a;
	for(int i = 0; i < n*n; i++){
		for(int j = 0; j < n; j++){
			while(arr[i][j+1] = 0)arr[i][j+1] = a+1;	//left

		}
	}
	return 0;
}
