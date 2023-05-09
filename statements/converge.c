#include<stdio.h>
#include<string.h>

void converge(char *targ,char *src);

int main(void){

char target[80] = "XXXXXXXXXXXXXXXXXXXXXXXXXXXXX";

converge(target, "this is a test of converge().");

printf("Final String: %s\n",target);


    return 0;
}

void converge(char *targ,char *src){
    printf("%s\n",targ);
    printf("%s", src);
for(int i =0, j = strlen(src); i<=j;i++,j--){
targ[i] = src[i];
targ[j] = src[j];
printf("%s\n",targ);


}


}