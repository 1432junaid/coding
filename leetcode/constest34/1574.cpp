//	Shortest Sunarray to be Removed to Make array sorted

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool is_sorted(vector<int> arr){
        for(int i=1; i<arr.size(); i++){
            if(arr[i] < arr[i-1])return false;
        }
        return true;
    }
    bool is_dec(vector<int> arr,int start){
        for(int i = start; i < arr.size(); i++){
            if(arr[i] > arr[i-1])return false;
        }
        return true;
    }
    int findLengthOfShortestSubarray(vector<int>& arr) {
        if(arr.size() <= 1)return 0;
        if(is_sorted(arr) == true)return 0;
        int count = 0;
        int length = arr.size();
        if(is_dec(arr,0) == true){
            while(is_dec(arr,0) == true && length != 1){
                if(is_dec(arr,count) == true){
                    count++;
                    length--;
                }
            }
            return count+1;
        }
        int len = arr.size();
        int i = 0;
        int j = 0;
        int point1 = 0;
        int point2 = 0;

        for(; i < len; i++){
            if(arr[i+1] < arr[i])break;
        }
        point1 = i - 1;

        for( j = point1; j < len; j++){
            if(arr[j+1] <= arr[point1])break;
        }
        point2 = j+1;

        return point2 - point1;
    }
};
int main(){
	solution sol;
	return 0;
}
