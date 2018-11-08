#include <iostream>

using namespace std;

int main()
{
    //반복값
    int n;
    cin >> n;
    
    // 질문 카운트
    int count=0;

    // 비교 배열
    int arr_1[3];
    int arr_2[3];

    // 구조체 == 파이썬 딕셔너리
    struct base 
    {
      int num, st, ba;
    } ball[100];

    // 질문값
    for (int a=0; a<n; a++)
    {
          cin >> ball[a].num >> ball[a].st >> ball[a].ba;  
    }

    // num 값은 3자리수 이며, 서로값은 같은 수 가 될 수 없음 
    for (int i=123; i<=987; i++)
    {
        int sum=0; // st값과 ba값이 같을때 카운트 함수
        arr_1[0] = i/100; //100의 자리수
        arr_1[1] = i/10%10; //10의 자리수
        arr_1[2] = i%10; //1의 자리수
        // 같은 숫자가 나올 경우 넘김
        if ((arr_1[0]==arr_1[1]) or (arr_1[1]==arr_1[2]) or (arr_1[2]==arr_1[0]))
        {
              continue;
        }
        for (int j=0; j<n; j++)
        {   
              int st_2=0; //초기화
              int ba_2=0; //초기화
              int v_num=ball[j].num; // 비교를 위한 값저장
              arr_2[0]=v_num/100;
              arr_2[1]=v_num/10%10;
              arr_2[2]=v_num%10;
              for (int q=0; q<3; q++) 
              {
                  // 스트라이크 +
                  if (arr_1[q]==arr_2[q])
                  {
                      st_2++;
                  }
                  // 볼 +
                  if (arr_1[q]==arr_2[(q+1)%3] or arr_1[q] == arr_2[(q+2)%3])
                  {
                      ba_2++;
                  }             
              // 증가된 st, ba를 입력받은 st,ba와 비교
              }
              if (st_2==ball[j].st and ba_2==ball[j].ba)
              {
                  sum++;
              }
        }
        // 질문에 값과 비슷한 값일 경우 +
        if (sum==n)
        {
            count++;
            //cout <<i;
        }
        
    }
    cout << count<<"\n";


    return 0;
}
