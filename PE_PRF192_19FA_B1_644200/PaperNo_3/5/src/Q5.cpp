#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void Nhapmang(int a[],int n){
	
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n,sum=0;
  scanf("%d",&n);
  int a[n];
  Nhapmang(a,n);
  for(int i=0;i<n;i++){
  	if(a[i]%2==0){
  		sum+=a[i]*a[i];
	  }
  }

  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:

printf("%d",sum);






  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
