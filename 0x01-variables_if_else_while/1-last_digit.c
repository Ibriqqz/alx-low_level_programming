#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	    int n;
	        srand(time(0));
		    n = rand();
		        
		        int lastDigit = n % 10;
			    
			    printf("Last digit of %d is ", n);
			        
			        if (lastDigit > 5) {
					        printf("and is greater than 5\n");
						    } else if (lastDigit == 0) {
							            printf("and is 0\n");
								        } else {
										        printf("and is less than 6 and not 0\n");
											    }
				    
				    return 0;
}

