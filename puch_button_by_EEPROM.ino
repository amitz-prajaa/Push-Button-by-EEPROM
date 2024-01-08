#include <EEPROM.h>
storedbuttonstate = 0;
int  buttonstate = 0;
int button = 13 ;
int led1 = 11 ; 

void setup() {


  Serial.begin(9600);
  pinMode (button , INPUT_PULLUP);
  pinMode(led1 , OUTPUT);
  storedbuttonstate = EEPROM.read(0);
  digitalWrite(led1 , storedbuttonstate) ;
  EEPROM.write(0 , storedbuttonstate) ;
  
}


void loop() {
  // put your main code here, to run repeatedly:
      
  int s = digitalRead(button);
  if(s==0){
   
    buttonstate = !buttonstate ;
    storedbuttonstate = !storedbuttonstate ;
    digitalWrite(button , storedbuttonState);
     digitalWrite(led1 ,bstate );
     delay(300);
    
  }
 
  
  Serial.print("Button state : ");
  Serial.println(bstate);
  Serial.println();
}
