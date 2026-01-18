#include <unistd.h>

char lettre = 'z';

// void ft_print_reverse_alphabet(){}
int main(void){
	while(lettre >= 'a'){
			
	write(1, &lettre, 1);
	write(1, "\n", 1);
	lettre--;
	}
}	
