//Leidiane Soares de Souza turma B



#define LedVermelho 6 
#define LedBranco 11
#define LedAmarelo 10
#define LedVerde 9
#define LedLaranja 5
#define LedAzul 3
#define sensorTemperatura  A0//ler meu sensor e atribuir a entrada analogica
int valor=0;// variavel para iniciar o valor do meu sensor
int valorLed=0;// variavel que vai iniciar em 0 e irá mudando conforme a função de intervalo map


void setup()
{
 pinMode(sensorTemperatura,INPUT);// configura o pino como entrada
 pinMode(LedVermelho, OUTPUT); // configura pino como saída
 pinMode(LedBranco, OUTPUT); // configura pino como saída
 pinMode(LedAmarelo, OUTPUT); // configura pino como saída
 pinMode(LedVerde, OUTPUT); // configura pino como saída
 pinMode(LedLaranja, OUTPUT); // configura pino como saída
 pinMode(LedAzul, OUTPUT); // configura pino como saída
 Serial.begin(9600);// taxa de bits por segundo-960, inicia a porta serial para que eu possa acompanhar no console 
}


void loop()
{ 
 
  valor = analogRead(sensorTemperatura);// leitura do sensor de temperatura
  
  //Serial.println(valorLed);// imprimir no console os valores de entrada do sensor de temperatura ir alterando ele vai de 0 a 255 valor led
  valorLed = map((valor-20)*3.04,0,1023,0,255);// transformando a escala do sensor para celsius ele vai de 20 a 358
  Serial.println(valor);
 
  // ascendendo na sequência 
  analogWrite(LedVermelho,valorLed); 
  analogWrite(LedBranco, valorLed);
  analogWrite(LedAmarelo,valorLed); 
  analogWrite(LedVerde, valorLed);
  analogWrite(LedLaranja,valorLed );
  analogWrite(LedAzul, valorLed);
  
 

}














