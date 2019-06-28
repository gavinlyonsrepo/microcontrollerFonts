
//********************** HEADER ***********************
/*
  Name : Arduino File template
  Title : 
  Author: Gavin Lyons
  URL: 
*/

//******************** LIBRARIES ******************

//******************** GLOBALS ********************


//******************** SETUP ************************
void setup() {
  // put your setup code here, to run once:
  
  // Setup serial
  Serial.begin(9600);
  delay(50);
  Serial.println("-----------Comms up------------");
}

//******************* MAIN LOOP *****************
void loop() {
  // put your main code here, to run repeatedly:
Hello_world();
delay(2000)  ;
}

// ********************* FUNCTIONS ************

void Hello_world()
{
  Serial.println("hello World");
}

//******************* EOF *****************