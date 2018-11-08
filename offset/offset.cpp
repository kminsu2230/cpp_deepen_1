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
              if (s[a][b]<0 and s[a][b]>9)
              {
                   b=b-1; 
              }
         }
    }
    
    for (int i=0; i<5; i++)
    {
         for (int j=0; j<5; j++)
         {
             if (i==0 )
             {
                  if (j==0)
                  {
                      if (s[i][j]<s[i][j+1] and s[i][j]<s[i+1][j])
                      {
                          cout <<"*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      } 
                  }
                  else if (j==4)
                  {
                      if (s[i][j]<s[i][j-1] and s[i][j] <s[i-1][j])
                      {
                          cout << "*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      }       
                  }
                  else
                  {
                      if ((s[i][j] < s[i][j-1]) and (s[i][j] < s[i][j+1]) and (s[i][j]<s[i+1][j]) )
                      {
                          cout << "*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      }
                  }

             }
             else if (i==4)
             {
                  if (j==0)
                  {
                      if (s[i][j]<s[i-1][j]and s[i][j]<s[i][j+1])
                      {
                          cout << "*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      }           
                  }
                  else if (j==4)
                  {
                      if (s[i][j]<s[i][j-1]and s[i][j]<s[i-1][j])
                      {
                          cout << "*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      }
                  }
                 else
                 {
                      if ((s[i][j] < s[i-1][j]) and (s[i][j] < s[i][j-1]) and (s[i][j]<s[i][j+1]) )
                      {
                          cout << "*"<<" ";
                      }
                      else
                      {
                          cout << s[i][j]<<" ";
                      }
                 }
             }


             else
             {
                 if (j==0)
                 {
                     if ((s[i][j]<s[i-1][j]) and(s[i][j]<s[i+1][j]) and(s[i][j]<s[i][j+1]))
                     {
                          cout << "*"<<" ";
                     }
                     else
                     {
                          cout << s[i][j]<<" ";
                     }
                 }
                 else if (j==4)
                 {
                     if ((s[i][j]<s[i][j-1])and(s[i][j]<s[i-1][j])and(s[i][j]<s[i+1][j]))
                     {
                          cout << "*"<<" ";
                     }
                     else
                     {
                          cout << s[i][j]<<" ";
                     }
                 }
                 else
                 {
                     if ((s[i][j]<s[i-1][j])and(s[i][j]<s[i+1][j])and(s[i][j]<s[i][j-1])and(s[i][j]<s[i][j+1]))
                     {
                          cout << "*"<<" ";
                     }
                     else
                     {
                          cout << s[i][j]<<" ";
                     }
                 }
             }

         }
         cout << "\n";
    }


    return 0;
}
