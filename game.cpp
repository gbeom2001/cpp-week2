#include <iostream>
using namespace std;




int baseball(int a,int b,int c)
{
int strikes = 0;

while(strikes!=3)
{
int guess=0;
int x=0;
int y=0;
int z=0;
int balls = 0;
strikes = 0;

cout << "Enter a guess: ";
cin >> guess;

x=guess/100;
y=(guess-a*100)/10;
z=guess-a*100-b*10;

if(x==a) strikes++;
if(y==b) strikes++;
if(z==c) strikes++;

if(x==b||x==c) balls++;
if(y==a||x==c) balls++;
if(z==a||x==b) balls++;

if(strikes!=3) cout << "Strikes: " << strikes<< ",Balls: " << balls << endl;

}

}