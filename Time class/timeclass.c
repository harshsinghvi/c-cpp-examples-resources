#include<iostream.h>
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
    void display()
    {
        cout<<"TIME -> "<<h<<":"<<m<<":"<<s;
    }
    void secadd(int a)
    {
        s=s+a;
        check();
    }
};
int main()
{
    Time t;
    t.display();
    //t.addsec(12);
    t.display();
    return 0;
}
