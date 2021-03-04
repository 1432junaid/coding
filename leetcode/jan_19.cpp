#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class solution {
	public:
	int longest_palindromic_substring(string str){
		int len = str.size();
		int max = INT_MIN;
		int i = 0;
		int j = len-1;
		while(j){
			if(str[i] == str[j]){
				string temp(str.begin()+i, str.begin()+j);
				cout << "temp = " << temp << endl;
				if(is_palindrome(temp) ){
					max = ( max > (j-i) ) ? max : (j-i);
					cout << "max  = "<<  max << endl;
				}
		//		else j--;
			}else j--;
		}

		return is_palindrome(str);
	}

	bool is_palindrome(string s2){
		string s1(s2.rbegin(),s2.rend() );
		return s1 == s2;
	}
};


int main(){
	string str = "amynameisjuanidansarib";
//	string s(str.begin()+1, str.begin()+7);
//	cout << s;
	solution s;
	cout << s.longest_palindromic_substring(str) << endl;
	return 0;

}
