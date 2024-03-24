#include <iostream>
#include <random>
#include <ctime>
using namespace std;

int random()
{
    int a=0;
    int result=1;
    while(result)
    {
    int x=0;
    int y=0;
    int z=0;
    

    mt19937 gen((unsigned int)time(NULL));
    uniform_int_distribution<int> dis(0,999);
    a=dis(gen);

    x=a/100;
    y=(a-x*100)/10;
    z=a-x*100-y*10;

    result = (x==y||x==z||y==z) ? 1 : 0;

    }

    return a;
}
