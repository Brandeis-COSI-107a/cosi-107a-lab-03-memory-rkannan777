#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <numbers>\n", argv[0]);
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		int num = strtol(argv[i], NULL, 10);
		int low_bits = num & 0xFF;
		printf("%d 0x%02X %3d\n", i, low_bits, low_bits);
	}

	return 0;
}
