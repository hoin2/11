#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i=10;
	char c='a';
	int*iptr;
	char*cptr;
	
	iptr=&i;
	cptr=&c;
	
	int*iptr2;
	iptr2=&iptr;
	
	printf("i:%p\n%p(size:%i)\n",iptr,&i,sizeof(iptr));
	printf("c:%p\n%p(size:%i)\n",cptr,&c,sizeof(cptr));
	printf("iptr2:%p,%i\n",iptr2,*iptr2);
	
	return 0;
}
