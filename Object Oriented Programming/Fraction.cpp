#include<bits/stdc++.h>
#include"FractionClass.cpp"
using namespace std;

int main() {
    int a1,b1;
    cin >> a1 >> b1;
    int a2, b2;
    cin >> a2 >> b2;
    Fraction f1(a1, b1);
    Fraction f2(a2, b2);
    Fraction f3 = f1.add(f2);
    f3.printFraction();
    f1.multiply(f2);
    f1.printFraction();
    f3.printFraction();
}
