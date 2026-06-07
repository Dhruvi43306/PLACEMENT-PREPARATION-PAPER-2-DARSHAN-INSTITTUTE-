// ACCEPT A NUMBER BETWEEN 0 AND 9,99,999 FROM THE USER AND DISPLAY THE VALUEIN WORDS,
// FOR EXAMPLE, ENTERING 25 SHOULD DISPLAY 'TWENTY-FIVE'.APPROPRITE ERROR MESSAGE SHOULD BE DISPLAY
// IF THE VALUE ENTERED BY THE USER IS OUT OF PERMISSIBLE RANGE.

#include<stdio.h>
char *ones[] = {
    "", "ONE", "TWO", "THREE", "FOUR",
    "FIVE", "SIX", "SEVEN", "EIGHT", "NINE",
    "TEN", "ELEVEN", "TWELVE", "THIRTEEN", "FOURTEEN",
    "FIFTEEN", "SIXTEEN", "SEVENTEEN", "EIGHTEEN", "NINETEEN"
};

char *tens[] = {
    "", "", "TWENTY", "THIRTY", "FORTY",
    "FIFTY", "SIXTY", "SEVENTY", "EIGHTY", "NINETY"
};

void printword(int n)
{
    if(n >= 100000)
    {
        printword(n / 100000);
        printf(" LAKH ");
        n %= 100000;
    }

    if(n >= 1000)
    {
        printword(n / 1000);
        printf(" THOUSAND ");
        n %= 1000;
    }

    if(n >= 100)
    {
        printword(n / 100);
        printf(" HUNDRED ");
        n %= 100;
    }

    if(n >= 20)
    {
        printf("%s ", tens[n / 10]);
        n %= 10;
    }

    if(n > 0)
    {
        printf("%s ", ones[n]);
    }
}
int main(){
      int num;

    printf("Enter a number (0 to 999999): ");
    scanf("%d", &num);

    if (num < 0 || num > 999999) {
        printf("Error: Number out of permissible range.");
        return 0;
    }
    if(num == 0){
        printf("ZERO");
    }
    else{
        printword(num);
    }
}

