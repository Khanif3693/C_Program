#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

    char* orignial(char* input1)
    {

    char * temp;   //declare a temp char pointer to point the middle element
    temp = (char *)malloc(512000 * sizeof(char)); //Allocate memory
        int j= 0; // initialize the pointer location
        int i= strlen(input1); // length of the input string


        while(i > 0) //will perform  this operation until the length of the string is 0 (until finishing the process)
        {
        if (i == 1)
        {


              * (temp + j) = * (input1 + i-1); // if only one element in the string left
         j++;
         i--;
         break;
        }

            if (i % 2 == 0) //if string length is multiple of
        {
         * (temp + j) = * (input1 + i/2 ); //store the middle element
         j++;  // increase the pointer

        for (int k= i/2; k< i ; k++)
        {

            * (input1 + k) = * (input1 + k+1); //delete the middle element from the input string

        }

        }
        if( i % 2 != 0) // if string length is not multiple of 2
        {
            * (temp + j) = * (input1 + i/2 ); //store the middle element
         j++; //increment pointer location

        for (int k= i/2 ; k< i ; k++)
        {

            * (input1 + k) = * (input1 + k+1); //delete the middle element from the input string

        }


        }

    i--;}
 * (temp + j) = '\0'; //final element of the string pointer
return temp;



    }





int main() {
    char* output;
    char* ip1;
    ip1 = (char *)malloc(512000 * sizeof(char));
    scanf("\n%[^\n]",ip1);
   output = orignial(ip1);
    printf("\n%s\n", output);
}
 
 
 
 /*
 input: abcde
 output: cbdae
 Always it will take the middle element first  (if number is odd) or the n/2 in integer element if the number is even.
 
 
 for example:
 
 input is abcde
 then c is middle element so it will come first then starts with c. (where b will be considered as our second element which is our (n/2+1th
 i.e. 5/2 = 2.5  (in integer 3rd element)
  
 in second iteration input string will be abde (without c) so in this case n=4 so 2nd element is our element. and so on.
 
 therefore output will be cbdae.
