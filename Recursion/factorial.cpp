#include<bits/stdc++.h>
using namespace std;
int factorial(int n) {
    //base case
    if(n == 0) {
        return 1;
    }
    //recursion 
    return n*factorial(n-1);
}
int main() {
    int n;
    cout << "Enter a Number: " ;
    cin >> n;
    cout << "Factorial of " << n << " is: " << factorial(n)<< endl; 
}
