#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000
#define K 100

int main()
{
 int i, j, k, l=0, m, n=0, s;
 char mat[M][M], key[K], ct[M], swap, pt[M][M];

 printf("Enter the cipher text (Spaces can be considered): ");
 gets(ct);

 printf("Enter the key without repeated characters (Preferably only in either uppercase or lowercase): ");
 gets(key);

for(i=0; i<strlen(ct); i++){
    if(ct[i] == '_')
        ct[i] = ' ';
 }


 if(strlen(ct)%strlen(key) == 0){
       s = strlen(ct)/strlen(key)+1;
    }else{
       s = strlen(ct)/strlen(key)+1+1;
    }





 for(i=0; i<strlen(key); i++){
   printf("%c ",key[i]);
 }
printf("\n");
printf("-------Cipher text and key matrix------\n");
 for(i=0; i<s; i++){
    for(j=0; j<strlen(key); j++){
        mat[0][j] = key[j];

        }
    }


   for(j=0; j<strlen(key); j++){

   for(k=j+1; k<strlen(key); k++){

               if(mat[0][j] > mat[0][k]){

                swap = mat[0][j];
                mat[0][j] = mat[0][k];
                mat[0][k] = swap;

               }


    }

 }

 for(j=0; j<strlen(key); j++){
  for(i=1; i<s && l<strlen(ct); i++){
       mat[i][j] = ct[l];
       l++;
    }

 }









 for(i=0; i<s; i++){
    for(j=0; j<strlen(key); j++){
       printf("%c ",mat[i][j]);
    }
   printf("\n");
 }


 for(m=0; m<strlen(key); m++){
    for(j=0; j<strlen(key); j++){
           if(key[m] == mat[0][j]){

                   for(i=1; i<s && n<strlen(key); i++){
                     pt[i-1][n] = mat[i][j];

                   }
                   n++;

          }
      }

 }

 printf("\n");

 printf("The following plain text is : ");

for(i=0; i<s; i++){
        for(j=0; j<strlen(key); j++){
    printf("%c",pt[i][j]);
}
}








    getch();
    return 0;
}










