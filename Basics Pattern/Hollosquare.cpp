#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    for(i=0;i<3;i++)
    {
        if(i==0 || i==2)
        {
            for(j=0;j<5;j++)
            {
                cout<<"* ";
            }
        }
        else
        {
            cout<<"* ";
        }
        for(i=0;i<3;i++)
        {
            cout<<" ";
        }
        
    }
    cout<<endl;
   
    return 0;
}