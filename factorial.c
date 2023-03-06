#include<stdio.h>
int fact(int num);

int main(){

int res ;
res = fact(4);
printf("%d", res);
}


int fact(int num){
int initialNum = 1;

for(int i = 2; i <=num;i++){

initialNum*=i;

}
return initialNum;
}