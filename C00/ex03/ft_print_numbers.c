#include <unistd.h>

void ft_print_numbers(void){

	char initialNumber = '0';
	char number;

	while (initialNumber <= '9'){
		number = initialNumber;
		write(1, &number, 1);
		initialNumber++;
	}
}
