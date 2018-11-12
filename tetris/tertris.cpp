# include <iostream>
# include <vector>
 
using namespace std;
 
int c,r;
int arr[20][20];
 
int p_col (int y)
{
    int num =0;
    int h =0;
    for (int q=0; q<r; q++)
    {
        if (arr[y][q]==1)
        {
            num++;
        }
    }
    if (num == r-1)
    {
        h++;
    }    
    return h;
}
 
int p_row (int x)
{
    for (int q=0; q<r; q++)
    {
        if (arr[q][x] ==1)
        {
            return q;
        }
        else
        {
            if (q==r-1)
            {
                return r-1;
            }
        }
    }
}
 
int main ()
{
    cin >> c >>r;
 
    if (c<5)
    {
        cout << "retry C :";
        cin >> c;
    }
 
    if (r>20)
    {
        cout << "retry R :";
        cin >>r;
    }
    
 
    for (int i=0; i<c; i++)
    {
        for (int j=0; j<r; j++)
        {
            cin >> arr[i][j];
        }
    }
    
    int row =0;
    int col =0;
    for (int k=0; k<c; k++)
    {
        int sum=0;
        sum = p_row(k);
        if (sum>=4)
        {
            row=sum;
        }
    }
    for (int u=0; u<c; u++)
    {
        col = col + p_col(u);
    }
    
    cout << row<<" "<<col;
 
    return 0;
}