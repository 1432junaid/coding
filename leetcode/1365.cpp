#include <iostream>
#include <vector>

using namespace std;

vector<int> smallerNumbersThanCurrent(vector<int>&);

int main(){
	vector<int>nums = {8,1,2,2,3};
	vector<int>result(nums.size());
	result = smallerNumbersThanCurrent(nums);
	for(int i = 0; i<nums.size();i++)cout<<result[i]<< "  ";
	cout << endl;
}

 vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>result(nums.size());
        for(int i =0; i < nums.size(); i++){
            int count = 0;
            for(int j=0; j < nums.size(); j++){
                if(nums[j] < nums[i] ){
                	result[i] = ++count;
			cout << nums[i]  << " " <<nums[j]<< "  count = " << count << "  freq = "<<result[i] << endl;
                }
            }cout << endl;
        }
        return result;
}
