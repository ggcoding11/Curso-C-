#include <iostream>

using namespace std;

int fibonacci(int n){
	if (!n) {
		return 0;
	} else if (n == 1){
		return 1;
	}
	
	return fibonacci(n - 1) + fibonacci(n - 2);
	
    /*
    	O que rola aqui, é que essa função retorna cada elemento da sequencia. Dito isso
    	
    	Ex: F(4) = F(3) + F(2)
    	
    	Essa expressão não está aqui a toa, ela é a fórmula central da sequencia de fibonacci
    	
    	Ele pega cada número da sequencia com base nos anteriores
    	
    	A base de tudo são o return 0 e return 1
    
    */
}


int main(){

	for (int i = 0; i < 20; i++){
		cout << fibonacci(i) << " ";
	}
	
	return 0;
}  





