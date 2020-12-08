#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <algorithm>

using namespace std;

string sol(string &str){
	stack<char> st;
	for(int i = 0; i < str.size(); i++){
		char c = str[i];
		if(!st.empty() && st.top() == c) st.pop();
		else st.push(c);
	}
	string result = "";
	while(!st.empty()){
		result += st.top();
		st.pop();
	}
	reverse(result.begin(),result.end());
	return result;
}

int main(){
	string str;
	cin >> str;
	cout << sol(str) << endl;
	return 0;
}
