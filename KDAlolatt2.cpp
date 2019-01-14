#include <iostream>
#include <cstdio>
#include <stdlib.h>
#include <cstdlib>
using namespace std;

int main (int nNumberofArgs, char* pszArgs[]) {
    string name, name2, name3;
    int kill, kill2, kill3, mor, mor2, mor3, assis, assis2, assis3, kda, kda2, kda3;
    char nov, invocador ;

    inicio:

    system ("CLS");
    while (true){

    cout << "Bem-vindo, quer saber o melhor frag de fonfon? Siga os passos!" << endl;

    cout << "Digite seu nick de invocador: " << endl;
    cin >> invocador;
    //Primeiro campeao e os dados para calcular o KDA
    cout << "Digite o primeiro campeao: " << endl;
    cin >> name;
    cout << "Digite seu numero de abates com o campeao: " << endl;
    cin >> kill;
    cout << "Digite seu numero de mortes com o campeao: " << endl;
    cin >> mor;
    cout << "Digite seu numero de assistencias com o campeao: " << endl;
    cin >> assis;

    //Segundo campeao e os dados para calcular o KDA
    cout << "Digite o segundo campeao: " << endl;
    cin >> name2;
    cout << "Digita seu numero de abates com o campeao: " << endl;
    cin >> kill2;
    cout << "Digite seu numero de mortes com o campeao: " << endl;
    cin >> mor2;
    cout << "Digite seu numero de assistencias com o campeao: " << endl;
    cin >> assis2;

    //Terceiro campeao e os dados para calcular o KDA
    cout << "Digite o terceiro campeao: " << endl;
    cin >> name3;
    cout << "Digite seu numero de abates com o campeao: " << endl;
    cin >> kill3;
    cout << "Digite seu numero de mortes com o campeao: " << endl;
    cin >> mor3;
    cout << "Digite seu numero de assistencias com o campeao: " << endl;
    cin >> assis3;

    kda= kill + assis / mor;
    kda2= kill2 + assis2/ mor2;
    kda3=  kill3 + assis3/ mor3;

    //Resultado da conta
    switch (kill<5){
      cout << "Invocaodor "
      << invocador
      << " seus abates com o campeao "
      << name
      << " e de "
      << kill
      << " eliminacao tendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte, invocador!"
      << endl;
      break;
      default:
      cout << "Invocaodor "
      << invocador
      << " seus abates com o campeao "
      << name
      << " e de "
      << kill
      << " eliminacoes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
      << endl;
      break;
}
    switch (mor<5){
    cout << "Invocador "
    << invocador
    << " suas mortes com o campeao "
    << name
    << " e de "
    << mor
    << " mortes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
    << endl;
    break;
    default:
    cout << "Invocador "
    << invocador
    << " suas mortes com o campeao "
    << name
    << " e de "
    << mor
    << " mortes sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
    << endl;
    break;
}
    switch (assis<10){
    cout << "Invocador "
    << invocador
    << " suas assistencias com o campeao "
    << name
    << " e de "
    << mor
    << " assistencias sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
    << endl;
    break;
    default:
    cout << "Invocador "
    << invocador
    << " suas assistencias com o campeao "
    << name
    << " eh de "
    << mor
    << " assistencias sendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
    << endl;
    break;

}
switch (kill2<5){
  cout << "Invocador "
  << invocador
  << " seus abates com o campeao "
  << name2
  << " e de "
  << kill2
  << " eliminacao tendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte, invocador!"
  << endl;
  break;
  default:
  cout << "Invocador "
  << invocador
  << " seus abates com o campeao "
  << name2
  << " e de "
  << kill2
  << " eliminacoes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
  << endl;
  break;
}

switch (mor2<5){
cout << "Invocador "
<< invocador
<< " suas mortes com o campeao "
<< name2
<< " e de "
<< mor2
<< " mortes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
default:
cout << "Invocador "
<< invocador
<< " suas mortes com o campeao "
<< name2
<< " e de "
<< mor2
<< " mortes sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
}
switch (assis2<10){
cout << "Invocador "
<< invocador
<< " suas assistencias com o campeao "
<< name2
<< " e de "
<< mor2
<< " assistencias sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
default:
cout << "Invocador "
<< invocador
<< " suas assistencias com o campeao "
<< name2
<< " eh de "
<< mor2
<< " assistencias sendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;

}
switch (kill3<5){
  cout << "Invocador "
  << invocador
  << " seus abates com o campeao "
  << name3
  << " e de "
  << kill3
  << " eliminacao tendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte, invocador!"
  << endl;
  break;
  default:
  cout << "Invocaodor "
  << invocador
  << " seus abates com o campeao "
  << name3
  << " e de "
  << kill3
  << " eliminacoes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
  << endl;
  break;
}
switch (mor3<5){
cout << "Invocador "
<< invocador
<< " suas mortes com o campeao "
<< name3
<< " e de "
<< mor3
<< " mortes tendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
default:
cout << "Invocador "
<< invocador
<< " suas mortes com o campeao "
<< name3
<< " e de "
<< mor3
<< " mortes sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
}
switch (assis3<10){
cout << "Invocador "
<< invocador
<< " suas assistencias com o campeao "
<< name3
<< " e de "
<< mor3
<< " assistencias sendo um mal desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;
default:
cout << "Invocador "
<< invocador
<< " suas assistencias com o campeao "
<< name3
<< " eh de "
<< mor3
<< " assistencias sendo um bom desempenho na media de League Of Legends, pratique mais e boa sorte!"
<< endl;
break;

}
        cout << "Invocador " << invocador
        << " o seu KDA com o campeao "
        << name
        << " e de: "
        << kda
        << endl;
        if (kda == 1){
        break;
      }
    if (kda > kda2 && kda > kda3){
      cout << "Invocador " << invocador
      << ", seu melhor campeao foi com o(a) "
      << name
      << " com o KDA de: "
      << kda
      << endl;
    }else if (kda2 > kda && kda2 > kda3){
      cout << "Invocador " << invocador
      << ", seu melhor campeao foi o (a) "
      << name2
      << " com o KDA de: "
      << kda2
      << endl;
    }else{
      cout << "Invocador " << invocador
      << ", seu melhor campeao foi o(a) "
      << name3
      << " com o KDA de: "
      << kda3
      << endl;
    }
    cout << "Curtiu e quer ver com outros campeoes? Digite [s] pra continuar ou [n] para fechar o programa" << endl;
    cin >> nov;

    if (nov == 's' || nov == 'S'){
      goto inicio;
    }

  return 0;
 }
}
