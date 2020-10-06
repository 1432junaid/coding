#include <iostream>
#include <vector>
x
using namespace std;

int sum_of_odd_len(vector<int> arr){
	int len = arr.size();
	int sum = 0;
	for(int i = 0; i<len; i++){
		sum += arr[i];
	}
	cout << "done" << endl;
	vector<int> result;
	result.push_back(sum);
	int odd = 3;

	while(odd <= len){
		for(int i = 0; i <= (len-odd); i++){
			sum = 0;
			for(int j = i; j < (i+odd) ; j++){
				sum += arr[j];
				cout << arr[j] << " ";
			}cout << endl;
			result.push_back(sum);
		}
		odd += 2;
	}
	sum = 0;
	for(int i = 0; i< result.size(); i++){
		sum += result[i];
		cout << result[i] << endl;
	}cout << endl;
	return sum;
	}

int main(){
	vector<int> arr = {1,4,2,5,3};
	cout << "sum = " << sum_of_odd_len(arr) << endl;
	return 0;
}
