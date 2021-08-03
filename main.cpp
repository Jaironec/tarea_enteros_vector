#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
bool vector_ej1(int num[], int tamanio)
{
    bool acu;
    for(int i=0;i<tamanio;i++){
        if(num[i]%2==0){
            acu= true;
            break;
        }else{
            acu= false;
        }
    }
    return acu;
}

//ejer 2
int vector_ej2(int num[], int tamanio)
{
    int acu=0;

    for(int i=0;i<tamanio;i++){
        if(num[i]%2==0){
            acu= i;
            break;
        }else{
            acu= -1;
        }
    }
    return acu;
}
void imprimir(int num[], int tamanio){
    cout<<endl<<endl<<"ELEMENTOS DEL VECTOR";
    for (int i = 0; i < tamanio; ++i) {
        cout<<endl<<"elemento # "<<i<<" : "<<num[i];
    }
}
void leer_vector(int num[], int tamanio){
// Los vectores siempre se pasan por referencia
    srand (time(NULL));
    for (int i = 0; i < tamanio; ++i) {
        num[i] = rand () % 121+1;

    }

}
int main(int argc, char *argv[])
{
    const int maxi=7;
    int vector[maxi];
    leer_vector(vector, maxi);
    imprimir(vector, maxi);
    if(vector_ej1(vector,maxi)==true)
        cout<<endl<<"VERDADERO";
    if(vector_ej1(vector, maxi)==false)
        cout<<endl<<"FALSO";
    cout<<endl<<"la pocision del entero es: "<<vector_ej2(vector, maxi);
}