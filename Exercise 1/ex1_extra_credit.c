#include <stdio.h>

/* This is a comment */
int main(int argc, char *argv[])
{
	int distance = 100;
	char* strings = "strings";
	
	// this is also a comment
	printf("You are are %d miles away.\n", distance);
	
	// extra credit, five more lines
	printf("This is just a line.\n");
	printf("Can I have %s?\n", strings);
	printf("\tDoes this tab?\n");
	printf("What is this doing?\a\n");
	printf("Can I beep\a\a\a\a\a\a\a\a\a\a\a\n");
	
	return 0;
} 