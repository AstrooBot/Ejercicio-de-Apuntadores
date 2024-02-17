#include <iostream>
#include <string>
using namespace std;
struct Alumno {
  string nombre;
  long int codigo;
  int nota[3];
  int promedio;
};

int main() {
 int cantidad;
 int promedio;
 cout<<"¿Cuantos estudiantes son?"<<endl;
 cin>>cantidad;
 Alumno Estudiantes[cantidad];
 Alumno* ptrEstudiante = Estudiantes;

 for (int j = 0; j <= cantidad; j++) (ptrEstudiante+j)->promedio = 0; 

 for (int i = 0; i < cantidad; i++) {

    cout<<"¿Cual es el nombre del estudiante "<< i+1<<" ?"<<endl;
    cin>>Estudiantes[i].nombre;

    cout<<"¿Cual es el codigo del estudiante "<< i+1<<" ?"<<endl;
    cin>>Estudiantes[i].codigo;

    for (int j = 0; j < 3; j++) {

      cout<<"¿Cual es la nota "<<j+1<<" del estudiante "<< i+1<<" ?"<<endl;
      cin>>Estudiantes[i].nota[j];
      (ptrEstudiante+i)->promedio += Estudiantes[i].nota[j];
    }
  }

 for (int j = 0; j < cantidad; j++) {
     
   cout<<"Estudiante "<<(ptrEstudiante+j)->nombre<<"\nCodigo: "<<(ptrEstudiante+j)->codigo<<endl;
   cout<<"Promedio del estudiante "<<j+1<<" es "<<((ptrEstudiante+j)->promedio/3)<<endl;
 }

return 0;
}