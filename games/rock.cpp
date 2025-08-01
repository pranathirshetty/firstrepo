#include<iostream>
#include<math.h>
#include<ctime>
using namespace std;
int main ()
{
    int a,b,c;
    string m[]={"rock","paper","scissor"};
  first:  cout<<"Enter Rock(0), paper(1), scissor(2) "<<endl;
    cin>>a;
    b=rand()%3;
    if(a==b)
    {
        cout<<"DRAW!"<<endl;
    }
   else if(a==0&&b==2)
   {
    cout<<"YOU WIN !"<<endl;
   }
   else if(a==0&&b==1)
   {
    cout<<"YOU LOOSE !"<<endl;
   }
   else if (a==1&&b==0)
   {
    cout<<"YOU WIN!"<<endl;

   }
   else if (a==1&&b==2)
   {
    cout<<"YOU LOOSE !"<<endl;
   }
   else if(a==2&&b==0)
   {
    cout<<"YOU LOOSE !"<<endl;
   }
   else if (a==2&&b==1)
   {
    cout<<"YOU WIN!"<<endl;
   }
   else 
   {
    cout<<"Invalid input "<<endl;
   }
   
    cout<<"The computer choose "<<m[b]<<endl;
cout<<"DO u want to continue ?";
cout<<endl<<"Press 1 if yes , press 0 if no ";
cin>>c;
if(c==1)
{
    goto first;
}
else
{
    cout<<"Thank you ";
}

    return (0);


}
