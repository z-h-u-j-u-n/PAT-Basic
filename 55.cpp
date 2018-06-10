#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
struct Student{
    char name[20];
    int height;
};
bool Cmp(Student s1,Student s2){
    if(s1.height!=s2.height){       //��߲���ͬ����߰�����ǰ
        return s1.height<s2.height;
    }
    else return strcmp(s1.name,s2.name)>0;//�����ͬ���Ƚ����֣��ֵ�������ǰ
}
void output(Student s[],int begin,int end){//��ÿһ�Ž��з���Ҫ����������
    Student temp[end-begin+2];//ע��˴�����Ĵ�С
    int m=(end-begin)/2+1;
    int count_left=0;       //��ߵ��˵ڼ���
    int count_right=0;      //�ұߵ��˵ڼ���
    bool should_right=false;//�Ƿ���ұ���
    for(int i=end;i>=begin;i--){
        if(i==end)  temp[m]=s[i];//�Ȱ����ֵ�����м�
        else{
            if(should_right){
                count_right++;
                temp[m+count_right]=s[i];
                should_right=false;
            }
            else{
                count_left--;
                temp[m+count_left]=s[i];
                should_right=true;
            }
        }
    }
    for(int i=m+count_left;i<=m+count_right;i++){
        if(i!=(m+count_left))   cout<<" ";
        cout<<temp[i].name;
    }
    cout<<endl;
}
int main(){
    int N,K;
    Student s[10005];
    cin>>N>>K;
    char name[20];
    int height;
    for(int i=1;i<=N;i++){  //Ϊ��ÿһ����������м�ֵ�ķ��㣬��1��ʼ
        cin>>s[i].name>>s[i].height;
    }
    sort(s+1,s+N+1,Cmp);
    int last=(K-1)*(N/K)+1;//��������һ�ſ�ʼ��Ԫ��
    output(s,last,N);
     for(int i=last-N/K;i>=1;i-=N/K)//����������һ�ŵ�Ԫ��
        output(s,i,i+N/K-1);
    return 0;
}
