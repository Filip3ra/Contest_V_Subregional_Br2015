
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, char const *argv[]){

    int J, R;
    int jogadores[502]{0}; // declara já preenchido com zeros
    string str;
    int num;

    while(cin >> J >> R){   // jogadores e rounds

        cin.ignore();   // ignora \n
        getline(cin, str);  // lista de pontos        
        istringstream iss;
        iss.str(str);

        int fim = (J*R);
        int cont = 0;       // contador pra cada rodada
        int p;              // pontos

        for(int i = 0; i<fim; ++i){
            iss >> num;

            if(cont<J){
                jogadores[cont] += num;
                cont++;
            }
            else{
                cont = 0;
                jogadores[cont] += num;
                cont++;
            }   
        }

        str = "";
        iss.clear();        

        int maior = 0 ;
        int vencedor = 0;

        for(int i = 0; i < J ; ++i){ // descobre quem é o vencedor
            if(jogadores[i]>=maior){
                maior = jogadores[i];
                vencedor = i;
            }
        }

        cout << vencedor+1 << endl;

        // limpa variáveis usadas
        maior = 0;
        vencedor = 0;

        // zera vetor de pontos até onde foi usado
        for(int i = 0; i < J ; ++i){
            jogadores[i] = 0;
        }



    }

    return 0;
}

/*
// remove(str.begin(), str.end(), ' '); // remove espaços de uma string
*/