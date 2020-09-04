#include<iostream>
using namespace std;

class Feet;
class Meter
{
    float m=0;
public:
    void display()
    {
        cout<<m<<"meters";
    }
    void disp(char x='-')
    {
        display();
        cout<<"\t"<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"\n";
    }

    Meter()
    {
        m=0;
    }
    Meter(float M)
    {
        m=M;
    }
    Meter operator+(Meter M)
    {
        return m+M.m;
    }
    Meter operator-(Meter M)
    {
        return m-M.m;
    }
    int operator>(Meter M)
    {
        if(m>M.m)
            return 1;
        return 0;
    }
    int operator<(Meter M)
    {
        return !(*this>M);
    }
    Meter operator++()
    {
        Meter M;
        m++;
        M.m++;
        return M; 
    }
    Meter operator++(int)
    {
        Meter M;
        m++;
        M.m++;
        return M; 
    }
    operator Feet()
    {
        Feet temp(m/0.305);
        return temp;

    }
    /*
	Meter operator+(Feet F)
    {
        Meter temp(this->m+F.convert_Meter());
        return temp;
    }
    Meter operator-(Feet F)
    {
        Meter temp(m+F.convert_Meter());
        return temp;
    }
    Feet convert_Feet()
    {
        Feet temp(m*3.281);
        return temp;
    }
    int operator>(Feet F)
    {
        if(m>F.convert_Meter())
            return 1;
        return 0;
    }
    int operator<(Feet F)
    {
        return !(m>F.convert_Meter());
    } */
};
class Feet
{
    float f;
    public:
    void display()
    {
        cout<<f<<"feets";
    }
     void disp(char x='-')
    {
        display();
        cout<<"\t\t"<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"\n";
    }
    Feet()
    {
        f=0;
    }
        Feet(float F)
    {
        f=F;
    }
    Feet operator+(Feet F)
    {
        return f+F.f;
    }
    Feet operator-(Feet F)
    {
        return f-F.f;
    }
    int operator>(Feet F)
    {
        if(f>F.f)
            return 1;
        return 0;
    }
    int operator<(Feet F)
    {
        return !(*this>F);
    }
    /*
	Meter convert_Meter()
    {
        Meter temp(f*0.305);
        return temp;
    }
    */
    operator Meter()
    {
    	Meter temp(f*0.305);
    	return temp;
	}

};
Meter operator+(Meter M,Feet F)
{
    Meter temp(M.m+F.f);
    return temp;
}

int main()
{
    Meter m1(12),m2(21);
    Feet f1(12),f2(12);
    m1.disp();
    f1.disp();
    m2=f1;
    m2.disp();
    return 0;
}


// 1m = 3 feet 3.37 inches -> 1m =3.281 feet;
// 1feet = 0.305 m
