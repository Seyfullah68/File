#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    char satir[100],dosyaismi[100];
    char *karak;
    printf("dosya ismini giriniz\n");
    gets(dosyaismi);
    dosya=fopen(dosyaismi,"r");
    if(dosya==NULL)
    {
        printf("hataaa");
    }
    else
    {
        do
        {
            karak=fgets(satir,100,dosya);
            if(karak!=NULL)
            {
                printf("%s",satir);
            }

        }while(karak!=NULL);
        fclose(dosya);

    }
    return 0;
}
