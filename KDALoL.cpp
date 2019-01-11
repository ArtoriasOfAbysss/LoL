#include <iostream>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main () {
    string invocador, name, namee, nameee;
    int kill, killl, killll, mor, morr, morrr, assis, assiss, assisss, kda, kdaa, kdaaa;
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
    cin >> namee;
    cout << "Digita seu numero de abates com o campeao: " << namee << endl;
    cin >> killl;
    cout << "Digite seu numero de mortes com o campeao: " << namee << endl;
    cin >> morr;
    cout << "Digite seu numero de assistencias com o campeao: " << namee << endl;
    cin >> assiss;

    //Terceiro campeao e os dados para calcular o KDA
    cout << "Digite o terceiro campeao: " << nameee << endl;
    cin >> nameee;
    cout << "Digite seu numero de abates com o campeao: " << nameee << endl;
    cin >> killll;
    cout << "Digite seu numero de mortes com o campeao: " << nameee << endl;
    cin >> morrr;
    cout << "Digite seu numero de assistencias com o campeao: " << assisss << endl;
    cin >> assisss;

    kda= kill + assis / mor;
    kdaa= killl + assiss/ mor;
    kdaaa=  killll + assisss/ mor;

    //Resultado da conta
    if (kda > kdaa && kda > kdaaa){
      cout << "Invocador: " << invocador << endl;
      cout << "Seu melhor campeao foi o(a): " << name << endl;
      cout << "Com o KDA de: " << kda << endl;
    }else if (kdaa > kda && kdaa > kdaaa){
      cout << "Invocador: " << invocador << endl;
      cout << "Seu melhor campeao foi o(a) " << namee << endl;
      cout << "Com o KDA de: " << kdaa << endl;
    }else{
      cout << "Invocador " << invocador << endl;
      cout << "Seu melhor campeao foi o(a) " << nameee << endl;
      cout << "Com o KDA de: " << kdaaa << endl;
    }
    cout << "Curtiu e quer ver com outros campeoes? Digite [s] pra continuar ou [n] para fechar o programa" << endl;
    cin >> nov;

    if (nov == 's' || nov == 'S'){
      goto inicio;
    }
    
  return 0;
}

