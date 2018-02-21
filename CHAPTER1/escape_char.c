/*ESCPAE CHARACTER*/
#include<stdio.h>

main() {
 printf("Hear beep sound in 2 second\n");
 sleep (2); /*2 sec*/
 printf("\a"); /*beep sound*/
 printf("helloworld\b\b\b\bnikshith\n"); /*backsapce by one for each \b but does not delete the char justoves back */
 printf("Carriage \rreturn\n"); /*move cursor to the beggining for the same line*/
 printf("Nikshith\tNaik\n"); /* horizonatl tab*/
 printf("Nikshith\vNaik\f\n"); /* vertical tab does not work and form feed does not work ->new page works in printer not in vdu*/
 printf("special char in escape \" \\ \? \'  \n"); /*extra escape char*/
 printf("Nitesh\xANaik\xANisha\012Naik"); /*HEX ans OCTAL->default \12=> OCTAL*/
 return 0;
}
