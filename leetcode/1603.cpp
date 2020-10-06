#include <iostream>
#include <string>
#include <vector>

using namespace std;

class parking_system{
	public:
	vector<int> p;
	parking_system(int big, int medium, int small){
		p = {0,big,medium,small};
	}
	bool add_car(int car_type){
		return --p[car_type] >= 0;
	}
};

int main(){
	int big = 1;
	int medium =2;
	int small = 0;
	int car_type;
	cout << "Enter car_type" << endl;
	cin >> car_type;
	parking_system* obj = new parking_system(big,medium,small);
	bool result = obj->add_car(car_type);
	if(result == 1)cout<<"True" <<endl;
	else cout << "False  " << endl;
	return 0;
}
