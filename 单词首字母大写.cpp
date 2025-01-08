#include<stdio.h>
int main()
{
	char ch;
	int s;
	s=0;
	while((ch=getchar())!='\n') //遇到换行停止循环
	{
		if(ch==' ')
		s=0;
		else if(s==0)
        //首字母大写 1）开头第一个字母大写 so设s=0  2）空格后的字母要大写 so遇到空格时s=0
		{
			s=1;//当第一个字母大写后，s=1，之后再次遇到空格后才会大写 即s再次为0
			if(ch<='z'&&ch>='a')
			ch=ch-'a'+'A';
		}
		putchar(ch);
	}
	return 0;
 } 


  
 数组法：
#include <stdio.h>
#include <stdlib.h>
 
 
int main() 
{
 
   char a[10000];
   gets(a);
   int i=0;
   int count=0;
   int flag=0;
   for(i=0;i<strlen(a);i++)
{	  
   	  if(a[i]!=32)
{
   	  	 count++;   
   	  }
	  else
	  {
	  	   if(count!=0)	
		    {	  
		        	
				if(a[i-count]>='a'&&a[i-count]<='z') a[i-count]-= 32;
			  	count=0;
	  	    }
	  }   	 	  
   }
   if(count>0)
{    
   	  if(a[i-count]>='a'&&a[i-count]<='z') 
      {
          a[i-count]-= 32;
      }
   } 
   for(i=0;i<strlen(a);i++)
{
   		printf("%c",a[i]);
   } 
	return 0;
}