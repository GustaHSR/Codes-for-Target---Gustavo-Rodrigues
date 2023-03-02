#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define pb push_back

int main () {
    map<int,ll>faturamento_do_dia; //map de indexação do dia com o faturamento
    int dia, faturamentos_acima_da_media;
    ll valor,maior,menor;
    ld media_mensal;

    faturamentos_acima_da_media = 0;
    menor = 1e10; // menor valor de faturamento
    maior = 0; //maior valor de faturamento
    media_mensal = 0;

    cout << "Insira os dias e os faturamentos de cada dia do mês." << endl << endl;

    for (int i = 0; i < 30; i++) { //Iteração para indexar o dia com o faturamento e calcular a media mensal
        cout << "Dia: ";
        cin >> dia;
        cout << "Valor: ";
        cin >> valor;
        faturamento_do_dia[dia] = valor;
        media_mensal += valor;
    }

    media_mensal /= 30;

    for(const auto &entry: faturamento_do_dia) { //Verificação do maior e do menor faturamento. Verificação também da quantidade de dias com faturamento acima da média
        if (entry.second > media_mensal) {
         faturamentos_acima_da_media++;
        }
        if (entry.second > maior) {
            maior = entry.second;
        }
        if (entry.second < menor) {
            menor = entry.second;
        }
    }

    cout << endl << endl << "O menor valor de faturamento desse mês foi: " << menor << endl;
    cout << "O maior valor de faturamento desse mês foi: " << maior << endl;
    cout << "O número de dias que o valor do faturamento foi maior que a média mensal foi: " << faturamentos_acima_da_media << endl;
}
