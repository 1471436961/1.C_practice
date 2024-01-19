/****************************************************************mmZ
	> Author: 
	> Mail: 
	> Created Time: Fri 17 Mar 2023 11:46:29 PM CST
 ************************************************************************/
#include <stdio.h>
#define MAX_N 1000000

int max(int n, int arr[]) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int temp = 0;
    for (int j = 0; j < n; j++) {
        if (arr[j] > temp) {
            temp = arr[j];
        }
    }
    return temp;
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[MAX_N + 5] = {0};
    printf("%d\n", max(n, arr));
    return 0;
}

