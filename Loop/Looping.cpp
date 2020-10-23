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
		} else if(choice == 3){
			isRepeat = false;
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
