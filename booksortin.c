#include <stdio.h>
struct book
{
    char booknm[100];
    char bookauth[100];
    int bookid;
};

int main()
{
    struct book b1[100];
    int m = 1;
    int i = 0;
    while (m == 1)
    {
        printf("Enter the book's name =");
        scanf("%s", &b1[i].booknm);
        printf("Enter the book's auther = ");
        scanf("%s", &b1[i].bookauth);
        printf("Enter the book's ID = ");
        scanf("%d", &b1[i].bookid);
        printf("Another Data Yes 1/No 0 ");
        scanf("%d", &m);
        i++;
    }
    i--;
    // int j;
    // struct book temp;
    // for (int a = 0; a < i - 1; a++) {
    //     for (j = 0; j < i - a - 1; j++) {
    //         if (customStrCmp(b1[j].booknm, b1[j + 1].booknm) > 0) {
    //             // Swap the elements
    //             temp = b1[j];
    //             b1[j] = b1[j + 1];
    //             b1[j + 1] = temp;
    //         }
    //     }
    // }
    int g = 1;

    while (g == 1)
    {
        int j;
        struct book temp;
        for (j = 0; j <= i; j++)
        {
            for (int k = j + 1; k <= i; k++)
            {
                if (b1[i].bookid < b1[j].bookid)
                {
                    temp = b1[j];
                    b1[j] = b1[k];
                    b1[k] = temp;
                }
            }
        }
        printf("Sort according to bookid yes 1/No 0 \n");
        scanf("%d", &g);

        if (g == 1)
        {
            for (int j = 0; j < i; j++)
            {

                printf("Book Name: %s \n Author: %s \n ID: %d\n", b1[j].booknm, b1[j].bookauth, b1[j].bookid);
            }
        }
    }

    return 0;
}