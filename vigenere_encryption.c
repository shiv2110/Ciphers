#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define M 1000
#define K 100


int convert(char);
char change(int);

int main()
{

int i=0, j=0, k, n, m, digits;
char key[K], ct[M], newkey[M], pt[M], hat;

printf("Enter the plain text with ONLY CAPITAL LETTERS : ");
gets(pt);

printf("Enter the key with ONLY CAPITAL LETTERS: ");
gets(key);


n = strlen(pt);
m = strlen(key);

int num[n];

for(i=0, j=0; i<n; i++, j++){
    if(j == m)
        j = 0;
    newkey[i] = key[j];
}


for(i=0; i<n; i++){

digits = (convert(pt[i]) + convert(newkey[i]))%26;
num[i] = digits;

}

k = sizeof(num)/sizeof(num[0]);
/*
for(i=0; i<k; i++){

printf("%d ",num[i]);

}*/

printf("\n");

for(i=0; i<k; i++){
   hat = change(num[i]);
   pt[i] = hat;
}


printf("The following cipher text is : ");
for(i=0; i<n; i++){

printf("%c",pt[i]);

}




   getch();
   return 0;
}

int convert(char alpha){
      int num;

      switch(alpha){
       case 'A' :
                num = 0;
                break;
       case 'B' :
                num = 1;
                break;
       case 'C' :
                num = 2;
                break;
       case 'D' :
                num = 3;
                break;
       case 'E' :
                num = 4;
                break;
       case 'F' :
                num = 5;
                break;
       case 'G' :
                num = 6;
                break;

       case 'H' :
                num = 7;
                break;
       case 'I' :
                num = 8;
                break;
       case 'J' :
                num = 9;
                break;
       case 'K' :
                num = 10;
                break;
       case 'L' :
                num = 11;
                break;
       case 'M' :
                num = 12;
                break;
       case 'N' :
                num = 13;
                break;

       case 'O' :
                num = 14;
                break;
       case 'P' :
                num = 15;
                break;
       case 'Q' :
                num = 16;
                break;
       case 'R' :
                num = 17;
                break;
       case 'S' :
                num = 18;
                break;
       case 'T' :
                num = 19;
                break;
       case 'U' :
                num = 20;
                break;

       case 'V' :
                num = 21;
                break;
       case 'W' :
                num = 22;
                break;
       case 'X' :
                num = 23;
                break;
       case 'Y' :
                num = 24;
                break;
       case 'Z' :
                num = 25;
                break;
         default :
                num = -1;



      }



return num;
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








