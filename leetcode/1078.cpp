#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<string> sol (string text, string first, string second){
	int len = text.size();
	string ptrn = first + " " + second;
	int p_len = ptrn.size();

	vector<string> result;
	for(int i = 0; i < len ; i++){
		if(text[i] == ptrn[0]){
			int j = 0;
			int k = i;
			while(text[k] != ptrn[j]){
				j++;
				k++;
			}
			for(j = 0; j<p_len; j++){
				if(text[i] == ptrn[j])break;
			}
			//cout << j << text[j] << find.size() << i<<  endl;
			string temp = "";
			if(j == i + find.size() ){
				cout << "true " << endl;
				while(text[j] != ' ' && j < text.size()){
					temp += text[j];
					j++;
				}
			}
			result.push_back(temp);
			cout << temp << endl;
		}
	}
	return result;
}

int main(){
	string  text = "we will we will rock you";
	string first = "we";
	string second = "will";
	vector<string> result = sol(text,first,second);
	return 0;
}
