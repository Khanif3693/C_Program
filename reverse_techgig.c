#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

    char* orignial(char* input1)
    {

    char * oddposition;  //odd position element
    char * evenposition; // even position element
    oddposition = (char *)malloc(512000 * sizeof(char));
    evenposition = (char *)malloc(512000 * sizeof(char));

        int l=0,j=0;
        int i= strlen(input1); //length
        int k, m = i;



     if( i % 2 == 0) // if length is even

     {
        for( k = 0; k <= i ; k=k+2 )
        {
            * (evenposition + j) = * (input1 + k);
            j++;
        }
        for(k = 1; k <= i ; k=k+2 )
            {
            * (oddposition + l) = * (input1 + k);
            l++;
            }
        strrev(evenposition);

        strcat(evenposition,oddposition);
        * (evenposition + m) = '\0';


     }

     else //if length is odd

    {
            for( k = 0; k <= i ; k=k+2 )
                {
                * (oddposition + j) = * (input1 + k);
                j++;
                }
            for(k = 1; k <= i ; k=k+2 )
                {
                * (evenposition + l) = * (input1 + k);
                l++;
                }
            strrev(evenposition);
            strcat(evenposition,oddposition);
               * (evenposition + m) = '\0';

    }

return evenposition;


        //Write code here
    }





int main() {
    char* output;
    char* ip1;
    int i=0;
    ip1 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip1);
    char * temp;
    temp = (char *)malloc(512000 * sizeof(char));
   output = orignial(ip1);
    printf("\n%s\n", output);

  //temp = ip1;v
   //  *(temp + 0) = * (ip1 + 3);
    //printf("%c", *(temp + 0));



}




/*This file is the reverse of the techgig file. 

for example: in tehgig file input was abcde
and output was cbdae


i this file input will be cbdae
 and output will be abcde
 
 
 */
