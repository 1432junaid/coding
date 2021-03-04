#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;
//int result = 0;
/*
int sol(vector<int> arr, int k){
	map<int,int> mp;
	int result = 0;
	for(int i = 0; i < arr.size(); i++){
		mp[arr[i]]++;
	}
	for(auto it = mp.begin(); it != mp.end(); it++) {
//		cout << it->first << " " << it->second << endl;
		int x = it->first;
		for(auto itr = mp.begin(); itr != mp.end(); itr++){
			if(it == itr) continue;
			if(k-x == itr->first){
				result += min(it->second, itr->second);
//				cout << it->first << " " << it->second << " : " << itr->first << " " itr->second << endl;
				cout << x <<" + " <<k-x<<" : " << k <<endl ;
			}
		}
	}
	return result/2;
}
*/
class sol{
	public:
	int result = 0;
	int sum(vector<int> arr, int k){
		for(auto i = arr.begin(); i != arr.end(); i++){
			for(auto j = arr.begin(); j!= arr.end() && i != j; j++){
				if(k-(*i) == *j){
					arr.erase(i);
					arr.erase(j);
					result++;
					result += sum(arr,k);
				}
			}
		}
		return result;
	}
};
int main(){
	vector<int> arr = {3,1,3,4,3};
	int k = 6;
	sol obj ;
	cout << "answer = " << obj.sum(arr,k) << endl;

/*
	for(auto i = arr.begin(); i!= arr.end(); i++) {
		int x = *i;
		if(x == 3){
			cout << "true"<< endl;
			arr.erase(i);
		}
		cout << x << " " << endl;
	}
	cout << endl;
//	cout << sol(arr,k) << endl;

*/
	return 0;
}
