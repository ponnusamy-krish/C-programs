#include <stdio.h>
#include <stdbool.h>

bool checkyear(int year)
{
 if(year % 400 == 0){
    return true;
 }
else if(year % 100 == 0){
    return false;
}
else if (year % 4 == 0){
    return true;
}else{
    return false;
}
}

int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    checkyear(year) ? printf("It is a leap year") : printf("It is not leap Year");
}