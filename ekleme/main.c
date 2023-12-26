#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("bilgi.txt","a");
    int i;
    char dizi[10];
    printf("mesaji giriniz\n");
    gets(dizi);
    for(i=0;dizi[i-1];i++)
    {
        putc(dizi[i],dosya);
    }

    fclose(dosya);
    return 0;
}
