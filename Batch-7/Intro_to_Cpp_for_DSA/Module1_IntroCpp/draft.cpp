//y this way: 
#include <iostream>
// #include<limits.h>
using namespace std;

int main() {
// int MAX_SIZE = 1000;
// int arr[MAX_SIZE];
int n = 1000;
int arr[1001];
int x, i = 0;



// while (cin >> x && i < MAX_SIZE) {
while (cin >> x && i < n) {
arr[i] = x;
i++;
}


for (int j = 0; j < i; ++j) {
cout << arr[j] << " ";
}

return 0;
}