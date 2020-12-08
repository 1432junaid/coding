#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool search(string key, string text){
	string a = "";
	for(int i = 0; i<text.size(); i++){
		char t =  text[i];
		int j = 0;
		for(; j < key.size(); j++){
			if(t == key[j]){
				a += t;
				break;
			}
		}
	}
	return a == text;
}

vector<string> sol(vector<string> vec) {
	string key1 = "qwertyuiopQWERTYUIOP";
	string key2 = "asdfghjklASDFGHJKL";
	string key3 = "zxcvbnmZXCVBNM";
	vector<string> result ;
	int len =  vec.size();
	for(int i = 0; i< len; i++){
		for(int j = 0; j<vec[i].size(); j++){
			     if( search(key1,vec[i]) ) {
					result.push_back(vec[i]);
					break;
			}else if( search(key2,vec[i]) ) {
					result.push_back(vec[i]);
					break;
			}else if( search(key3,vec[i]) ) {
				result.push_back(vec[i]);
				break;
			}else break;
		}
	}
	return result;
}

int main(){
	vector<string> vec = {"Hello","Alaska","Dad","Peace" };
	vector<string> result = sol(vec);
	for(int i = 0; i<result.size(); i++){
		cout << result[i] << endl;
	}
	return 0;
}
