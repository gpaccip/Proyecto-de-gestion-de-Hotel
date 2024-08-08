//gestion.cpp 
#include "estructura.h"
#include "gestion.h"
#include "mantenimiento.h"  // nHabitaciones le pertenece a esta libreria
#include "panel.h" //mostrarPanel()
#include <iostream>
#include <string>


using namespace std;

void gestion(){
    int opcion;
    do{
        system("cls");
        cout<<"\t\t\tGESTION\t\t\t"<<endl;
        cout<<"1. Registrar usuario\n";
        cout<<"2. Reservar habitacion\n";
        cout<<"0. Volver al menu principal\n";
        cout<<"Opcion: ";
        cin>>opcion;

        swich(opcion){
            case 1:
                registrar_usuario(usuario);
                break;
            case 2:
                reservarHabitacion();
                break;
            case 0:
                break;
            default:
                cout<<"Opcion incorrecta\n";
        }
    }while(opcion !=0);
}

/*
//Usa arreglos de mantenimiento.h
void visualizarCategorias(){
    cout<<"=============VISUALIZAR=============="<<endl;
    for(int i=0; i<nCategorias; i++){
        cout<<"Categoria: "<<CATEGORIA[i]<<"-Precio.S/"<<PRECIO[i]<<endl;
    }
    cout<<"======================================"<<endl;
    cout<<"presione enter para continuar..";
    cin.ignore();
    cin.get();
}
//Codigo de las funciones 
void ingresarDatos_usuario(USUARIO& usuario){
    cout<<"Nombre: ";
    cin.ignore();
    getline(cin,usuario.Nombre); //Desde la entrada va a leer el nombre completo
    cout<<"DNI: ";
    cin.ignore();
    getline(cin,usuario.DNI);
    cout<<"Edad: ";
    cin>>usuario.edad;
    usuario.num_Habitacion=-1;
}

void registar_usuario(USUARIO& usuario){
    ingresarDatos_usuario(usuario);
    usuarios.push_back(usuario);
}

//Buscar al usuario por el DNI
USUARIO* buscar_usuarioPorDNI(const std::string&DNI){
    for(int i=0; i<TotalUsuarios;i++){
        if(usuarios[i].DNI==DNI){
            return &usuarios[i];
        }
    }
    return nullptr;
}

void seleccionarHabitacion(int piso){
    if(!(piso>=1 && piso<=nPisos)){
        cout<<"Piso invalido"<<endl;
        return;
    }

    cout<<"Habitaciones disponibles en el piso"<< piso <<":\n"
    for(int j=0;j<PISO[piso-1].nHabitaciones;j++){
        if(ocupadas[piso-1][j]==0){
            cout<<"Habitacion #"<< (j+1)<< "";
        }
    }
    cout<<endl;

    int num_Habitacion;
    cout<<"Ingrese el numero de la habitacion: ";
    cin>>num_Habitacion;

//si es mayor que el numero de habitaciones y ocupar dicho valor en el vector
    if(!(num_Habitacion1>= 1 && num_Habitacion <= PISO[piso-1].nHabitaciones || ocupados[piso-1][num_Habitacion-1]==1)){
        cout<<"Habitacion invalida"<<endl;
        return;
    }

    //ocupar habitacion
    ocupados[piso-1][num_Habitacion-1]=1;
}
//Reservar habitacione
void reservarHabitacion(){
    system("cls");
    string DNI; 
    cout<<"Ingrese su DNI: ";
    cin>>DNI;

    USUARIO* usuario = buscar_usuarioPorDNI(DNI);

    if(!usuario==nullptr){
        cout<<"Usuario no encontrado"<<endl;
    }
                   
    if(usuario->num_Habitacion!=-1){
        cout<<"Usted ya tiene una habitacion reservada"<<endl;
        return;
    }  
//funcion de panel.h
    mostrarPanel();

    int piso;
    cout<<"piso: ";
    cin>>piso;
    if(!(piso>=1 && piso<=nPisos)){
        cout<<"Piso invalido"<<endl;
        return;
    }   

    seleccionarHabitacion(piso);

    int num_Habitacion;

    cout<<"ingrese el numero de la habitacion: ";
    cin>>num_Habitacion;
    //combinar piso y numero de habitacion
    usuario->num_Habitacion=piso*100+num_Habitacion; 
    cout<<"Habitacion reservada con exito\t"<<"H"<<piso<<num_Habitacion<<endl;
}

*/