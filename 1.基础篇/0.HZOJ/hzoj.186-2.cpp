/*************************************************************************
	> File Name: hzoj.186-2.cpp
	> Author: 
	> Mail: 
	> Created Time: Thu 06 Jul 2023 10:56:34 PM CST
 ************************************************************************/

#include<iostream>
#include <vector>
using namespace std;

int f(int i, vector<int> &arr, int n) {
    if (i >= n) return 0;
    return f(i + arr[i], arr, n) + 1;
}

int main() {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0, a; i < n; i++) {
        cin >> a;
        arr.push_back(a);
    }
    cout << f(0, arr, n) << endl;
    return 0;
}
