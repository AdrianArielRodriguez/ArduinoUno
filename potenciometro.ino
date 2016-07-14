int menor=1025,mayor=0;
void setup() // Se ejecuta cada vez que el Arduino se inicia
{
Serial.begin(9600); //Inicia comunicación serial
}

void loop() // Esta funcion se mantiene ejecutando
{ // cuando este energizado el Arduino
//Guardar en una variable entera el valor del potenciómetro 0 a 1024
int valor= analogRead(0);
//Imprime en la consola serial el valor de la variable
if (menor > valor) menor=valor;
if (mayor < valor) mayor=valor;
Serial.print("valor: ");
Serial.print(valor);
Serial.print(" menor: ");
Serial.print(menor);
Serial.print(" mayor: ");
Serial.println(mayor);

//Retardo para la visualización de datos en la consola
delay(200);


}
