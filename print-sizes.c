#include <stdio.h>

int main() {
	int my_int = 978;

	int *int_ptr;

	char my_char_array[200];

	char *char_ptr;

	printf("size of char is %zu\n", sizeof(char));
	printf("size of short is %zu\n", sizeof(short));
	printf("size of int is %zu\n", sizeof(int));
	printf("size of long is %zu\n", sizeof(long));
	printf("size of long long is %zu\n", sizeof(long long));
	printf("size of float is %zu\n", sizeof(float));
	printf("size of double is %zu\n", sizeof(double));
	printf("size of char * is %zu\n", sizeof(char *));
	printf("size of int * is %zu\n", sizeof(int *));
	printf("size of long * is %zu\n", sizeof(long *));

	printf("The size of my character array is %zu\n", sizeof(my_char_array));

	char_ptr = my_char_array;

	printf("The size of my character pointer is %zu\n", sizeof(char_ptr));

	int_ptr = &my_int;

	printf("The size of my int pointer is %zu\n", sizeof(int_ptr));

	printf("The size of what my integer pointer points at is %zu\n", sizeof(*int_ptr));

	return 0;
}
