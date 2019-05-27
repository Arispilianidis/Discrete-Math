#include <iostream>

using namespace std;


class andgate
{
public:

    int seta(int z) // bale tin proti eisodo
    {
        a=z;
        return(a);
    }
    int setb(int z)//bale tin deuteri eisodo
    {
        c=z;
        return(c);
    }
    int getoutput(int a,int c) // AN kai oi 2 eisodoi einai 1 tote epestrepse 1 allios 0
    {
        if(a==true && c==true)
        {
            return (1);
        }
        else
        {
            return(0);
        }
    }
private:

    int a;
    int c;

};

class orgate
{
public:

    int seta(int z)
    {
        a=z;
        return(a);
    }
    int setb(int z)
    {
        c=z;
        return(c);
    }
    int getoutput(int a,int c) //AN kai oi 2 eisodoi einai 0 epestrepse 0 allios 1
    {
        if(a==false && c==false)
        {
            return (0);
        }
        else
        {
            return(1);
        }
    }
private:

    int a;
    int c;

};

class notgate
{
public:

    int seta(int z)
    {
        a=z;
        return(a);
    }
    int getoutput(int a)
    {
        if(a==false) //AN to a einai 0 epestrepse 1 allios 0
        {
            return (1);
        }
        else
        {
            return(0);
        }
    }
private:

    int a;

};

class imi
{
public:
    andgate v;
    orgate b;
    notgate n;


    int seta(int z)
    {
        a=z;
        return(a);
    }
    int setb(int z)
    {
        c=z;
        return(c);
    }
    int getC(int a,int c)//C=A*B
    {
        return(v.getoutput(a,c));
    }
    int Sum(int a,int c)//S=A*B' + A'*B
    {
        int z1;
        int z2;

        z1=v.getoutput(a,n.getoutput(c));//A*B'
        z2=v.getoutput(n.getoutput(a),c);//A'*B

        return(b.getoutput(z1,z2));//z1 OR z2
    }
private:

    int a;
    int c;

};
