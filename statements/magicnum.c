#include<stdio.h>
#include<stdlib.h>

int main(){
    int magic_num;
    int guess_num;
    magic_num = rand() % 100 + 1;

    while(guess_num != magic_num){
    printf("Guess the number: ");
    scanf("%d", &guess_num);
    if(guess_num == magic_num) 
    {
        printf("You are right!\n The magic number is %d\n", magic_num);
        break;

    }else{

        if(guess_num > magic_num){
            printf("too high\n");
            
        }else if (guess_num < magic_num){
            printf("too low\n");
        }
        
    }
    continue;
    }

    
    return 0;
}