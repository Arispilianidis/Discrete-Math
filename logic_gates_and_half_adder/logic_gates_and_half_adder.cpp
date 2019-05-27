#include <iostream>
#include "functions.cpp"
using namespace std;



int main()
{
    int z1,z2,i,metritis=0;//o metritis einai apla gia na 3erei o ipologistis pia grammi na ektiposei
    andgate v;
    orgate b;
    notgate n;
    imi m;

    cout<<"AND\n"<<"| a| b| out|\n";

    for(i=1; i<=4; i++)
    {
        metritis=metritis+1;
        if(metritis==1)
        {
            z1=v.seta(0);
            z2=v.setb(0);

            cout<<"| "<<0<<"| "<<0<<"|   "<<v.getoutput(z1,z2)<<"|\n";
        }
        else if(metritis==2)
        {
            z1=v.seta(1);
            z2=v.setb(0);

            cout<<"| "<<0<<"| "<<1<<"|   "<<v.getoutput(z1,z2)<<"|\n";
        }
        else if(metritis==3)
        {
            z1=v.seta(1);
            z2=v.setb(0);

            cout<<"| "<<1<<"| "<<0<<"|   "<<v.getoutput(z1,z2)<<"|\n";

        }
        else if(metritis==4)
        {
            z1=v.seta(1);
            z2=v.setb(1);

            cout<<"| "<<1<<"| "<<1<<"|   "<<v.getoutput(z1,z2)<<"|\n\n";
        }
    }

    metritis=0;

    cout<<"OR\n"<<"| a| b| out|\n";

    for(i=1; i<=4; i++)
    {
        metritis=metritis+1;
        if(metritis==1)
        {
            z1=b.seta(0);
            z2=b.setb(0);
            cout<<"| "<<0<<"| "<<0<<"|   "<<b.getoutput(z1,z2)<<"|\n";
        }
        else if(metritis==2)
        {
            z1=b.seta(0);
            z2=b.setb(1);
            cout<<"| "<<0<<"| "<<1<<"|   "<<b.getoutput(z1,z2)<<"|\n";
        }
        else if(metritis==3)
        {
            z1=b.seta(1);
            z2=b.setb(0);
            cout<<"| "<<1<<"| "<<0<<"|   "<<b.getoutput(z1,z2)<<"|\n";
        }
        else if(metritis==4)
        {
            z1=b.seta(1);
            z2=b.setb(1);
            cout<<"| "<<1<<"| "<<1<<"|   "<<b.getoutput(z1,z2)<<"|\n\n";
        }
    }

    cout<<"NOT\n"<<"| in| out|\n";

    metritis=0;

    for(i=1; i<=2; i++)
    {
        metritis=metritis+1;

        if(metritis==1)
        {
            z1=n.seta(0);
            cout<<"| "<<0<<" |   "<<n.getoutput(z1)<<"|\n";
        }
        else
        {
            z1=n.seta(1);
            cout<<"| "<<1<<" |   "<<n.getoutput(z1)<<"|\n\n";
        }
    }


    metritis=0;

    cout<<"IMIATHRISTIS\n"<<"| a| b| C| Sum|\n";

    for(i=1; i<=4; i++)
    {
        metritis=metritis+1;

        if(metritis==1)
        {
            z1=m.seta(0);
            z2=m.setb(0);

            cout<<"| "<<0<<"| "<<0<<"| "<<m.getC(z1,z2)<<"|   "<<m.Sum(z1,z2)<<"|\n";
        }
        else if(metritis==2)
        {
            z1=m.seta(0);
            z1=m.setb(1);
            cout<<"| "<<0<<"| "<<1<<"| "<<m.getC(z1,z2)<<"|   "<<m.Sum(z1,z2)<<"|\n";
        }
        else if(metritis==3)
        {
            z1=m.seta(1);
            z2=m.setb(0);
            cout<<"| "<<1<<"| "<<0<<"| "<<m.getC(z1,z2)<<"|   "<<m.Sum(z1,z2)<<"|\n";
        }
        else if(metritis==4)
        {
            z1=m.seta(1);
            z2=m.setb(1);
            cout<<"| "<<1<<"| "<<1<<"| "<<m.getC(z1,z2)<<"|   "<<m.Sum(z1,z2)<<"|\n";
        }

    }

    return 0;
}
