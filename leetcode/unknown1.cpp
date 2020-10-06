#include <iostream>
#include <string>

using namespace std;

string rev_str(string &str){
	int len = str.size();
	char temp;
	int start,end;
	for(int i = 0; i< len; i++){
		start = 0;
		if(str[i] == ' ' || i == len-1){
			cout << str[i] << endl;
		}
	}
	return str;
}

int main(){
	string str = "my name is junaid";
	cout << rev_str(str) << endl;
	return 0;
}
