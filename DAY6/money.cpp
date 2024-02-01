#include<iostream>
using namespace std;

int main()
{
    int amt,x,a,b,c,d,e,f;

    cout<<"Enter the amount: "<<endl;
    cin>>amt;
// Program to find the no. of 100,50,20,1 rs notes present in amount

    do
    {
      cout<<"Choose: 1) 100 rs notes 2) 50 rs notes 3) 20 rs notes 4) 1 rs notes 5)exit: "<<endl;
      cin>>x;

      switch(x)
      {
        case 1: a = amt / 100;
               cout<<"The no. of 100rs notes: "<< a <<endl;
               break;
            
        case 2: 
               a = amt / 100;
               b = amt - a*100;
               if(b>=50)
               {
                d=b/50;
                cout<<"The no. of 50rs notes: "<< d <<endl;
               }
               else
               {
                cout<<"No 50rs notes"<<endl;
               }
               break;

        case 3: 
               a=amt/100;
               b=amt-a*100;

               if(b >= 50)
               {
                d=b/50;
                c = b - d*50;
               }
               
               if(c<=50)
               {
                e = c/20;
                cout<<"The no. of 20rs notes: "<< e <<endl;
               }
               break;

        case 4:
               a=amt/100;
               b=amt-a*100;

               if(b >= 50)
               {
                d=b/50;
                c = b - d*50;
               }
              
               if(c>=20)
               {
                e = c/20;
                f = c- e*20;
               }
               else
               {
                f = c;
               }
               cout<<"The no. of 1rs notes: "<< f <<endl;
              break;

        case 5: cout<<"Program exit!!!"<<endl;
                exit(1);
      }

    } while (x != 5 );
    
   return 0;
}