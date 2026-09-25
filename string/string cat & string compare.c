#include <stdio.h>
#include<string.h>
int main() {
    char m[]="Welcome,";
    char username[20];
    
    scanf("%s",&username);
    strcat(m,username);
    printf("%s!\n",m);
    
    printf("%d",strcmp(m,username));
    
    return 0;
}