//https://www.codechef.com/problems/RECTANGL

#include<iostream>
 
using namespace std;
 
int rec(int a, int b, int c, int d) {
  if (a == b && c == d) {
    cout << "YES";
  }
  else if (a == c && b == d) {
    cout << "YES";
  }
  else if (a == d && b == c){
    cout << "YES";
  }
  else {
    cout << "NO";
  }
}
int main() {
  int t;
  cin >>t;
  for(int i=0; i<t; i++){
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    rec(a,b,c,d);
    cout<<endl;
  }
  return 0;
}
