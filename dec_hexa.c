
  
#include <stdio.h>
  
int main()
{
  
    int decimal_Number = 45;
    int i = 1, j, temp;
    char hexa_Number[100];
    
    
    while (decimal_Number != 0) {
        int ch = decimal_Number / 16;
        int r = ch * 16;
        temp = decimal_Number - r;
        
  
        if (temp < 10)
            temp = temp + 48;
        else
            temp = temp + 55;
        hexa_Number[i++] = temp;
        decimal_Number = decimal_Number / 16;
    }
    
  
    printf("Hexadecimal value is: ");
    for (j = i - 1; j > 0; j--)
        printf("%c", hexa_Number[j]);
  
    return 0;
}
