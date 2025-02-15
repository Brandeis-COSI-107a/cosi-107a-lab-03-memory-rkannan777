#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>

int main(int argc, char *argv[]) {
	if (argc < 2) {
		printf("Usage: %s <decimal numbers>\n", argv[0]);
		return 1;
	}

	for (int i = 1; i < argc; i++) {
		uint64_t num = strtoull(argv[i], NULL, 10);
		printf("0x%0121X\n", num & 0xFFFFFFFFFFFF);
	}

	return 0;
}
