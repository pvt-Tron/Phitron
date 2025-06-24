/*
int k=1;
while(k<=n){
	cout<<k<<endl; // O(logN)
	k=k*2;
}
for (int i = 0; i < n; i++) // O(NlogN)
        for (int j = i; j > 0; j--)
            cout << i << j;

for (int i = 0; i < n; i++) // O(N*N) 
        for (int j = i; j > 0; j--)
            for(int k=j; k > 0; k--)
                cout << i << j << k;

for(int i=n/2;i<=n;i++){  // O(NlogN)
	for(int j=1;j<=n;j=j*2){
   		cout<<i<<j<<endl;
	}
}
for(int i=n/2;i<=n;i++){  // O(N(logN/2))
	for(int j=1;j<=n;j=j++){
   		cout<<i<<j<<endl;
	}
}
*/