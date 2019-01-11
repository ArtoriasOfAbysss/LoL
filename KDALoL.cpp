#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main () {
    string invocador, name, name2, name3;
    int kill, kill2, kill3, mor, mor2, mor3, assis, assis2, assis3, kda, kda2, kda3;
    char nov;

    inicio:

    system ("CLS");

    cout << "Bem-vindo, quer saber o melhor frag de fonfon? Siga os passos!" << endl;

    cout << "Digite seu nick de invocador: " << endl;
    cin >> invocador;
    //Primeiro campeao e os dados para calcular o KDA
    cout << "Digite o primeiro campeao: " << endl;
    cin >> name;
    cout << "Digite seu numero de abates com o campeao: " << name << endl;
    cin >> kill;
    cout << "Digite seu numero de mortes com o campeao: " << name << endl;
    cin >> mor;
    cout << "Digite seu numero de assistencias com o campeao: " << name << endl;
    cin >> assis;

    //Segundo campeao e os dados para calcular o KDA
    cout << "Digite o segundo campeao: " << endl;
    cin >> name2;
    cout << "Digita seu numero de abates com o campeao: " << name2 << endl;
    cin >> kill2;
    cout << "Digite seu numero de mortes com o campeao: " << name2 << endl;
    cin >> mor2;
    cout << "Digite seu numero de assistencias com o campeao: " << name2 << endl;
    cin >> assis2;

    //Terceiro campeao e os dados para calcular o KDA
    cout << "Digite o terceiro campeao: " << name3 << endl;
    cin >> name3;
    cout << "Digite seu numero de abates com o campeao: " << name3 << endl;
    cin >> kill3;
    cout << "Digite seu numero de mortes com o campeao: " << name3 << endl;
    cin >> mor3;
    cout << "Digite seu numero de assistencias com o campeao: " << name3 << endl;
    cin >> assis3;

    kda= kill + assis / mor;
    kda2= kill2 + assis2/ mor2;
    kda3=  kill3 + assis3/ mor3;

    //Resultado da conta
    if (kda > kda2 && kda > kda3){
      cout << "Invocador: " << invocador << endl;
      cout << "Seu melhor campeao foi o(a): " << name << endl;
      cout << "Com o KDA de: " << kda << endl;
    }else if (kda2 > kda && kda2 > kda3){
      cout << "Invocador: " << invocador << endl;
      cout << "Seu melhor campeao foi o(a) " << name2 << endl;
      cout << "Com o KDA de: " << kda2 << endl;
    }else{
      cout << "Invocador " << invocador << endl;
      cout << "Seu melhor campeao foi o(a) " << name3 << endl;
      cout << "Com o KDA de: " << kda3 << endl;
    }
    cout << "Curtiu e quer ver com outros campeoes? Digite [s] pra continuar ou [n] para fechar o programa" << endl;
    cin >> nov;

    if (nov == 's' || nov == 'S'){
      goto inicio;
    }
    
  return 0;
}

