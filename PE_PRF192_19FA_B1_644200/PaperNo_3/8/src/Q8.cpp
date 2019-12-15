#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char c;
	scanf("%c", &c);
	int n=c,count=0,k=c;
	int a[64];
	while(n!=0||count<4){
		a[count++]=n%8;
		n/=8;
	}

	
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	printf("%d ",k);
	for(int i=count-1;i>=0;i--){
		printf("%d",a[i]);
	}//@STUDENT: EDIT THIS LINE TO HAVE DESIRED OUTPUT







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
