#include <stdio.h>
int main() {
	char name1[]="Sylhet Engineering College\n";
	name1[3]= 'T';
	name1[10]= 'U';
	printf("%s\n",name1);
	printf("%s \t %s\n",name1[3],name1[10]);
    return 0;
}

