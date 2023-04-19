#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello, World!\n");
    FILE *archivo = freopen("output.txt", "w", stdout);
    printf("Hello, World!\n");
    fclose(archivo);
    freopen("/dev/tty", "w", stdout);
    return 0;
}
