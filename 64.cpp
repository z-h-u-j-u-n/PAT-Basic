#include<iostream>
using namespace std;
//ע��ֻ����һ�εĺ�Ҳ�����������Ķ���
int main()
{
    int n,t,sum,flag,num,cnt[37]={0};
    cin>>n;
    num = 0;
    for( int i=0; i<n; i++ ){
        cin>>t;
        sum = 0;
        while( t ){
            sum += t%10;
            t /= 10;
        }
        cnt[sum]++;
    }
    for( int i=0; i<37; i++ )
        if( cnt[i] ) num++;
    cout<<num<<endl;
    flag = 0;
    for( int i=0; i<37; i++ )
    {
        if( cnt[i] )
        {
            if( flag ) cout<<" ";
            cout<<i;
            flag = 1;
        }
    }

}
