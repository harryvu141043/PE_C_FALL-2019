#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void init(int a[],int n,int x){
	for(int i=0;i<n;i++){
		a[i]=x;
	}
}
void Delete(int a[],int &n,int vt){
	for(int i=vt;i<n;i++){
		a[i]=a[i+1];
	}
	n--;
}

int Searchlinear(int a[],int n,int x){
	for(int i=0;i<n;i++){
		if(a[i]==x){
			return i;
		}
	}
}
int demchuso(int a){
	int count=0;
	if(a==0){
		
		return count=1;
	}
	while(a!=0){
		count++;
		a/=10;
	}
	return count;
}
int Find(int a[],int n,int type){
	int vt=0;
	for(int i=1;i<n;i++){
		if((a[vt]<a[i])==type){
			vt=i;
	}
	}
	return vt;
}
void Nhapmang(int a[],int n){
	
	for(int i=0;i<n;i++){
		printf("nhap [%d]",i);
		scanf("%d",&a[i]);
	}
}
void find_elmnt_appear_most(int a[],int n){
	int b[n];
	init(b,n,1);
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(b[i]==-1){
				continue;
			}
			if(a[i]==a[j]){
				b[i]++;
				b[j]=-1;
			}
		}
	}
	int max=b[Find(b,n,1)];
	
	for(int i=0;i<n;i++){
		if(b[i]==max){
			printf("%d ",a[i]);
		}
	}
	printf("\n");
	
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
  int n=7;
	int a[n];
  Nhapmang(a,n);
 	for(int i=0;i<n;i++){
 		if(demchuso(a[i])!=2){
 			Delete(a,n,i);
 			i--;
		}
	}
  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	if(n==0){
		printf("no two digit number");
	}
	else
		find_elmnt_appear_most(a,n);
		







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
