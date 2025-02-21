#include <iostream>

using namespace std;

int main(){
	
	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	chances = 6;
	i = 0;
	tam = 0;
	acertos = 0;
	cout << "Fale para seu amigo tampar os olhos e escrever a palavra: ";
	cin >> palavra;

	system("cls");
	
	while (palavra[i] != '\0'){
		i++;
		tam++;
	}
	
	for (i = 0; i < tam; i++){
		secreta[i] = '-';
	}
	
	do {
		cout << secreta << endl << endl;
		
		cout << "Chances: " << chances << endl;
		cout << "Acertos: " << acertos << endl << endl;
		
		cout << "Digite a letra: ";
		cin >> letra[0];
		
		int acertou = 0;
		
		for (i = 0; i < tam; i++){
			if (palavra[i] == letra[0]){
				secreta[i] = letra[0];
				acertos++;
				
				acertou = 1;	
			}
		}
		
		if (!acertou){
			chances--;
		}
		
		system("cls");
	} while (chances > 0 && acertos < tam);
	
	if (acertos == tam){
		cout << "Voce ganhou!";
	} else {
		cout << "Voce perdeu!";
	}
	
	return 0;
}
