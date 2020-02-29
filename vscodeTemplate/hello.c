#include <stdio.h>

int main(int argc, char** argv)
{
	printf("hello world\n");
	printf("%s\n", *argv);
	printf("%s\n", *(argv + 1));

	return 0;
}