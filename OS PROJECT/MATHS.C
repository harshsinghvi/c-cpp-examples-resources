#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void pf(long);
struct math
{
    char mathin[10];
    long a;
    long b;
}
define struct math math;

void main()
{
    struct math in;
    long result;
    int i;
    long *m;

    printf("/nWecome to maths section!! \n use info for help.\n use add <no1> <no2> --addition of numbers  \n use addm <number of numbers to be added> <0> -- addition of multipal numbers \n root <number> <power> --to find roots \n pow <no> <power> --to find the power \n sub <no1> <no2> --for subtraction of numbers \n fact <no> <0> --for finding factorial \n");
    printf("\nMATHS IN->");
    scanf("%s%l%l",in.mathin,in.a,in.b);
    printf("\n");
    if(strcmp(in.mathin,"add")==0)                    //addition
     printf("result=%l\n",(in.a+in.b));
    else if (!strcmp(in.mathin,"info"))
     printf("/nWecome to maths section!! \n use info for help.\n use add <no1> <no2> --addition of numbers  \n use addm <number of numbers to be added> <0> -- addition of multipal numbers \n root <number> <power> --to find roots \n pow <no> <power> --to find the power \n sub <no1> <no2> --for subtraction of numbers \n fact <no> <0> --for finding factorial \n");
    else if(!strcmp(in.mathin,"sub"))               // sub
     printf("%l",(in.a-in.b));
    else if (!strcmp(in.math,"pow"))                  //pow
     pf((pow(in.a,in.b)));
    else if(!strcmp(in.math,"root"))              //root
     pf((pow(in.a,(1/in.b))));
    else if(!strcmp(in.math,"addm"))              //adding multipals
    {
	m=(long)malloc(sizeof(long)*in.a);
	result=0;
	printf("\n Enter the nos:" );
	for(i=0;i<in.a;i++)
	 scanf("%l",m[i]);
	for (i=0;i<in.a;i++)
	 result=result+m[i];
	pf(result);
    }

    else if(!strcmp(in.math,"fact"))          //factorial
    {
	result=1;
	for(i=1;i<=in.a;i++)
	{
	    result=result*i;
	    printf("%d * ",i);
	}
       printf("result=%l",result);
    }
    else if(!strcmp(in.mathin,"exit"))
    return 0 ;
    else
     printf("wrong command");           //error
    printf("/n press enter to continue.........");
    getch();
    main();
    return 0;



}

void pf(long a)
{
    printf("%l",a);
}