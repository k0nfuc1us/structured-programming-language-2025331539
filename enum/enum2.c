#include <stdio.h>
enum day {mon=3,tue,wed,thr,fri,sat,sun};
int main(){
    enum day today;
    today=wed;
	printf("%d",today);
	return 0;
	
}

