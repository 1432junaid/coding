#include <iostream>
#include <cmath>

using namespace std;

void add1(int[],int,int[],int);

int main(){
	int a1[] = {1,2,3};
	int a2[] = {9,1};

	int len1 = sizeof(a1)/sizeof(a1[0]);
	int len2 = sizeof(a2)/sizeof(a2[0]);

	cout << len1 << endl;
	cout << len2 << endl;

	add1(a1,len1,a2,len2);
	return 0;
}

void add(int a1[],int len1,int a2[],int len2){		//a1 = 1,2,3  a2 = 9,1

	int i = len1-1;
	int j = len2-1;
	int max = (len1 > len2)? len1 : len2;
	int result[max-1];
	cout << "max" << max << endl;

	int carry = 0;
	int add   = 0;

	for(i,j; i>=0 || j>=0; i--,j--,max--){

		add = a1[i] + a2[j] + carry;
		carry = 0;
		if(add > 9){
			add = add % 10;			//this will get remiander
			carry++;
		}
		cout <<a1[i] <<"+"<<a2[j] <<"+"<< carry << "  : "<< "add->" << add<<endl;
		result[max-1] = add;
	}
	for(int i=0; i<3;i++) cout << "->" << result[i];
	cout << endl;

}

void add1(int a1[],int len1,int a2[],int len2){

	int power1 = len1-1;
	int power2 = len2-1;
	int sum1 = 0;
	int sum2 = 0;
	for(int i=0;i<len1;i++){
		sum1 += a1[i] * pow(10,power1);
		power1--;
	}
	cout << "sum1 = " << sum1 << endl;

	for(int i=0; i<len2;i++){
		sum2 += a2[i] * pow(10,power2);
		power2--;
	}
	cout << "sum2 =" << sum2 << endl;
	int result = sum1+sum2;
	cout << result << endl;

	int max = len1 >len2?len1 : len2;
	int sum[max];
	while(max){
		int r = result % 10;
		result = result /10;
		sum[max-1] = r;
		max--;
	}
	for(int i =0; i < len1; i++)cout << sum[i] << " ";
	cout << endl;
}













