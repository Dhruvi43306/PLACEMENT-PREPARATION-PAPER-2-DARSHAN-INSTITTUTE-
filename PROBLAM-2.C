// WRITE A PROGRAM TO CHECK WHETHER GIVEN NUMBER IS PRIME OR NOT

#include<stdio.h>
int main(){
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);

   int isPrime = 1;
   if(n <= 1){
        isPrime = 0;
   }
   else{
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            isPrime = 0;
            break;
            
        }
    }
   }
   if (isPrime) {
        printf("Prime Number.");
    } else {
        printf("Not Prime Number.");
    }

    return 0;
}