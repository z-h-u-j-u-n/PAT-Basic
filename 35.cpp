#include<iostream>
#include<algorithm>
using namespace std;
//��Ҫģ��鲢���������������Ϊֻ��Ҫ����ǰi�������Ԫ�ؾ��ܵõ��鲢�Ŀ�ȣ��������һ�����Ե����ǲ���
//���Ǹĳɴ�ͷģ���
bool cmp( int a, int b )
{
    return a<b;
}
int main()
{
    int n,i,j,elta,flag,temp,a[108],b[108];
    cin>>n;
    flag = 1;
    for( i=0; i<n; i++ )
        cin>>a[i];
    for( i=0; i<n; i++ )
        cin>>b[i];
    for( i=0; i<n-1; i++ )
        if( b[i]>b[i+1] ) break;
    elta = i+1;
    for( i++; i<n; i++ )
        if( a[i]!=b[i] ) break;
    if( i==n ){
        cout<<"Insertion Sort"<<endl;
        sort(a,a+elta+1,cmp);
    }
    else{
        cout<<"Merge Sort"<<endl;
        /*elta *= 2;
        for( i=0; i<n/elta; i++ )
            sort(b+i*elta,b+(i+1)*elta,cmp);
        sort(b+n/elta*elta,b+n,cmp);
        */
        flag = 1;
        int k = 1;
        while(flag) {
            flag = 0;
            for (i = 0; i < n; i++) {
                if (a[i] != b[i])
                    flag = 1;
            }
            k = k * 2;
            for (i = 0; i < n / k; i++)
                sort(a + i * k, a + (i + 1) * k, cmp);
            sort(a + n / k * k, a + n, cmp);
        }
    }
    for( i=0; i<n; i++ ){
            if( i ) cout<<" ";
            cout<<a[i];
        }
}
