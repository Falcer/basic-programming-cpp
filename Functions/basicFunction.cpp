#include<iostream>
// #include<typeinfo>
#include<string>
using namespace std;

//C++ is top-down programming and it reads block of codes from top, you can declare function from top and initialize the body like this
string printOut(){
    string word2 = "World Hello";  //This one is local variable. It only declared and can be used in printOut function scope.
    string word = "Hello World";    //This one is local variable. It only declared and can be used in printOut function scope.
    return word;
}
//Or you can declare function and initialize the body anywhere.
int numbers();

int a = 255; //This one is global variable. Declared outside the main, printOut, numbers scope so the variable can be used in any scope.

//Function with parameters
double calculate(double operand1, double operand2, char ops);
void menu();
void showString(string text1, string text2, string text3);

int main(){
    int b = 88;

    menu();

    return 0;
}

int numbers() {   
    // a += b;
    return a;
}

void menu(){
    int choice;

    cout<<"Welcome to basic function with C++\nPlease select the input you desire: "<<endl;
    cout<<"1.Basic Function print out string\n2. Basic function print out numbers\n3. Function with 3 String Parameters\n4. Calculator Function\nYour Choice: ";
    cin>>choice;

    if(choice == 1){
        cout<<printOut();
    } else if(choice == 2){
        cout<<numbers();
    } else if(choice == 3){
        showString("Hello", "World", "Test123");
    } else if(choice == 4){
        double a,b,c;
        char op;

        cout<<"Masukkan angka pertama: ";
        cin>>a;
        cout<<endl<<"Masukkan angka kedua: ";
        cin>>b;
        cout<<endl<<"Masukkan operator: ";
        cin>>op;
        c = calculate(a, b, op);

        cout<<"Hasil dari "<<a<<" "<<op<<" "<<b<<" = "<<c<<endl;
    } else {
        cout<<"Error!";
    }
}

void showString(string text1, string text2, string text3){
    cout<<"Your first word is " <<text1<<endl;
    cout<<"Your second word is "<<text2<<endl;
    cout<<"Your third word is "<<text3<<endl;
}

double calculate(double operand1, double operand2, char ops) {
    double hasil;

    if(ops == '+'){
        hasil = operand1 + operand2;
    } else if(ops == '-') {
        hasil = operand1 - operand2;
    } else if(ops == '*'){
        hasil = operand1 * operand2;
    } else if(ops == '/'){
        hasil = operand1 / operand2;
    } else {
        cout<<"Error!";
    }

    return hasil;
}