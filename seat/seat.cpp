# include <iostream>

using namespace std;

// 상수화
// 값의 변화값  1,0 / 0,1 / -1,0 / 0,1
const int arr_x[] = { 1,0,-1,0 }; 
const int arr_y[] = { 0,1,0,-1 };

int arr[1002][1002];

int main() {
    int c, r, k;
    cin >> c >> r ;
    cin >> k;
    
    // 배열생성 
    for (int i = 0; i <= 1001; i++) 
    {
        arr[i][0] = arr[0][i] = arr[r + 1][i] = arr[i][c + 1] = 1;
    }

    int x = 0, y = 1, d = 0; //행, 열 , 상수 값을 불러오기 위한 값 
    for (int i = 1; i <= c*r; i++) 
    {
        x =x + arr_x[d]; // 상수값과 x값을 누적
        y =y + arr_y[d]; // 상수값과 y값을 누적 

        arr[x][y] = 1; // 1,1 부터 시작

        if (arr[x + arr_x[d]][y + arr_y[d]])
        {
            d = (d + 1) % 4; // 상수 배열 다음 값으로 변경 
        }
        
        // i 값이 k(자리) 값과 같을때 출력 
        if (i == k) 
        {
            cout << y << " " << x;
            return 0;
        }
    }

    cout <<"0";

    return 0;
}