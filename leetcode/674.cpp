// longest continuous increasing subsequence

#include <iostream>
#include <vector>

using namespace std;

int lcis(vector<int>&);

int main(){
//	vector<int> arr = {1,3,5,4,7};
	vector<int> arr = {21,2,3,4,5,4,1,2,3,4,5,6,7};
	cout << lcis(arr) << endl;
	return 0;
}

int lcis(vector<int>& arr){
	int len = arr.size();
	int max = 1;
	if(len == 1)return 1;
	int count = 1;
	for(int i= 0; i< len; i++){
		if(arr[i+1] > arr[i]){
			count++;
			cout << arr[i+1] << " :"<< count << endl;
			max = (count > max) ?count:max;
		}

		if(arr[i+1] <= arr[i])count = 1;
	}
	return max;
}



