#include <stdio.h>
 

int myAtoi(char* str)
{
    
    int res = 0;
 
    
    for (int i = 0; str[i] != '\0'; ++i)
        res = res * 10 + str[i] - '0';
 
    
    return res;
}
 

int main()
{
    char str[] = "89789";
   
    
    int val = myAtoi(str);
    printf("%d ", val);
    return 0;
}
