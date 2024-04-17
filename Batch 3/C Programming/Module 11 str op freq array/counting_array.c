#include<stdio.h>
#include<string.h>
int main()
{
    int n=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int cnt[7]={0};
    for(int i=0;i<n;i++)
    {
        int val=a[i];
        cnt[val]++;
    }
    // printf("0 - %d\n",cnt[0]);
    // printf("1 - %d\n",cnt[1]);
    // printf("2 - %d\n",cnt[2]);
    // printf("3 - %d\n",cnt[3]);
    // printf("4 - %d\n",cnt[4]);
    // printf("5 - %d\n",cnt[5]);
    // printf("6 - %d\n",cnt[6]);
    for(int i=0;i<=6;i++)
    {
        printf("%d - %d\n",i,cnt[i]);
    }
    return 0;

}