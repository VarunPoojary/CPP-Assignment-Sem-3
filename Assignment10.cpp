#include <iostream>
using namespace std;
# define size 10

class searching                                             
{
    public:
    int a[size];
    void input_num();
    int sequential_search(int);
    int binary_search(int);
};

void searching::input_num()                                //function to input 10  Numbers from user
{
    cout<<"Enter 10 Numbers"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
}

int searching::binary_search(int num)                   // function to perform Binary Search algorithm 
{
   int l=0,r=size-1,mid=0;
   while(l<=r)
   {
       mid=(l+r)/2;
       if(a[mid]<num)
       {
           l=mid+1;
           
       }
       else if(a[mid]>num)
       {
           r=mid-1;
       }
       else
       return mid;
   }
   return -1;
}

int searching::sequential_search(int num)                        // function to perform Sequential Search algorithm 
{
    int i;
    for(i=0;i<size;i++)
    {
        if(num==a[i])
        return i;
    }
    return -1;
}



int main()
{
    searching obj;
    obj.input_num();
    cout<<"Enter Number to be searched"<<endl;                      // to input number to be searched from the user
    int number;
    cin>>number;
    
    cout<<"Press 1 for Binary Search \nPress 2 for Sequential Search"<<endl; 
    int s;
    cin>>s;
    int ans;
    switch(s)                                // Menu driven switch case to input the choice of algorithm from the user
    {
        case 1:
        ans=obj.binary_search(number);
        if(ans==-1)
        cout<<"Number not present"<<endl;
        else
        cout<<"Element present at "<<ans<<"th position"<<endl;
        break;
        
        case 2:
        ans=obj.sequential_search(number);
        if(ans==-1)
        cout<<"Number not present"<<endl;
        else
        cout<<"Element present at "<<ans<<"th position"<<endl;
        break;
        
        default:
        cout<<"Invalid Choice";
    }
    return 0;
}
