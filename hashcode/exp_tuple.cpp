#include <iostream>
#include <string>
#include <vector>
#include <tuple>

using namespace std;

int main(){
	int x = 2;
	vector<tuple<pair<int,int>,string,int>> street;
	for(int i = 0 ; i<2; i++){
		pair<int,int> p1;
		string s1;
		int x;
		cin >> p1.first >> p1.second >> s1 >> x;
		tuple<pair<int,int>,string, int> t1;
		t1 = make_tuple(p1,s1,x);
	}
	cout << "----------" << endl;
	return 0;
}
