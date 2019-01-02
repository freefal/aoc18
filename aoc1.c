#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char *line;
    size_t size = 20;
    line = (char *)malloc(size * sizeof(char));
    int cum = 0;

    while (getline(&line, &size, stdin) != -1) {
	cum += atoi(line);
    }

    printf("Final value = %d\n", cum);
}
