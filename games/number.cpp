#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
    srand(time(0)); 

    int x, y,z;
    y = rand() % 100 + 1; 
yes: cout<<"Enter the number between 1 to 100 ";
    cin>>x;

 
 if(y==x)
 {
    cout<<"you guessed it right !"<<endl;
    
 }
 
 else if(y>x)
 {
   cout<<"The number is greater "<<endl;
 }

 else if (y<x)
 {
   cout<<"Number is smaller "<<endl;
 }

cout<<"Do you want to try again? "<<endl;
 cout<<endl<<"Press 1, if yes "<<endl;
 cin>>z;
 if(z==1)
 {
   goto yes;
 }
 else 
 {
   cout<<"Thanks!"<<endl;
 }
 system("pause"); 
 return 0;
}

