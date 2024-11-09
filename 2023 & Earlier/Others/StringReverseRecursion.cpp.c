#include <stdio.h>
#include <stdlib.h>

void rev(char *str, int i)
{
    if(str[i]==NULL){
        return;
    }
    rev(str, i+1);
    printf("%c", str[i]);
}
int main()
{
    char str[]="ABCDEF";
    int n;
    n=strlen(str);
    rev(str,0);
    return 0;
}
