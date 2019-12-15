#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n;
  scanf("%d",&n);
 
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  
	for(int i=n;i>=1;i--){
		for(int j=n-i;j>=1;j--){
			printf(" ");
		}
		for(int k=i;k>=1;k--){
			printf("*");}
		printf("\n");
	}








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
