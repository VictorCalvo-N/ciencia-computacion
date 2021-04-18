//Victor Calvo Guzmán
//Profesor, estuve intentado hacerlo pero no logre terminarlo, le paso hasta donde logre sacar, si me puede ayudar a completarlo me ayudaria mucho, gracias.
#include<iostream>
using namespace std;
#include <cmath>
#include <stdlib.h>
#include <ctime>

void escoger(char&);
void diagrama(int&,int&);
void elegir(int&,int&,int&,char&,char&);

int main() {
  int elegida;
  int i = 0;
  int j = 0;
  char opcion,opcion2;
  cout<<"Escoja ser X u O";
    cin>>opcion;

  escoger(opcion);
  diagrama(i,j);
  elegir(i,j,elegida,opcion,opcion2);

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

void elegir( int& i, int& j, int& elegida, char& opcion,char& opcion2){
  for(int l=0;0<10;l++){
    for(i=0; i<9; i++){
      if(l % 2==0 ){
        if (opcion=='X' or opcion=='x' or opcion=='O' or opcion=='o'){
          cout << "\nElija donde poner su: " << opcion << "\n";
          cin >> elegida;
          for(i=1;i<10;i++){
            if (i==3 or i==6){
              if (elegida==i){
                cout << opcion << "\n" << "----------" << "\n";
              }else{
                cout << i << "\n" << "----------" << "\n";
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
      else {
        opcion2=opcion;
        srand(time(NULL));
        int aleatorio= 1+ rand()%9;
        switch(opcion2){
            case 'X': opcion2 = 'O';
            break;
            case 'x': opcion2 = 'o';
            break;
            case 'O': opcion2 = 'X';
            break;
            case 'o': opcion2 = 'x';
            break;
            default: cout << "\nUsted ha ingresado una letra incorrecta";
        }
        cout<<"\n";
        cout << "\nLa opción del computador es " << aleatorio << "\n";
        for(i=1;i<10;i++){
            if (i==3 or i==6){

              if (aleatorio==i){
                cout << opcion2 << "\n" << "--------" << "\n";
              }else{
                cout << i << "\n" << "--------" << "\n";
              }
            }
            else{
              for(j=0;j<1;j++){
                if (aleatorio==i){
                  cout << opcion2 <<" | ";
                }else{
                  cout << i <<" | ";
                }
            }}
            }
      }
    }
  }
}
