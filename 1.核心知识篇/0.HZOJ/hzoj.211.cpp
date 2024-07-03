/*************************************************************************
	> File Name: hzoj.211.cpp
	> Author: 
	> Mail: 
	> Created Time: Wed 17 May 2023 05:51:14 PM CST
 ************************************************************************/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    string str[35];
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> str[i];
        reverse(str[i].begin(), str[i].end());
    }
    sort(str, str + n);
    for (int j = 0; j < n; j++) {
        cout << str[j] << endl;
    }
    return 0;
}

