#include <iostream>
#include <vector>
#include <climits>

using namespace std;

bool check_happy(int);
bool check_loop(vector<int>,int);
int power(int);

int main(){
	int num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << check_happy(num) << endl;
	return 0;
}

bool check_happy(int num){
	vector<int>loop;
	int temp = 0;
	loop.push_back(num);
	while(num != 1){
		if(check_loop(loop,temp) == true)return false;
		temp = power(num);
		loop.push_back(temp);
		num = temp;
	}
	return true;
}

int power(int n){
	int temp = 0;
	while(n != 0){
		temp += (n%10) * (n%10);
		n = n/10;
	}
	return temp;
}

bool check_loop(vector<int> loop, int targate){
	for(int i=0; i<loop.size() - 1; i++){
		if(loop[i] == targate){
			return true;
		}
	}
	return false;
}

