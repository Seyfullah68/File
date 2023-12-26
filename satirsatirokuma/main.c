#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya=fopen("satir.txt","r");
    char *karakter;
    char satirr[100];
    if(dosya!=NULL)
    {
        do
        {
            karakter=fgets(satirr,100,dosya);
            if(karakter!=NULL)
            {
                printf("%s",satirr);

            }
        }while(karakter!=NULL);
    }
    fclose(dosya);
    return 0;
}
