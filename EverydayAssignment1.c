/* generate a random character from the set of '0' to '9' and 'A' to 'F',
   and then it will print the beautiful message showing the randomly generated character.
   As the seed for the random number generator is based on the current time,
   running the program multiple times in quick succession and
   will produce different random characters.*/ 
   
#include <stdio.h>  /* This line includes the standard input/output library,
                       which is necessary for functions like printf and scanf. */
#include <stdlib.h> /* This line includes the standard library,
                       which provides functions for memory allocation,
                       random number generation, and other utility functions. */
#include <time.h>   /* This line includes the time library,
                       which is used to work with time-related functions.
                       in this code - for generate the random number generator with the current time */

int main() 
{
    srand(time(NULL)); 
    /* This sets the seed value for the random number generator to the current time,
	   ensuring different random values on each program run. */

    char avi[] = "0123456789ABCDEF";
    /*  This line defines a character array called charSet,
	    which contains the characters '0' to '9' followed by 'A' to 'F'.
		This character set represents all the possible characters
		from which we can choose a random character.  */
    
	char avish = avi[rand() % 16];
	/* This line accesses the randomNum-th element of the charSet array,
	   which gives us the character at that position.
	   Since "rand() % 16" is in the range 0 to 15,
	   it will correspond to one of the characters in the character set. */

    printf("The Randomly Generated Character is %c.\n", avish);

    return 0;
}
