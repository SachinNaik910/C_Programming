 /* print Fahrenheit-Celsius table
 for fahr = 0, 20, ..., 300 */
#include <stdio.h>

 main()
 {
 float fahr, celsius;
 int lower, upper, step;
 lower = 0; /* lower limit of temperature scale */
 upper = 300; /* upper limit */
 step = 20; /* step size */
 fahr = lower;
 while (fahr <= upper) {
 celsius = 5.0 / 9.0 * (fahr-32);
 //celsius = 5 * (fahr-32)  9;
 printf("%3.0f %3.1f\n", fahr, celsius);
 fahr = fahr + step;
 }
 printf("%7d",12345);
 }
	
