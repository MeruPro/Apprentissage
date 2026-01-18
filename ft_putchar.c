#include <unistd.h>

// Ecrire une fonction qui ecris un caractère


void ft_putchar(char c){
	write(1, &c, 1);
}

int main(){
	ft_putchar('D');
	ft_putchar('a');
	ft_putchar('n');
	ft_putchar('y');
	ft_putchar('\t');

	write(1, "Netra", 5);

}
