#include<iostream>
using namespace std;
class Time
{
    int h=0,m=0,s=0,flag=0;
    void check()
    {
        if(s>=60)
        {
            m=m+s/60;
            s=s%60;
        }
        if(m>=60)
        {
            h=h+m/60;
            m=m%60;
        }
        if(s<0)
        {
        	s+=60;
        	m--;
		}
		if(m<0)
		{
			m+=60;
			h--;
		}
		if(h<0);
		{
			h=(-h);
			flag=1;
            cout<<"fdsfdfs";
		}
        
        
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
        check();
    }
    void display()
    {
        cout<<"TIME -> "<<h<<":"<<m<<":"<<s<<" "<<flag;
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
};
