#include "header.h"

/// Nama : Tri Waluyo
/// Kelas : A11.4203
/// Nim : A11.2017.10097
int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");

    makepecahan(4,9);
    makepecahan(7,2);
    makepecahan(6,20);
    makepecahan(8,10);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    printpecahan(makepecahan(4,9));
    printpecahan(makepecahan(7,2));
    printpecahan(makepecahan(6,20));
    printpecahan(makepecahan(8,10));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    pemb1=pembilang(makepecahan(4,9));
    printf("Pembilang = %d\n",pemb1);
    pemb2=pembilang(makepecahan(7,2));
    printf("Pembilang = %d\n",pemb2);
    pemb3=pembilang(makepecahan(6,20));
    printf("Pembilang = %d\n",pemb3);
    pemb4=pembilang(makepecahan(8,10));
    printf("Pembilang = %d\n",pemb4);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");

    peny1=penyebut(makepecahan(4,9));
    printf("Penyebut = %d\n",peny1);
    peny2=penyebut(makepecahan(7,2));
    printf("Penyebut = %d\n",peny2);
    peny3=penyebut(makepecahan(6,20));
    printf("Penyebut = %d\n",peny3);
    peny4=penyebut(makepecahan(8,10));
    printf("Penyebut = %d\n",peny4);

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 5 \n");
    printf("===========================================\n");

    printf("4/9 + 1/2 = %d/%d\n",addPecahan(makepecahan(4,9),makepecahan(1,2)));
    printf("5/7 + 1/4 = %d/%d\n",addPecahan(makepecahan(5,7),makepecahan(1,4)));
    printf("4/9 + 3/10 = %d/%d\n",addPecahan(makepecahan(4,9),makepecahan(3,10)));
    printf("3/4 + 1/5 = %d/%d\n",addPecahan(makepecahan(3,4),makepecahan(1,5)));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 6 \n");
    printf("===========================================\n");

    printf("4/9 - 1/5 = %d/%d\n",subPecahan(makepecahan(4,9),makepecahan(1,5)));
    printf("5/7 - 1/4 = %d/%d\n",subPecahan(makepecahan(5,7),makepecahan(1,4)));
    printf("4/9 - 3/10 = %d/%d\n",subPecahan(makepecahan(4,9),makepecahan(3,10)));
    printf("3/4 - 1/5 = %d/%d\n",subPecahan(makepecahan(3,4),makepecahan(1,5)));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 7 \n");
    printf("===========================================\n");

    printf("4/9 x 1/2 = %d/%d\n",mulPecahan(makepecahan(4,9),makepecahan(1,2)));
    printf("5/7 x 1/4 = %d/%d\n",mulPecahan(makepecahan(5,7),makepecahan(1,4)));
    printf("4/9 x 3/10 = %d/%d\n",mulPecahan(makepecahan(4,9),makepecahan(3,10)));
    printf("3/4 x 1/5 = %d/%d\n",mulPecahan(makepecahan(3,4),makepecahan(1,5)));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 8 \n");
    printf("===========================================\n");

    printf("4/9 : 1/2 = %d/%d\n",divPecahan(makepecahan(4,9),makepecahan(1,2)));
    printf("5/7 : 4/2 = %d/%d\n",divPecahan(makepecahan(5,7),makepecahan(4,2)));
    printf("4/9 : 8/2 = %d/%d\n",divPecahan(makepecahan(4,9),makepecahan(8,2)));
    printf("1/2 : 2/1 = %d/%d\n",divPecahan(makepecahan(1,2),makepecahan(2,1)));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 9 \n");
    printf("===========================================\n");

    printf("4/9 desimal nya : %.2f\n",desimalPecahan(makepecahan(4,9)));
    printf("7/2 desimal nya : %.2f\n",desimalPecahan(makepecahan(7,2)));
    printf("6/20 desimal nya : %.2f\n",desimalPecahan(makepecahan(6,20)));
    printf("8/10 desimal nya : %.2f\n",desimalPecahan(makepecahan(8,10)));

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 10 \n");
    printf("===========================================\n");

    printf("4/9 = 8/18 ?\n");
    if(isEqual(makepecahan(4,9),makepecahan(8,18))==1)
    {
        printf("2 pecahan tersebut sama\n");
    }
    else
    {
        printf("2 pecahan tersebut tidak sama\n");
    }

    printf("7/2 = 14/4 ?\n");
    if(isEqual(makepecahan(7,2),makepecahan(14,4))==1)
    {
        printf("2 pecahan tersebut sama\n");
    }
    else
    {
        printf("2 pecahan tersebut tidak sama\n");
    }

    printf("4/9 = 6/20 ?\n");
    if(isEqual(makepecahan(4,9),makepecahan(6,20))==1)
    {
        printf("2 pecahan tersebut sama\n");
    }
    else
    {
        printf("2 pecahan tersebut tidak sama\n");
    }

    printf("7/2 = 8/10 ?\n");
    if(isEqual(makepecahan(7,2),makepecahan(8,10))==1)
    {
        printf("2 pecahan tersebut sama\n");
    }
    else
    {
        printf("2 pecahan tersebut tidak sama\n");
    }

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 11 \n");
    printf("===========================================\n");

    printf("14/2 > 7/2 ?\n");
    if(isBigger(makepecahan(14,2),makepecahan(7,2))==1)
    {
        printf("pecahan di kiri > dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !> dari pada yg kanan\n");
    }

    printf("7/2 > 6/20 ?\n");
    if(isBigger(makepecahan(7,2),makepecahan(6,20))==1)
    {
        printf("pecahan di kiri > dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !> dari pada yg kanan\n");
    }

    printf("6/20 > 4/9 ?\n");
    if(isBigger(makepecahan(6,20),makepecahan(4,9))==1)
    {
        printf("pecahan di kiri > dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !> dari pada yg kanan\n");
    }

    printf("8/10 > 7/2 ?\n");
    if(isBigger(makepecahan(8,10),makepecahan(7,2))==1)
    {
        printf("pecahan di kiri > dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !> dari pada yg kanan\n");
    }

    puts("\n");
    printf("===========================================\n");
    printf("\t\t Tugas 12 \n");
    printf("===========================================\n");

    printf("4/9 < 7/2 ?\n");
    if(isBigger(makepecahan(4,9),makepecahan(7,2))==1)
    {
        printf("pecahan di kiri < dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !< dari pada yg kanan\n");
    }

    printf("7/2 < 6/20 ?\n");
    if(isBigger(makepecahan(7,2),makepecahan(6,20))==1)
    {
        printf("pecahan di kiri < dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !< dari pada yg kanan\n");
    }

    printf("4/9 < 6/20 ?\n");
    if(isBigger(makepecahan(4,9),makepecahan(6,20))==1)
    {
        printf("pecahan di kiri < dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !< dari pada yg kanan\n");
    }

    printf("8/10 < 7/2 ?\n");
    if(isBigger(makepecahan(8,10),makepecahan(7,2))==1)
    {
        printf("pecahan di kiri < dari pada yg kanan\n");
    }
    else
    {
        printf("pecahan di kiri !< dari pada yg kanan\n");
    }
    return 0;
}
