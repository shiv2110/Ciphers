#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000

int main()
{

    int k, i = 0, y;
     int n;
     char hat;
     char c[M], ct[M], pt[M];

   printf("---------------Cipher Text---------------\n");
  printf("Enter the string without spaces:");
  gets(ct);

 printf("Enter the key number(0<key<25) : ");
 scanf("%d",&k);

 for(i=0; i<strlen(ct); i++){
        if(ct[i] >= 'A' && ct[i] <= 'Z'){
            if((ct[i]-k) >= 65)
               pt[i] = ct[i] - k;
            else
                pt[i] = ct[i] - k + 26;

        }

       else if(ct[i] >= 'a' && ct[i] <= 'z'){
            if((ct[i]-k) >= 97)
               pt[i] = ct[i] - k;
            else
                pt[i] = ct[i] - k + 26;

        }


 }

  printf("---------------Plain Text---------------\n");
  printf("The following plain text is : ");

 for(i=0; i<strlen(ct); i++){
   printf("%c",pt[i]);
 }


   getch();
   return 0;
}









