#include<iostream>
using namespace std;

    int fib(int n){
        if(n<2){
            return 1;
        }
        return fib(n-2) + fib(n-1);
    }
    int factorial (int n){
        if (n<=1){
            return 1;
        }
        return n* factorial (n-1);
    }

int main(){ 
      int a;
      cout<<"enter the value "<<endl;
      cin>>a;
    //   cout<<"the factorial of " <<a<<  " is "  << factorial(a)<<endl;
    cout<<"the term in fibocani sequence at position " <<a<< " is "<<fib(a)<<endl;
return 0;
}