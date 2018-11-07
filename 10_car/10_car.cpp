#include <iostream>

using namespace std;

int main()
{  
    int s;
    cin >>s;
    
    int n[5];
    for (int a=0; a<5; a++)
    {
        cin >> n[a];
    }
    
    int num=0;
    for (int v=0; v<5; v++)
    {
        if (s==n[v])
        {
            num++;
        }
    }

    cout << num <<"\n";
    return 0;
}
