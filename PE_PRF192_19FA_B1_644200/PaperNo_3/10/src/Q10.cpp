#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
bool CheckPrime(int n){
	if(n<2){
		return false;
	}
	if(n==2 || n==3 || n==5){
		return true;
	}
	if( n%2==0 || n%3==0 || n%5==0){
		return false;
	}
	for(int i=5;i*i<n;i+=6){
		if((n%i==0) || (n%(i+2)==0)) {
			return false;
		}
	}
	return true;
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  if(CheckPrime(n)){
  	printf("Not Prime");
  }
  else{
  	printf("Prime");}








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
