/* Francisco Javier Merchán Macías */
/* Semáforo en Arduino UNO         */

const int APAGADO = LOW;
const int ENCENDIDO = HIGH;
const int K1=8; //Rojo
const int K2=9; //Naraja
const int K3=10; //Verde
int TIEMPOENCENDIDO = 5000;

void setup() {
  //Configuramos los pines de los led como OUTPUT y los apagamos.
  pinMode(K1,OUTPUT);
  pinMode(K2,OUTPUT);
  pinMode(K3,OUTPUT);
  
  digitalWrite(K1,APAGADO);
  digitalWrite(K2,APAGADO);
  digitalWrite(K3,APAGADO);
}

void loop() {
  EncenderRojo();
  EncenderVerde();
  EncenderAmarillo();

}

void EncenderRojo(){
  digitalWrite(K1,ENCENDIDO);
  digitalWrite(K2,APAGADO);
  digitalWrite(K3,APAGADO);
  delay(TIEMPOENCENDIDO);
  }
void EncenderAmarillo(){
  digitalWrite(K1,APAGADO);
  digitalWrite(K2,ENCENDIDO);
  digitalWrite(K3,APAGADO);
  delay(TIEMPOENCENDIDO/3);
  }
void EncenderVerde(){
  digitalWrite(K1,APAGADO);
  digitalWrite(K2,APAGADO);
  digitalWrite(K3,ENCENDIDO);
  delay(TIEMPOENCENDIDO);
  }
