#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double lb;


int main () {

    string estado; // string para guardar os estados
    lb faturamento; // variavel para guardar o faturamento
    lb total = 0; //variavel que guarda a soma dos faturamentos

    vector<string>lista_de_estados; //vector que guarda os estados
    
    map<string,lb>porcentagem; //map que indexa os estados com os faturamentos

    cout << "Digite o estado e depois o valor do faturamento mensal da distribuidora daquele estado:" << endl << endl;
    cout << "Estado: ";

    while (getline(cin,estado)) { //Pega os estados e os faturamentos calculando o total e indexando o map
        cout << "Valor: R$ ";
        cin >> faturamento;

        lista_de_estados.push_back(estado);

        porcentagem[estado] = faturamento;
        total+= faturamento;

        if (estado == "Outros" or estado == "outros") { //Para a iteração
            break;
        }
        cout << "Estado: ";
        cin.ignore();
    }
    int i = 0;
    for (const auto &entry: porcentagem) { //substitui os faturamentos pelos respectivos percentuais
        porcentagem[lista_de_estados[i]] = (porcentagem[lista_de_estados[i]]*100)/total;
        i++;
    }
    cout << endl << "Segue estados com seus respectivos percentuais de faturamento da distribuidora:" << endl << endl;
    for (int i = 0; i < lista_de_estados.size();i++) { // Imprime os percentuais de cada estado
        cout << "{ " << lista_de_estados[i] << " --> " << fixed << setprecision(2) << porcentagem[lista_de_estados[i]] << "% }" << endl;
    }
    
}
