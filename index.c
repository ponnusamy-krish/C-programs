#include<stdio.h>

int main(){
    char alphabet;
    printf("Enter a Alphabet ");
    scanf("%c", &alphabet);

    tolower(alphabet);
    if(alphabet == 'a' || 'e' || 'i' || 'o' || 'u'){
        printf("It is a vowel \n");
    }else{
        printf("It is a consonant \n");
    }

    return 0;
}