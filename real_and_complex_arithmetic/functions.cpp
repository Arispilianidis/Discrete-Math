#include <iostream>
#include <math.h>
#include "functions.h"

using namespace std;

struct apotelesmata
{

    float re;
    float im;
};
struct migadikoi
{
    float x;
    float y;
};

struct pragmatikoi
{
    float x;
    float y;
};

void fun_1(struct migadikoi &v1,struct migadikoi &v2,struct apotelesmata &l) //pros8esi migadikwn
{
    float re,im;

    l.re=v1.x+v2.x;
    l.im=v1.y+v2.y;
}
void fun_2(struct migadikoi &v1,struct migadikoi &v2,struct apotelesmata &l)//aferesi migadikwn
{
    float re,im;

    l.re=v1.x-v2.x;
    l.im=v1.y-v2.y;
}
void fun_3(struct migadikoi &v1,struct migadikoi &v2, struct apotelesmata &l)// polapla. migadikwn
{
    float re,im;

    l.re=(v2.x*v1.x)-(v2.y*v1.y);
    l.im=(v1.x*v2.y)+(v1.y*v2.x);
}
void fun_4(struct migadikoi &v1,struct migadikoi &v2, struct apotelesmata &l)// diairesi migadikwn
{
    float re,im;

    l.re=((v2.x*v1.x)+(v2.y*v1.y))/(pow(v2.x,2)+ pow(v2.y,2));
    l.im=((v2.x*v1.y)-(v1.x*v2.y))/(pow(v2.x,2)+ pow(v2.y,2));
}

float fun_1(struct pragmatikoi &b)//pros8esi pragmatikwn
{

    return(b.x + b.y);

}
float fun_2(struct pragmatikoi &b)//aferesi pragmatikwn
{

    return(b.x - b.y);
}

float fun_3(struct pragmatikoi &b)// polapla. pragmatikwn
{

    return (b.x * b.y);

}
float fun_4(struct pragmatikoi &b)//dieresi pragmatikwn
{

    return (b.x / b.y);

}



