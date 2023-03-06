#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define pb push_back

int main () {

    string estado; // string para guardar os estados
    ld faturamento; // variavel para guardar o faturamento
    ld total = 0; //variavel que guarda a soma dos faturamentos
    
    map<string,ld>porcentagem; //map que indexa os estados com os faturamentos
    map<string,ld>:: iterator it;

    cout << "Digite o estado e depois o valor do faturamento mensal da distribuidora daquele estado:" << endl << endl;
    cout << "Estado: ";

    while (getline(cin,estado)) { //Pega os estados e os faturamentos calculando o total e indexando o map
        cout << "Valor: R$ ";
        cin >> faturamento;

        porcentagem[estado] = faturamento;
        total+= faturamento;

        if (estado == "Outros" or estado == "outros") { //Para a iteração
            break;
        }
        cout << "Estado: ";
        cin.ignore();
    }
    for (it = porcentagem.begin(); it != porcentagem.end(); it++) { //substitui os faturamentos pelos respectivos percentuais
        it->second = (it->second*100)/total;
    }
    cout << endl << "Segue estados com seus respectivos percentuais de faturamento da distribuidora:" << endl << endl;
    for (it = porcentagem.begin(); it != porcentagem.end();it++) { // Imprime os percentuais de cada estado
        cout << "{ " << it->first << " --> " << fixed << setprecision(2) << it->second << "% }" << endl;
    }
    
}
