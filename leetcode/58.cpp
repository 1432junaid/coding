#include <iostream>
#include <string>

using namespace std;

int last_word(string &str){
	int len = str.length()-1;
	cout << len << endl;
	if(len == 0)return 0;
	int count = 0;
	int space = 0;
	for(int i = len; i >= 0; i--){
		if(str[i] == ' ')space++;
		else break;
	}
	for(int i = len - space; i >= 0; i--){
		if(str[i] != ' ')count++;
		else break;
	}
	return count;
}

int main(){
	string str ;
	cout << "Enter the string " << endl;
	cin >>str;
	cout << last_word(str) << endl;
	return 0;
}
