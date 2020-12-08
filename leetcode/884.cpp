#include <iostream>
#include <vector>
#include <string>
#include <map>


using namespace std;

vector<string> sol(string s1,string s2){

	string str = s1 +" "+ s2;
	int len = str.size();
	map<string,int> freq;

	for(int i = 0; i<len; i++){
		string temp = "";
		while(str[i] != ' '){
			temp += str[i];
			i++;
		}
		freq[temp] += 1;
	}

	vector<string> result;

	map<string,int>::iterator itr = freq.begin();
	while(itr != freq.end()){
		if(itr->second == 1){
			result.push_back(itr->first);
			itr->first;
		}
		itr++;
	}
	return result;
}

int main(){
	string s1 = "apple apple banana";
	string s2 = "banana mango";
	vector<string>result = sol(s1,s2);
	for(int i = 0; i<result.size(); i++)cout << result[i] << endl;
	return 0;
}
