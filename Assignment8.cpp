/*
Implement C++ program for expression conversion as infix to postfix and its evaluation using stack based on given conditions:
Operands and operator, both must be single character.
Input Postfix expression must be in a desired format.
Only '+', '-', '*' and '/ ' operators are expected.
*/


#include <iostream>
#include <string>
#include <cctype>
using namespace std;
# define size 20

class infix_to_postfix                                             
{
    public:
    char stack[size];
    int top;
    void push(char);
    char pop();
    char top_();
    int priority(char);
    bool precedence(char, char);
    bool empty();
    string convert(string);
    
    infix_to_postfix()
    {
        top=-1;
    }
};


void infix_to_postfix::push(char o)                             //to add operator in the stack
{
    if(top == size-1)
    cout<<"Stack is full"<<endl;
    else
    {
        top++;
        stack[top]=o;
    }
}


char infix_to_postfix::pop()                                    //to remove the top element of stack
{
    char ch;
    if(empty())
    cout<<"Stack is Empty"<<endl;
    else
    {
        ch=stack[top];
        stack[top]='\0';
        top--;
    }
    return ch;
}


char infix_to_postfix::top_()                                       //to return top element of stack
{
    return stack[top];
}


int infix_to_postfix::priority(char c)                           //to check for the priority of operator
{
    if(c=='+' || c=='-')
    return 1;
    if(c=='/' || c=='*')
    return 2;
    
    return 0;
}


bool infix_to_postfix::precedence(char c1, char c2)                 //to check for the precedence of operator
{
    if(priority(c1)>=priority(c2))
    return true;
    else
    return false;
}


bool infix_to_postfix::empty()                                  //to check if stack is empty or no
{
    if(top== -1)
    return true;
    else
    return false;
}

string infix_to_postfix::convert(string infix)                              //function to convert from infix to postfix
{
    string postfix = "";
    int i=0;
    while(infix[i]!='\0'){
        if(infix[i]>='a' && infix[i]<='z'|| infix[i]>='A'&& infix[i]<='Z' ||isdigit(infix[i])){
            postfix += infix[i];
            i++;
        }
        else {
            while(!empty() && precedence(top_(),infix[i])){
                postfix += top_();
                pop();
            }
            push(infix[i]);
            i++;
        }
    }
    while(!empty()){
        postfix += top_();
        pop();
    }
    return postfix;
}

int main()
{
    infix_to_postfix obj;
    string postfix="", infix;
    cout<<"Enter Infix Expression"<<endl;
    cin>>infix;                                                         //To input infix Expressionfrom user
    int i=0;
    string ans=obj.convert(infix);
    cout<<ans<<endl;
    return 0;
}
