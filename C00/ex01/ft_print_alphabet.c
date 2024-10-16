#include <unistd.h>

void ft_print_alphabet(void){

	char initialLetter = 'a';
	char letter;

	while(initialLetter <= 'z'){
		letter = initialLetter;

		write(1, &letter, 1);

		initialLetter++;
	}
}
