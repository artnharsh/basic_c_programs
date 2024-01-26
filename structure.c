#include<stdio.h>
struct student{
    char studentname[100];
    char studentprn[100];
    int studentphn;
};
int main(){
    struct student s1[100];
    int i=1;
    int m=1;
    while(m==1){
    printf("Enter the student's name =");
    scanf("%s",&s1[i].studentname);
    printf("Enter the student's prn nunber = ");
    scanf("%s",&s1[i].studentprn);
    printf("Enter the student's phone number = ");
    scanf("%s",&s1[i].studentphn);
    printf("If you want to enter the details of next student then press 1 otherwise press 0 to end process = ");
    scanf("%d",&m);
    i++;
    }
    i--;
    int g = 1;
    
    while (g == 1)
    {
        int j;
        struct student temp;
        for (j = 0; j <= i; j++)
        {
            for (int k = j + 1; k <= i; k++)
            {
                if (s1[k].studentprn < s1[j].studentprn)
                {
                    temp = s1[j];
                    s1[j] = s1[k];
                    s1[k] = temp;
                }
            }
        }
        printf("Sort according to bookid yes 1/No 0 = \n");
        scanf("%d", &g);
        printf("-----------------------------------\n");
        if (g == 1)
        {
            for (int j = 0; j <= i; j++)
            {

                printf("Students Name: %s\nPRN: %s\nPHN: %d\n-----------------------------------\n", s1[j].studentname, s1[j].studentprn, s1[j].studentphn);
            }
        }
    }

    return 0;
}