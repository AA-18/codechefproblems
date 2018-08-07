//https://www.codechef.com/problems/BUGCAL

#include<iostream>
#include<cmath>
 
using namespace std;
 
int mod,add;
//mod=mod hai wo input ka,add formu
int buggy(int num1, int num2) {
	int result = 0;
	int i = 0;
	while (num1 > 0 || num2 > 0) {
		int mod1 = num1 % 10;
		int mod2 = num2 % 10;
		int currentDigit = (mod1 + mod2) % 10;
		result = result + currentDigit * pow(10, i);
 
		i++;
		num1 = num1 / 10;
		num2 = num2 / 10;
	}
	return result;
}
		
 
 
int main() {
	int t;
	cin >>t;
	for (int i=0; i<t; i++) {
		int num,num2;
		cin >> num;
		cin >> num2;
		cout << buggy(num, num2) << endl;
	}
}
