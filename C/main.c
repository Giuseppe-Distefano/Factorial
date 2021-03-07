#include <stdlib.h>
#include <stdio.h>

int Factorial (int num) {
	if (num == 0) return 1;		// 0! = 1
	else return (num * Factorial (num-1));		// num! = num * (num-1)!
}

int main (int argc, char **argv) {
	int num, res;

	// Input
	if (argc == 2) num = atoi (argv[1]);
	else {
		fprintf (stdout, "Enter number: ");
		fscanf (stdin, "%d", &num);
	}

	// Output
	res = Factorial (num);
	fprintf (stdout, "%d! = %d \n", num, res);

	return 0;
}
