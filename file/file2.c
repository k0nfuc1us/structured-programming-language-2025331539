#include <stdio.h>
#include<string.h>

int main() {
	FILE=*file;
	char name[]="Mohin uddin alam";
	int length = strlen(name);
	int name,age;
	if (file==null){
	    printf("File doesnt exist");
	}
	else{
	    printf("File is opened\n");
	    printf("Enter University name :\n");
	    fputs(name,file);
	    fputs("\n",file);
	    printf("Enter name and age :\n",);
	    gets(name);
	    scanf("%d",&age);
	    fprintf(file,"%s\t%d\n",name,age);
	    printf("\nFile is written");
	    fclose(file);
	}
}

