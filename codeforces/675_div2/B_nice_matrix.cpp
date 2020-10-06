#include <iostream>
#include <vector>

using namespace std;

void print(vector<vector<int>>);
int dif(int , int);
int main(){
	int t;	//test case
	cin >> t;
	while(t >= 0){
		int n,m;	//row and column
		cin >>n>>m;
		int result = 0;
		vector<vector<int>> matrix(n,vector<int>(m,0));
		for(int i = 0; i<n; i++){
			for(int j = 0; j<m; j++){
				cin >>matrix[i][j];
			}
		}
//		int len1 = n;
//		int len2 = m;
		for(int i = 0; i<n; i++){
			int len = m;
			for(int j = 0; j<len; j++){
				if(matrix[i][j] == matrix[i][len])continue;
				else {
					cout << mait
					result += dif(matrix[i][j], matrix[i][len]);
//					cout <<  result << endl;
				}
			}
		}
		print(matrix);
		cout << " ----------------------------------------" << endl;
		cout << result << endl;
		t--;		//
	}

}

void print(vector<vector<int>> m){
	for(int i =0; i<m.size(); i++){
		for(int j = 0; j<m[0].size(); j++){
			cout << m[i][j] << "  ";
		}cout << endl;
	}
	cout << endl;
}

int dif(int x, int y){
	return (x>y) ? x-y : y-x;
}
