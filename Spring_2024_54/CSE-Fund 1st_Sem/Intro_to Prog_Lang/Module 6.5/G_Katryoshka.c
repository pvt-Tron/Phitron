#include<stdio.h>
int main()
{
    long long int n1, m1,k1;
    int x1 = 1;
    long long int res1 = 0;
    scanf("%lld %lld %lld", &n1, &m1, &k1);
    if(n1%2 != 0){int odn1 = 1;}
    if(m1%2 != 0){int odm1 = 1;}
    if(k1%2 != 0){int odk1 = 1;}
    while(x1 != 0){
        if(k1 > 0 && n1 > 0){
            if(m1 > 0){
                if((m1 > k1 || m1 > n1) || (m1 > k1 && m1 > n1)){
                    if(n1 > k1){m1 = k1;}
                    else{m1 = n1;}
                res1 += m1;
                n1 -= m1;
                k1 -= k1;
                if(k1 > 0 && n1 > 0){break;}
                }
            }
            if((n1 / k1) > 2){
                    res1 += k1;
                    break;
            }
            else{
                //if() <<<<<<<<<<<<<<<<
                res1 += (n1 / 2);
                break;
            }
        }
        else{break;}
    }
    printf("%lld", res1);
    return 0;
}