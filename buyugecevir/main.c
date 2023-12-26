#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *d1,*d2;
    d1=fopen("kucuk.txt","r");
    d2=fopen("buyuk.txt","w");
    char c;
    if(d1==NULL)
    {
        printf("dosya bulunamadi");
    }
    if(d2==NULL)
    {
        printf("dosya bulunamadi");
    }
    else
    {
        fflush(stdin);
        do
        {
           c=getc(d1);
           if(c!=EOF)
           {
               if((c>='a') &&(c<='z'))
               {
                   c=c-32;
                   putc(c,d2);
               }
               else
               {
                   putc(c,d2);
               }
           }
        }while(c!=EOF);
        printf("buyuk e cevirme tamamlandi");


    }
    return 0;
}
