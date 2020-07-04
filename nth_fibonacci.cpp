#include<bits/stdc++.h>
int fibonacci(int n) {
    //base case(s)
    if(n == 0) {            //0th Fibonacci Number is 0
        return 0; 
    }
    if(n == 1) {            //1st Fibonacci Number is 1
        return 1;
    }
    //recursion
    return fibonacci(n-1) + fibonacci(n-2);
}
using namespace std;
int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;
    cout << n <<"th fibonacci number is: " << fibonacci(n) << endl;
}