#include<iostream>
#include<fstream>
using namespace std;

int file1(){
    fstream *a("text.txt","a");
    //a.<<2121;
    a.fout<<23123323432;
    
    return 0;
}

int main(){
    cout<<"hallo world"<<file1();
    return 0;
}

