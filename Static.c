#include<stdio.h>
void series(void);
int main(){

series();
series();
series();
series();
    return 0;
}

void series(void){
   static int series_num = 100;
    series_num += 23;
    printf("%d\n",series_num);
    
}