#include <iostream>
using namespace std;
int baseball(int a,int b,int c);




int main()
{
int answer=0;
int a=0;
int b=0;
int c=0;

cout << "Enter a answer: ";
cin >> answer;

a=answer/100;
b=(answer-a*100)/10;
c=answer-a*100-b*10;

baseball(a,b,c);

cout << "You win!" << endl;


}
