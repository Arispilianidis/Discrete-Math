#include <iostream>

using namespace std;

template<class T>
class Node
{
public:
    T data;
    Node *next;
    Node();
    ~Node();
};



template<class T>Node<T>::Node()
{
    static int counter=0;
    switch (counter){
case 0:
    data=1;
    counter=counter+1;
    break;
case 1:
    data=2.2;
    counter=counter+1;
    break;
case 2:
    data=3;
    counter=counter+1;
    break;
case 3:
    data=4;
    counter=counter+1;
    break;
    }
}


template<class T>Node<T>::~Node()
{
    delete next;
    cout<<"deleted next\n";
}

template<typename T>
void add(Node<T> *p1,Node<T> *p2)
{
    p1->next=p2;
}

int main()
{

    Node<float> *p1=new Node<float>;
    p1->next=NULL;


    Node<float> *p2=new Node<float>;
    p2->next=NULL;
    add(p1,p2);

    Node<float> *p3=new Node<float>;
    p3->next=NULL;
    add(p2,p3);

    Node<float> *p4=new Node<float>;
    p4->next=NULL;
    add(p3,p4);

    Node<float> *res;

    for(res=p1; res!=NULL; res=res->next)
    {
        std::cout<<"to data einai : "<<res->data<<std::endl;
    }

        delete p1;// h kai etsi p1->~Node();


    return 0;
}
