#include <iostream>
#include <vector>

using namespace std;

vector<bool> find_prime(int);
int main(){
	int range;
	cout << "Enter range" << endl;
	cin >> range;
	vector<bool> result = find_prime(range);
	for(int i=0; i< range;i++){
		if(result[i] == true)cout << i << endl;
	}
	return  0;
}

vector<bool> find_prime(int range){
	vector<bool>result(range+1,1);
	result[0] = false;
	result[1] = false;
	for(int i = 2; i*i <= range; i++ ){
		for(int j=2*i; j <= range; j += i){
			result[j] = false;
		}
	}
	return result;
}
