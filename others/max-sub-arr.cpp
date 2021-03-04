#include <iostream>
#include <climits>

using namespace std;

int max_sub_arr(int *nums,int num_size){
	int max = INT_MIN, temp = 0;
	for(int i =0; i< num_size; i++){
		temp = nums[i];
		if(temp > max) max = temp;
		for(int j = i+1; j< num_size; j++){
			temp += nums[j];
			if(temp >max){
				max = temp;
			}
		}
	}
	return max;
}

int main(){
	int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
	int len =  sizeof(arr)/sizeof(arr[0]);
	cout << max_sub_arr(arr,len) << endl;
	return 0;
}
