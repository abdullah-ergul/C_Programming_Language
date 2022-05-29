#include <iostream>

using namespace std;


int main(){
	int n,i,j,k=1;
	scanf("%d",&n);
	int temp=n;
	
	for(i=1; i<=2*n-1; i++){
		if(i==1 || i==2*n-1){
			for(j=0; j<2*n-1; j++)
				cout << n << " ";
		}
		else if(i<n){
			for(j=0; j<2*n-1; j++){
				if(n-j >= n-i+1){
					cout << temp-- << " ";
					k++;
				}
				else if(j <= 2*n-1-k)
					cout << temp+1 << " ";
				else
					cout << ++temp << " ";
			}
			k=1;
		}
		else if(i==n){
			for(j=0; j<2*n-1; j++){
				if(temp==0){
					temp=1;
					for(j=n; j<2*n-1; j++){
						cout << ++temp << " ";
					}
					break;
				}
				cout << temp-- << " ";
				k++;
			}
			k=1;
		}
		else{
			for(j=0; j<2*n-1; j++){
				if(j < n-k-1)
					cout << temp-- << " ";
				else if(j < n+k)
					cout << temp << " ";
				else
					cout << ++temp << " ";
			}
			k++;
		}
		
		temp=n;
		cout << "\n";
	}
	
	return 0;
}
