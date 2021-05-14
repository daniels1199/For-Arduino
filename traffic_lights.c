/*****************************
**	PROGRAMA BASÍCO PARA 	  **
**		   ARDUINO			      **
**      					          **
**   Por Daniel Soares.     **
**							            **
******************************/

//Este programa tem como finalidsde a de simular um semáforo
//usando as portas digitais do Arduino. 

//Definição das constantes e suas respectivas portas.
#define LED_RED 7
#define LED_YELLOW 6
#define LED_GREEN 5


//Função responsável pela ativação luz vermelha.
void onRed(int t){
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, LOW);
  delay(t*1000);
}

//Função responsável pela ativação luz amarela.
void onYellow(int t){
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, HIGH);
  digitalWrite(LED_GREEN, LOW);
  delay(t*1000);
}

//Função responsável pela ativação da luz verde.
void onGreen(int t){
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, HIGH);
  delay(t*1000);
}
//Função de configuração do programa.
void setup(){ 
  pinMode(LED_RED,OUTPUT);  
  pinMode(LED_YELLOW,OUTPUT);
  pinMode(LED_GREEN,OUTPUT);
}
//Função de laço do programa.
void loop(){
  	onRed(7);
  	onGreen(10);
  	onYellow(3);
}
