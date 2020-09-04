#include<stdio.h>
#include<conio.h>
#include<string.h>

void phy();
struct phyin
{
    char phyin[20];
    long a,b;
};
//define struct phyin phyin;
int main()
{
    struct phyin in;
    long result;
    int i,j,a;
    while(1)
    {
        printf("/n Command->");
        scanf("%s%l%l",in.phyin,&in.a,&in.b);
        printf("/n");
        if(!srtcmp(in.phyin,"force"))
            printf("M=%l \n A=%l \n F=%l units \n",in.a,in.b,(in.a*in.b));
        else if(!(strcmp(in.phyin,"work")))
            pritnf("Work = %l units\n",in.a*in.b);
        else if(!(strcmp(in.phyin,"ke")))
            {
            result=1/2*in.a*in.b*in.b;
            printf("K.E. = %l\n",result);
            }
        else if(!(strcmp(in.phyin,"speed")))
            printf("Speed=%l\n",(in.a/in.b));
        else if(!(strcmp(in.phyin,"valocity")))
            printf("Valocity=%l\n",(in.a/in.b));
        else if(!(strcmp(in.phyin,"dist")))
            printf("Distance=%l\n",(in.a*in.b));
        else if(!(strcmp(in.phyin,"")))
            printf("Time=%l\n",(in.a/in.b));
        else if(!(strcmp(in.phyin,"exit")))
            return 0;
        else
            {
                printf("Wrong input!!!! Try again  \n Press any key to continue..........\n");
                getch();
                main();
            }
    }
    return 0;
}
void phy()
{
    printf("SUCCESS  !!!!!!!!/n");
}
