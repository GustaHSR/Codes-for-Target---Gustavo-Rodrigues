#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double lb;

int main () {
    ll numero; // variável do número que o usuário deve digitar
    cout << "Digite um número para verificar se ele faz parte da sequência de fibonacci: ";
    cin >> numero;
    cout << endl;

    if (numero == 0 or numero == 1) {
        cout << "O número " << numero << " faz parte da sequência de fibonacci!" << endl;
    }
    else {
        ll fibonacci[numero]; //Vetor da sequência de fibonacci
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        fibonacci[2] = 1;

        ll i = 2; // Variável para atualizar a sequência

        while(fibonacci[i] < numero) { //Atualiza a sequência e verifica se o número da sequência em específico já passou do número digitado ou não
            i++;
            fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        }
       if (fibonacci[i] == numero) { //Confere e imprime se o número faz parte ou não
        cout << "O número " << numero << " faz parte da sequência de fibonacci!" << endl;
       }

       else {
        cout << "O número " << numero << " não faz parte da sequência de fibonacci!" << endl;
       }
    }
}
