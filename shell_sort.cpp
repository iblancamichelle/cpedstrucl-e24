#include<iostream>
using namespace std;

void shell_sort(int *a, int n){
	int h, i, j, k, pass=0;
	for(h=n; h/=2;){
		for(i=h; i<n; i++){
			k=a[i];
			for(j=i; j>=h && k< a[j-h]; j-=h){
				a[j] = a[j-h];
			}
			a[j]=k;
			++pass;
			cout<<"\nPass " << pass << ": ";
			for(int c=0; c<5; ++c){
				cout<<" " << a[c];
			}
			cout<<" Swapped: " << a[j] <<" " << a[i];
		}
	}
}

int main(){
	
	int pass=0;
	int a[]={40, 30, 20, 50, 10};
	int n = 5;
	shell_sort(a,n);
	return 0;
}
