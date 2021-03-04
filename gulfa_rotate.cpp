#include<bits/stdc++.h>
using namespace std;

int sol(vector<string> s1, vector<string> s2){
	int count = 0;
	for(int i = 0; i<s1.size(); i++){
		if(s1[i] == s2[2]) count++;
	}
	return count;
}

void rightrotate(string &s, int d){
   leftrotate(s, s.length()-d);
}

int rotate_word(vector<string> ws, vector<string> s1,int d){
	for(int i = 0; i<ws.size(); i++){
		rightrotate(ws[i],d);
	}
	sol(ws,s1);
}

vector<string> split(string s,int d){
	string temp = "";
	vector<string> result;
	for(int i = 0; i<s.size() ;i++){
		if(s[i] == ' '){
			result.push_back(temp);
			temp = "";
		}
		temp += s[i];
	}
	return result;
}



int main(){
	string s = "hello there";
	int d = 2;
	vector<string> s1 = split(s,d);
	vector<string> s2 = s1;
	rotate_word(s2,d);

	cout << count;
}
