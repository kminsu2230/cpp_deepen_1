# include <iostream>
 
using namespace std;

int a,b;


// 최대 공약수
int gcd(int v1, int v2)
{
    int n; // 임시 변수
    while (true)
    {
    	// 유클리드 호제법 
    	n= v1 % v2; // 나눈 나머지
    	if (n==0)
    	{
    		return v2; // n==0 이 되었을때, v2를 반환
    	}
    	v1 = v2; // 값을 변경
    	v2 = n; // 값을 변경 
    }
}


// 최소 공배수
int lcm(int gcd)
{
    return a * b / gcd; // 값1 곱하기 값2 나누기 최대 공약수
}


int main()
{
	cin >> a >> b;
    int gcd_v =0;
    int lcm_v =0;
    gcd_v = gcd (a,b);
    lcm_v = lcm (gcd_v);

    cout << gcd_v << "\n" << lcm_v <<endl;

	return 0;
}