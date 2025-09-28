#include <stdio.h>
int main()
{
    char *red = "\033[1;31m";
    char *reset = "\033[0m";
    printf("##############################\n\n");
    printf("#                            #\n\n");
    printf("#         %sNama Anda%s          #\n\n", red, reset);
    printf("#            %sNIM%s             #\n\n", red, reset);
    printf("#                            #\n\n");
    printf("##############################\n\n");
    return 0;
}