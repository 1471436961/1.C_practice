/*************************************************************************
	> File Name: 3.test.c
	> Author: 
	> Mail: 
	> Created Time: Wed 11 Jan 2023 02:52:57 PM CST
 ************************************************************************/

#include <stdio.h>
int main(){
    int n;
    char str[100] = {0};
    int arr[4];
    scanf("%d", &n);
    printf("%d\n", n);
    sprintf(str, "%d.%d.%d.%d", 192, 168, 0, 1);//多一个参数(相关字符数组的首地址),常用于字符串拼接
    printf("str = %s\n", str);
    sscanf(str, "%d.%d.%d.%d", &arr[0], &arr[1], &arr[2], &arr[3]);
    for (int i = 0; i < 4; i++){
        printf("%d\n", arr[i]);
    }
    FILE *fp = fopen("./output", "a+");
    fprintf(fp, "str = %s\n", str);
    fclose(fp);
    char temp[100][100] = {0};
    int k = 0;
    fp = fopen("./output", "r");
    while(fscanf(fp, "%[^\n]s", temp[k++]) != EOF){
        fgetc(fp);
    }
    fclose(fp);
    for(int i = 0; i < k; i++){
        printf("%s\n", temp[i]);
    }
    return 0;
}
