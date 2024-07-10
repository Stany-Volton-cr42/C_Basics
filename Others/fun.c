#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <stdlib.h>
void main()
{
    int count = 500;
    while (count -- )
    {
        sound(10*random(100));
        delay(75);
        nosound();
        textattr(random(16)+ 'a'+ "BLINK");
        cprintf("Love\3");
 
    }
}