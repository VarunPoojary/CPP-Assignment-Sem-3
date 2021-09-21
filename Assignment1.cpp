/*Write program in C++ to perform matrix operaions like add_matrix(), sub_matrix(), multi_mutrix() using appropriate data sturucture. 
Also write how to determine time complexity and space compleity of your program. */




#include<iostream>
using namespace std;
#define s 20
class matrix
{
  public:
  int a[s][s],b[s][s],res[s][s],r1,c1,r2,c2,rr,cr;
  void getMatrix();
  void display();
  void add_matrix();
  void sub_matrix();
  void multi_matrix();
};


void matrix::getMatrix()
{
    cout<<"\nEnter number of rows and columns of matrix a:";
    cin>>r1>>c1;
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"\nEnter number of rows and columns of matrix b:";
    cin>>r2>>c2;
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>b[i][j];
        }
    }
    cout<<endl;
}


void matrix::display()
{
    cout<<"Resultant Matrix is: "<<endl;
    for(int i=0;i<rr;i++)
    {
        for(int j=0;j<cr;j++)
        {
            cout<<res[i][j]<<"  ";
        }
        cout<<endl;
    }
}


void matrix::add_matrix()
{
    rr=r1;
    cr=c1;
    if(r1==r2 && c1==c2)
    {
      for(int i=0;i<rr;i++)
        {
            for(int j=0;j<cr;j++)
            {
            res[i][j]=a[i][j]+b[i][j];
            }
        }
        display(); 
    }
    else
    {
        cout<<"Matrix Addition Not Posible"<<endl;
    }
    
}



void matrix::sub_matrix()
{
    rr=r1;
    cr=c1;
    if(r1==r2 && c1==c2)
    {
      for(int i=0;i<rr;i++)
        {
            for(int j=0;j<cr;j++)
            {
            res[i][j]=a[i][j]-b[i][j];
            }
        }
        display(); 
    }
    else
    {
        cout<<"Matrix Subtraction Not Posible"<<endl;
    }
    
}


void matrix::multi_matrix()
{
    if(r1 != c2 && c1 != r2){
        cout<<"\nMatrix Multiplication Not Possible!\n";
        return;
    }
    else{
        rr = r1;
        cr = c2;
        res[rr][cr];
        for (int i = 0; i < r1; i++) 
        {
		    for (int j = 0; j < c2; j++) 
		    {
                res[i][j]=0;
			    for (int k = 0; k<c1; k++) {
				    res[i][j] += a[i][k] * b[k][j];
			    }
		    }
	    }
        display();
    }
}


int main()
{
    matrix obj;
    char n;
    cout<<"Press 1 for addition"<<endl<<"Press 2 for subtraction"<<endl<<"Press 3 for Multiplication"<<endl;
    cin>>n;
    
    switch(n)
    {
        case '1':
        obj.getMatrix();
        obj.add_matrix();
        break;
        case '2':
        obj.getMatrix();
        obj.sub_matrix();
        break;
        case '3':
        obj.getMatrix();
        obj.multi_matrix();
        break;
        default:
        cout<<"Invalid Choice"<<endl;
        
    }
}
