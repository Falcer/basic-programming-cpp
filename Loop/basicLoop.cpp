#include<iostream>
using namespace std;

int main(){
	int a[5] = {0,1,2,3,4};
	int b[5];
	int len; 
	
	int arrlen = sizeof(a) / sizeof(a[0]);

	//Dynamic Array
	cout<<"Masukkan panjang dari Array C: ";
	cin>>len;

	int c[len];
	
	//Dynamic Value
	for(int i = 0; i < arrlen;i++){
		cout<<"Masukkan value dari array b["<<i<<"]: ";
		if(i == 3){
			b[i] == 100;
			continue;
		}
		cin>>b[i];
	}

	//Dynamic value and dynamic length of array
	for(int k = 0; k < len; k++){
		cout<<"Masukkan value dari array c["<<k<<"]: ";
		cin>>c[k];
	}

	//For showing purpose, just change the variable
	for(int a = 0; a < len; a++){
		cout<<"Value dari Array ke- "<<a<<": "<<c[a]<<endl;
	}
	
	return 0;
}