#include <iostream>
#include <stdio.h>
#include <iomanip>

using namespace std;

int main(){
	float b;
	int a;
	cin >> a >> b;
	if ((a >= b-0.5) || ((a%5)!=0)){
		std::cout << std::fixed;
    	std::cout << std::setprecision(2);
		std::cout << b;
	}
	else{
		std::cout << std::fixed;
    	std::cout << std::setprecision(2);
    	std::cout << (b-a-0.5);
	}
	return 0;
}