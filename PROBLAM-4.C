// WRITE A PROGRAM BINARY NUMBER TO DECIMAL NUMBER.

#include<stdio.h>
int main(){
    int binary,rem = 0,base = 1,decimal=0;
    printf("Enter a Binary Number:");
    scanf("%d",&binary);

    while(binary > 0){
        rem = binary % 10;
        decimal = decimal + rem * base;
        base*=2;
        binary/=10;
    }

    printf("Decimal Number = %d", decimal);
}