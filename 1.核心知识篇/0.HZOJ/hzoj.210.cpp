/*************************************************************************
	> File Name: hzoj.210.c
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 04:42:35 PM CST
 ************************************************************************/
 #include <iostream>
 #include <string>
 #include <algorithm>
using namespace std;

int main() {
    int n;
    string str[30];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
    }
    sort(str, str + n);
    for (int j = 0; j < n; j++) {
        if (j) cout << " ";
        cout << str[j];
    }
    printf("\n");
    return 0;
}
