#include <stdio.h>
#include <stdlib.h>

int getdata( int a, int b )
{
    return a*10+b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int)*n);
    int i,j;
    for( i=0; i<n; i++ ){
        scanf("%d",&a[i]);
    }
    int sum=0;
    for( i=0; i<n; i++ ){
        for( j=0; j<n; j++ ){
            if( i==j ){
            //�����Ͽ��ǵ������ȵ�������ܹ����в��Ե�
                continue;
            }
            int tmp = getdata(a[i],a[j]);
            sum += tmp;
        }
    }
    printf("%d",sum);
    free(a);
}
