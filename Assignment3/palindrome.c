#include<stdio.h>

int main() {
    char str[] = "soni";
    int size = (sizeof(str)/sizeof(char))-1;

    int ans = 0;
    for (int i = 0; i < size/2; i++)
    {
        if(str[i] == str[size-i-1]) {
            ans = 1;
        }else {
            ans = 0;
            break;
        }
    }
    printf("%d",ans);
}