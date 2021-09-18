#include<iostream>
    using namespace std;
    int main()
    {
        int r,c;
        cout<<"Enter Number of Rows and Col ";
        cin>>r>>c;
        int a[r][c];
        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                cin>>a[i][j];
            }
        }
        
        for(int i=0;i<r;i++)
        {
            int min=a[i][0];
            int max=a[i][0];
            int min_index=0;
            int max_index=0;
            bool min_ans=true;
            bool max_ans=true;
            
            for(int j=1;j<c;j++)
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
            
            
            for(int j=0;j<r;j++)
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
            
            if(min_ans)
            cout<<a[i][min_index]<<" ";
            else if(max_ans)
            cout<<a[i][max_index]<<" ";
            else
            continue;
            
        }
        return 0;
    }
