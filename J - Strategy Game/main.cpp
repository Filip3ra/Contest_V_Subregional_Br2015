#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[]){

    int J, R;
    int jogadores[502]{0}; // declara já preenchido com zeros
    string str;

    while(cin >> J >> R){   // jogadores e rounds

        getline(cin, str);  // lista de pontos

        int fim = (J*R);    
        int cont = 0;       // contador pra cada rodada
        int p;              // pontos

        for(int i = 0; i < fim; ++i){

            if(str[i] != ' '){

                p = (int)str[i]; // <-- BUG, PARECE QUE TA LENDO O VALOR INT CHAR DO CARACTERE 

                cout << p << endl;

                if(cont<J){
                    jogadores[cont] += p;
                    
                    cont++;
                }
                else{ // se entrei no else, uma rodada acabou
                    cont = 0;
                }
            }
        }
        str.clear();

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