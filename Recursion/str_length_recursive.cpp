#include<bits/stdc++.h>
using namespace std;
int length(char s[]) {
    if(s[0] == '\0') {
        return 0;
    }
    return length(s + 1) + 1;
}
int main() {
    char str[100];
    cout << "Enter The String: " << endl;
    cin >> str;
    cout << "Length of Given String is: " << length(str) << endl;
}