#include <iostream>
#include <vector>

using namespace std;

int remove(vector<int>&,int);
int remove_1(vector<int>&,int);
int removeElement(vector<int>&,int);

int main(){
	vector<int> arr = {0,1,2,2,3,4,5};
	int val;
	for(int i = 0; i < arr.size(); i++)cout << arr[i] << "  ";
	cout << endl;
	cout << "Enter a value in order to remove " << endl;
	cin >> val;
	int result =  removeElement(arr,val) ;
	cout << "result"<< result << endl;
	for(int i =0; i < result; i++)cout << arr[i] << "  ";
	cout << endl;
	return 0;
}

int remove(vector<int> &arr,int val){
	int len = arr.size();
	int i = 0;
	while(i < len){
		if(arr[i] == val){
			arr[i] = arr[len-1];
			len--;
		}else{
			i++;
		}
	}
	return len ;
}

int remove_1(vector<int> &arr, int val){
	vector<int>::iterator itr1 = arr.begin();
	vector<int>::iterator itr2 = arr.end();
	while(itr1 != itr2){
		if(*itr1 == val){
			arr.erase(itr1);
			itr1--;
		}
		itr1++;
	}
	return arr.size();
}

int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0)return 0;
        if(val == 0)return nums.size();
        vector<int>::iterator itr1 = nums.begin();
        vector<int>::iterator itr2 = nums.end();
        while(itr1 != itr2){
		cout<< *itr1 << "  ";
            if(*itr1 == val){
                nums.erase(itr1);
                itr1--;
            }
            itr1++;
        }
	cout << endl;
        return nums.size();
    }
