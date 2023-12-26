#include <stdio.h>
#include <stdlib.h>

struct ogrenci{
char isimsoyisim[30];
char ders[10];
int vize1,vize2,finalnot;
};
int main()
{
    FILE *dosya;
    dosya=fopen("notlar.txt","w");
    int n,i;
    float ort;
    printf("kac adet ogrenci olacak\n");
    scanf("%d",&n);
    struct ogrenci leo[n];
    if(dosya!=NULL)
    {
        for(i=0;i<n;i++)
        {
            fflush(stdin);
            printf("ogrenci ismi:\n");
            gets(leo[i].isimsoyisim);
            printf("ders adi:\n");
            gets(leo[i].ders);
            printf("vize 1\n");
            scanf("%d",&leo[i].vize1);
            printf("vize 2\n");
            scanf("%d",&leo[i].vize2);
            printf("final\n");
            scanf("%d",&leo[i].finalnot);
            ort=(float)leo[i].vize1*0.2+(float)leo[i].vize2*0.2+(float)leo[i].finalnot*0.6;
            fprintf(dosya,"\t%s\t%s\t%d  %d  %d  %.2f\n\n",leo[i].isimsoyisim,leo[i].ders,leo[i].vize1,leo[i].vize2,leo[i].finalnot,ort);

        }
    }
    return 0;
}
