#include <iostream>

using namespace std;

int main()
{
    int s[5][5];
    
    for (int a=0; a<5; a++)
    {
         for (int b=0; b<5; b++)
         {
             cin >> s[a][b];
         }
    }
    
    for (int i=0; i<5; i++)
    {
         for (int j=0; j<5; j++)
         {
             if (i==0 and j==0)
             {
                  if (s[0][0]<s[0][1] and s[0][0]<s[1][0])
                  {
                      cout <<"*";
                  } 
             }
             else if (i==0 and j==4)
             {
                  if (s[0][4]<s[0][3] and s[0][4] <s[1][4])
                  {
                      cout << "*";
                  }       
             }
             else if (i==4 and j==0)
             {
                  if (s[4][0]<s[3][0]and s[4][0]<s[4][1])
                  {
                      cout << "*";
                  }           
             }
             else if (i==4 and j==4)
             {
                  if (s[4][4]<s[4][3]and s[4][4]<s[3][4])
                  {
                      cout << "*";
                  }
             }
             else if ((i==0) and (j<4) and (j>0))
             {
                 if ((s[i][j] < s[i][j-1]) and (s[i][j] < s[i][j+1]) and (s[i][j]<s[i][j+1]) )
                 {
                      cout << "*";
                 }
             }
             else if ((j==0) and (i<4) and (i>0))
             {
                 if ((s[i][j] < s[i-1][j]) and (s[i][j] < s[i+1][j]) and (s[i][j]<s[i+1][j]) )
                 {
                      cout << "*";
                 }
             }
             else if ((i==4) and (j<4) and (j>0))
             {
                 if ((s[i][j] < s[i][j-1]) and (s[i][j] < s[i][j+1]) and (s[i][j]<s[i][j+1]) )
                 {
                     cout << "*";
                 }
             }
             else if ((j==4) and (i<4) and (i>0))
             {
                 if ((s[i][j] < s[i-1][j]) and (s[i][j] < s[i+1][j]) and (s[i][j]<s[i+1][j]) )
                 {
                     cout << "*";
                 }
             }
             else if ((i<4) and (i>0) and (j<4) and (j>0))
             {
                 if ((s[i][j]<s[i][j-1] and (s[i][j]<s[i][j+1]) and (s[i][j]<s[i+1][j]) and (s[i][j]<s[i-1][j])))
                 {
                     cout << "*";
                 }
             }
             else
             {
                 cout << s[i][j];
             }
         }

    }


    return 0;
}
