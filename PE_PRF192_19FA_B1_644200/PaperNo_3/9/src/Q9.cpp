#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int sumofdigits(int n){
	int sum=0;
	while(n!=0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n,sum;
	scanf("%d",&n);
	sum=sumofdigits(n);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
printf("%d",sum);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
