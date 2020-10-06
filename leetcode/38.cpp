#include <iostream>
#include <string>

using namespace std;

int main(){
	int x;
	cout<< "Enter a number < 10";
	cin >>x;

	string count_and_say(x){
		if(x == 1)return "1";
		string s = "1";
		int count = 0;
		while(x >= 1){
			count = 1;
			for(int i = 0; i<s.length()-1; i++){
				char say = s[i];
				if(s[i] == s[i+1])count++;
				else {
					s = 
				 }
			}
		}
	}
}

