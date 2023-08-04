#include <stdio.h>

main (){
	float celsius;
	float fahr;

	int upper = 300;		
	int lower = 0;		
	int step = 20;	
	printf("fahr\tcelsius\n");
	fahr = lower;
	while (fahr <= upper){
		celsius = 5.0 * (fahr -32.0) / 9.0;
		printf("%.0f\t%.2f\n",fahr,celsius);
		fahr += step;
		}
}
