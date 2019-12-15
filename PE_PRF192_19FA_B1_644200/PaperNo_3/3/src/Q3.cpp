#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void swap(float &a,float &b)//pass by address
{
float t=a;
	a=b;
	b=t;
}
void Nhapmang(float a[],int n){
	
	for(int i=0;i<n;i++){
//		printf("nhap [%d]",i);
		scanf("%.4f",&a[i]);
	}
}
void Xuatmang(float a[],int n){
	for(int i=0;i<n;i++){
//		printf("[%d]",i);
		printf("%f ",a[i]);
	}
}
void Sort(float a[],int n,int type){
	int i=0,j;
	while(i<n-1){
		j=i+1;
		while(j<n){
			if(a[i]<a[j]==type){
				swap(a[i],a[j]);
			}
            j++;
        }
        i++;
		}
}

int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  float a[5];
  Nhapmang(a,5);
  Sort(a,5,1);
  
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  Xuatmang(a,5);








  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
