#include <stdio.h>
int main(){
	float celsius,fahrenheit;
	printf("nhap nhiet do theo celsius: ");
	scanf("%f",&celsius);
	//cong thuc chuyen doi selsius sang fahrenheit
	fahrenheit = ( celsius * 9 / 5 ) + 32;
	printf("nhiet doi theo fahrenheit la: %.2f\n ",fahrenheit);
	return 0;
}

