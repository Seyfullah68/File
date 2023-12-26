#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *d1,*d2,*d3;
    char kar;
    d1=fopen("bilgi.txt","r");
    d2=fopen("veri.txt","r");
    d3=fopen("comb.txt","a");
    if(d1==NULL)
    {
        printf("dosya bulunamadi");
    }
    if(d2==NULL)
    {
        printf("dosya bulunamadi");
    }
    if(d3==NULL)
    {
        printf("dosya bulunamadi");
    }
    else
    {
        do
        {
            kar=getc(d1);
            if(kar!=EOF)
            {
                putc(kar,d3);
            }
        }while(kar!=EOF);
        fprintf(d3,"\n");
         do
        {
            kar=getc(d2);
            if(kar!=EOF)
            {
                putc(kar,d3);
            }
        }while(kar!=EOF);
        printf("islem tamam");
        fclose(d1);
        fclose(d2);
        fclose(d3);

    }
    return 0;
}
