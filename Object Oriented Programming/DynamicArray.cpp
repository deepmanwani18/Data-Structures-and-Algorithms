#include<bits/stdc++.h>
using namespace std;
#include"DynamicArrayClass.cpp" 
int main() {
    DynamicArray d1;
    d1.push(10);
    d1.push(20);
    d1.push(30);
    d1.push(40);
    d1.push(50);
    d1.push(60);
    d1.push(70);
    d1.push(80);
    d1.push(90);

    DynamicArray d2(d1);
    DynamicArray d3;
    d3 = d1;
    d1.insert(0, 69);
    d1.print();
    d2.print();
    d3.print();
}