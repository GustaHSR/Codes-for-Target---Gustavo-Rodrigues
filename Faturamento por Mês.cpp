#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define pb push_back

int main () {
    vector<int>faturamento_do_dia; //vector de indexação do faturamento
    int faturamentos_acima_da_media;
    ll valor,maior,menor;
    ld media_mensal;

    faturamentos_acima_da_media = 0;
    menor = 1e10; // menor valor de faturamento
    maior = 0; //maior valor de faturamento
    media_mensal = 0;

    cout << "Insira os dias e os faturamentos de cada dia do mês." << endl << endl;

    for (int i = 0; i < 30; i++) { //Iteração para a calcular a media mensal e alocar os valores no vector
        cout << "Dia: " << i+1 << endl;
        cout << "Valor: ";
        cin >> valor;
        faturamento_do_dia.pb(valor);
        media_mensal += valor;
    }

    media_mensal /= 30;

    for(int i = 0; i < 30; i++) { //Verificação do maior e do menor faturamento. Verificação também da quantidade de dias com faturamento acima da média
        if (faturamento_do_dia[i] > media_mensal) {
         faturamentos_acima_da_media++;
        }
        if (faturamento_do_dia[i] > maior) {
            maior = faturamento_do_dia[i];
        }
        if (faturamento_do_dia[i] < menor) {
            menor = faturamento_do_dia[i];
        }
    }

    cout << endl << endl << "O menor valor de faturamento desse mês foi: " << menor << endl;
    cout << "O maior valor de faturamento desse mês foi: " << maior << endl;
    cout << "O número de dias que o valor do faturamento foi maior que a média mensal foi: " << faturamentos_acima_da_media << endl;
}
