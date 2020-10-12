#include <stdio.h>
#include <stdlib.h>

#define RED         "\033[31m"
#define BRIGHT_RED  "\033[91m"
#define RESET_COLOR "\033[0m"

#define BOLD_ON  "\033[1m"
#define BOLD_OFF "\033[0m"

#define P_ERR(fmt, ...) \
	fprintf(stderr, RED BOLD_ON "%s: %d: " BOLD_OFF RESET_COLOR fmt "\n", __FILE__, __LINE__, ## __VA_ARGS__)

int main(int argc, char *argv[])
{
	int *a;

	a = malloc(-1);

	if (a == NULL) {
		P_ERR("Failed to allocate bytes");
		P_ERR("Failed to allocate bytes %zu", -1UL);
		//fprintf(stderr, "%s: %d: Failed to allocate memory\n", __FILE__, __LINE__, );
		return 1;
	}

	return 0;
}
