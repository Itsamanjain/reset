#include <iostream>
using namespace std;
int main() {
    cout << "Hello ";
   
   int num1, num2;
    cout<< "enter the value of num 1: \n"; //is this called insertion operator
    cin>>num1 ; // ">> extraction operator"
    cout<< "enter the value of num 2: \n"; //is this called insertion operator
    cin>>num2 ;

    cout<<"the sum is "<< num1+num2;
     
    return 0;
}