// // Transpose of N*N Matrix
// // Intution:Just Switch the positions.
// // Only Swap the diagnol Elementsbecoz
// // if we swap all the elements then our answer would be same.

// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int A[3][3]= {{1,2,3},{4,5,6},{7,8,9}};

//     for(int i=0;i<3;i++)
//     {
//         for(int j=i;j<3;j++)
//         {
//             int temp = A[i][j];
//             A[i][j] = A[j][i];
//             A[j][i] = temp;
//         }
//     } 
//     cout<<" Our Swapped matrix is: \n";
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<A[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//     return 0;
// }


// MAtrix Multiplication.
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n1,n2,n3;
    cin>>n1>>n2>>n3;
    int m1[n1][n2];
    int m2[n2][n3];
    cout<<"M1: ";
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            cin>>m1[i][j];
        }
    }
    cout<<"M2: ";
    for(int i=0;i<n2;i++){
        for(int j=0;j<n3;j++){
            cin>>m2[i][j];
        }
    }
    int ans[n1][n3];
    for(int i =0;i<n1;i++){
        for(int j =0;j<n3;j++){
            ans[i][j] = 0;
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            for(int k=0;k<n2;k++){
                ans[i][j] += m1[i][k]*m2[k][j];
            }
        }
    }

    for(int i=0;i<n1;i++){
        for(int j=0;j<n3;j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }





    return 0;
} 















