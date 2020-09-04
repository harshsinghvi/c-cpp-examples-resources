#include<iostream>
using namespace std;

class Time
{
    int h=0,m=0,s=0;
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
    inline void display()
    {
        cout<<"TIME -> "<<h<<":"<<m<<":"<<s;
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
    	if(d<=s)
    	 s=s-d;
    	else
    	{
    		s=s-d%60;
			m=m-d/60;
			for(int i=0;m<0;i++)
			{
				h--;
				m=m+60;
				
			}
		}
	}
    Time operator+(c)
    {
        Time 
    }
};

int main()
{
	Time t(12,0,12);
	t.display();
	cout<<"\n";
	//t.addsec(12);
	cout<<"\n";
	t.display();
	cout<<"\n";
	t.subsec(60);
	t.display();
	
}




int old()
{
	char c;
	int h=0,m=0,s=0,a=0,b=0;
	cout<<"TIME ->";
	cin>>h>>m>>s;
	Time t(h,m,s);
    t.display();
    cout<<"\n sub->";
    cin>>a;
    t.subsec(a);
    t.display();
    cout<<"\n ADD->";
    cin>>b;
    t.addsec(b);
    t.display();
	c=getch();
   // clrscr();
    if(c==' ')
	return 0;
	main();
}
