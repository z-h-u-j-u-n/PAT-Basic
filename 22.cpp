#include<iostream>
using namespace std;
//a,b���ǷǸ�����  ��a+b=0��ʱ����Ҫ��������
int main()
{
    int a,b,d,sum,i;
    int dp[100];
    cin>>a>>b>>d;
    sum = a+b;
    i = 0;
    while( sum>0 ){
        dp[i++] = sum%d;
        sum /= d;
    }
    if( i==0 ) cout<<"0";
    else{
        for( i--; i>=0; i-- )
            cout<<dp[i];
    }
}
