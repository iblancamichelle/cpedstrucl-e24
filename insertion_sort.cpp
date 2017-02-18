#include<iostream>
using namespace std;

int main(){
	int pass=0, j;
	int A[]={40, 30, 20, 50, 10};
	
	for (int i=0; i<5; ++i){
		int tmp = A[i];
		for(j=i-1; j>=0 && tmp<A[j]; --j){
			A[j+1] = A[j];
		}
		A[j+1] = tmp;
		
		++pass;
		cout<<"\nPass " << pass <<": ";
		for(int c=0; c<5; ++c){
			cout<<" " << A[c];
		}
		cout<<" Swapped: " << A[i] <<" "<< A[j+1];
	}
	return 0;
}
