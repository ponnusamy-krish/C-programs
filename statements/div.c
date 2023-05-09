#include<stdio.h>

int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a,&b);
    if(b) printf("The answer is %d", a/b);
    else printf("Cannot divide by Zero....");
    return 0;

}