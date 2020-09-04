#include<stdio.h>
#include<conio.h>

int pf(char*,char*);
int main()
{
    char usr[50],a,in;
    int chances=5,i,j,k,len;
    printf(" Enter the movie :");
    for(i=0;1==1;i++)
    {
        usr[i]=getch();
        if(usr[i]=='\r') 
         {
            usr[i]='\0'
            break;
         }
        printf("*");
    }

    len=pf(usr,~);
    while(1==1)
    {
        if(chances==0)
        {
            break;
            j=0
        }
        printf("\n your chances = %d \n Enter char : ",chances);
        scanf("%c",*in);
        clrscr();
        printf("\n");
        chances=chances-(pf(usr,in));
        j=1;
              
    }
    if(j)
     printf("Chears!!!  YOU WON........ ");
    else
     printf("SORRY YOU LOOSE ...... /n try again later");
    printf("Want to try again???[y/n]")
    a=getch();
    if(a=='n')
     return 0
    main();
}


int pf(char *p , char a ,)
{
    int i,j=0;
    for(i=0;p[i]!='\0';i++)
    {
        if(p[i]==' ')
         printf(" ");
        else if (ch!=usr[i])
         printf("-");
        else
         {
            printf("%c",ch);
            j=1;
         }
    }

 return j;
}

