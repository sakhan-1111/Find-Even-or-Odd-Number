#include <stdio.h>
#include <conio.h>

int main()
{
    int n;
    printf("Enter the number to check if Even or Odd: ");
    scanf("%d", &n);

    if((n%2)==0){
        printf("The entered number is Even");
    }

    else{
    printf("The entered number is Odd");
    }
return 0;
}
