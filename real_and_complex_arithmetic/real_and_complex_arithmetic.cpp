#include <iostream>
#include "functions.cpp"
#include "functions.h"


using namespace std;



int main()
{
    struct migadikoi v1,v2;
    struct pragmatikoi b;
    struct apotelesmata l;
    int k;
    char method;

    cout<<"dose 1 gia migadikous h 2 gia pragmatikous\n";
    cin>>k;

    if(k==1) // an migadikoi kane auta
    {
        cout<<"dose to pragmatiko meros tou protou: \n";
        cin>>v1.x;
        cout<<"dose to fantastiko meros tou protou: \n";
        cin>>v1.y;
        cout<<"dose to pragmatiko meros tou deuterou: \n";
        cin>>v2.x;
        cout<<"dose to fantastiko meros tou deuterou: \n";
        cin>>v2.y;
        cout<<"dose tin praksi pou 8eleis na kaneis( +,-,*,/)\n";
        cin>>method;

        switch (method)//analoga me tin praksi kane ta antoistoixa pragmata
        {
        case '+':
            fun_1(v1,v2,l);
            cout<<" to apotelesma einai: "<<l.re<<"+("<<l.im<<")i";
            break;
        case '-':
            fun_2(v1,v2,l);
            cout<<" to apotelesma einai: "<<l.re<<"+("<<l.im<<")i";
            break;
        case '*':
            fun_3(v1,v2,l);
            cout<<" to apotelesma einai: "<<l.re<<"+("<<l.im<<")i";
            break;
        case '/':
            fun_4(v1,v2,l);
            cout<<" to apotelesma einai: "<<l.re<<"+("<<l.im<<")i";
            break;
        }
    }
    else if(k==2) // an pragmatikoi kane auta
    {
        cout<<"dose ton proto arithmo: \n";
        cin>>b.x;
        cout<<"dose ton deutero arithmo: \n";
        cin>>b.y;
        cout<<"dose tin praksi pou 8eleis na kaneis(1 -> + , 2 -> - ,3 -> * ,4 -> / )\n";
        cin>>method;

        switch(method)
        {
        case '+':
            cout<<" to apotelesma einai: "<<fun_1(b)<<endl;
            break;
        case '-':
            cout<<" to apotelesma einai: "<<fun_2(b)<<endl;
            break;
        case '*':
            cout<<" to apotelesma einai: "<<fun_3(b)<<endl;
            break;
        case '/':
            cout<<" to apotelesma einai: "<<fun_4(b)<<endl;
            break;
        }

    }


    return 0;

}
