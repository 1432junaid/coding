#include <climits>
#include <iostream>
#include <vector>
using namespace std;

void mostVisited(int n,vector<int> rounds){
	vector<int> result(n,0);
	int start = 0;
	int end   = 0;
	int count = 0;
	int max = INT_MIN;
	for(int i =0; i < rounds.size()-1; i++){
		start = rounds[i]-1;			//for leting 0 insted of 1
		end   = rounds[i+1]-1;			//same
		count = start - end;			//for not getting infinite while
		if(count < 0)count = -(count);		//if count -ve
		while(start != end && count !=0){
			result[start % n]++;
			start++;
			count--;
		}
		if(result[i] > max)max = result[i];
	}
	result[end]++;					//for increment the last position
	vector<int>result1(n);
	for(int i =0; i<result1.size(); i++){
		if(result[i] == max){
			result1.push_back(i+1);
		}
	}
//	for(int i =0; i<out.size(); i++)out[i] = i+1;
	for(int i =0; i <result1.size(); i++)cout << result1[i] << " ";
}

int main(){
	vector<int> rounds = {1,3,1,2};
	int n = 4;
	mostVisited(n,rounds);
	cout << endl;
	return 0;
}
