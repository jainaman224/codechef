// By Aman Jain(jainaman224)
// 6/1/16

#include <iostream>
#include <set>
#include <map>
#include <cmath>
#include <stdio.h>

using namespace std;

void scanlong(long long &x){
    register long long c=getchar_unlocked();
    x=0;
    for(;(c<48 || c>57);c=getchar_unlocked());
    for(;c>47 && c<58;c=getchar_unlocked()){
        x=(x<<1)+(x<<3)+c-48;
    }
}

void scanint(int &y){
    register int d=getchar_unlocked();
    y=0;
    for(;(d<48 || d>57);d=getchar_unlocked());
    for(;d>47 && d<58;d=getchar_unlocked()){
        y=(y<<1)+(y<<3)+d-48;
    }
}

int main(){
	map <long long, int> leader;
	map <long long, int> :: iterator it1,it2;
	long long dist[50001][2]={0},max=0,temp,t,s;
    int n,q,x,c,i;
    scanint(n);
    scanint(q);
    while(q--){
        scanf("%d",&x);
        if(x==1){
            scanlong(t);
            scanint(c);
            scanlong(s);
            dist[c][0]+=(dist[c][1]-s)*t;
            dist[c][1]=s;
        }
        else{
            scanlong(t);
       		if(temp>max){
       			max=temp;
       		}
        }
        cout << max << endl;
    }
}