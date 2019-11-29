#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void revStr(char *ptr)
{
   int len = strlen(ptr)-1;
   int i;
   char temp;
   for(i=0;i<len/2;i++,len--)
      {
         temp = ptr[i];
         ptr[i] = ptr[len];
         ptr[len] = temp;
      
      }
  printf("%s\n",ptr);
}

int main()
{

   char str[] = "hello world";
   revStr(str);

   return 0;

}
