#include<iostream>
#include<algorithm>
//1��100���ڵ��� ���Կ��������ʾ�Ƿ񱻷���
using namespace std;
int cnt[100]={0};

bool cmp( int a, int b )
{
    return a>b;
}
int main()
{
    int n,j;
    int a[110],b[110];
    cin>>n;
    for( int i=0; i<n; i++ ){
        cin>>a[i];
        if( cnt[a[i]]==0 ){
        	int tmp = a[i];
            while( tmp!=1 )
            {
                if( tmp%2==0 ) tmp /=2;
                else tmp = (3*tmp+1)/2;
                if( tmp<=100 )
                    cnt[tmp]=1;
            }
        }
    }
    j=0;
    for( int i=0; i<n; i++ )
    {
        if( cnt[a[i]]==0 )
            b[j++] = a[i];
    }
    sort(b,b+j,cmp);
    for( int i=0; i<j; i++ )
    {
        if( i ) cout<<" ";
        cout<<b[i];
    }
}
