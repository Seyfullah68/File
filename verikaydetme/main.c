#include <stdio.h>
#include <stdlib.h>

int main()
{
   /* FILE *dosya;
    dosya=fopen("leo.txt","w");
    fclose(dosya);*/
    /*FILE *dosya;
    dosya=fopen("apa.txt","w");
    char isim[]="kral apachi";
    fprintf(dosya,"apachi : %s",isim);
    fclose(dosya);*/

   /* FILE *dosya;
    dosya=fopen("carpim.txt","w");
    int i,j;
    for(i=1;i<=10;i++)
    {
        for(j=1;j<=10;j++)
        {
            fprintf(dosya," %d * %d = %d\n",i,j,i*j);
        }
        fprintf(dosya,"\n");
    }
    fclose(dosya);*/
    FILE *dosya;
    dosya=fopen("ogrenci.txt","a");
    char isim[10],okul[10];
   /* printf("isim:");gets(isim);
    printf("okul:");gets(okul);
    fprintf(dosya,"\n%s \n%s",isim,okul);*/
    fputs("naberr",dosya);
    fclose(dosya);
    return 0;
}
