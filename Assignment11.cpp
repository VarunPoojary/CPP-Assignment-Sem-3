#include <iostream>
using namespace std;
# define size 10
class sorting                                              
{
    public:
    float a[size];
    void input_marks();
    void selection_sort();
    void bubble_sort();
    void display();
};

void sorting::input_marks()                                //function to input the marks of all the students
{
    cout<<"Enter Marks of 10 Students"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
}

void sorting::selection_sort()                            // function to perform selection sort algorithm 
{
    int min=0;
    for(int i=0;i<size-1;i++)
    {
        min=i;
        for(int j=i+1;j<size;j++)
        {
            if(a[min]>a[j])                                // to swap the elements if not the min marks
            {
                float temp=a[min];
                a[min]=a[j];
                a[j]=temp;
            }
        }
        
    }
    
    display();
}

void sorting::bubble_sort()                                  // function to perform selection sort algorithm 
{
    for(int i=0;i<size-1;i++)
    {
        for(int j=0;j<size-i-1;j++)
        {
            if(a[j]>a[j+1])                                // to swap the elements if element greater than the adjacent mark
            {
                float temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    
    display();
}


void sorting::display()                                // function to display marks of top 5 Students
{
    cout<<"Top 5 Scorers:"<<endl;                                
    for(int i=size-1;i>=size-6;i--)
    {
        cout<<a[i]<<endl;
    }
}


int main()
{
    sorting obj;
    obj.input_marks();
    
    cout<<"Press 1 for Selection Sort \nPress 2 for Bubble Sort"<<endl; 
    int s;
    cin>>s;
    switch(s)                                // Menu driven switch to input the choice of algorithm from the user
    {
        case 1:
        obj.bubble_sort();
        break;
        
        case 2:
        obj.selection_sort();
        break;
        
        default:
        cout<<"Invalid Choice";
    }
    return 0;
}
