#include<iostream>
#include<cstdio>
#include<iomanip>
/*
��ʽ���ѹ���  a[i]*(i+1)*(n-i)
��Ҫ�Ǿ�����ʧ���⣬ ����ϵ�����붼��double���ͣ���Ȼ����ɾ�����ʧ
*/
using namespace std;
int main()
{
    double sum,a[100008];
    int n;
    cin>>n;
    sum = 0.0;
    for( int i=0; i<n; i++ ){
        //scanf("%lf",&a[i]);
        cin>>a[i];
    }
    for( int i=0; i<n; i++ ){
    sum += a[i]*(double(i+1))*(double(n-i));
    }
    //printf("%.2f",sum);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<sum;

}
