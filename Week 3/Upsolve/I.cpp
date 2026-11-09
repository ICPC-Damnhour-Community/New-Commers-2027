#include <bits/stdc++.h>
using namespace std;
#define int long long


int main(){
    char c;
    int m,n; 
    char a[n][m];
    bool l[26];
    cin>>n>>m>>c;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>> a[i][j];
            
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==c){
                if (i>=1){
                    if(a[i-1][j]!='.'&&a[i-1][j]!=c){
                        l[a[i-1][j]-'A']=true;
                    }
                }
                if (i  < n-1) { 
                   if(a[i+1][j]!='.'&&a[i+1][j]!=c){
                    l[a[i+1][j]-'A']=true;
                   }
                }
                if (j  >= 1) { 
                   if(a[i][j-1]!='.'&&a[i][j-1]!=c){
                    l[a[i][j-1]-'A']=true;
                   }
                }
                if (j  < m-1) { 
                   if(a[i][j+1]!='.'&&a[i][j+1]!=c){
                    l[a[i][j+1]-'A']=true;
                   }
                }
                

            }
            
        }
    }
    int counter=0;
    for(int i =0;i<26;i++){
        if(l[i]){
            counter+=1;
        }
    }
    
    cout<<counter <<endl;

    }

