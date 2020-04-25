#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000
#define K 100

int main()
{
 int i, j, k, l=0, s;
 char mat[M][M], key[K], pt[M], swap;

 printf("Enter the plain text (Spaces can be considered): ");
 gets(pt);

 printf("Enter the key without repeated characters (Preferably only in either uppercase or lowercase): ");
 gets(key);

for(i=0; i<strlen(pt); i++){
    if(pt[i] == ' ')
        pt[i] = '_';
 }



if(strlen(pt)%strlen(key) == 0){
       s = strlen(pt)/strlen(key)+1;
    }else{
       s = strlen(pt)/strlen(key)+1+1;
    }




 for(i=0; i<strlen(key); i++){
   printf("%c ",key[i]);
 }
printf("\n");
printf("-------Plain text and key matrix------\n");
 for(i=0; i<s; i++){
    for(j=0; j<strlen(key) && l<strlen(pt); j++){
        mat[0][j] = key[j];
        if(i>0){
            mat[i][j] = pt[l];
            l++;
        }
    }

 }

 for(i=0; i<s; i++){
    for(j=0; j<strlen(key); j++){
       printf("%c ",mat[i][j]);
    }
   printf("\n");
 }


   for(j=0; j<strlen(key); j++){

   for(k=j+1; k<strlen(key); k++){

               if(mat[0][j] > mat[0][k]){
                     for(i=0; i<s; i++){
                swap = mat[i][j];
                mat[i][j] = mat[i][k];
                mat[i][k] = swap;
                     }
               }


    }

 }

 printf("\n");

 for(i=0; i<s; i++){
    for(j=0; j<strlen(key); j++){
       printf("%c ",mat[i][j]);
    }
   printf("\n");
 }

 printf("The following cipher text is: ");


for(j=0; j<strlen(key); j++){
  for(i=1; i<s; i++){
       printf("%c",mat[i][j]);
    }

 }


    getch();
    return 0;
}









