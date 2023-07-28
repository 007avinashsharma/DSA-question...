// to uderstand this see comments in EverydayAssignment1.c
// we're doing the same thing here that we did there, but here we're doing it for like string
#include <stdio.h>  
#include <stdlib.h> 
#include <time.h>

int main()
{
    srand(time(NULL)); 
    /* This sets the seed value for the random number generator to the current time,
	   ensuring different random values on each program run. */

    // Generate a random length between 3 to 10 characters
    int L = rand() % 8 + 3; // Random number between 3 and 10 

    // Generate the random alphanumeric string of the specified length(randomly)
    char avi[L + 1]; // +1 for the null character
    char domain[] = "0123456789ABCDEF";
    /*  This line defines a character array called domain,
	    which contains the characters '0' to '9' followed by 'A' to 'F'.
		This character set represents all the possible characters
		from which we can choose a random character.  */
    int i;
    for (i = 0; i < L; i++)
	{
    	// Generate a random index to access a character from the charset
        int index = rand() % (sizeof(domain) - 1);
        avi[i] = domain[index];
    }
    avi[L] = '\0'; // Null terminator to indicate the end of the string

    // Print the random alphanumeric string
    printf("The Randomly Generated Alphanumeric Character is %s\n", avi);

    return 0;
}

/* the program generates a random alphanumeric string of
   random length between 3 to 10 characters and prints the output message as required. */
