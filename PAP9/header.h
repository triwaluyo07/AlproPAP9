#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int pembilang;
    int penyebut;
}pecahan;

int pemb1,pemb2,pemb3,pemb4;
int peny1,peny2,peny3,peny4;
float hasil;



pecahan makepecahan(int pemb,int peny);
void printpecahan(pecahan p);
int pembilang(pecahan p);
int penyebut(pecahan p);
pecahan addPecahan(pecahan p1, pecahan p2);
pecahan subPecahan(pecahan p1, pecahan p2);
pecahan mulPecahan(pecahan p1, pecahan p2);
pecahan divPecahan(pecahan p1, pecahan p2);
float desimalPecahan(pecahan p);
int isEqual(pecahan p1, pecahan p2);
int isBigger(pecahan p1, pecahan p2);
int isSmaller(pecahan p1, pecahan p2);

#endif // HEADER_H_INCLUDED
