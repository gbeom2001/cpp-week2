#include <iostream>
#include <random>
#include <iomanip>
#include <ctime>
using namespace std;

int random()
{
    int a=0;
    mt19937 gen((unsigned int)time(NULL));
    uniform_int_distribution<int> dis(0,999);
    a=dis(gen);
    cout << "Answer is ";
    cout.width(3);
    cout.fill('0');
    cout << a << endl;

    return a;
}
