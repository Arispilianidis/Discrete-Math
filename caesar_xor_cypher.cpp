#include <iostream>
#include <string.h>


using namespace std;

class crypto
{

protected:

    string Message;

    string Encrypted;

    string Decrypted;

public:

    void virtual Encryption ()=0;//tin ekana void gt den douleuei allios to programma

    void virtual Decryption ()=0;//tin ekana void gt den douleuei allios to programma

    crypto(string msg);

    string getMessage();

    void setMessage(string msg);

    string getEncrypted();

    string getDecrypted();

};

crypto::crypto(string msg) //Constructor
{
    Message=msg;
}

void crypto::setMessage(string msg)
{
    Message=msg;
}

string crypto::getMessage()
{
    return(Message);
}

string crypto::getEncrypted()
{
    return(Encrypted);
}

string crypto::getDecrypted()
{
    return(Decrypted);
}


class Caesar: public crypto
{

private:
    char c[20];//kano ena pinaka xaraktirwn gia na mporeso na kano pra3eis me xaraktires kai ari8mous


public:
    int n;//arithmos metatopisis

    Caesar(string msg);

    void Encryption ();
    void Decryption ();

};

Caesar::Caesar(string msg):crypto(msg)//kalw ton cotor ths base
{
    //Message=msg;
    cout<<"to Message egine dekto stin Ceasar"<<endl;
}

void Caesar::Encryption() //analoga me to n ,pros8eto se ka8e gramma tou string mou to n
{
    int i;

    cout<<"dose ton arithmo metatopisis gia tin kriptografisi\n";
    cin>>n;


    for(i=0; i<Message.length(); i++)
    {
        c[i]=Message[i] + n;
    }

    Encrypted=c;

}

void  Caesar::Decryption()
{
    int i;


    for(i=0; i<Message.length(); i++)
    {
        c[i]=Encrypted[i] - n;
    }

    Decrypted=c;

}



class XOR: public crypto
{

public:
    char kleidi ;//kleidi kriptografisis

    XOR(string msg);

    void Encryption ();
    void Decryption ();

};

XOR::XOR(string msg):crypto(msg)//kalw ton ctor ths base
{
    //Message=msg;
    cout<<"to Message egine dekto stin XOR"<<endl;
}

void XOR::Encryption(){

    int i;

    cout<<"dose to kleidi kriptografisis\n";
    cin>>kleidi;

    Encrypted=Message;

    for (i = 0; i < Message.size(); i++){
        Encrypted[i] ^= kleidi;
    }

}

void XOR::Decryption(){

    int i;

    Decrypted=Encrypted;

    for (i = 0; i < Encrypted.size(); i++){
        Decrypted[i] ^= kleidi;
    }

}



main()

{

    Caesar c_enc("hello");

    c_enc. Encryption();

    string resEncCes=c_enc.getEncrypted();

    cout<<resEncCes<<endl;

    c_enc.Decryption();

    cout<<c_enc.getDecrypted()<<endl;



    XOR x_enc("hello");

    x_enc.Encryption();

    string resEncXOR=x_enc.getEncrypted();

    cout<<resEncXOR<<endl;

    x_enc.Decryption();

    cout<<x_enc.getDecrypted();


}
