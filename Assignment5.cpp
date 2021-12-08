/*Write C++ program for String operations. Write the following functions: 
frequency(): that determines the frequency of occurrence of particular character in the string.
delete(): that accepts two intergers to specify position of characters to be deleted. The function computes new string that is except the deleted characters.
chardelete(): that accepts a character c. The function returns the string with all occurrences of c removed. 
palindrome(): to check whether given string is palindrome or not
*/

#include<iostream>
#include<string>
using namespace std;
class strfunc
{
    public:
    string str="";
    int a,b;
    char c;
    void getstring();
    void frequency();
    void deletes();
    void chardelete();
    void palindrome();
};

void strfunc::getstring()                                                   //function to input string from the user
{
    cout<<"Enter String"<<endl;
    getline(cin,str);
}

void strfunc::frequency()                                                   //function to count the frequency of the Character
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

void strfunc::deletes()                                                   //function to delete all characters between 2 indices
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

void strfunc::chardelete()                                                   //function to delete a particular char
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

void strfunc::palindrome()                                                    //function to find the palindrome of a string
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
    switch(n)                                                   //Menu driven switch case to take the users choice
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


