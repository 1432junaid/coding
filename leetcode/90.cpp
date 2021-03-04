#include <bits/stdc++.h>

using namespace std;

void print(vector<int> v){
	for(int i = 0; i<v.size(); i++){
		cout << v[i] << " ";
	}
	cout << endl;
}
int main(){
	set<vector<int>> set_v;
	vector<int> a  = {2,1};
	vector<int> b  = {2,1};
	vector<int> c  = {3,1,4,5};
	set_v.insert(a);
	set_v.insert(b);
	set_v.insert(c);

//	set<vector<int>> :: iterator itr;
//	vector<int> :: iterator itr2;

	for(set<vector<int>> :: iterator itr1 = set_v.begin(); itr1 != set_v.end(); itr1++){
		vector<int> temp = *itr1;
//		print(*itr1);
		print(temp);
	}

 return 0;

}


