
#include <iostream>
#include <string>
#include<algorithm>

using namespace std;

int main(int argc, char const *argv[]){

    int J, R;
    int jogadores[502]{0}; // declara já preenchido com zeros
    string str;

    while(cin >> J >> R){   // jogadores e rounds

        cin.ignore();   // ignora \n
        getline(cin, str);  // lista de pontos
        remove(str.begin(), str.end(), ' '); // remove espaços de uma string

        //cout << str;

        int fim = (J*R);    
        int cont = 0;       // contador pra cada rodada
        int p;              // pontos

        for(int i = 0; i < fim; ++i){

            p = ((int)str[i] - 48); // em ascii, os dígitos começam em 48

            if(cont<J){     // ALGUM BUG COM OS NUMEROS ESTA OCORRENDO AQUI
                jogadores[cont] += p;
                cout << "jog = " << cont+1 << " pts = " << jogadores[cont] << endl;
                cont++;
                cout << "cont = " << cont << endl;
            }
            else    // se entrei no else, uma rodada acabou
                cont = 0;
        }

        int maior = 0 ;
        int vencedor = 0;

        for(int i = 0; i < J ; ++i){ // descobre quem é o vencedor
            if(jogadores[i]>=maior){
                maior = jogadores[i];
                vencedor = i;
            }
        }

        cout << vencedor << endl;

    }

    return 0;
}