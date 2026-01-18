#include <unistd.h>

int main(){
	char n = '0';
	if(n < '0'){
	       write(1, "Négative", 8);	
	} else {
		write(1, "Positive", 8);
	}	

}
