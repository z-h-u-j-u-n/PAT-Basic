#include<iostream>
#include<cstdio>
using namespace std;
//�ø���������������ʧ���ȵģ�Ӧ������������
//��Ŀ��û�и������������Ĵ�С����Ҫ���ж�
int gcd( int n, int m )
{
    if( m==0 ) return n;
    return gcd(m,n%m);
}
int main()
{
    int flag,i,n1,m1,n2,m2,k,temp1,temp2;
    scanf("%d/%d %d/%d %d",&n1,&m1,&n2,&m2,&k);
    if( n1*m2>n2*m1 ){//ȷ��n1/m1<n2/m2
        temp1 = n1; temp2 = m1;
        n1 = n2; m1 = m2;
        n2 = temp1; m2 = temp2;
    }
    i = 0; flag = 0;
    while( i*m1<=n1*k ) i++;
    while( i*m2<n2*k ){
        if( gcd(i,k)==1 )
        {
            if( flag ) printf(" ");
            printf("%d/%d",i,k);
            flag = 1;
        }
        i++;
    }

}
