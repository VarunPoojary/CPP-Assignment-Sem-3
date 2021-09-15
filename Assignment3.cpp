  //Password Problem

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
            int min=a[i][0],index=0;
            bool ans=true;
            
            for(int j=1;j<c;j++)
            {
                if(a[i][j]<min)
                {
                    min=a[i][j];
                    index=j;
                }
                
            }
            
            for(int j=0;j<r;j++)
            {
                if(a[j][index]>min)
                {
                    ans=false;
                    break;
                }
            }
            
            if(ans)
            cout<<a[i][index];
            else
            continue;
            
        }
        return 0;
    }
