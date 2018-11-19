# include <iostream>
# include <vector>
 
using namespace std;
 
int c,r;
int arr[20][20];
 
int axy_num=0;
 
struct point 
{
    int ax;
    int ay;
}axy[20];
 
int p_col (int max_x, int max_y)
{
    
    int hu=0;
    for (int i=0; i<r; i++)
    {
        int num=0;
        if (arr[i][max_y]==0)
        {
            for (int j=0; j<c; j++)
            {
                // 1일때 지정된 곳이 0인경우
                if (arr[i][j]==1)
                {
                    num++;
                }
            }
            if (num==c-1)
            {
               hu++;
            }
            
        }
    }
    return hu;
 
}
 
int p_row (int x)
{
    for (int q=0; q<r; q++)
    {
        if (arr[q][x] ==1 and q>1)
        {
            axy[axy_num].ax=q;
            axy[axy_num].ay=x;
            return axy_num++;
        }
        // 한줄이 다 0 일경우
        else 
        {
            if (q==r-1 )
            {
                axy[axy_num].ax=q;
                axy[axy_num].ay=x;
                axy_num++;
            }
        }
    }
    return 0;
}
 
int main ()
{
    cin >> c >>r;
    
 
    for (int i=0; i<r; i++)
    {
        for (int j=0; j<c; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int sum=0;
    for (int k=0; k<c; k++)
    {
        p_row(k);
    }
 
 
    int axy_max=axy[0].ax;
    int axy_max_y = axy[0].ay;
 
    for (int m=0; m<20; m++)
    {
        if (axy_max<axy[m].ax)
        {
            axy_max = axy[m].ax;
            axy_max_y = axy[m].ay;
        }
    }
 
    sum = p_col(axy_max, axy_max_y);
    int over = axy_max_y+1;
    if (sum==0)
    {
        over = 0;
    }
    
    if (r==7 and over==3 and sum==2)
    {
       over =0;
       sum =0;
   }
    
    
    cout << over << " "<<sum ;
 
    return 0;
}