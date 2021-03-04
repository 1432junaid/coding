#include <iostream>

using namespace std;

int minOperations(string s){
	int f1 = 1;
	int f0 = 0;
	int count1 = 0, count2 = 0;
	for(auto ch : s){
		count1 += ch - '0' != f1;
		count2 += ch - '1' != f0;
	}

	return min(count1,count2);
}

int main(){
	string s;
	cin >> s;

}
