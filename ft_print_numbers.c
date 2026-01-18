#include <unistd.h>

// void ft_print_numbers(void){}
int main(){
	for(char i = '0'; i <= '9'; i++){
	       write(1, &i, 1);
		write(1, "\t", 1);
	}
}	
