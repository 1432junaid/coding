//Unique number of  Occcurences

#include <iostream>
#include <vector>
#include <map>

using namespace std;

bool sol(vector<int> arr){
	map<int,int> freq;
	int len = arr.size();
	for(int i = 0; i<len; i++){
		freq[arr[i]] += 1;
	}
	int count = 0;
	map<int , int>:: iterator itr = freq.begin();
	while(itr != freq.end()){
		if(itr->second == 1){
			cout << itr->first <<endl;
			count++;
		}
		itr++;
	}
	cout << count << endl;
	return count == 1;
}

int main(){
	vector<int>  arr = {26,2,16,};
	bool result = sol(arr);
	if(result == true)cout << "True " << endl;
	else cout << "False " << endl;
	return 0;
}

