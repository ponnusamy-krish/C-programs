#include<stdio.h>

int main(){
    extern int first,last;
    printf("%d %d", first, last);
    return 0;
}

int first=10,last = 30;