#include<bits/stdc++.h>
using namespace std;

// bool binarysearch(int arr[], int left, int right, int key){
//     //base case
//     if(left >right) return false;
//     // ind mid
//     int mid = left+ (right -  left)/2;

//     if(arr[mid] == key) return true;

//     else if (arr[mid] < key){
//         return binarysearch(arr,mid+1,right,key);
//     }
//     else{
//         return binarysearch(arr,left,mid-1,key);
//     }
// }

int main(){

    int arr[3][4] ;

    for(int j=0;j<4;j++){
        for(int i=0;i<3;i++){
            cin >> arr[i][j];
        }
    }
    for(int j=0;j<3;j++){
        for(int i=0;i<4;i++){
            cout << arr[j][i]<<" ";
        }
        cout << endl;
    }

}