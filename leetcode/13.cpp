#include <iostream>
#include <string>

using namespace std;

string binary_add(string str1, string str2){
	string result = "";
	int len1 = str1.size();
	int len2 = str2.size();
	int flag = 0;
	int i = len1-1;
	int j = len2-1;
	while(i >= 0 && j >= 0){
		if(flag == 1){
			str1[i]
		}
		flag = 0;
		if(str1[i] == '1' && str2[j] == '1'){
			flag = 1;
		}if else(str1[i] == '0' && str2[j] == '0'){
		result = '0' + result;
		}else {
			result = '1' + result;
		}
	}
	for(i = len1-1; i >=0 && i < )
}

int main(){
	string str1 = "01010";
	string str2 = "10010";
	string result = binary_add(str1,str2);
	cout << result << endl;
	return 0;
}
