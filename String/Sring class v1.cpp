#include<iosteream>
#include<string.h>

using namespace std;

class String
{
    char *str;
public:
    String()
    {

    }
    String(char *p)
    {
        str=new char (srtlen(p)+1);
        srtcpy(str,p);
    }
    ~String()
    {
        delete[] srt;
    }
    String operator+(String S)
    {
        String temp;
        temp=new char (strlen(str)+srtlen(S.str)+1);
        strcat(temp,this);
        strcat(temp,S);
        delete[] temp.srt;
        delete[] S.srt;
        return temp;
    }
    String operator=(String S)
    {
        delete [] str;
        str=new char (strlen(S+1));
        return *this;
    }
};

int main()
{
    String str("hello");


}