/*cout<<setiosflags(ios::fixed)<<setprecision(2);//��Ҫͷ�ļ�#include <iomanip>
Ȼ�������ʵ�����ͱ��������Ա���2λС������ˣ���Ȼ��Ҫ������λС����setprecision(3)���С�
setprecision��ָ����������ȣ���û��
cout<<setiosflags(ios::fixed)ʱ�������ʽ�����ݵ���Чλ��������
float a = 123.666;
cout<<setprecision(5)<<a;
�����123.67��ע����������������룩�����setprecision��Ĳ���С������λ��������ָ����ʽ���������
float a = 123.666;
cout<<setprecision(2)<<a;
�����1.2e+002��
setiosflags(ios::fixed)��ָ�Թ̶��ĸ�����ʾ����setiosflags(ios::fixed)��serprecision(n)����һ����ʱ�ͱ�ʾ����nλС�������
���ﻹҪע�⣬ÿ�����ֻҪ����һ�ξ�����(ͬһ��cout)����Ϊ�����������÷�Χ�Ǻ������󣬶����ǽ��Ժ�һ�����������á�
*/
/*
FLOAT/DOUBLEͬ�������Ĵ�С�Ƚϲ���ֱ����==  >,<���
*/
/*
a2�п��ܽ��Ϊ0�����Ǵ��ڸ������ֵ�
*/
#include<iostream>
#include<iomanip>
#include<algorithm>
using namespace std;
int main()
{
    int a1,a2,a3,a5,n,ta2,cnta2,cnta4;
    int a[1024];
    float a4;
    a1 = a2 = a3 = a5 = cnta2 = cnta4 = 0; a4 = 0.0;
    ta2 = 1;
    cin>>n;
    for( int i=0; i<n; i++ ){
        cin>>a[i];
        if( a[i]%5==0&&a[i]%2==0 ) a1 += a[i];
        if( a[i]%5==1 ) { a2 += ta2*a[i]; ta2 = -ta2; cnta2++; }
        if( a[i]%5==2 )  a3++;
        if( a[i]%5==3 ) { cnta4++; a4 += 1.0*a[i]; }
        if( a[i]%5==4 ) { a5 = max(a5,a[i]); }
    }
    a4 = a4/cnta4;
    if( a1!=0 ) cout<<a1;
    else cout<<"N";
    cout<<" ";
    if( a2!=0||cnta2 ) cout<<a2;
    else cout<<"N";
    cout<<" ";
    if( a3!=0 ) cout<<a3;
    else cout<<"N";
    cout<<" ";
    if( a4>0.0 ) cout<<setiosflags(ios::fixed)<<setprecision(1)<<a4;
    else cout<<"N";
    cout<<" ";
    if( a5!=0 ) cout<<a5;
    else cout<<"N";
}
