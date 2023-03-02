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
        ll primeiro_termo = 0; //primeiro termo da sequencia
        ll segundo_termo = 1; //segundo termo da sequencia
        ll sequencia = primeiro_termo+segundo_termo; //o termo da sequencia que calcularemos daqui pra frente

        while (sequencia < numero) { //Atualiza a sequencia enquanto o termo não é maior ou igual ao número digitado pelo usuário
            primeiro_termo = segundo_termo;
            segundo_termo = sequencia;
            sequencia = primeiro_termo+segundo_termo;
        }
       if (sequencia == numero) { //Confere e imprime se o número faz parte ou não
        cout << "O número " << numero << " faz parte da sequência de fibonacci!" << endl;
       }

       else {
        cout << "O número " << numero << " não faz parte da sequência de fibonacci!" << endl;
       }
    }
}
