#include <iostream>
using namespace std;

struct Contacto{
    string nombre;
    string telefono;
    string email;
};
const int contactos_maximos = 100;
Contacto agenda[contactos_maximos];
int totalContactos = 0;

void mostrarAgenda(Contacto agenda[], int n){
    cout<<"Agenda de contactos \n";
    if (n==0){
        cout<<"No hay contactos\n";
        return;
    }
    for(int i = 0; i < n; i++){
        cout<<"Nombre:  "<<agenda[i].nombre<<endl;
        cout<<"Telefono:  "<<agenda[i].telefono<<endl;
        cout<<"Email:  "<<agenda[i].email<<endl;

    }
}
int agregarContacto(Contacto agenda[], int n){
    if(n >= contactos_maximos){
        cout<<"Agenda llena\n";
        return n;
    }
    Contacto nuevo_contacto;
    cout<<"Ingrese nombre:";
    //el ws ignora el salto de linea para que no genere error en la entrada de datos
    getline(cin>>ws,nuevo_contacto.nombre);
    cout<<"Ingrese telefono:";
    getline(cin,nuevo_contacto.telefono);
    cout<<"Ingrese Email:";
    getline(cin,nuevo_contacto.email);

    agenda[n] = nuevo_contacto;
    cout<<"Contacto creado\n";
    return n+1;
}

int buscarContacto(Contacto agenda[], int n, string nombre){
    for(int i = 0; i < n; i++){
        if(agenda[i].nombre == nombre){
            return i;
        }
    }
    return -1;
}

void mostrarEncontrado(Contacto agenda[], int n){
    string nombre;
    cout<<"Nombre del contacto que desea mostrar:";
    getline(cin>>ws, nombre);

    int pos = buscarContacto(agenda, n, nombre);

    if (pos == -1){
        cout<<"No se encuentra contacto\n";
        return;
    }
    cout<<"Contacto en la posicion"<<pos<<endl;
    cout<<"nombre"<<agenda[pos].nombre<<endl;
}

void mostrarMenu(){
    cout<<"Selesccion"<<endl;
    cout<<"1 mostrar agenda"<<endl;
    cout<<"2 agregar"<<endl;
    cout<<"3 mostrar"<<endl;

}

void ejecutarAgenda(){
    int opc;
    do{
        mostrarMenu();
        cin>>opc;

        switch (opc)
        {
        case 1:
           mostrarAgenda(agenda, totalContactos);
            break;
            case 2:
            totalContactos = agregarContacto(agenda, totalContactos);
            break;
            case 3:
            mostrarEncontrado(agenda, totalContactos);
            break;
        
        default:
            break;
        }
    }while(opc != 4);
}

int main(){
    ejecutarAgenda()
    return 0;

}