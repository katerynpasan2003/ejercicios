#include <iostream>
#include <cmath>

using namespace std;

int main (){
	int sum=0,res=0,resta=0,mul=0,div=0,num1=0,num2=0,respuesta=0;
	string binario = "";
	char res2;
	
	
	
	do{
		system("cls");
		cout<<"______________________Programas Basicos___________________"<<endl;
		cout<<"Digite el numero del programa al cual desea acceder"<<endl;
		cout<<"0. Salir	";cout<<"	1.Operaciones Basicas con 2 numeros"<<endl;
		cout<<"2. Determinar si un numero es par o impar	";cout<<"	3.Conversor de medidas"<<endl;
		cout<<"4. Numero o Palabra palindroma	";cout<<"	5.Conversor de numeros arabigos a romanos"<<endl;
		cout<<"6. Conversion de numeros enteros con y sin decimales a letras	";cout<<"	7.Tabla de Multiplicar"<<endl;
		cout<<"8. Todas las tablas de multiplicar	";cout<<"	9. Decimales A Binarios"<<endl;
		cout<<"10. Decimales a Hexagesimales  ";cout<<"	11. Figuras Geometricas"<<endl;
		cout<<"12. Calcular Hipotenusa"<<endl;

		cin>>res;
		switch (res){
			case 1:
				
				do{
					system("cls");
					cout<<"_*1.Operaciones Basicas con 2 numeros*"<<endl;
					cout<<"Ingrese el primer numero"<<endl;
					cin>>num1;
					cout<<"Ingrese el segundo numero"<<endl;
					cin>>num2;
					sum = num1 + num2;
					resta = num1 - num2;
					mul = num1 * num2;
					div = num1 / num2;
					
					cout<<"Suma: "<<sum<<"		Resta:"<<resta<<" 		Division:"<<div<<" 		Multiplicacion:"<<mul<<""<<endl;
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 2:
				
				do{
					system("cls");
					cout<<" *2. Determinar si un nmero es par o impar*"<<endl;
					cout<<"Ingrese el primer numero"<<endl;
					cin>>num1;
					respuesta = num1%2;
					
					if(respuesta == 0){
						cout<<"El numero es Par"<<endl;
					}else{
						if(respuesta !=0){
							cout<<"EL numero es Impar"<<endl;
						}
					}
					
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 3:
				
				do{
					system("cls");
					cout<<" *3. Conversiones de medidas *"<<endl;
					cout<<"Que conversion desea hacer?"<<endl;
					cout<<"1.Kilometros			2.Pulgadas	"<<endl;
					cin>>res;
					
					switch(res){
						case 1:
							
						 	int kilometros;
						 	int millas, yardas, pies;
						    printf("Ingresa el numero de kilometros que deseas convertir: ");
						     scanf("%d", &kilometros);
						     millas = kilometros/ 1.60;
						     kilometros -= millas*1.60;
						     yardas = kilometros/ 1094;
						     kilometros -= yardas*1094;
						     pies = kilometros/ 3281;
						     kilometros -= pies*3281;
						     printf("%d La Cantidad ingresada de kilometros equivale a: ");
						     printf("\n%d millas", millas);
						     printf("\n%d yardas", yardas);
						     printf("\n%d piest", pies);
						     printf("\n%d kilometros", kilometros);
							
							
						break;
						case 2:
							 int pulgadas;
						 	
						    printf("Ingresa el numero de pulgadas que deseas convertir: ");
						     scanf("%d", &pulgadas);
						     millas = pulgadas/ 63360;
						     pulgadas = pulgadas - millas*63360;
						     yardas = pulgadas/ 36;
						     pulgadas = pulgadas - yardas*36;
						     pies = pulgadas/ 12;
						     pulgadas = pulgadas - pies*12;
						     printf("%d La Cantidad ingresada de pulgadas equivale a: ");
						     printf("\n%d millas", millas);
						     printf("\n%d yardas", yardas);
						     printf("\n%d pies", pies);
						     printf("\n%d pulgadas", pulgadas);

						break;
						
					}
				
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 4:
				
				do{
					system("cls");
					cout<<"4. Palabras Palindromas"<<endl;
					string input;

					cout << "Ingrese la palabra que desea analizar ";
					cin >> input;
					
					if (input == string(input.rbegin(), input.rend())) {
					    cout << input << " Es Palindroma";
					}

					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 5:
				
				do{
					system("cls");
					cout<<" 5. Numeros Arabigos a Romano"<<endl;
					
					int numero,unidades,decenas,centenas,millares;
		
					cout << "\nIngresa un numero entre [1-3999] para convertirlo a romano: ";
					cin >> numero;
					
					unidades = numero%10; numero /= 10;
					decenas = numero%10; numero /= 10;
					centenas = numero%10; numero /= 10;
					millares = numero%10; numero /= 10;
					
					switch(millares){
						case 1: cout << "M"; break;
						case 2: cout << "MM"; break;
						case 3: cout << "MMM"; break;
					}
					
					switch(centenas){
						case 1: cout << "C"; break;
						case 2: cout << "CC"; break;
						case 3: cout << "CCC"; break;
						case 4: cout << "CD"; break;
						case 5: cout << "D"; break;
						case 6: cout << "DC"; break;
						case 7: cout << "DCC"; break;
						case 8: cout << "DCCC"; break;
						case 9: cout << "CM"; break;
					}
					
					switch(decenas){
						case 1: cout << "X"; break;
						case 2: cout << "XX"; break;
						case 3: cout << "XXX"; break;
						case 4: cout << "XL"; break;
						case 5: cout << "L"; break;
						case 6: cout << "LX"; break;
						case 7: cout << "LXX"; break;
						case 8: cout << "LXXX"; break;
						case 9: cout << "XC"; break;
					}
					
					switch(unidades){
						case 1: cout << "I"; break;
						case 2: cout << "II"; break;
						case 3: cout << "III"; break;
						case 4: cout << "IV"; break;
						case 5: cout << "V"; break;
						case 6: cout << "VI"; break;
						case 7: cout << "VII"; break;
						case 8: cout << "VIII"; break;
						case 9: cout << "IX"; break;
					}
					
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			
				case 6:
				
				do{
					system("cls");
					cout<<" 6. Convertir Numeros a Letras "<<endl;
					string input;

					double valor;
					 int miles,cientos,unidades,decimales;
					
					 char numeros[100][20] = 
					 {
					  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
					  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
					  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
					  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
					  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
					  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
					  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
					  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
					  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
					  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
					 };
					
					 char centenas[10][20] = 
					 {
					  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
					 };
					 
					 std::cout << "Introduzca numero a transcribir: ";
					 std::cin >> valor;
					
					 miles = ((int)valor)/1000;
					 cientos = (((int)valor)%1000)/100;
					 unidades = ((int)valor)%100;
					 decimales = ((int) (valor*100.0))%100 ;
					
					 if (miles)
					  std::cout << numeros[miles] << " mil ";
					 
					 if (cientos)
					  std::cout << centenas[cientos] << " ";
					 
					 if (unidades) 
					  std::cout << numeros[unidades];
					 
					 if (decimales)
					 {
					  if(miles || cientos || unidades)
					  {
					   std::cout << " con ";
					  }
					 
					  std::cout << numeros[decimales] << " centimos.";
					 }
					

					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;	
			
			
			case 7:
				
				do{
					system("cls");
					cout<<" 7. Una Tabla de multiplicar "<<endl;

					cout << "Ingrese un numero para calcular su tabla de mutiplicar";
					cin >> num1;
					
					for(int i =0;i<=12;i++){
						cout<<num1<<" x "<<i<<" = "<<num1*i<<endl;
					}
					

					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 8:
				
				do{
					system("cls");
					cout<<" 8. Todas las tablas de multiplicar "<<endl;

					
					for(int ii =0;ii<=12;ii++){
						
						for(int i =0;i<=12;i++){
						cout<<ii<<" x "<<i<<" = "<<num1*i<<endl;
						
						}	
					}
					
					

					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			
			case 9:
				
				do{
					system("cls");
					cout<<" 9. Decimales a binarios "<<endl;

					cout<<"Ingrese un numero entero positivo"<<endl;
					cin>>num1;
					
					if(num1 > 0){
						while(num1 > 0){
							if(num1%2 == 0){
								binario += "0";
							}else{
								binario += "1";
							}
							num1 = (int) num1/2;
						}	
					}else if (num1 == 0){
						binario = "0";
					}else{
						binario = "Solo numeros decimales positivos";
					}
					
					cout<<"El resultado de la conversion es: "<<binario<<endl;
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			
			case 10:
				
				do{
					system("cls");
					cout<<" 10. Decimal a Hexadecimal "<<endl;

						cout << "Entra un numero: ";

						cin >> num1;
					
						cout.unsetf(ios::dec);
					
						cout.setf(ios::hex | ios::showbase);
					
						cout << "En hexadecimal: " << num1;
					
						cout.unsetf(ios::hex);
						
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
		
			case 11:
				
				do{
					system("cls");
					cout<<" 11. Figuras Geometricas"<<endl;

						cout << "Entra un numero: ";

						cin >> num1;
					
						cout.unsetf(ios::dec);
					
						cout.setf(ios::hex | ios::showbase);
					
						cout << "En hexadecimal: " << num1;
					
						cout.unsetf(ios::hex);
						
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;
			
			case 12:
				
				do{
					system("cls");
					cout<<" 12. Calcular hipotenusa"<<endl;

						cout<<"Ingrese X"<<endl;
						cin>>num1;
						cout<<"Ingrese Y"<<endl;
						cin>>num2;
						
						respuesta = sqrt(pow(num1,2)+pow(num2,2));
						
						cout<<"La hipotenusa es: "<<respuesta<<endl;
						
					cout<<"Desea realizar otra operacion? S/N"<<endl;
					cin>>res2;
				}while(res2 == 'S' || res2 == 's');
			break;

		
		
		
		
		
		
			
		}
			
		
		
		
		
		
	}while(res != 0 || res != 0);
	
}

