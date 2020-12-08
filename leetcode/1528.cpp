#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

string sol(string &str,vector<int> &arr){
	int len = arr.size();
	string result = "";
	map<int,char> m1;
	for(int i = 0; i<len; i++){
		m1.insert({arr[i] , str[i]});
	}
	map<int,char>::iterator itr = m1.begin();
	for(; itr != m1.end(); itr++){
		result += itr->second;
		cout << itr->first << " = " << itr->second << endl;
	}
	cout <<result;
	return result;
}

int main(){
	vector<int> arr = {1,0,2};
	string str = "art";
	string result = sol(str,arr);
	cout<< result << endl;
	return 0;
}
