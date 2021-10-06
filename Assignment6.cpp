

#include<iostream>
#include<string>
using namespace std;
class strfunc
{
    public:
    string str="";
    // string ans="";
    int a,b;
    char c;
    void getstring();
    void frequency();
    void deletes();
    void chardelete();
    void palindrome();
};

void strfunc::getstring()
{
    cout<<"Enter String"<<endl;
    getline(cin,str);
}

void strfunc::frequency()
{
    char c;
    cout<<"Enter Character to be searched"<<endl;
    cin>>c;
    int count=0;
    for(int i=0;i<str.size();i++)
    {
      if(c==str[i])
      count++;
    }
    cout<<"The frequency is "<<count<<endl;
    
}



void strfunc::deletes()
{
    cout<<"Enter the indices between which Character have to be deleted"<<endl;
    cin>>a>>b;
    string ans="           ";
    int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(i>=a && i<=b)
        continue;
        else
        {
            ans[j++]=str[i];
        }
    }
    cout<<"Updated String is "<<ans<<endl;
}



void strfunc::chardelete()
{
    char c;
    cout<<"Enter Char to be deleted"<<endl;
    cin>>c;
    string ans="       ";
    int j=0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i]==c)
        {
          continue;
        }
        else
        {
            ans[j++]=str[i];
        }
    }
    cout<<"Updated String is "<<ans<<endl;
    
}

void strfunc::palindrome()
{
    int left=0,right=str.size()-1;
    while(left!=right)
    {
        if(str[left]!=str[right])
        {
            cout<<"String not palindrome"<<endl;
            return;
        }
        left++;
        right--;
    }
    cout<<"String is Palindrome"<<endl;
    
    
}
int main()
{
    strfunc obj;
    obj.getstring();
    char n;
    cout<<"Press 1 for Frequency"<<endl<<"Press 2 for Deleting using 2 indices"<<endl<<"Press 3 for Deleting using char"<<endl<<"Press 4 for checking for palindrome"<<endl;
    cin>>n;
    switch(n)
    {
        case '1':
        obj.frequency();
        break;
        case '2':
        obj.deletes();
        break;
        case '3':
        obj.chardelete();
        break;
        case '4':
        obj.palindrome();
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        
    }
    return 0;
}



