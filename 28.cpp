#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
//���ϸ�����Ϊ0��ʱ��  ֻ��Ҫ���0
struct per{
    char name[6],data[12];
}person[100000];
bool cmp( struct per p1, struct per p2 )
{//���ַ����������ճ������ڽ�����������
 //c++ sort�����ķ���ֵ��bool���� ��c�е�qsort��ͬ ����ֱ�ӽ�strcmp��ֵ����
	bool ret = false;
    if( strcmp(p1.data,p2.data)<=0 ) ret = true;
	else ret = false;
	return ret;
}
int main()
{
    int n,j;
    char na[6],dt[12];
    j = 0;
    cin>>n;
    for( int i=0; i<n; i++ )
    {
        cin>>na>>dt;
        if( strcmp(dt,"1814/09/06")>=0&&strcmp(dt,"2014/09/06")<=0 )
        {
            strcpy(person[j].name,na);
            strcpy(person[j].data,dt);
            j++;
        }
    }
    sort(person,person+j,cmp);
    cout<<j;
    if( j )
    cout<<" "<<person[0].name<<" "<<person[j-1].name;

}
