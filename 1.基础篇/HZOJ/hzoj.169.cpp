/*************************************************************************
	> File Name: hzoj.169.c
	> Author: 
	> Mail: 
	> Created Time: Fri 05 May 2023 11:23:37 PM CST
 ************************************************************************/
#include <iostream>
#include <string>
using namespace std;

int main() {
    int n, num[128] = {0};
    cin >> n;
    for (int i = 0; i < n; i++) {
        char a;
        int b;
        cin >> a >> b;
        num[(int)a] = b;
    }
    string str;
    cin >> str;
    int ans = 0;
    for (int j = 0; j < str.size(); j++) {
        ans += num[(int)str[j]];
    }
    cout << ans << endl;
    return 0;
}

