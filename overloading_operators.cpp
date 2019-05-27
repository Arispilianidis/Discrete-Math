#include <iostream>
#include <new>
#include <vector>
#include <stdlib.h>
#include <string>
#include <string.h>


using namespace std;

class imerolog
{
private:
    int* mera;
    int* minas;
    int* xronos;
public:

    imerolog(int mera,int minas,int xronos)
    {
        this->mera=new (nothrow) int;
        if(this->mera==nullptr)
        {
            cout<<"error gia tin mera\n";
        }
        this->minas=new (nothrow) int;
        if(this->minas==nullptr)
        {
            cout<<"error gia ton mina\n";
        }
        this->xronos=new (nothrow) int;
        if(this->xronos==nullptr)
        {
            cout<<"error gia ton xrono\n";
        }

        *this->mera=mera;
        *this->minas=minas;
        *this->xronos=xronos;
    }

    void getsth(){
        cout<<*mera<<" / "<<*minas<<" / "<<*xronos<<endl;
    }

    ~imerolog()
    {
        cout<<"dis\n";
        delete mera;
        delete minas;
        delete xronos;
    }

    imerolog operator+(const imerolog& obj)
    {
        imerolog v(0,0,0);

        *(v.mera)= *mera + *(obj.mera);
        *(v.minas)= *minas + *(obj.minas);
        *(v.xronos)= *xronos + *(obj.xronos);
        return(v);
    }

    imerolog operator-(const imerolog& obj)
    {
        imerolog v(0,0,0);

        *(v.mera)= *mera - *(obj.mera);
        *(v.minas)= *minas - *(obj.minas);
        *(v.xronos)= *xronos - *(obj.xronos);
        return(v);
    }

    imerolog& operator=(const imerolog& obj){
        *mera=*(obj.mera);
        *minas=*(obj.minas);
        *xronos=*(obj.xronos);
        return (*this);
    }

};


int main(){
    imerolog a1(10,5,2000);
    imerolog a2(12,6,2001);
    imerolog a3(0,0,0);
    imerolog a4(0,0,0);

    a3=a1+a2;

    a3.getsth();

    a4=a3;

    a4.getsth();

    string x;
    char *pend;
    long int y;
    cout<<"dose ena string\n";
    cin>>x;
    vector<string> myvec;
    myvec.push_back(x);
    string temp;

   // y=strtol(x.c_str(),&pend,10);
   char a[1][20];
   strcpy(a[0],x.c_str());


    for(auto j=0;j<x.size();j++){
        if(isalpha(a[0][j])){
            cout<<"gramaaaaaaaaa\n";
        }
    }

     char k[1][20];
     strcpy(k[0],"arissssssss");


    strcpy(k[0],x.c_str());

    cout<<"to neo string einai :"<<k[0];












return 0;
}
