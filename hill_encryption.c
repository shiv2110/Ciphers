#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define M 1000
#define K 100


char convert(int);
char change(int);

int main()
{
  int i, j, k, l=0, m=0, t=0, n, s=0;
  int digits[K][K], num[K][K], c[K][K], a[K][K];
  char pt[M], key[K], ct[M];

  printf("Enter the plain text (Take care of padding): ");
  gets(pt);

  printf("Enter the key (length of the key should be a perfect square): ");
  gets(key);

  n = sqrt(strlen(key));

  if(strlen(pt) % n != 0){
    printf("Please add the padding terms like 'X's at the end to make length of plain text perfectly divisible by that of key\n");
  }
else{
        printf("------plain text matrix------\n");
  for(i=0; i<sqrt(strlen(key)) && t<strlen(pt); i++){

    for(j=0; j<strlen(pt)/sqrt(strlen(key)) && l<strlen(pt); j++){
            if(pt[l] >= 'A' && pt[l] <= 'Z'){
                digits[i][j] = pt[l]%65;
            }
            else if(pt[l] >= 'a' && pt[l] <= 'z'){
                digits[i][j] = pt[l]%97;
            }
            printf("%d ",digits[i][j]);
            l+=sqrt(strlen(key));
    }
    t++;
    l = t;
    printf("\n");
  }

        printf("------key matrix------\n");
  for(i=0; i<sqrt(strlen(key)); i++){
    for(j=0; j<sqrt(strlen(key)) && m<strlen(key); j++){
            if(key[m] >= 'A' && key[m] <= 'Z'){
                 num[i][j] = key[m]%65;
            }
            else if(key[m] >= 'a' && key[m] <= 'z'){
                 num[i][j] = key[m]%97;
            }
            printf("%d ",num[i][j]);
            m++;

    }
    printf("\n");
  }


  for(i=0; i<sqrt(strlen(key)); i++){
        c[i][j] = 0;
  for(j=0; j<strlen(pt)/sqrt(strlen(key)); j++){
    for(k=0; k<sqrt(strlen(key)); k++){
            c[i][j] = c[i][j] + num[i][k]*digits[k][j];

    }

    }

  }

printf("------The number matrix of cipher text------\n");
 for(i=0; i<sqrt(strlen(key)); i++){
    for(j=0; j<strlen(pt)/sqrt(strlen(key)); j++){
       a[i][j] = c[i][j]%26;
       printf("%d ",a[i][j]);
    }
    printf("\n");
 }
printf("The following cipher text is :");


for(j=0; j<strlen(pt)/sqrt(strlen(key)); j++){
  for(i=0; i<sqrt(strlen(key)) && s<strlen(pt); i++){
        if(pt[s] >= 'A' && pt[s] <= 'Z'){
             ct[s] = change(a[i][j]);
        }
        else if(pt[s] >= 'a' && pt[s] <= 'z'){
             ct[s] = convert(a[i][j]);
        }
      printf("%c",ct[s]);
      s++;

    }

 }

}

   getch();
   return 0;
}

char change(int numb){
      char beta;

      switch(numb){
       case 0 :
               beta = 'A';
                break;
       case 1 :
               beta = 'B';
                break;
       case 2 :
               beta = 'C';
                break;
       case 3 :
                beta = 'D';
                break;
       case 4 :
                beta = 'E';
                break;
       case 5 :
               beta = 'F';
                break;
       case 6:
                beta = 'G';
                break;

       case 7 :
               beta = 'H';
                break;
       case 8 :
                beta = 'I';
                break;
       case 9 :
               beta = 'J';
                break;
       case 10 :;
                beta = 'K';
                break;
       case 11 :
                beta = 'L';
                break;
       case 12 :
               beta = 'M';
                break;
       case 13 :
                beta = 'N';
                break;

       case 14 :
               beta = 'O';
                break;
       case 15 :
                beta = 'P';
                break;
       case 16 :
                beta = 'Q';
                break;
       case 17 :
                beta = 'R';
                break;
       case 18 :
               beta = 'S';
                break;
       case 19 :
                beta = 'T';
                break;
       case 20 :
                beta = 'U';
                break;

       case 21 :
                beta = 'V';
                break;
       case 22 :
               beta = 'W';
                break;
       case 23 :
                beta = 'X';
                break;
       case 24 :
                beta = 'Y';
                break;
       case 25 :
                beta = 'Z';
                break;
         default :
                beta = '\0';

      }

return beta;
}

char convert(int numb){
      char beta;

      switch(numb){
       case 0 :
               beta = 'a';
                break;
       case 1 :
               beta = 'b';
                break;
       case 2 :
               beta = 'c';
                break;
       case 3 :
                beta = 'd';
                break;
       case 4 :
                beta = 'e';
                break;
       case 5 :
               beta = 'f';
                break;
       case 6:
                beta = 'g';
                break;

       case 7 :
               beta = 'h';
                break;
       case 8 :
                beta = 'i';
                break;
       case 9 :
               beta = 'j';
                break;
       case 10 :;
                beta = 'k';
                break;
       case 11 :
                beta = 'l';
                break;
       case 12 :
               beta = 'm';
                break;
       case 13 :
                beta = 'n';
                break;

       case 14 :
               beta = 'o';
                break;
       case 15 :
                beta = 'p';
                break;
       case 16 :
                beta = 'q';
                break;
       case 17 :
                beta = 'r';
                break;
       case 18 :
               beta = 's';
                break;
       case 19 :
                beta = 't';
                break;
       case 20 :
                beta = 'u';
                break;

       case 21 :
                beta = 'v';
                break;
       case 22 :
               beta = 'w';
                break;
       case 23 :
                beta = 'x';
                break;
       case 24 :
                beta = 'y';
                break;
       case 25 :
                beta = 'z';
                break;
         default :
                beta = '\0';

      }

return beta;
}








