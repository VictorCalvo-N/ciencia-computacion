//Victor Alejandro Calvo Guzman
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

//Se llama nuevamente a las funciones para declarar que existen y no dependan del orden para ser llamados.
void movimiento_derecha(int,int,int,int,int);
void movimiento_izquierda(int,int,int,int,int);
void movimiento_avanzar(int,int,int,int,int);

//Esta funcion va a recibir el valor de fila, columna y x como y para poder recrear el cuadro matriz a travez de un if que va a imprimir el orden enumerado de "x" y de "y", iniciando desde el 0, luego con bucles for va a crear el cuadro iniciando por filas y luego por las sus columnas de esta dependiendo de las varibales filas y columnas o mejor dicho de cuanto le hallamos puesto a cada una.
void matriz(int filas,int columnas,int x, int y){
  cout << "\n Imprimiendo el Cuadro Matriz \n";
  if(filas < 51 && columnas < 51){
    for(int j=0;j<columnas;j++){
      if(j<10){
        if (j==0){
        cout <<"   "<<j;
        }else{
        cout <<" "<<j;
        }
      }else{
        cout <<" "<<j;
      }
      }
      cout<<" \n";
    for(int i=0;i<filas;i++){
      if (i>9){
        cout << i<<"";
      }else{
        cout << i<<" ";
      }

      for(int j=0;j<columnas;j++){
        if (j>9){
          cout<<"|  ";
        }else{
          cout<<"| ";
        }
        //*(*(numeros+i)+j)
      }
      cout<<"| \n";
    }
  }else{
    cout << "La matriz es muy grande, Max 50";
  }
}

//Esta función va a encargarse de los movimientos que va a tener el robot ya sea derecha, izquierda y el avance. Va a recibir filas, columnas, los valores de x,y y el de entrada. Va a indicar primero los movimientos que hay y como acceder a ellos a travez de los numeros(No me acepto colocar letras para poder ingresar, espero lo tome en cuenta profesor). Luego tomamos el switch para ver que opcion toma el usuario y con ella poder acceder a las acciones ya antes mencionadas.
void movimiento(int filas, int columnas,int x, int y,int entrada){
  int mover;
  cout<<"Que acción desea que haga el robot?: \n";
  cout<<"1 - girar a la derecha\n";
  cout<<"2 - girar a la izquierda\n";
  cout<<"3 - avanzar un cuadro\n";
  cin>>mover;
  switch(mover)
  {
    case 1:
      movimiento_derecha(filas,columnas,x,y,entrada);
    break;
    case 2:
      movimiento_izquierda(filas,columnas,x,y,entrada);
    break;
    case 3:
      movimiento_avanzar(filas,columnas,x,y,entrada);
    break;
    default: cout << "El valor entrado no es correcto";
  }
}

//Esta función va a mover la direccion donde el robot va a girar, en este caso a la derecha mediante los bucles for teniendo en cuenta que la variable entrada va a cambiar dependiendo de lo que el usuario halla decidido antes, como por ejemplo si inicio la funcion con un 1 - Norte va a cambiar a 2 - Este. Tambien va a imprimir el cuadro Matriz con respecto al cambio echo y por último la opción de prosegir con otra acción o terminar el programa en este punto.
void movimiento_derecha(int filas, int columnas,int x, int y,int entrada){
 int numero[50][50],n,k,m;
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      if (i==x && j==y){
        if (entrada==1){
          numero[i][j]=2;
        }else if(entrada==2){
          numero[i][j]=3;
        }else if(entrada==3){
          numero[i][j]=4;
        }else if(entrada==4){
          numero[i][j]=1;
        }
        entrada=numero[i][j];
      }else{
        numero[i][j]=0;
      }
    }
  }
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      cout<<"|" <<numero[i][j];
    }
    cout<<"| \n";
  }
  cout<<"Desea hacer otra acción?: \n";
  cout<<"1 - Si\n";
  cout<<"2 - No\n";
  cin>>m;
  if(m==1){
    movimiento(filas,columnas,x,y,entrada);
  }else if(m==2){
    system("cls");
    exit (-1);
  }
}

