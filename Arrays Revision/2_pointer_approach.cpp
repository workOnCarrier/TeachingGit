// Merge 2 Sorted Arrays


#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> A, vector<int> B){
    int ptrA = 0;
    int ptrB = 0;
    int sizeA = A.size();
    int sizeB = B.size();

    vector<int> C;

    while(true){
        if(A[ptrA]<B[ptrB]){
            C.push_back(A[ptrA]);
            ptrA++;
        }
        else{
            C.push_back(B[ptrB]);
            ptrB++;
        }

        if(ptrA>=sizeA || ptrB >= sizeB ) break;
    }


    for(int i=ptrA;i<sizeA;i++){
        C.push_back(A[i]);
    }


    for(int i=ptrB;i<sizeB;i++){
        C.push_back(B[i]);
    }

    return C;
}

int main() {
	vector<int> A = {1,3,5,7};
    vector<int> B = {2,4,6,8};
	vector<int> C = merge(A, B);

	cout<<"A: ";
	for (int i = 0; i < A.size(); ++i) {
		cout<<A[i]<<" ";
	}
	cout<<endl;

	cout<<"B: ";
	for (int i = 0; i < B.size(); ++i) {
		cout<<B[i]<<" ";
	}
	cout<<endl;
	
	cout<<"C: ";
	for (int i = 0; i < C.size(); ++i) {
		cout<<C[i]<<" ";
	}
	cout<<endl;
	return 0;

}