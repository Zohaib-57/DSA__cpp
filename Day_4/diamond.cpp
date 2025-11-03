#include<iostream>
using namespace std;
int main(){
    //Hollow Diamond Pattern
    int n = 4;

    // Upper Half
    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i!=0){
            for(int j=0; j<2*i-1; j++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }

    // Lower Half
    for(int i=0; i<n-1; i++){
        for(int j=0; j<i+1; j++){
            cout<<" ";
        }
        cout<<"*";
        if(i != n-1){
            for(int j=0; j<2*(n-i-2)-1; j++){ 
                cout<<" ";
            }
            if(i != n-2) 
                cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
