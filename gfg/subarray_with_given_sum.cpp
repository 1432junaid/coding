#include <iostream>
#include <vector>

using namespace std;

void find_sum(vector<int>, int, int );

int main(){
	int T;
	cin >> T;
	while(T){
		int N,S;
		cin >> N >> S;
		vector<int> A;
		while(N){
			int temp;
			cin>> temp;
			A.push_back(temp);
			N--;
		}
		T--;
	}
	return 0;
}

void find_sum(vector<int> A,int N,int S){
	int len = A.size();
	
}
