#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
using namespace std;
string passFunction(int a, int b, int c,int d) {
  srand(time(0));
  freopen("out.txt","w",stdout);
char cAlphabet[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
char dAlphabet[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char eAlphabet[4]={'@','$','!','#'};
string s="";
for(int i=0;i<a;i++){
  s+=cAlphabet[rand()%26];
}
for(int i=0;i<b;i++){
  s+=dAlphabet[rand()%26];
}
for(int i=0;i<c;i++){
    s+=to_string(rand()%2);
}
for(int i=0;i<d;i++){
  s+=eAlphabet[rand()%4];
}

return s;
}
int main(){
string c = passFunction(5,5,2,2);
cout<<c<<endl;
return 0;
}
