#include <unistd.h>;

void ft_print_reverse_alphabet(void){

	char initialLetter = 'z';
	char letter;

	while (initialLetter >= 'a'){

		letter = initialLetter;

		write(1, &letter, 1);

		initialLetter--;
	}

}
