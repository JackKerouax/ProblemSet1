/* This file is a simple C program to display the sequence below on the screen: 
           "           "
		++++++++++
		++++++++++
		++++++++++
		++++++++++
		++++++++++ 

To compile and run this program type:
gcc ProblemSet1.3.c -o ProblemSet1.3 && ./ProblemSet1.3
 */


//A preprocessor commands that tells compiler to 
//include the contents of stdio.h and stdlib.h file.
#include <stdio.h>
#include <stdlib.h>


/* A function named "main." Every C program begins with the main() function."main"is where the program starts when executed.
*/

int main(int argc, char const *argv[]) {

	//Declare and initialize variables
	char *str = "++++++++++";

	//Print the value 5 times with 5 linefeed in between
	printf(" %s %c %s %c %s %c %s %c %s %c",str, '\n', str, '\n',str, '\n',str, '\n',str, '\n'); 



	return 0; //Exit status of 0 to signify that the program reached the end
}