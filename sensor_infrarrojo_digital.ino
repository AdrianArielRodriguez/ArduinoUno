/*Lectura serial de una entrada digital, de tres sensores infrarrojos: izquierdo medio derecho*/
int sen_izq=8;
int sen_med=9; 
int sen_der=10;

void setup(){                                     // Se ejecuta cada vez que el Arduino se inicia
    pinMode(sen_izq,INPUT);
    pinMode(sen_med,INPUT);
    pinMode(sen_der,INPUT);                            //Configurar el sensor como una entrada
    Serial.begin(9600);                            //Inicia comunicación serial
}
                                             
void loop(){                                     // Esta funcion se mantiene ejecutando
                                                //Guardar en una variable entera el valor del boton 0 ó 1
int izq = digitalRead(sen_izq);
int med = digitalRead(sen_med);
int der = digitalRead(sen_der);
                                                //Condicional para saber estado del pulsador
if (izq==1){                                                 //Pulsado
Serial.println("Negro izq");                       //Imprime en la consola serial
}                                                 // "Pulsado"
else{                                             //No esta pulsado
Serial.println("        Blanco izq");                   //Imprime en la consola serial
}
if (der==1){                                                 //Pulsado
Serial.println("Negro der");                       //Imprime en la consola serial
}                                                 // "Pulsado"
else{                                             //No esta pulsado
Serial.println("        Blanco der");                   //Imprime en la consola serial
}
if (med==1){                                                 //Pulsado
Serial.println("Negro med");                       //Imprime en la consola serial
}                                                 // "Pulsado"
else{                                             //No esta pulsado
Serial.println("        Blanco med");                   //Imprime en la consola serial
}
delay(500);                                     //Retardo para la visualización de datos en la consola
}
