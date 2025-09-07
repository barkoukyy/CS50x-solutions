#include <stdio.h>
#include <cs50.h>
int main (void) {
int i = 0;
int j = 0;
int height = 0;
while (height < 1){
height = get_int ("height: ");
}
for(i=1; i <= height; i++)
{for (j=0; j<height-i;j++)
    {
        printf(" ");
    }
    for(j=0; j < i; j++)
printf ("#");
printf ("\n");
}

}
