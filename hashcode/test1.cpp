#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

class car{
	vector<string> path;
	car(int x){
		while(x){
			string temp;
			cin >> temp;
			path.push_back(temp);
			--x;
		}
	}
	void car_info(){
		cout << "number of path = " << path.size() << endl;
		for(auto i = path.begin(); i!= path.end(); i++){
			cout <<  *i << endl;
		}
		cout << endl;
	}

};

int main(){
	int D;	//duration of simulation
	int I;	//number of intersections(0 to I-1)
	int S;	//number of streets
	int V;	//number of cars
	int F;	//bonus point
	cin >>D>>I>>S>>V>>F;
	vector<tuple<pair<int,int>,string,int>> street;		//street with start and end intersection and name with simulation
	for(int i = 0; i<S; i++){
                pair<int,int> p1;
                string s1;
                int x;
                cin >> p1.first >> p1.second >> s1 >> x;
                tuple<pair<int,int>,string, int> t1;
                t1 = make_tuple(p1,s1,x);
	}
	cout << 1002;
	return 0;
}
