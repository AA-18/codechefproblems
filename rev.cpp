
#include<iostream>
#include<cmath>
 
using namespace std;
 
int rev;
 
int reverse(int num) {
  int rev = 0;
  while (num > 0) {
    rev = (rev * 10) + num % 10;
    num = num / 10;
  }
  return rev;
}
 
int main() {
  int t;
  cin >>t;
  for (int i=0; i<t; i++){
    int num;
    cin >> num;
    cout << reverse(num) << endl;
  }
  return 0;
}
 