#include "usuario.h"

using namespace std;

Usuario::Usuario(int i, string n, int idad, float s, int t){
    id = i;
    nome = n;
    idade = idad;
    saldo = s;
    tipo = t;
}

int Usuario::get_id(){
    return id;
}

string Usuario::get_nome(){
    return nome;
}

int Usuario::get_idade(){
    return idade;
}

float Usuario::get_saldo(){
    return saldo;
}

int Usuario::get_tipo(){
    return tipo;
}
