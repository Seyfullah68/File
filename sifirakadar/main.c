#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("sifir.txt","w");
    char dizi[30];
    fflush(stdin);
    if(dosya==NULL)
    {
        printf("dosya bulunamadi");
    }

    else
    {
        while(1)
        {
            printf("mesaji giriniz\n");
            gets(dizi);
            if(dizi[0]=='0')
            {
                exit(1);
            }
            else
            {
                fprintf(dosya,"%s",dizi);
            }
            fprintf(dosya,"\n");
        }
        fclose(dosya);
    }
    return 0;
}
