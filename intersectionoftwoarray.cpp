/*
Problem:
Given two arrays of integers, find the intersection of these two arrays. The intersection
 should include all the elements that appear in both arrays. 
 
*/

#include<iostream>
using namespace std;
#include<bits/stdc++.h>

int intersection(int a[],int b[],int n,int m){
    unordered_map<int,int>mp;
    int count=0;
    for(int i=0;i<n;i++){
        mp[a[i]]++;
    }

    for(int i=0;i<m;i++){
        if(mp.find(b[i]) != mp.end()){
            count++;
        }
    }
    return count;
}
int main(){
    int n=5;
    int m=5;
    int a[n]={1,2,3,4,5};
    int b[m]={2,3,4,7,8};

   int intersectionlength= intersection(a,b,n,m);
cout<<"the number of the comman element is :"<<intersectionlength<<endl; 

    return 0;
}