#include <stdio.h>

int main() {
	FILE *file;
	char ch;
	file=fopen("abul.txt","r");
	if(file==null){
	    printf("file doesnt exist");
	}
	else{
	    printf("File is opened\n");
	    while(!feof(file)){
	        ch=fgetc(file);
	        printf("%c",ch);
	    }
	    while(!feof(file)){
	        fgets(ch,39,file);
	        printf("%s\n",ch);
	    }
	    fclose(file);
	}
    return 0;
}

