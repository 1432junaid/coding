#include <iostream>
#include <climits>

using namespace std;

int kaden_algo(int *nums , int numsize){
	if(numsize == 1)return nums[1];
	int mssf = INT_MIN, mseh = 0;
	for(int i=0; i< numsize;i++){
		mseh += nums[i];
		if(mseh < 0){
			mseh = 0;
		}
		if(mssf < mseh){
			mssf = mseh;
		}
	}
	return mssf;
}
int main(){
	int test,len;
	cout << "Enter number of test cases :";
	cin >> test;
	cout << "enter size of array";
	cin >> len;
	int arr[len];
	for(int i =0; i<len ; i++)cin>>arr[i];

//	int len =  sizeof(arr)/sizeof(arr[0]);
	while(test){
		int arr[] = {-2,1,-3,4,-1,2,1,-5,4};
		cout << kaden_algo(arr,len) << endl;
		test--;
	}
        return 0;

}
