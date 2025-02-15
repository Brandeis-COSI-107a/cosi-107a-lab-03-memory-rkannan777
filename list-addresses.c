#include <stdio.h>

int uninitialized_var;

void another_function() {}

int main()
	int stack_var = 42;
	const char* str = "Hello, world!";

	printf("stack variable: %p\n", &stack_var);

	printf("initialized data: %p\n", str);

	printf("uninitialized data: %p\n", &uninitialized_var);

	printf("main: %p\n", &main);

	printf("function: %p\n", &another_function);

	return 0;
}
