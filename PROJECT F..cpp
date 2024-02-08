#include<iostream>
#include<conio.h>

using namespace std;

int DiaMasProductivo(int num, int num2){    //Funcion que devuelve el mayor valor de las partidas ganadas(1ra fila)
    int mayor =num;   // Se iguala la variable mayor al primer numero que entra en la fila
	if(num2>mayor){   //Y si el segundo numero que entra es mayor al anterior ,
		mayor=num2;   //la variable mayor toma el valor de dicho numero
	}
	return mayor;
}

int DiaMenosProductivo(int num, int num2){  //Funcion que devuelve el mayor valor de las partidas perdidas(2da fila)
    int mayor =num;  
	if(num2>mayor){   
		mayor=num2;  
	}
	return mayor;
}


int main(){
	int cant_partic,numero[3][8],filas=2,columnas=7; //Declarando las variables
	int mayor=0;
	int opc,SioNo;
	int totalwin=0;
	int promediowin=0;
	int totallose=0;
	int promediolose=0;
	
    cout<<"..........................BIENVENIDO AL CENTRO DE ESTADISTICA DEL X TORNEO NACIONAL DE DoTa2............................"<<endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"A continuacion le pediremos la introduccion de la cantidad de jugadores acerca de los que desea saber: "<<endl;
    cout<<"\n";

	cout<<"Digite la cantidad de jugadores del torneo de videojuegos: ";//se le pide al usuario que introduzca la cantidad de partic. del torneo
	cin>>cant_partic;
	
	
	for(int a=0;a<cant_partic;a++) //Ciclo que se repetiras mientras que a sea menor que la cantidad de jugadores
	{

	for(int i=1;i<=filas;i++) // Ciclo para que el usuario introduzca las partidas del jugador
	{
		if(i==1){                                              //Si se esta rellenando la fila 1 se le pedira al usuario solo las partidas ganadas
	  cout<<"Introduzca la cantidad de partidas ganadas del jugador: \n";
     }else{                                                     //sino se le pediran las partidas perdidas
     	cout<<"Introduzca la cantidad de partidas perdidas del jugador: \n"; 
	 }
	
	  for(int j=1;j<=columnas;j++)        //el usuario rellenara primero todas las columnas que corresponde con los dias por cada una de las filas
	  {
	  	cout<<"[Dia "<<j<<" ]: ";   //Se muestra la palabra Dia con el valor de la iteracion de J en ese momento y se pide introducir el valor correspondiente
	  	cin>>numero[i][j];	       
	  }
	  cout<<"\n";
	  
    }
    
	for(int i=1;i<=filas;i++){  //Se muestra la matriz antes rellenada por el usuario mediante un bucle anidado
       if(i==1){
       	cout<<"partidas ganadas:  "; // Se imprimira en consola partidas g o p segun la fila e la que se encuentre la iteracion
	   }else{
	   	cout<<"partidas perdidas: ";
	   }

	  for(int j=1;j<=columnas;j++){  //Se mustran en columnas los valores de la fila 1 y la 2
      	cout<<"    "<<numero[i][j];
      	cout<<"| ";
	  }
	  cout<<"\n";
	  cout<<"\n";
	}
    cout<<"\n";

    cout<<"Desea conocer detalles sobre este jugador?"<<endl;
    cout<<"1- Si \n";
    cout<<"0- No \n";
    cout<<"\n";
    
	cin>>SioNo;   //Se introduce 0 o 1 para dar respuesta negativa o positiva respectivamente
    
	if(SioNo==1){  //Si se responde positivamente el usuario accedera a un menu con opciones
	 
	 cout<<"....Opciones: \n";
	 cout<<"1- Dia que mas partidas gano \n";
                    cout<<"2- Dia que mas partidas perdio \n";
                    cout<<"3- Cantidad total de partidas ganadas \n";
                    cout<<"4- Promedio de partidas ganadas en la semana \n";
                    cout<<"5- Cantidad total de partidas perdidas \n";
	cout<<"6- Promedio de partidas perdidas en la semana \n";
	cout<<"7- Salir \n";
	
	
               for(opc=1;opc!=7;){
	cin>>opc;  //El usuario debe digitar la opcion deseada
	switch(opc){  //Evalua los casos y se ejecuta el correspondiente a la opcion seleccionada
   
    case 1: 
	for(int x=1; x<=7; x++){          //Ciclo usado para comparar los valores de la funcion DiaMasProductivo y se muestre en consola el mayor valor de la fila 1 (PG)
   	mayor=DiaMasProductivo(mayor,numero[1][x]);
   }
   
    for(int x=1; x<=7; x++){
    	if(numero[1][x]==mayor){
    	cout<<"El dia que mas partidas ganadas tuvo fue el dia ["<<x<<"]: " <<mayor<< " partidas\n";	
		}
	}   
      break;
   
    case 2:
     
	 for(int x=1; x<=7; x++){   //Ciclo usado para comparar los valores de la funcion DiaMenosProductivo y se muestre en consola el mayor valor de la fila 2 (PP)
   	mayor=DiaMenosProductivo(mayor,numero[2][x]);
   }
   
    for(int x=1; x<=7; x++){   
    	if(numero[2][x]==mayor){ 
    	cout<<"El dia que mas partidas perdio fue el dia ["<<x<<"]: " <<mayor<< " partidas\n";	
		}
	}   
     break;
    
    case 3: 
       for(int j=1;j<=7;j++){
     
        totalwin += numero[1][j];		
   
   }
   cout<<"El total de partidas ganadas en la semana fue: "<<totalwin<<endl;	

    break;
    
    case 4:
    
     promediowin+=totalwin/7;	
   cout<<"El promedio de partidas que gano en la semana fue: "<<promediowin<<endl;
   break;
   
   case 5:
     for(int i=2;i<=7;i++){
     
        totallose += numero[2][i];		
   
   }
   cout<<"El total de partidas perdidas en la semana fue: "<<totallose<<endl;	

    break;
    
    case 6:
       promediolose+=totallose/7;	
   cout<<"El promedio de partidas que perdio en la semana fue: "<<promediolose<<endl;
   break;
     
     case 7:
     break;
   }
  cout<<"\n";
  cout<<"\n";
 }
      
 }
 cout<<"\n";
 cout<<"\n";
   
}

   
     cout<<"..........GRACIAS POR USAR NUESTRA PLATAFORMA..........  :)\n"; 
     cout<<"\n";
     cout<<"\n";
    
	getch();  //funcion que se encuentra en la libreria conio.h usada para usar el ejecutable de nuestro programa directamente 
	return 0;
 }
