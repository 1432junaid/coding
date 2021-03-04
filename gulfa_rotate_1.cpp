#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
int sol(string s, int n){
	//vector<string> s;
	int len = 0;
	int count = 0;
	for(int i = 0; i<s.size(); i++){
		if(s[i] == ' '){
			len = 0;
		}
		len++;
	}
	return 0;
}

void rightrotate(string &s, int d){
   leftrotate(s, s.length()-d);
}


void  split(string s,int d){
        string temp = "";
        vector<string> result;
        for(int i = 0; i<s.size() ;i++){
                if(s[i] == ' '){
                        result.push_back(temp);
                        temp = "";
                }
                temp += s[i];
        }
	result.push_back(temp);
	for(int i =0; i<result.size(); i++){
		for(int j= 0; j<result[i].size(); i++){
			cout << result[j] << endl;
		}
	}

     //   return result;
}

*/
int main(){
	string s = "llohe";
	int n = 2;
	rotate(s.end(),s.end()-1, s.begin());

}
