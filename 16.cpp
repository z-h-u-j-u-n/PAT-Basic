#include<iostream>
#include<string.h>
using namespace std;
//memset(��ʼ��ַ,��ʼ�����ַ�ֵ,��ʼ���Ŀռ�);
//һ��������ʼ��Ϊ0
int main()
{
    long long a[2],d[2],num[2];
    memset(num,0,2*sizeof(long long));
    for( int i=0; i<2; i++ )
        cin>>a[i]>>d[i];
    for( int i=0; i<2; i++ ){
        while( a[i]>0 ){
            int tmp = a[i]%10;
            a[i] /= 10;
            if( tmp==d[i] )
                num[i] = num[i]*10+d[i];
        }
    }
    cout<<num[1]+num[0];
}
