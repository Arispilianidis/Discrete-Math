/*Give a set(x) and the number of items you want it reordered(r) and get the permutations and combinations with and without repetitions */
#include <iostream>
#include <math.h>
#include <algorithm>
#include <iterator>
#include <vector>
#include <stdio.h>


using namespace std;
///Metatheseis me epanalipseis dld n^r*/
/* autin tin sinartisi tin kaloume anadromika mexri to mikos tis eksodou na ginei to zitoumeno
kai stin sinexeia ka8os epistrefoume ayksanontai ta i stis for(apo to telos pros tin arxi) */
void P( const string& input, string output, int r)
{
    if(output.length() == r)
    {
        cout << output << endl;
    }
    else
    {
        for(int i=0; i<input.length(); ++i)
        {
            P(input, output + input[i], r);
        }
    }
}
///sinartisi paragontikou(den koitaw poliplokotita)
int Factorial(int x)
{
    if(x==1 || x==0)
    {
        return 1;
    }
    else
    {
        return (x*Factorial(x-1));
    }
}
///Metatheseis xwris epanalipseis dld n!/(n-r)!*/
/*idia diadikasia me tin P apla otan iparxei kapio stixio parapano apo 1 fora pigainw sto epomeno */
void P2( const string& input, string output, int r)
{

    if(output.length() == r)
    {
        cout << output << endl;
    }
    else
    {
        for(int i=0; i<input.length(); ++i)
        {

            int mycount;
            mycount=count(output.begin(),output.end(),input[i]); ///blepw an iparxei kapoio stixio parapanw apo mia fora
            if(mycount==1)
            {
                continue;
            }
            else
            {
                P2(input, output + input[i], r);
            }
        }
    }
}

void print(int r,char* p[])
{
    for(int i=0; i<r; i++)
    {
        cout<<*p[i];
        if(i==r-1)
        {
            cout<<"\n";
        }
    }
}
///sindiasmoi xwris epanlipseis
void arxikopoisi(char* p[],int r)
{
    for(int i=1; i<r; i++)
    {
        p[i]=p[0]+i;
    }

}


int main ()
{
    string x;
    int r;


    cout<<"Bale ena sinolo\n";
    cin>>x;


    do
    {
        cout<<"\n Ana posa stoixia thes na ginei h metathesi h o sindiasmos?\n";
        cin>>r;

        if (r>x.length())
        {
            cout<<"\n autos o ari8mos den ginetai na einai megaliteros apo to plithos twn stoixeiwn toy sinoloy\n";
        }

    }
    while(r>x.length());


    int x2=Factorial(x.length())/Factorial(x.length()-r);
    int x3=x2/Factorial(r);
    int x4=(Factorial(x.length()+r-1)/Factorial(x.length()-1))/Factorial(r);



    cout<<"O arithmos twn metathesewn me epanalipseis einai: "<<pow(x.length(),r) <<"\n" ;
    P(x,"",r);
    cout<<"\n";


    cout<<"O arithmos twn metathesewn xwris epanalipseis einai: "<< x2<<"\n" ;
    P2(x,"",r);


    cout<<"O arithmos twn sindiasmwn me epanalipseis einai: "<<x4<<"\n";


    cout<<"O arithmos twn sindiasmwn xwris epanalipseis einai: "<<x3<<"\n";
    //sindiasmoi xwris epanlipseis. Gia kapio logo an ekana sinartisi(me ton idio akribws kodika pou einai mesa stin for) den mou ebgaze sosta apotelesmata
    char* p[r];
    p[0]=&x[0];

    arxikopoisi(p,r);
    int k=1;

    for(int i=0; i<x3; i++)
    {

        print(r,p);

        if(p[r-k]!=&x[x.length()-1]-k+1) ///an o teleuteos pointer  den exei ftasei sto telos
        {
            p[r-k]=p[r-k]+1;

        }
        else ///an exei ftasei o teleuteos pointer sto telos
        {

            k=k+1;
            if(p[r-k]!=&x[x.length()-1]-k+1) ///an o teleuteos pointer  den exei ftasei sto telos
            {
                p[r-k]=p[r-k]+1;
                p[r-k+1]=p[r-k]+1;
                k=k-1;
            }
            else
            {
                k=k-1;
                p[0]=p[0]+1;
                arxikopoisi(p,r);
            }
        }

    }

return 0;
}
