#include<iostream>
#include<string>
#include<algorithm>
#include<cstdio>
#include<cstdlib>
    
using namespace std;
    
int main(){
    
long n, temp;

while(cin >> n && n!=0){  
int m[n];
    
for(int i=0; i<n; i++){
cin >> temp;
m[i] = temp;
}
    
// qsort (m, n, sizeof(int), compare);
int v1=0, v2=0, v3=0, v4=0;
for(int i=0; i<n; i++){
  if(m[i]-1 != i){
  	// cout << abs(m[i]-(i+1)) << endl;
  	// v3 = abs(m[i]-(i+1));
  	// cout << v3 << endl;
  	// if(v3==0){v2=0;}
     //v1 += v3 + v2;
     //cout << v1 << endl;
     //v2 = (-1);
     v4++;
  }
}
// break;
float t;
t=v4/2.0;
if(t != int(t)){
	if(n%2 == 0){
		t-=0.5;
	}else{
		t+=0.5;
	}
}
printf("%s\n", ((int(t))%2==0) ? "Carlos" : "Marcelo");
v1=0;
}
return 0;
}
