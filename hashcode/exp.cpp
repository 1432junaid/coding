#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
	vector<string> path;
	int x = 4;
	while(x){
		string temp;
		cin>> temp;
		path.push_back(temp);
		--x;
	}
	cout << "number of path" << path.size() << endl;
	for(auto i = path.begin(); i != path.end(); i++){
		cout << *i << endl;
	}
	return 0;
}
