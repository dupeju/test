#include <stdio.h>

main (){
	float celsius, fahr;
	
	int upper, lower, step;
	upper = 300;
	lower = 0;
	step = 20;
	
	celsius = lower;
	printf("celsius\tfahr\n");
	while (celsius <= upper){
		fahr = (9.0 / 5.0) * celsius + 32.0;
		printf("%3.0f%6.1f\n", celsius, fahr);
		celsius += step;
	}
}
