# include <iostream>
 
using namespace std;

int arr_user[5][5];
int arr_admin[25];



int arr_num=0;



int bingo_run (int admin_v) 
{
    int count=0;
    for (int q=0; q<5; q++)
    {
    	for (int w=0; w<5; w++)
    	{
            if (arr_user[q][w]==admin_v)
            {
            	arr_user[q][w] = 0;
            }
    	}
    }

   
    // 가로 빙고 검사
    for (int i=0; i<5; i++)
    {
    	int sum=0;
    	for (int j=0; j<5; j++)
    	{
    		sum =sum+arr_user[i][j];
    	}
        
        // 전부 0이면 빙고로 +1
    	if (sum == 0)
    	{
    		count ++;
    	}
    }

    // 세로 빙고 검사
    for (int i=0; i<5; i++)
    {
    	int sum=0;
    	for (int j=0; j<5; j++)
    	{
    		sum =sum+arr_user[j][i];
    	}
        
        // 전부 0이면 빙고로 +1
    	if (sum == 0)
    	{
    		count ++;
    	}
    }
     
    // 대각선 검사의 경우 for 문을 한번사용하기에 새로운 sum
    int x_sum=0; 
    for (int i=0; i<5; i++)
    {
    	x_sum =x_sum+arr_user[i][i];
    }
    // 전부 0이면 빙고로 +1
    if (x_sum == 0)
    {
        count ++;
    }

    // 초기화
    x_sum=0; 
    for (int i=0; i<5; i++)
    {
    	x_sum =x_sum+arr_user[i][(5-i)-1];
    }
    // 전부 0이면 빙고로 +1
    if (x_sum == 0)
    {
        count ++;
    }
    

    // 3이상의 빙고가 발생시 빙고 카운트 리턴
    if (count >=3)
    {
    	return count;
    }
    // 아닌경우 정상 종료
    else
    {
    	return 0;
    }
}


int main ()
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<5; j++)
        {
            cin >> arr_user[i][j];
        }
    }


    for (int t=0; t<25; t++)
    {
    	cin >> arr_admin[t];
    }

    int bingo_value=0;
 
    // 사회자의 빙고 순서만큼 함수로 넘겨서 카운트
    for (int s=0; s<25; s++)
    {
        bingo_value = bingo_run(arr_admin[s]);
        // 카운트가 3포함 3이상됫을시 브레이크
        if (bingo_value >=3)
        {
        	break;
        }
        // 아닌 경우 계속 누적
        else
        {
        	arr_num++;
        }
    }

    // 처음이 0값이라 +1
    cout << arr_num+1 << endl;

	return 0;
}