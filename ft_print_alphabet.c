#include <unistd.h>

char lettre = 'a';

// void ft_print_alphabet(char lettre){}
int main(){
	while(lettre <= 'z'){
		write(1, &lettre, 1);
		write(1, "\n", 1);
		lettre++;
	}
}
