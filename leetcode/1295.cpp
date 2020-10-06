#include <iostream>
#include <vector>

using namespace std;

int count_even_digits(vector<int> nums){
	int len = nums.size();
        int result = 0;
        int count = 0;
        for(int i = 0; i < len; i++){
            count = 0;
            int temp = nums[i];
//		cout << temp << endl;
            while(temp != 0){
                temp = temp/10;
//		cout << temp << endl;
                count++;
            }
            cout << count << endl;
            if((count&1) != 1)result++;
        }
        return result;
}

int main(){
	vector<int> arr = {12,356,2,6,2345};
	cout << "ans = " <<count_even_digits(arr) << endl;
	return 0;
}
