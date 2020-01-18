#include "header.h"

pecahan makepecahan(int pemb,int peny)
{
    pecahan hasil;
    hasil.pembilang=pemb;
    hasil.penyebut=peny;
    return hasil;
}

void printpecahan(pecahan p)
{
    printf("%d/%d\n",p.pembilang,p.penyebut);
}

int pembilang(pecahan p)
{
    int pemb;
    pemb=p.pembilang;
    return pemb;
}

int penyebut(pecahan p)
{
    int peny;
    peny = p.penyebut;
    return peny;
}

pecahan addPecahan(pecahan p1, pecahan p2)
{
    pecahan hasil;

    hasil.penyebut=p1.penyebut*p2.penyebut;
    hasil.pembilang=(hasil.penyebut/p1.penyebut*p1.pembilang)+
                    (hasil.penyebut/p2.penyebut*p2.pembilang);
    return hasil;

}

pecahan subPecahan(pecahan p1,pecahan p2)
{
    pecahan hasil;

    hasil.penyebut=p1.penyebut*p2.penyebut;
    hasil.pembilang=(hasil.penyebut/p1.penyebut*p1.pembilang)-
                    (hasil.penyebut/p2.penyebut*p2.pembilang);
    return hasil;
}

pecahan mulPecahan(pecahan p1,pecahan p2)
{
    pecahan hasil;

    hasil.pembilang= p1.pembilang * p2.pembilang;
    hasil.penyebut=p1.penyebut*p2.penyebut;

    if((hasil.pembilang%2==0)&&(hasil.penyebut%2==0))
    {
        hasil.pembilang=hasil.pembilang/2;
        hasil.penyebut=hasil.penyebut/2;
    }
    if((hasil.pembilang%3==0)&&(hasil.penyebut%3==0))
    {
        hasil.pembilang=hasil.pembilang/3;
        hasil.penyebut=hasil.penyebut/3;
    }
    return hasil;
}

pecahan divPecahan(pecahan p1,pecahan p2)
{
    pecahan hasil;
    int i;

    hasil.pembilang= p1.pembilang*p2.penyebut;
    hasil.penyebut=p1.penyebut*p2.pembilang;
    for(i=2;i<=9;i++)
    {
        if((hasil.pembilang%i==0)&&(hasil.penyebut%i==0))
        {
            hasil.pembilang=hasil.pembilang/i;
            hasil.penyebut=hasil.penyebut/i;
        }
    }

    return hasil;
}

float desimalPecahan(pecahan p)
{
    float pemb=p.pembilang;
    float peny=p.penyebut;
    hasil=pemb/peny;
    return hasil;
}

int isEqual(pecahan p1,pecahan p2)
{
    float pemb=p1.pembilang;
    float peny=p1.penyebut;
    float hasil1=pemb/peny;

    float pemb_2 = p2.pembilang;
    float peny_2 = p2.penyebut;
    float hasil2=pemb_2/peny_2;
    if(hasil1==hasil2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isBigger(pecahan p1,pecahan p2)
{
    float pemb=p1.pembilang;
    float peny=p1.penyebut;
    float hasil1=pemb/peny;

    float pemb_2 = p2.pembilang;
    float peny_2 = p2.penyebut;
    float hasil2=pemb_2/peny_2;
    if(hasil1>hasil2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isSmaller(pecahan p1,pecahan p2)
{
    float pemb=p1.pembilang;
    float peny=p1.penyebut;
    float hasil1=pemb/peny;

    float pemb_2 = p2.pembilang;
    float peny_2 = p2.penyebut;
    float hasil2=pemb_2/peny_2;
    if(hasil1<hasil2)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
