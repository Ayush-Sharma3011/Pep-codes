#include<bits/stdc++.h>
#include <vector>
using namespace std;
static void print(int n){
    if(n==0) return;
    print(n-1);
    cout<<n<<endl;
}
static int factorial(int n){
    if(n==0) return 1;
    return n*factorial(n-1);
}
int main(){
    // print(10);
    cout<<factorial(5)<<endl;
    return 0;

}

