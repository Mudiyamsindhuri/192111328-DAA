#include <stdio.h>
#include <string.h>
int main(void)
{
    char mystrg[60];
    int len, i;
    printf("insert the string to reverse: ");
    scanf( "%s", mystrg );
    len = strlen(mystrg);
    for(i = len - 1; i >= 0; i--) 
	{
        printf("%c", mystrg[i]);        
    }
    return 0;
}


