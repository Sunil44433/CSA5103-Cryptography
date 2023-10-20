#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	printf("enter the plaintext:");
	gets(a);
	for(int i=0;i<strlen(a);i++){
		printf("%c",a[i]+1);
	}
	return 0;}