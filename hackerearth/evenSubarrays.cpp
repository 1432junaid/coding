#include <iostream>
#include <vector>

using namespace std;

int sol(vector<int> arr){
	int len = arr.size();
	int count = 0;
	for(int i = 0; i<len; i++){
		int p = 1;
		for(int j = i; j<len; j++){
			p = p*arr[j];
			cout << p << endl;
			if((p&1) == 0) count++;
		}
	}
	return count;
}

int sol1(vector<int> arr){
	int len = arr.size();
	int count = 0;
	for(int i = 0, j = len-1; i<j; i++, j--){

	}
}

int main(){
	int t;
	cin>>t;
	while(t){
		int n;
		cin>>n;
		vector<int> arr(n,0);
		for(int i = 0; i<n; i++){
			cin>>arr[i];
		}
		cout << "number of even products = " << sol(arr);
		t--;
	}
}
