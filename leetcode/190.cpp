#include<iostream>
#include<bitset>

using namespace std;

uint32_t bit_reverse(uint32_t num){
	if(num == 0)return num;
	uint32_t x = 0;
	for(int i =0; i<32; i++){
		x = x<<1;
		uint32_t temp = num&1;
		x = temp|x;
		num = num >> 1;
	}
	return x;
}

int main(){
	uint32_t num;
	cout << "Enter a number" << endl;
	cin >> num;
	cout << bit_reverse(num) << endl;
	return 0;
}
