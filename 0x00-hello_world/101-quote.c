#include <unistd.h>
#include <fcntl.h>
#include <string.h>

/**
 * main - Entry point
 * Return: 1 (fail)
 */
int main(void)
{ 
	char message[] = "and that piece of art is useful\" - Dora Korpar, \
			  2015-10-19\n";
 	int fd = open("/dev/stderr", O_WRONLY);
	write(fd, message, strlen(message));
	close(fd);
	return(1);
}
