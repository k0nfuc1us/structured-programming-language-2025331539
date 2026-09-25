#include <stdio.h>

int main() {
	char p[]="All roads leads to rome";
	int i;
	int LL=strlen(p);
	printf("String len is %d\n",LL);
	for(i=0;i<3;++i){
	    printf("%c\t",p[i]);
	}
    return 0;
}

