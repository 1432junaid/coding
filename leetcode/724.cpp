// find pivot index

#include <iostream>
#include <vector>

using namespace std;

int find_pivot(vector<int>&);

int main(){
//	vector<int>arr = {1,7,3,6,5,6};
	vector<int>arr = {1};

	cout << find_pivot(arr) << endl;
	return 0;
}

int find_pivot(vector<int>& arr){
	int len = arr.size();
	if(len < 3)return -1;
	int l_sum = 0;
	int r_sum = 0;
	int pivot = 0;
	for(int i =0; i<len; i++){
		l_sum += arr[i];
		pivot = i+1;
		r_sum = 0;
		for(int j = pivot+1; j<len; j++){
			r_sum += arr[j];
		}
		cout << "lsum = " << l_sum << " r_sum =" << r_sum << endl;
		if(l_sum == r_sum)return pivot;
	}
	return -1;
}
