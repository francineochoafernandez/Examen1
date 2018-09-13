#include "Examen.h"

int main (void)
{
  printf("\nHola este programa suma, resta, divide y multiplica dos numeros complejos.\n\n");
  NumComplejo numeros[10], numerores[6];
  printf("\nLos valores de 10 numeros complejos son:\n");
  //Dandole valores arbitrarios e imprimiendolos a la lista de 10 numeros complejos
  float c=0.5, d=0.8;
  for(int i=0;i<10;i++)
  {
    numeros[i].x=c;
    numeros[i].y=d;
    c=c+0.3;
    d=d+1.43;
    printf("%i)",i+1);
    numeros[i].Muestra();
  }

  cout << "a) La suma de dos numeros complejos 1) y 2):" << endl;
  numerores[0]=numeros[0]+numeros[1];
  numerores[0].Muestra();

  cout << "b) La resta de dos numeros complejos 3) y 4):" << endl;
  numerores[1]=numeros[2]-numeros[3];
  numerores[1].Muestra();

  cout << "c) La multiplicación de dos numeros complejos 5) y 6):" << endl;
  numerores[3]=numeros[4]*numeros[5];
  numerores[3].Muestra();

  cout << "d) La división de dos numeros complejos 7) y 8):" << endl;
  numerores[4]=numeros[6]/numeros[7];
  numerores[4].Muestra();

  cout << "¡Hasta luego!" << endl;



  return 0;
}
