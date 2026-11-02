#include <iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include <climits>
int main() {
    int j = 0;
    int index = 0;
    int n = 4;
int arr[4][4]={3,6,4,2,7,8,11,5,9,3,2,1,17,8,5,9};

    for(j = 0;j<n;j++){

        if(index%2==0){
        for(int i = 0;i<n;i++){
            cout<<arr[i][j]<<"  ";
        }
    }
    else{
        for(int i = n-1;i>=0;i--){
            cout<<arr[i][j]<<"  ";
        }
    }
        index++;
        
    }
 
}
