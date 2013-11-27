#include "stdafx.h"
#include <cstdio>
#include <conio.h>
#include <locale.h>
#include <cstring>

void SolveRepeat()
{    
    char word1[20]="\0";
	char word2[20]="\0";
     setlocale(LC_ALL,"Russian");  
  gets(str);	
  puts(str);
  int p=0; int n; int num1 , len1;
 int len=strlen(str);
    while (p<=len && str) {
		n=0;
		num1=p;
		while ((str[p]=' ' || str[p]=',' || str[p]='.'|| str[p]='!' || str[p]='?'|| str[p]=':'|| str[p]=';') && p<=len) {
			word1[n]=str[p];
			n++;p++;
		}
		len1=strlen(word1);
		
		if (str[p]=' ' || str[p]=',' || str[p]='.'|| str[p]='!' || str[p]='?'|| str[p]=':'|| str[p]=';') p++;

		 bool flag=true; int y=0;
		while (y<=len && str && flag) {

			n=0; 
			while ((str[y]=' ' || str[y]=',' || str[y]='.'|| str[y]='!' || str[y]='?'|| str[y]=':'|| str[y]=';') && y<=len) {
			  if (y==num1) y+=len1+1;
				word2[n]=str[y];
				n++;y++;
			}
			if (str[y]=' ' || str[y]=',' || str[y]='.'|| str[y]='!' || str[y]='?'|| str[y]=':'|| str[y]=';') y++;
				
	 
			if (strcmp(word1,word2)==0) flag=false;
		}

		if (flag) puts(word1);

	}
}