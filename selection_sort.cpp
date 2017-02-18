#include<iostream>
using namespace std;

int main(){
	int pass=0;
	int A[] = {30, 40, 20, 50, 10};
	
	for(int i=0; i<(5-1); ++i){
		int min=A[i], index=i;
		for (int j=i+1; j<5; ++j){
			if (A[j] <min){
				min = A[j];
				index=j;
			}
		}
		A[index] = A[i];
		A[i] = min;
		
		++pass;
		cout<<"\nPass " << pass <<": ";
		for(int c=0; c<5; ++c){
			cout<<" " << A[c];
		}
		cout<<" Swapped: " << A[i] <<" "<< A[index]; 
	}
	return 0;
}
