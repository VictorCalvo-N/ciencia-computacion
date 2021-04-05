//Victor Calvo Guzman

#include <iostream>
#include <curses.h>
using namespace std;

int main(){
int escalon, persona, rpta;

cout << "Ingrese número de escalones: \n";
  cin >> escalon;
  cout << "En que escalon estara la persona? \n";
  cin >> persona;
    if((persona*-1) == escalon){
      cout << "_P_";
    }else{
      cout << "___";
    }
     if(escalon == 1){
        cout << "     ";
      }
    for(int i = 0; i < escalon - 1; i++) {
      cout << "        ";
      if(i == escalon-2){
        cout << "     ";
      }
    }
    if(persona == escalon){
      cout << "_P_\n";
    }else{
      cout << "___\n";
    }
    for(int j = 0; j < escalon; j++) {
     for(int k = 0; k < j; k++) {
       cout << "    ";
     }
      if((persona*-1) == (escalon-(j+1))){

          cout << "-" << escalon - j << " |_P_";

      }
      else{
        cout << "-" << escalon - j << " |___";
      }
     for(int l = 2; l < escalon - j; l++) {
        cout << "        ";
     }
     if(escalon - j == 1) {
      cout << "| " << escalon - j << "\n";
     } else {
       cout << "    ";
      if(persona == (escalon-(j+1))){

          cout << " _p_| " << escalon - j << "\n";

      }
      else{
        cout << " ___| " << escalon - j << "\n";
      }
     }
    }
cout << "¿Quieres limpiar la pantalla?\n";
cin >> rpta;
if (rpta == 1){
     system("clear");
}else if (rpta == 2){
  exit(-1);
}
}
