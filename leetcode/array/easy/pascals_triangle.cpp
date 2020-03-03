#include<iostream>
#include<vector>
using namespace std;

void pascal_triangle(int n){
    int i = n;
    //for(int i=1;i<=n;i++){

        int c = 1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
            c *= (i-j);
            c /= j;
        }
        //cout<<endl;
    //}
}

vector<vector<int> > generate(int numRows) {
    vector<vector<int> > vec(numRows);
    int val;
    for(int i = 0;i< numRows; i++){
        vec[i] = vector<int>(i+1);
        for(int j = 0;j <= i; j++){
            if(j == 0 || i==j){
                vec[i][j] = 1;
            }
            else{
                val = vec[i-1][j-1] + vec[i-1][j];
                vec[i][j] = val;
            }
        }
    }
    return vec;
}

int main(){
    pascal_triangle(30);
}
