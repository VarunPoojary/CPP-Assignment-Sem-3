/*
Department of Computer Engineering has student's club named 'Pinnacle Club'.
Students of Second, third and final year can be granted membership on request. Similarly, one may cancel the
membership of club. The First position of list is always reserved for the President of club and last position of
list is reserved for the Secretary of club. Write C++ program to maintain information of club member‘s using
singly linked list. Write functions
Add and delete the members.
Compute total number of members of club
Display members
Display list in reverse order
*/

#include<iostream>
#include<string.h>
using namespace std;
struct node
{
    char name[50];
    struct node *next;
};

class info
{       node *s=NULL,*head=NULL,*temp=NULL;
        int b,c,i,j,ct;
        char a[20];
        public:
            node *create();
            void insertp();
            void insertm();
            void delm();
            void display();
            void count();
            void reverse();
            void rev(node *p);
            
};


node *info ::create()
{   
    node *p=new(struct node);
     cout<<"enter name of student ";
     cin>>a;
     strcpy(p->name,a);
     p->next=NULL;
     return  p;
  } 
  
  
void info::insertm()
   { 
       node *p=create();
   
     if(head==NULL)
     {    
        head=p;
     }
    else
    {     temp=head;
          while(temp->next!=NULL)
          {    temp=temp->next;   }
              temp->next=p;
     }        
   }
   
   
   
     void info::insertp()
  { 
       node *p=create();
   
     if(head==NULL)
     {    head=p;
     }
    else
    {      temp=head;
            head=p;
              head->next=temp->next;
             
     }        
         
   }
  
   void info::display()
   {          if(head==NULL)
               {    cout<<"linklist is empty";
                }
              else
              {   
                temp=head;
                          cout<<"NAME   \n";
                          while(temp->next!=NULL)
                          {     cout<<temp->name;
                                temp=temp->next;
                          }
                         cout<<temp->name<<"->";
               }     
  }
  
  
   void info::delm()
  {  int m,f=0; 
  string b;
     cout<<"\n enter the prn no. of student whose data you want to delete";
      cin>>b;
      temp=head;
      while(temp->next!=NULL)
      {  
           if(temp->name==b)
            {           s->next=temp->next;
                         delete(temp);        f=1;
            }
            s=temp;
            temp=temp->next;
       }      if(f==0)
             {   cout<<"\n sorry memeber not deleted ";   }
   }
   
   

   void info::count()
   {      temp=head;    ct=0;
          while(temp->next!=NULL)
          {    temp=temp->next; ct++;   }
             ct++;
             cout<<"  Count of members is:"<<ct;
             
     }
     
     
     void info::reverse()
     {     rev(head);   }
     
     void info::rev(node *temp)
     {     if(temp==NULL)
          { return;   }
          else
          {   rev(temp->next); }
          cout<<temp->name<<"->";
     }  
     
     
     
  int main()
  { info obj;
  int i;
   
          char ch;
       do{
          cout<<"\n choice the options";
          cout<<"\n  1. To insert president   ";
          cout<<"\n  2. To insert member   ";
          cout<<"\n  3. To insert secretary ";
          cout<<"\n  4. To delete member  ";
          cout<<"\n  5. To display data   ";
          cout<<"\n  6. Count of members";
          cout<<"\n  7. Display reverse  ";
          cin>>i;
         switch(i)
         {        case 1:   obj.insertp();
                                  break;
                  case 2:   obj.insertm();
                                  break;
                  case 3:   obj.insertm();
                                  break;
                  case 4:   obj.delm();
                                  break;
                  case 5:   obj.display();   
                                  break;
                  case 6:   obj.count();
                                  break;      
                  case 7:   obj.reverse();
                                  break;  
                                  
                  default:  cout<<"\n unknown choice";
          }
            cout<<"\n do you want to continue enter y/n \n";
            cin>>ch;
       
       }
       while(ch=='y'||ch=='Y');                                                                                                   
                     
   return 0;
 } 

