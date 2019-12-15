#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
void MySplit(char s[],char s1[],char w[][1001],int &size){
	char ss[10001];
	int k=0;
	char *pc=NULL;
	strcpy(ss,s);
	pc=strstr(ss,s1);

	while(pc!=NULL){
		strcpy(w[k],ss);
		w[k][pc-&ss[0]]=0;
		strcpy(&ss[0],pc+strlen(s1));
		k++;
		pc=strstr(ss,s1);
	}
	strcpy(w[k++],ss);
	size=k;
}
void MySplitI(char s[],char s1[],char w[][1001],int &size){
	char ss[10001],s2[10001];
	char ss1[101];
	int k=0;
	char *pc=NULL;
	
	strcpy(ss1,s1);
	strlwr(ss1);
	strcpy(ss,s);
	strcpy(s2,s);
	strlwr(ss);
	pc=strstr(ss,ss1);
	while(pc!=NULL){
		strcpy(w[k],s2);
		w[k][pc-&ss[0]]=0;
		strcpy(&ss[0],pc+strlen(ss1));
		strcpy(&s2[0],&s2[0]+strlen(w[k])+strlen(ss1));
		k++;
		pc=strstr(ss,s1);
	}
	strcpy(w[k++],ss);
	size=k;
	
}
void Replace(char s[],char s1[],char s2[]){
	char w[100][1001];
	int i,n;
	MySplit(s,s1,w,n);
	strcpy(s,w[0]);
	{
	
	for(i=1;i<n;i++){
			strcat(s,s2);
			strcat(s,w[i]);
		}}
		

	
}
char* mystrreverse(char s[]){
	char t;
	for(int i=0,j=strlen(s)-1;j>i;j--,i++){
		t=s[i];
		s[i]=s[j];
		s[j]=t;
	}	
	return s;	
}
int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char s[1001],s1[101],s2[1001];
	gets(s);
	fflush(stdin);
	gets(s1);
	strcpy(s2,s1);
	mystrreverse(s2);
	Replace(s,s1,s2);

  
  
  
  
  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
	puts(s);







  
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