//Esta función va a mover la direccion donde el robot va a girar, en este caso a la izquierda mediante los bucles for teniendo en cuenta que la variable entrada va a cambiar dependiendo de lo que el usuario halla decidido antes, como por ejemplo si inicio la funcion con un 1 - Norte va a cambiar a 4 - Oeste. Tambien va a imprimir el cuadro Matriz con respecto al cambio echo y por último la opción de prosegir con otra acción o terminar el programa en este punto.
void movimiento_izquierda(int filas, int columnas,int x, int y,int entrada){
 int numero[50][50],n,k,m;
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      if (i==x && j==y){
        if (entrada==1){
          numero[i][j]=4;
        }else if(entrada==4){
          numero[i][j]=3;
        }else if(entrada==3){
          numero[i][j]=2;
        }else if(entrada==2){
          numero[i][j]=1;
        }
        entrada=numero[i][j];
      }else{
        numero[i][j]=0;
      }
    }
  }
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      cout<<"|" <<numero[i][j];
    }
    cout<<"| \n";
  }
  cout<<"Desea hacer otra acción?: \n";
  cout<<"1 - Si\n";
  cout<<"2 - No\n";
  cin>>m;
  if(m==1){
    movimiento(filas,columnas,x,y,entrada);
  }else if(m==2){
    system("cls");
    exit (-1);
  }
}
//Esta función se encarga del avance de 1 casilla del robot ya sea en dirección Norte, Este, Sur o Oeste. Va a controlar si se sale del recuadro por cada lado ya sea por dirección Norte, Este, Sur o Oeste.También va a realizar el cuadro Matriz para que se pueda ver como quedo y la pregunta de continuar con otra acción o terminarlo.
void movimiento_avanzar(int filas, int columnas,int x, int y,int entrada){
 int numero[50][50],n,k,m;
  if(entrada==1){
   if(x>0 && x<=filas){
     x=x-1;
   }else{
     cout<<"Se salio del cuadro";
     exit (-1);
   }
  }else if(entrada==2){
    if(y>=0 && y<columnas-1){
      y=y+1;
    }else{
     cout<<"Se salio del cuadro";
     exit (-1);
   }
  }else if(entrada==3){
    if(x>=0 && x<filas-1){
      x=x+1;
    }else{
     cout<<"Se salio del cuadro";
     exit (-1);
   }
  }else if(entrada==4){
    if(y>0 && y<=columnas){
      y=y-1;
    }else{
     cout<<"Se salio del cuadro";
     exit (-1);
    }
  }

  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      if (i==x && j==y){
          numero[i][j]=entrada;
        entrada=numero[i][j];
      }else{
        numero[i][j]=0;
      }
    }
  }
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      cout<<"|" <<numero[i][j];
    }
    cout<<"| \n";
  }
  cout<<"Desea hacer otra acción?: \n";
  cout<<"1 - Si\n";
  cout<<"2 - No\n";
  cin>>m;
  if(m==1){
    movimiento(filas,columnas,x,y,entrada);
  }else if(m==2){
    system("cls");
    exit (-1);
  }
}

//Esta función es una de las mas importante porque primero va a mencionar que dirección va a tomar el robot al iniciar el programa y la ubicación en los "x" y "y", antes ya incluidos, a la vez que menciona sobre los puntos cardinales que puede tomar como decision y sus opciones para estos. Asi también va a formar su cuadro Matriz para poder ver donde lo coloca y si lo coloca correctamente el robot.
void posicion(int filas, int columnas,int x, int y){
  int entrada;
  cout<<"Opciones de dirección inicial del robot(Hacia donde va a apuntar)\n";
  cout<<"1 - Norte ↑\n";
  cout<<"2 - Este →\n";
  cout<<"3 - Sur ↓\n";
  cout<<"4 - Oeste ←\n";
  cout<<"Que dirección tomará el robot?: ";cin>>entrada;
  cout<<"\n";
  int numero[50][50],n,k;
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      if (i==x && j==y){
        numero[i][j]=entrada;
      }else{
        numero[i][j]=0;
      }
    }
  }
  for(int i=0;i<filas;i++){
    for(int j=0;j<columnas;j++){
      cout<<"|" <<numero[i][j];
    }
    cout<<"\n";
  }
  movimiento(filas,columnas,x,y,entrada);
}

//Esta función Main es la mas importante porque aca es donde pide el N° de filas y de columnas que va a tener el cuadro Matriz sai como el "x" y "y" para su ubicación en el cuadro Matriz.
int main(){
  int  filas, columnas,x,y;
  cout << "Ingrese el N° de filas que tendra el cuadro Matriz: ";
  cin >> filas;
  cout << "Ingrese el N° de columnas que tendra el cuadro Matriz: ";
  cin >> columnas;

  matriz(filas, columnas,x,y);
  cout << "Ingrese la ubicación 'x' que tomará el robot: ";cin>>x;
  cout << "ingrese la ubicación 'y' que tomará el robot: ";cin>>y;
  posicion(filas,columnas,x,y);
}
