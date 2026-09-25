#include <stdio.h>
#include<string.h>

int main() {
	FILE=*file;
	char name[]="Mohin uddin alam";
	int length = strlen(name);
	int i;
	file=fopen("ab12","w");
	for(i=;i<length;i++){
	    fputc(name[i],file)
	}
	fclose(file);
    return 0;
}

