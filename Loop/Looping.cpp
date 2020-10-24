#include <iostream>
using namespace std;

void basicLoop();
void makeTriangle(int row);
void insertArray2D();

int main (){
	int rows;
	int choice;
	bool isRepeat = true;
	
	while(isRepeat == true){
	cout<<"Looping and Functions\n===========================================================================\n";
	cout<<"1. Making Triangle with nested loops"<<endl;
	cout<<"2. Inserting 2 dimension array with nested loops"<<endl;
	cout<<"Masukkan pilihan anda: ";
	cin>>choice;
		if(choice == 1){
			isRepeat == false;
			cout<<"Masukkan banyaknya baris yang diinginkan: ";
			cin>>rows;
			makeTriangle(rows);
			break;			
		} else if(choice == 2){
			isRepeat = false;
			insertArray2D();
		} else {
			cout<<"Error! Pilihan tidak tersedia\n\n";
			isRepeat = false;
		}	
	}
	return 0;
}

void makeTriangle(int row){
	for(int i = 1; i <= row; i++){
		for(int j = 1; j <= i; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	cout<<endl<<endl<<"Inverted style\n\n";
	
	for(int a = row; a >= 1; --a){
		for(int b = 1; b <= a; ++b) {
			cout<<"*";
		}
		cout<<endl;
	}
}

void insertArray2D(){
	int arr[3][3];

	for(int j = 0; j < 3; j++){
		for(int o = 0; o < 3; o++){
			cout<<"Masukkan angka["<<j<<"]["<<o<<"]: ";
			cin>>arr[j][o];
		}
	}

	for(int s = 0; s < 3; s++){
		for(int d = 0; d < 3; d++){
			cout<<"Angka["<<s<<"]["<<d<<"]: "<<arr[s][d]<<endl;
		}
	}

	cout<<endl<<endl;
	for(int x = 0; x < 3; x++){
		for(int z = 0; z < 3; z++){
			cout<<arr[x][z]<<" ";
		}
		cout<<endl;
	}
}
