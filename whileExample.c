#include <stdio.h>

int main(){
int i = 1;
printf("While bucle example:\n");
while (i <= 10)
{
    printf("%d\n",i);
    i = i + 1;
}

// OPTION 2 - DO WHILE
int x = 10;

do {
    printf("%d\n", x);
    x = x - 1;

} while (x >= 0);

return 0;

}