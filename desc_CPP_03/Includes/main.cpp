#include "Pessoa.hpp"
#include <unordered_map>
#include "iostream"

using namespace std;
enum Opera{
    CADASTRAR,
    LISTAR,
    SAIR,
    EXCLUIR,
    ORDENAR,
    INVALIDA
};

Opera stringParaOp(const string& comando){
    static unordered_map<string, Opera> mapa = {
        {"cadastrar", CADASTRAR},
        {"listar", LISTAR},
        {"sair", SAIR},
        {"excluir", EXCLUIR},
        {"ordenar", ORDENAR}
    };

    auto it = mapa.find(comando);
    if (it != mapa.end())
        return it->second;
    return INVALIDA;
}

int main(){
    string op;
    Pessoa** vetor = new Pessoa*[40];
    for(int i = 0;i<40;i++){
        vetor[i] = NULL;
    }
    int indice = 0;
    while(1){
        cin >> op;
        switch(stringParaOp(op)){
            case CADASTRAR:{
                string nome;
                double altura;
                int idade;
                cin >> nome >> idade >> altura;
                Pessoa* p = new Pessoa(nome, idade, altura);
                vetor[indice] = p;
                indice++;

                break;
            }
            case LISTAR:{
                for(int i = 0; i<indice; i++){
                    cout << i << ": " << *vetor[i] << endl;
                }
                break;
            }
            case ORDENAR:{
                char c;
                cin >> c;
                switch(c){
                    case 'A':{
                        int count;
                        do{
                            count = 0;
                            for(int i = 0;i<indice - 1;i++){
                                if(Pessoa::comparaPorAltura(vetor[i], vetor[i+1])){
                                    Pessoa* p = vetor[i];
                                    vetor[i] = vetor[i+1];
                                    vetor[i+1] = p;
                                    count++;
                                }
                            }
                        }while(count > 0);
                        break;
                    }
                    case 'N':{
                        int count;
                        do{
                            count = 0;
                            for(int i = 0;i<indice - 1;i++){
                                if(Pessoa::comparaPorNome(vetor[i], vetor[i+1])){
                                    Pessoa* p = vetor[i];
                                    vetor[i] = vetor[i+1];
                                    vetor[i+1] = p;
                                    count++;
                                }
                            }
                        }while(count > 0);
                        break;
                    }
                    case 'I':{
                        int count;
                        do{
                            count = 0;
                            for(int i = 0;i<indice - 1;i++){
                                if(Pessoa::comparaPorIdade(vetor[i], vetor[i+1])){
                                    Pessoa* p = vetor[i];
                                    vetor[i] = vetor[i+1];
                                    vetor[i+1] = p;
                                    count++;
                                }
                            }
                        }while(count > 0);
                        break;
                    }
                }
                break;
            }
            case EXCLUIR:{
                int num;
                cin >> num;
                if(num < indice){
                    delete vetor[num];
                    for(int i = num;i<indice - 1;i++){
                        vetor[i] = vetor[i+1];
                    }
                    vetor[indice - 1] = NULL;
                    indice--;
                }
                break;
            }
            case SAIR:{
                delete[] vetor;
                return 0;
            }
        }
    }
}