#include<iostream>
using namespace std;

class Time
{
    int h=0,m=0,s=0,flag=0;
    void check()
    {   
     // cout<<"_____________\n";
        if(s>=60)
        {
            m=m+s/60;
            s=s%60;
         //   cout<<"\n s 60\n";
        }
        if(m>=60)
        {
            h=h+m/60;
            m=m%60;
           // cout<<"\n m 60\n";
        }
        while(s<0)
        {
        	s+=60;
        	m--;
            //cout<<"\n s 0\n";
		}
		while(m<0)
		{
			m+=60;
			h--;
            //cout<<"\n m 0\n";
		}
		while(h<0)
		{
			h=(-h);
			flag=1;
         //   cout<<"\n h- \n";
		}

    }
    int totsec()
	{	
		int hh;
       	if(flag)
       	hh=-h;
      	return s+(hh*60*60)+(m*60);
	}
public:
    Time()
    {
        h=0;m=0;s=0;
    }
    Time(int s)
    {
        this->s=s;
        check();
    }
    Time(int m,int s)
    {
        this->m=m;
        this->s=s;
        check();
    }
    Time(int h,int m, int s)
    {
        this->h=h;
        this->m=m;
        this->s=s;
        //cout<<"3parameter";
        check();
    }
    void display()
    {
        cout<<"TIME -> "<<h<<":"<<m<<":"<<s<<" "<<flag;
    }
    void dispf()
    {
    	if(flag)
    		cout<<"\n Time-> -("<<h<<":"<<m<<":"<<s<<") \n";
		else
			cout<<"\n Time-> +("<<h<<":"<<m<<":"<<s<<") \n";
	}
    void addsec(int a)
    {
        if(a<0)
         subsec(-a);
		s=s+a;
        check();
    }
    void subsec(int d)
    {	
    	if(d<0)
    	 addsec(-d); 
    	s-=d;
		check();
	}
    Time operator+(Time c)
    {
         Time temp(h+c.h,m+c.m,s+c.s);
		 return temp;
    }
    Time operator-(Time c)
    {
    	Time temp(h-c.h,m-c.m,s-c.s);
    	return temp;
	}
	int operator>(Time c)
	{
		if(this->totsec()>c.totsec())
			return 1;
		return 0;
	}
	int operator<(Time c)
	{
		return !(*this>c);
	}
	int operator++(int)
	{
		s++;
	}
	int operator++()
	{
		++s;
	}
};


int main()
{
    Time t(12,12,23),t1(12,3,12),tt(-12,-12,-3);
	tt.display();
	t.dispf();
	tt.dispf();
    return 0;
}
