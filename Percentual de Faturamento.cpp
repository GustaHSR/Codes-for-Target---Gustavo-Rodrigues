#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
#define pb push_back

template <typename K, typename V>
multimap<V, K>

invertMap(map<K,V> const& myMap) //Função que inverte o map da porcentagem dos estados para imprimir as porcentagens em ordem crescente
{
    multimap<V,K>porcentagem_ordenada;

    for (auto const& pair : myMap) {
        porcentagem_ordenada.insert(make_pair(pair.second,pair.first));
    }
    return porcentagem_ordenada;
}

int main () {

    string estado; // string para guardar os estados
    ld faturamento; // variavel para guardar o faturamento
    ld total = 0; //variavel que guarda a soma dos faturamentos
    
    map<string,ld>porcentagem; //map que indexa os estados com os faturamentos

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
    for (auto it = porcentagem.begin(); it != porcentagem.end();it++) { //substitui os faturamentos pelos respectivos percentuais
        it->second = it->second *100 /total;
    }
    cout << endl << "Segue estados com seus respectivos percentuais de faturamento da distribuidora:" << endl << endl;

    multimap<ld,string>porcentagem_ordenada = invertMap(porcentagem); //Multimap para ordenar o map de porcentagens em ordem crescente

    for (auto it = porcentagem_ordenada.begin(); it != porcentagem_ordenada.end(); it++) { // Imprime os percentuais de cada estado
        cout << "{ " << it->second << " --> " << it->first << "% }" << endl;
    }
}
