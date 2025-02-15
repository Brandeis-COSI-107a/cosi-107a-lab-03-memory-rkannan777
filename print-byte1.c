#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <numbers>\n", argv[0]);
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		int num = strtol(argv[i], NULL, 0);
		int byte1 = (num >> 8) & 0xFF;
		printf("%d 0x%2X %3d\n", i, byte1, byte1);
	}

	return 0;
}
