#include<bits/stdc++.h>
using namespace std;
void removeX(char str[]) {
    if(strlen(str) == 0) {
        return;
    }
    removeX(str + 1);
    if(str[0] == 'x' ) {
        int i;
        for(i = 1; str[i] != '\0'; i++) {
            str[i-1] = str[i];
        }
        str[i-1] = '\0';
    }
}
int main() {
    char str[100];
    cout << "Enter String which has character 'x' in it: ";
    cin >> str;
    removeX(str);
    cout << "String after removing 'x' from it: "<< str << endl;
}