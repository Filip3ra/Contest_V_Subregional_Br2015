#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){

    /* vou pre processar os primeiros 10 fatoriais
       pois é mais do que o suficiente para 10^5 opções. */
    int vet[10]{0};
    vet[1] = 1;
    vet[2] = 2;

    int ant = 0;
    int val = 0;

    for(int i = 3; i < 10; ++i){
        ant = i-1;
        val = i;
        while(ant != 1){
            val = val*ant;
            --ant;
        }
        vet[i] = val;
    }
    val = 0;

    int N;
    int qtd = 0; 
    while(cin >> N){

        for(int i = 9; i > 0; --i){            
            if(N > vet[i]){
                while(val+vet[i] <= N){
                    val += vet[i];
                    qtd++;
                }
                if(val == N){
                    cout << qtd << endl;
                    break;
                }
            }
            else if(N == vet[i]){
                cout << qtd+1 << endl;
                break;
            }
        }

        val = 0;
        qtd = 0;

    }


    return 0;
}
