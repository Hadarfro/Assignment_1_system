  #include <stdio.h>
  #include "NumClass.h"
   

int main(){
    int num1;
    int num2;

    scanf("%d\n", &num1);
    scanf("%d\n", &num2);

    printf("prime number between 2 nums:");
    for(int i=num1; i <= num1; ++i){
        if(isPrime(i)){
            printf("%d", i);
        }
    }

     printf("strong number between 2 nums:");
    for(int i=num1; i<=num1; ++i){
        if(isStrong(i)){
            printf("%d",i);
        }
    }

     printf("armstrong number between 2 nums:");
    for(int i=num1; i<=num1; ++i){
        if(isArmstrong(i)){
            printf("%d",i);
        }
    }

     printf("palindrome number between 2 nums:");
    for(int i=num1; i<=num1; ++i){
        if(isPalindrome(i)){
            printf("%d",i);
        }
    }

return 0;

}
