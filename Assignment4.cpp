/*Write C++ program for storing matrix. Write functions for 
i. Check whether given matrix is upper triangular or not
ii. Compute summation of diagonal elements
iii. Compute transpose of matrix */

#include<iostream>
using namespace std;
#define s 20

class matrix 
{
public:
    int a[s][s],x,y;
    void get_matrix();
    void Check_Upper();
    void Sum_Diagonals();
    void Transpose();
};

void matrix :: get_matrix()                                     // Function to accept Elements of array from user
{
    cout << "Enter Order Of Matrix A : "<<endl;
    cin >> x >> y;
    for (int i = 0; i < x; i++) 
	{
	  for (int j = 0; j < y; j++) 
	  {
	    cin >> a[i][j];
	  }
	}
    cout<<endl;
}


void matrix :: Check_Upper()                                           //FUnction to check if matrix is Upper triangle or not
{
    if(x == y)
    {
	for(int i=1;i<x;i++)
	{
	   for(int j=0;j<i;j++)
	   {
	     if(a[i][j] != 0)
	     {
	       cout<<"\nNot An Upper Triangular Matrix!\n";
	       return;
				}
	      }
	    }
	  cout<<"\nIt Is An Upper Triangular Matrix!\n";
	}
	else
	{
		cout<<"\nThe Dimensions Are Not Equal!\n";
	}
}

void matrix :: Sum_Diagonals()                                              //FUnction to calvulate the sum of Diagonal
{
    int sum =0;
	if(x==y)
	{
		for(int i=0;i<x;i++)
		{
			for(int j=0;j<y;j++)
			{
				if(i==j)
				{
					sum += a[i][j]; 
				}
			}
		}
    cout<<"\nSummation Of Diagonal Elements = "<<sum<<endl;
	}
	else 
	{
		cout<<"\nRows & Columns Are NOT Same!\n";
	}
}

void matrix :: Transpose()                                                 //Function to find the Transpose of the matrix
{
    cout<<"\nTranspose Of The Given Matrix : \n"<<endl;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)
        {
            cout<<" "<<a[j][i]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    char op;
	matrix obj;
		cout << "\nSelect Option :\n1.Check For Upper Triangular\n2.Summation Of Diagonals\n3.Transpose\nEnter Your Choice:";
		cin >> op;
		switch (op)                                                          //Menu Driven switch case to accept choice from the user
		{ 
		case '1':
			cout << "\n~Check For Upper Triangular~\n";
			obj.get_matrix();
            		obj.Check_Upper();
			break;

		case '2':
			cout << "\n~Summation Of Diagonals~\n";
			obj.get_matrix();
           		obj.Sum_Diagonals();
			break;

		case '3':
			cout << "\n~Transpose~\n";
			obj.get_matrix();
            		obj.Transpose();
			break;

		default:
			cout << "Enter a valid option\n"<<endl;
		}
    return 0;
}
