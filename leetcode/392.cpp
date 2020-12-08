#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool sub_seq(string &s1, string &s2){
	int len1 = s1.size();
	int max = -1;
	int len2 = s2.size();

	for(int i = 0; i<len1; i++){
		char target = s1[i];
		int l = 0;
		int r = len2-1;
		int mid = l + (r-l)/2;
		while(l <= r){
			if(s2[mid] == target){
				if(max < mid){
					max = mid;
					break;
				}else return false;
			}else if(s2[mid] < target){
				r = mid-1;
			}else {
				l = mid+1;
			}
			mid = l + (r-l)/2;
		}
		if(l == r && s2[mid] != target)return false;
	}
	return true;
}

int main(){
	string s1= "abc";
	string s2 = "badebfgc";
	bool result = sub_seq(s1,s2);
	if(result == 0)cout<< endl <<" false" << endl;
	cout<< "true" << endl;
	return 0;
}
