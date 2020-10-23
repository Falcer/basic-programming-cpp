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
double calculate(double operand1, double operand2, char operator);
void menu();
void showString(string text1, string text2, string text3);

int main(){
    int b = 88;
    string line = printOut();
    int number = numbers();

    cout<<line<<endl<<number;
    
    // cout<<endl<<typeid(number).name()<<endl;
    return 0;
}

int numbers() {   
    // a += b;
    return a;
}

double calculate() {

}