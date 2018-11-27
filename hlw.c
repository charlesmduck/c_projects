#include <stdio.h>

int main(void)
{
	int height;
	int length;
	int width;
	int volume;

	height = 8;
	length = 12;
	width = 10;
	volume = height*length*width;

	printf("Volume: %d\n", volume);

	return 0;
}

