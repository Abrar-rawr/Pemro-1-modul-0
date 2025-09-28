#include <stdio.h>
int main()
{
    char *red = "\033[1;31m";
    char *reset = "\033[0m";
    printf("Selamat Pagi, %sNama Anda%s\n\n", red, reset);
    printf("Selamat Siang, %sNama Anda%s\n\n", red, reset);
    printf("Selamat Malam, %sNama Anda%s\n\n", red, reset);
    return 0;
}