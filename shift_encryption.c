#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000

int main()
{

    int k, i = 0, y;
     int n;
     char hat;
     char c[M], pt[M], ct[M];

  printf("--------------Plain Text---------------\n");
  printf("Enter the string without spaces:");
  gets(pt);

 printf("Enter the key number(0<key<25) : ");
 scanf("%d",&k);

 for(i=0; i<strlen(pt); i++){
        if(pt[i] >= 'A' && pt[i] <= 'Z'){
            if((pt[i]+k) <= 90)
               ct[i] = pt[i] + k;
            else
                ct[i] = pt[i] + k - 26;

        }

       else if(pt[i] >= 'a' && pt[i] <= 'z'){
            if((pt[i]+k) <= 122)
               ct[i] = pt[i] + k;
            else
                ct[i] = pt[i] + k - 26;

        }


 }

 printf("---------------Cipher Text---------------\n");
 printf("The following cipher text is : ");

 for(i=0; i<strlen(pt); i++){
   printf("%c",ct[i]);
 }


   getch();
   return 0;
}









