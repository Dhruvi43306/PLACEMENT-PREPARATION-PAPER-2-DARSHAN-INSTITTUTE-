// WRITE A PROGRAM TO CONVERT NUMBERS INTO EQUVALENT CHARCTER IN GIVEN STRING.
//a2b3cd = abbcccd

#include<stdio.h>
#include<ctype.h>
int main(){
    char ch[100];
    
    printf("Enter a string:");
    scanf("%s",ch);

    int i = 0;
    while(ch[i] != '\0'){
        if(isalpha(ch[i])){
            printf("%c",ch[i]);
        }
        else if(isdigit(ch[i])){
            int count = ch[i] - '0';
            for(int j = 1; j < count; j++){
                printf("%c",ch[i+1]);
            }
        }
        i++;
    }
}