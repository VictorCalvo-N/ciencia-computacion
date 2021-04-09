//Victor Calvo Guzmán

#include<iostream>
using namespace std;

void escoger(char&);
void diagrama(int&,int&);
void elegir(int&,int&,int&,char&);

int main() {
  int elegida;
  int i = 0;
  int j = 0;
  char opcion;
  cout<<"Escoja ser X u O";
    cin>>opcion;

  escoger(opcion);
  diagrama(i,j);
  elegir(i,j,elegida,opcion);

  return 0;
}
void escoger(char& opcion) {
    if( opcion == 'X' or opcion == 'O' or opcion == 'x' or opcion == 'o' ){
      cout << "Usted ha elejido ser " << opcion << "\n";
    }else{
      cout << "Debe escoger X u O" <<endl;
    }
}

void diagrama(int& i, int&j){
  for(i=1;i<10;i++){
    if (i==3 or i==6){
      cout << i << "\n" << "----------" << "\n";
    }
    else{
      for(j=0;j<1;j++){
        if (i==9){
          cout << i;
        }else{
          cout << i <<" | ";
        }
    }}
  }
}

void elegir( int& i, int& j, int& elegida, char& opcion){

  for(i=0; i<9; i++){
    if (opcion=='X' or opcion=='x' or opcion=='O' or opcion=='o'){
      cout << "\nElija donde poner su: " << opcion << "\n";
      cin >> elegida;
      for(i=1;i<10;i++){
        if (i==3 or i==6){
          if (elegida==i){
            cout << opcion << "\n" << "--------" << "\n";
          }else{
            cout << i << "\n" << "--------" << "\n";
          }
        }
        else{
          for(j=0;j<1;j++){
            if (elegida==i){
              cout << opcion <<" | ";
            }else{
              cout << i <<" | ";
            }
        }}
        }
    }
  }
}
