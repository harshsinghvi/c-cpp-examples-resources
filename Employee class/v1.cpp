#include<iostream>
#include<string.h>
using namespace std;
class NegativeAge
{

};
class GreaterAge
{

};
class LessAge
{
 
};
class NegativeSalary
{

};
class LessSalary
{
	
};
class RankAlreadyExists
{
	
};
class Employee
{
    int id;
    static int count;
    string usr_id;
    int age,salary;
    string rank;
    string name;
public:

    Employee(string usid="Employee",string n="no name set", string r="set rank hear",int a=0,int s=0)
    {
        count++;
        id=count;
        if(a)
            setage(a);
        if(n!="no name set")
            setname(n);
        if(s)
            setsalary(s);
        if(r!="set rank hear")
            setrank(r);
        if(usid=="Employee")
        {
            //typecast
            usr_id=usid;
        }
        else
        {
            usr_id=usid;
        }     
    }
    void setage(int a)
    {
        if(a>=18 && a<=50)
        {
            age=a;
        }
        else
        {
            if(a<0)
            {
                NegativeAge A;
                throw A;
            }
            if(a>50)
            {
                GreaterAge A;
                throw A;
            }
            if(a<18 && a>0)
            {
                LessAge A;
                throw A;
            }
        }
    }
    void setsalary(int s)
    {
        if(s<=0)
        {
            LessSalary S;
            throw S;
        }
        else
        {
            salary=s;
        }
    }
    void setname(string n)
    {
        name=n;
    }
    void setrank(string r)
    {
        if(r=="Founder" || r=="founder" || r=="Owner")
        {
            RankAlreadyExists R;
            throw R;
        }
        else
        {
            rank=r;
        }
    }
    void display()
    {   
        int spaces;
        cout<<usr_id;
        spaces=10-usr_id.length();
        for(int i=0;i<spaces;i++)
        {
            cout<<" ";
        }
        cout<<id<<"  ";
        cout<<name;
        spaces=20-name.length();
        for(int i=0;i<spaces;i++)
        {
            cout<<" ";
        }
        cout<<rank;
        spaces=10-rank.length();
        for(int i=0;i<spaces;i++)
        {
            cout<<" ";
        }
        cout<<age<<"\t"<<salary<<"\n";
    }
    void indisp()
    {
        cout<<"/n"<<"NAME : "<<name<<"\n"<<"RANK : "<<rank<<"\n"<<"AGE : "<<age<<"\n";
    }

};
int Employee::count=100;
void table()
{
    cout<<"USER_ID   ID   NAME\t\t   RANK\t    AGE\tSALARY\n";
}

int main()
{
    Employee hs("harsh","Harsh Singhvi","CEO",18,9999),ds("dhruv","Dhruv Singh Choudhary","CEO",18,12232);
    table();
    hs.display();
    ds.display();
    try
    {
    
    }
    catch(NegativeAge A)
    {
        cout<<"negative age error";
    }
    catch(GreaterAge A)
    {
    	cout<<"greater age error";
	}
	catch LessAge
	{
 		cout<<"less age error";
	};
	catch NegativeSalary
	{
		cout<<"negative age error";
	};
	catch LessSalary
	{
		cout<<"Less salary error"
	};
	catch RankAlreadyExists
	{
		cout<<"rank already exists";
	};

    return 0;
}
