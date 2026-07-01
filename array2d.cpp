#include<bits/stdc++.h>
using namespace std;

void dummy(int arr[][3], int target, int row, int col){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j] == target){
                cout << "Found at: " << i << " " << j << endl;
                return;
            }
        }
    }
    cout << "Not Found" << endl;

}

void rowsum(int arr[][3], int row, int col){
    for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum += arr[i][j];
        }
        cout << "Sum of row " << i << ": " << sum << endl;
    }
}

void snakeprint(int arr[][4], int row, int col){
    for(int j=0;j<col;j++){
        for(int i=0;i<row;i++){
            cout << arr[i][j] << " ";
        }
        j++;
        for(int i=row-1;i>=0;i--){
            cout << arr[i][j] << " ";
        }
    }
}

void spiralprint(int arr[][4], int row, int col){
    int top = 0, bottom = row-1, left = 0, right = col-1;

    while(top <= bottom && left <= right){
        for(int i=left;i<=right;i++){
            cout << arr[top][i] << " ";
        }
        top++;
        for(int i=top;i<=bottom;i++){
            cout << arr[i][right] << " ";
        }
        right--;
        if(top <= bottom){
            for(int i=right;i>=left;i--){
                cout << arr[bottom][i] << " ";
            }
            bottom--;
        }
        if(left <= right){
            for(int i=bottom;i>=top;i--){
                cout << arr[i][left] << " ";
            }
            left++;
        }
    }
}

int main(){
    int arr[4][4] = {{6,8,10,2}, {14,1,13,15}, {5,11,9,3}, {12,16,4,7}};
    // dummy(arr, 5, 3, 3);
    // rowsum(arr, 3, 3);
    // snakeprint(arr, 4, 4);
    spiralprint(arr, 4, 4);
    return 0;
}