#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> sol(vector<vector<int>> a, int n){
	vector<vector<int>> result;
	multimap<float,int, greater<float>> mp;
	for(int i=0; i<a.size(); i++){
		int sqr = (a[i][0] * a[i][0]) + (a[i][1]*a[i][1]);
		float temp  = sqrt(sqr);
		mp.insert(pair<float,int>(temp,i));
	}
	int i = 0;
	for(auto b = mp.rbegin(); b != mp.rend() && i < n; b++, i++){
		result.push_back(a[b->second]);
	}

	return result;
}

int main(){
	vector<vector<int>> a = {{1,2},{3,4},{1,-1}};
	int sn = 2;
	vector<vector<int>> result ;
	result  = sol(a,sn);
	for(int i = 0; i<result.size(); i++){
		cout << result[i][0] << " " << result[i][1] << endl;
	}
	return 0;
}

