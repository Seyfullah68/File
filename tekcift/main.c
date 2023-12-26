#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya;
    dosya = fopen("tekcift.txt","w");
    int n,i;
    printf("kaca kadar sayi girilecek\n");
    scanf("%d",&n);
    if(dosya!=NULL)
    {
        for(i=1;i<=n;i++)
        {
            if(i%2==1)
            {
                fprintf(dosya,"tek sayi :%d\n",i);
            }
            else
            {
                fprintf(dosya,"cift sayi: %d\n",i);
            }
        }
        printf("islem basarili\n");
        fclose(dosya);
    }
    else
    {
        printf("dosya bulunamadi");
    }

    dosya=fopen("tekcift.txt","r");
    char x;
    if(dosya!=NULL)
    {
        x=getc(dosya);
        while(!feof(dosya))
        {
            printf("%c",x);
            x=getc(dosya);

        }
    }
    return 0;
}
