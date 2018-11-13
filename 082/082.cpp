# include <iostream>
 
using namespace std;

int n,m=0;
int arr[100][100];

int main ()
{
	
	cin >> n >> m;
	for (int i=0; i<n; i++)
	{
		for (int j=0; j<m; j++)
		{
			cin >> arr[i][j];
		}
	}

    for (int k=0; k<n; k++)
    {
    	for (int q=m-1; q>=0; q--)
        {
        	cout << arr[k][q] << " ";
        }
        cout << "\n";
    }

	return 0;
}