#include <stdio.h>
#include <stdlib.h>

int main()
{
    //FILE *dosya;

    /*char k1[50],k2[50];
    int sayi;

    if((dosya=fopen("bak.txt","r"))!=NULL)
    {
        fscanf(dosya,"%s",&k1);
        fscanf(dosya,"%s",&k2);
        fscanf(dosya,"%d",&sayi);
        printf("%s  %s  %d",k1,k2,sayi);
    }

*/
    /*char k[50][50];
    int i=0;

    if((dosya=fopen("leoc.txt","r"))!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s",&k[i]);
            printf(" %s",k[i]);
            i++;

        }
    }
    else
    {
        printf("dosya bos");
    }

    fclose(dosya);*/

    /*FILE *dosya;
    dosya=fopen("ogrenci.txt","r");
    char numara[10][10],isim[10][10];
    int not[10];
    int i=0;
    if(dosya!=NULL)
    {
        while(!feof(dosya))
        {
            fscanf(dosya,"%s %s %d",&numara[i],&isim[i],&not[i]);
            printf("%s %s %d\n",numara[i],isim[i],not[i]);
            i++;
        }
    }
    else
    {
        printf("dosya bulunamadi");
    }
    fclose(dosya);*/

    FILE *dosya;
    dosya=fopen("paragraf.txt","r");
    char x;
    if(dosya!=NULL)
    {
        x=fgetc(dosya);
        while(x!=EOF)
        {
            printf("%c",x);
            x=fgetc(dosya);
        }
    }
    else{
        printf("dosya bulunamadi");
    }
    fclose(dosya);
    return 0;
}
