/*Give the number of nodes(plithos_korifwn) and their degree(ba8mos_korifis) and if there can be a graph with these parameters print the Adjacency matrix of the undirected graph*/
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>

/// Havel-Hakimi Theorem
using namespace std;

bool myfunction (int i,int j)   ///sinartisi gia na kanw sort me f8inousa seira
{
    return (i>j);
}

int grafiki(vector<int> myvec)///sinartisi gia na doume an mporei na iparksei grafos
{

    int temp;
    int zeros=0;
    sort(myvec.begin(), myvec.end(),myfunction);///taksinomisi me f8inousa seira
    temp=myvec[0];
    myvec.erase(myvec.begin());///diagrafoume to proto stoixeio kai meionoume ta ipolipa(temp) kata 1
    for(int i=0; i<temp; i++)
    {
        myvec[i]=myvec[i]-1;
    }

    for(int i=0; i<myvec.size(); i++)
    {
        if(myvec[i]<0)///iparxei arnitiko stixio ara den iparxei grafos
        {
            cout<<"\nh akolou8ia ba8mwn den einai graffikh sinepws den iparxei tetio grafima\n";
            return 0;
        }
        else if(myvec[i]==0)///an an sthn enapominan akolou8ia einai kapio stixio 0 ayksanoyme ton metriti
        {
            zeros=zeros+1;
        }
    }

    if (zeros==myvec.size())///an sthn enapominan akolou8ia einai ola 0 tote iparxei grafima
    {
        cout<<"\niparxei aplos grafos me autes tis korifes!!!\n";
    }
    else
    {
        grafiki(myvec);
    }

    return 1;
}




int main()
{

    int plithos_korifwn,i,j,ba8mos_korifis,sum=0;
    vector<int> myvec;

    do
    {
        cout<<"bale to pli8os twn korifwn\n";
        cin>>plithos_korifwn;
        if(plithos_korifwn<=0)
        {
            cout<<"den ginetai na exoume arnitiko plithos korifwn,dose allo\n";
        }
    }
    while(plithos_korifwn<=0);

    cout<<"dose ton ba8mo ka8e korifis\n";
    for(i=0; i<plithos_korifwn; i++)
    {
        cin>>ba8mos_korifis;
        if(ba8mos_korifis==0 || ba8mos_korifis<0 || ba8mos_korifis>=plithos_korifwn)
        {
            cout<<"den iparxei aplo grafima me ba8mo korifis 0(ektos tou tetrimenoy) h  baumo mikrotero tou midenos h ba8mo >= apo to plithos twn korifwn\n";
            return 0;
        }
        myvec.push_back(ba8mos_korifis);
        sum=sum+ba8mos_korifis;
    }

    if(sum%2!=0)  ///AN to a8roisma twn ba8mwn twn korifwn den einai artios tote den iparxei grafima
    {
        cout<<"Den iparxei tetio grafima gt to a8roisma twn ba8mwn twn korifwn den einai artios arithmos\n";
        return 0;
    }

    if(grafiki(myvec))  ///an iparxei aplos grafos tote emfanise ton pinaka gitniasis
    {


        int pinGitniasis[plithos_korifwn][plithos_korifwn]= {0};
        int akmes=sum/2,arxh,telos;///to x einai h korifi me tin opoia sindeetai h i-korifi


        for(i=0; i<akmes; i++)
        {
            cout<<"dose 2 korifes poy sindeontai me akmh(ari8misi apo 0-"<<plithos_korifwn-1<<" \n";
            do
            {
                cin>>arxh>>telos;

                if(arxh<0 || arxh>=plithos_korifwn || telos<0 || telos>=plithos_korifwn)
                {
                    cout<<"den iparxei arnitiki korifi h korifi me ari8misi megaliteri tou plithous twn korifwn,dose alles korifes\n";
                }
                else if(arxh==telos)
                {
                    cout<<"den exoume anakiklwseis sta apla grafimata, dialekse alles korifes\n";
                }
                else if(pinGitniasis[arxh][telos]==1)
                {
                    cout<<"den exoume paralliles akmes sta apla grafimata,dialekse alles korifes\n";
                }


            }
            while(arxh<0 || arxh>=plithos_korifwn || telos<0 || telos>=plithos_korifwn || arxh==telos || pinGitniasis[arxh][telos]==1);

            pinGitniasis[arxh][telos]=1;
            pinGitniasis[telos][arxh]=1;
        }


        cout<<"\n";///print ton pinaka gitniasis
        for(i=0; i<plithos_korifwn; i++)
        {
            for(j=0; j<plithos_korifwn; j++)
            {
                cout<<pinGitniasis[i][j]<<" ";
                if (j==plithos_korifwn-1)
                {
                    cout<<"\n";
                }

            }
        }
    }

    return 0;
}
