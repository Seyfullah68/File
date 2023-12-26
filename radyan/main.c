#include <stdio.h>
#include <stdlib.h>
#define PI 3.14

int main()
{
    FILE *dosya;
    dosya=fopen("radyan.txt","w");
    int i;
    double sinus,cosinus;
    if(dosya==NULL)
    {
        printf("dosya bulunamadi");
    }
    else
    {
        fprintf(dosya,"  derece\tsin\tcos\n");
        fprintf(dosya,"\n");
        for(i=0;i<=360;i++)
        {
            sinus=sin(i*PI/180);
            cosinus=cos(i*PI/180);
            fprintf(dosya,"%d\t%lf\t%lf\n",i,sinus,cosinus);
        }
        fclose(dosya);
    }
    return 0;
}
