#include <stdio.h>

int main()
{
    char a[100],b[100];
    int c;
    scanf("%s %s",&a ,&b);

    c=strcmp(a,b);
//    if(c==0){
//        printf("palindrome");
//    }
//    else{
//        printf("not palindrome");
//    }
    strcat(a,b);
    printf("%s",a);
    c=strlen(a);
    printf("%d",c);
    return 0;
}
