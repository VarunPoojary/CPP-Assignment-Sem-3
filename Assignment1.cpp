 #include <iostream>
    using namespace std;
    int main() {
  
    int n1,m1,n2,m2; //Variable Declaration
    cout << "Enter the number of Rows and Columns of 1st matrix : ";
    cin >>n1 >>m1;
    cout << "Enter the number of Rows and Columns of 1st matrix : ";
    cin >>n2 >>m2;
    int a[n1][m1], b[n2][m2] , ans[n1][m2]; //Declaration of 2d arrays
    cout << "Enter the elements of first matrix :"<<endl; 
    for (int i = 0; i < n1; i++) 
    {
        for (int j = 0; j <m1; j++) 
        {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of second matrix :" <<endl;
    for (int i = 0; i <n2; i++) 
    {
        for (int j = 0; j <m2; j++) 
        {
            cin >> b[i][j];
        }
    }
    
    cout<<"Press 1 for addition"<<endl<<"Press 2 for subtraction"<<endl<<"Press 3 for Multiplication"<<endl;
    int c;
    cin>>c;
    switch(c)
    {
        case 1:
        cout<<"Sum of 2 Arrays:"<<endl;
            for (int i = 0; i <n1; i++) 
                {
                    for (int j = 0; j <m1; j++) 
                    {
                        ans[i][j] = a[i][j] + b[i][j];
                        
                        cout<< ans[i][j] << "  ";
                    }
                    cout<<endl;
                }
            break;
            
        case 2:
        cout<<"Difference of 2 Arrays:"<<endl;
            for (int i = 0; i <n1; i++) 
                {
                    for (int j = 0; j <m1; j++) 
                    {
                        ans[i][j] = a[i][j] - b[i][j];
                        
                        cout<< ans[i][j] << "  ";
                    }
                    cout<<endl;
                }
            break;
        
        case 3:
        cout<<"Multiplication of 2 Arrays"<<endl;
        if(m1==n2)
        {
            for (int i = 0; i <n1; i++) 
                {
                    for (int j = 0; j <m2; j++) 
                    {
                        ans[i][j]=0;
                        for(int k=0;k<m1;k++)
                        {
                            ans[i][j]+=a[i][k] * b[k][j];
                        }
                        
                        
                        cout<< ans[i][j] << "  ";
                    }
                    cout<<endl;
                }
            
        }
        else
        {
            cout<<"Enter Proper Parameters";
        }
            break;
        
        default:
            cout<<"Enter correct choice";
        
    }

    return 0;
    }






    // #include <iostream>
    // using namespace std;
    
    // void addition()
    // {
    // int n1,m1,n2,m2;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n1 >>m1;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n2 >>m2;
    // int a[n1][m1], b[n2][m2] , ans[n1][m2]; //Declaration of 2d arrays
    // cout << "Enter the elements of first matrix :"<<endl; 
    // for (int i = 0; i < n1; i++) 
    // {
    //     for (int j = 0; j <m1; j++) 
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // cout << "Enter the elements of second matrix :" <<endl;
    // for (int i = 0; i <n2; i++) 
    // {
    //     for (int j = 0; j <m2; j++) 
    //     {
    //         cin >> b[i][j];
    //     }
    // }
    //     cout<<"Sum of 2 Arrays:"<<endl;
    //         for (int i = 0; i <n1; i++) 
    //             {
    //                 for (int j = 0; j <m1; j++) 
    //                 {
    //                     ans[i][j] = a[i][j] + b[i][j];
                        
    //                     cout<< ans[i][j] << "  ";
    //                 }
    //                 cout<<endl;
    //             }
    // }
    
    
    // void subtraction()
    // {
    // int n1,m1,n2,m2;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n1 >>m1;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n2 >>m2;
    // int a[n1][m1], b[n2][m2] , ans[n1][m2]; //Declaration of 2d arrays
    // cout << "Enter the elements of first matrix :"<<endl; 
    // for (int i = 0; i < n1; i++) 
    // {
    //     for (int j = 0; j <m1; j++) 
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // cout << "Enter the elements of second matrix :" <<endl;
    // for (int i = 0; i <n2; i++) 
    // {
    //     for (int j = 0; j <m2; j++) 
    //     {
    //         cin >> b[i][j];
    //     }
    // }
    //     cout<<"Difference of 2 Arrays:"<<endl;
    //         for (int i = 0; i <n1; i++) 
    //             {
    //                 for (int j = 0; j <m1; j++) 
    //                 {
    //                     ans[i][j] = a[i][j] - b[i][j];
                        
    //                     cout<< ans[i][j] << "  ";
    //                 }
    //                 cout<<endl;
    //             }
    // }
    
    // void multiplication()
    // {
    // int n1,m1,n2,m2;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n1 >>m1;
    // cout << "Enter the number of Rows and Columns of 1st matrix : ";
    // cin >>n2 >>m2;
    // int a[n1][m1], b[n2][m2] , ans[n1][m2]; //Declaration of 2d arrays
    // cout << "Enter the elements of first matrix :"<<endl; 
    // for (int i = 0; i < n1; i++) 
    // {
    //     for (int j = 0; j <m1; j++) 
    //     {
    //         cin >> a[i][j];
    //     }
    // }

    // cout << "Enter the elements of second matrix :" <<endl;
    // for (int i = 0; i <n2; i++) 
    // {
    //     for (int j = 0; j <m2; j++) 
    //     {
    //         cin >> b[i][j];
    //     }
    // }
    
    // cout<<"Multiplication of 2 Arrays"<<endl;
    //     if(m1==n2)
    //     {
    //         for (int i = 0; i <n1; i++) 
    //             {
    //                 for (int j = 0; j <m2; j++) 
    //                 {
    //                     ans[i][j]=0;
    //                     for(int k=0;k<m1;k++)
    //                     {
    //                         ans[i][j]+=a[i][k] * b[k][j];
    //                     }
                        
                        
    //                     cout<< ans[i][j] << "  ";
    //                 }
    //                 cout<<endl;
    //             }
            
    //     }
    //     else
    //     {
    //         cout<<"Enter Proper Parameters";
    //     }
        
        
        
    // }

    // int main() 
    // {
    // cout<<"Press 1 for addition"<<endl<<"Press 2 for subtraction"<<endl<<"Press 3 for Multiplication"<<endl;
    // int c;
    // cin>>c;
    // switch(c)
    // {
    //     case 1:
    //      addition();
    //         break;
            
    //     case 2:
    //         subtraction();
    //         break;
        
    //     case 3:
    //         multiplication();
    //         break;
        
    //     default:
    //         cout<<"Enter correct choice";
        
    // }
    // return 0;
    // }
