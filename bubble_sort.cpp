#include<iostream>
using namespace std;

int main(){
	
	int pass=0;
	int A[]={35, 10, 55, 20, 5};
	
	for (int i=1; i<5; ++i){
		for(int j=0; j<(5-i); ++j){
			if(A[j] > A[j+1]){
				int swap = A[j];
				A[j]= A[j+1];
				A[j+1]= swap;	
			}
			++pass;
			cout<<"\nPass " << pass <<": ";
			for(int c=0; c<5; ++c){
				cout<<" " << A[c];
			}
			cout<<" Swapped: " << A[j] <<" "<< A[j+1];    	
		}                
	}
	return 0;
}
