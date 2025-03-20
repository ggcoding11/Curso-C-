#include <iostream>

using namespace std;

int fatorial(int n){
	if (!n){
		return 1;
	} else if (n < 0){
		return -1;
	}
	
	return n * fatorial(n - 1);
}

int main(){
		
	int pedro = fatorial(0);
	
	cout << pedro;
			
	return 0;
}



