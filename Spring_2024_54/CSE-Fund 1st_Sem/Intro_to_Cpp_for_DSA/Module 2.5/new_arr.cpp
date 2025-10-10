#include <bits/stdc++.h>
using namespace std;

int *get_array(int *ar3, int n2)
{
    for (int i = 0; i < n2; i++)
    {
        cin >> *(ar3 + i);
    }
    return ar3;


}

int main()
{
    int n1, n3;
    cin >> n1;
    int *ar1 = new int[n1];
    int *ptr;
    ptr = get_array(ar1, n1);
    cin >> n3;
    int *ar2 = new int[n3];

    for (int i = 0; i < n3; i++)
    {

        if (i >= n1)
        {
            cin >> *(ar2 + i);
        }
        else
        {
            *(ar2 + i) = *(ptr + i);
        }
    }
    delete[] ar1;
    for (int i = 0; i < n3; i++)
    {
        cout << *(ar2 + i);
        if(i < n3 - 1){cout << " ";}
    }

    return 0;
}