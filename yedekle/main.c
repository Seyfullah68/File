#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *kaynak,*kopya;
    char ap[10],le[10],karakter;
    printf("asil dosya adini giriniz\n");
    gets(ap);
    kaynak=fopen(ap,"r");
    if(kaynak==NULL)
    {
        printf("dosya bulunamadi");
        exit(1);
    }
    printf("kopyalanacak dosya adini giriniz\n");
    gets(le);
    kopya=fopen(le,"w");
    if(kopya==NULL)
    {
        printf("dosya bulunamadi");
        exit(1);
    }
    for(karakter=getc(kaynak);karakter!=EOF;karakter=getc(kaynak))
    {
        putc(karakter,kopya);
    }
    printf("kopyalama tamamlandi");
    fclose(kaynak);
    fclose(kopya);

    return 0;
}
