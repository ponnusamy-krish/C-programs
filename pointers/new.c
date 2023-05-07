#include<stdio.h>

int main(){
    int target,source;
    int *m;
    source = 10;
    m = &source;
    target = *m;
    printf("%d",target);

    return 0;
}