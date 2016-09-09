#include <iostream>
#include <string.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */



struct mPersona
{
    
    string Nombre;
    int Edad;
    struct mPersona *Siguiente;
    
} *mNodos;

//struct mPersona mNodos;

void lista()
{
    
    struct mPersona *lPtrCabeza;
    struct mPersona *lPtrNuevo;
    
    
    lPtrCabeza = NULL;
    
    string lNombre;
    int lEdad;
    int lConteo=1;
    int lCantidadDeNodos;
    
    cout<<"Entrar cantidad de nodos = ";
    cin>>lCantidadDeNodos;
    
       while (lConteo <= lCantidadDeNodos)
    {
        lPtrNuevo=new mPersona();
        lPtrNuevo->Siguiente=lPtrCabeza;
        
        cout<<"ingrese el nombre = ";
        cin>>lNombre;
        lPtrNuevo->Nombre=lNombre;
        
        cout<<"ingrese la edad = ";
        cin>>lEdad;
        lPtrNuevo->Edad=lEdad;
        
        lPtrCabeza=lPtrNuevo;
        lConteo++;
    }
    
    mNodos=lPtrCabeza;
    

    struct mPersona *lCopiaDelNodoOriginal = mNodos;
    
    
    while (lCopiaDelNodoOriginal!=NULL)
    {
        
        cout<<"Nombre = "<<lCopiaDelNodoOriginal->Nombre<<endl;
        cout<<"Edad = "<<lCopiaDelNodoOriginal->Edad<<endl;
        
        lCopiaDelNodoOriginal = lCopiaDelNodoOriginal->Siguiente;
        
    }
}


void ReemplazarNombre()
{
    string lNombre,lNombre2;
    
    cout<<"Cual nombre quiere cambiar? = ";
    cin>>lNombre;
    
    cout<<"Cual es el nuevo nombre? = ";
    cin>>lNombre2;

    struct mPersona *lCopiaDelNodoOriginal = mNodos;
    
    struct mPersona *lCopiaDelNodoOriginal2 = mNodos;
    
    while (lCopiaDelNodoOriginal!=NULL)
    {
        if (lCopiaDelNodoOriginal->Nombre == lNombre)
        {
            lCopiaDelNodoOriginal->Nombre=lNombre2;
        }
        
        lCopiaDelNodoOriginal = lCopiaDelNodoOriginal->Siguiente;
    }
    
    while (lCopiaDelNodoOriginal2!=NULL)
    {
        
        cout<<"Nombre = "<<lCopiaDelNodoOriginal2->Nombre<<endl;
        cout<<"Edad = "<<lCopiaDelNodoOriginal2->Edad<<endl;
        
        lCopiaDelNodoOriginal2 = lCopiaDelNodoOriginal2->Siguiente;
        
    }

 
}

void ReemplazarEdad()
{
    int lEdad,lEdadNueva;
    
    cout<<"Cual edad quiere cambiar? = ";
    cin>>lEdad;
    
    cout<<"Cual es la nueva edad? = ";
    cin>>lEdadNueva;
    
    struct mPersona *lCopiaDelNodoOriginal = mNodos;
    
    struct mPersona *lCopiaDelNodoOriginal2 = mNodos;
    
    while (lCopiaDelNodoOriginal!=NULL)
    {
        if (lCopiaDelNodoOriginal->Edad == lEdad)
        {
            lCopiaDelNodoOriginal->Edad=lEdadNueva;
        }
        
        lCopiaDelNodoOriginal = lCopiaDelNodoOriginal->Siguiente;
    }
    
    while (lCopiaDelNodoOriginal2!=NULL)
    {
        
        cout<<"Nombre = "<<lCopiaDelNodoOriginal2->Nombre<<endl;
        cout<<"Edad = "<<lCopiaDelNodoOriginal2->Edad<<endl;
        
        lCopiaDelNodoOriginal2 = lCopiaDelNodoOriginal2->Siguiente;
        
    }
    
    
}


int main(int argc, char** argv) 
{
    lista();
    ReemplazarNombre();
    ReemplazarEdad();
    
    return 0;
}










