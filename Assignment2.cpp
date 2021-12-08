
/* 
    A matrix of m x n order is said to have a saddle point; if some entry at a[i][j] is the smallest value in row i and the
    largest value in j. Write C++ function that determines the location of a saddle point if it exists.
*/

#include <iostream>
using namespace std;
# define s 20

class saddle
{
    public :
    int a[s][s],r,c;
    void get_matrix();
    void saddle_point();
};



void saddle::get_matrix()                              //function to accept Elements of array from user
{
    cout<<"\nEnter Array Dimensions : ";
    cin>>r>>c;
    cout<<"\nEnter Array Elements "<<endl;
    for (int i = 0; i < r; i++) 
    {
		for (int j = 0; j < c; j++) 
		{
			cin >> a[i][j];
		}
	}
}

void saddle::saddle_point()                             // function to find the saddle_point in the array
    {
        cout<<"\nSaddle Points are ";
         for(int i=0;i<r;i++)
             {
                int min=a[i][0];
                int max=a[i][0];
                int min_index=0;
                int max_index=0;
                bool min_ans=true;
                bool max_ans=true;
            
                for(int j=1;j<c;j++)                    // for loop to find the smallest and greatest element in the row
                    {
                        if(a[i][j]<min)
                        {
                            min=a[i][j];
                            min_index=j;
                        }
                
                        if(a[i][j]>max)
                        {
                            max=a[i][j];
                            max_index=j;
                        }
                    }   
            
            
                for(int j=0;j<r;j++)                    // for loop to check if min and max in row is the greatest and smallest in collumn
                    {
                        if(a[j][min_index]>min)
                        {
                            min_ans=false;
                        }
                
                        if(a[j][max_index]<max)
                        {
                            max_ans=false;
                        }
                
                        if(min_ans==false && max_ans==false)
                        {
                            break;
                        }
                    }
            
                    if(min_ans)                               //if element smallest in row and greatest in collumn or vice versa then print
                    cout<<a[i][min_index]<<" ";
                    else if(max_ans)
                    cout<<a[i][max_index]<<" ";
                    else
                    continue;
            
            }
    }
    
int main()
{
    saddle obj;
    obj.get_matrix();
    obj.saddle_point();
    return 0;
}
