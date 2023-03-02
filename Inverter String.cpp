#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double lb;

int main () {
   string st; // Variável da string
   cout << "Digite uma string para ser invertida:" << endl << endl;

   getline(cin,st); // getline para pegar os espaços na string
   cout << endl;

   char troca; // variavel auxiliar que realizará a troca dos caracteres

   ll tam = st.size(); // variavel que pega o tamanho total da string

   for (ll i = 0; i < st.size()/2; i++,tam--) { // Iteração que faz a troca dos caracteres
    troca = st[i];
    st[i] = st[tam-1];
    st[tam-1] = troca;
   }
   cout << "Segue agora a string com os caracteres invertidos:" << endl << endl << st << endl << endl; //Impressão da string invertida
}
