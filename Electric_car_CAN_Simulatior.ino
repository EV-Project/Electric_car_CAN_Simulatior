#define controller1Pin A0
#define controller2Pin A1
#define controller3Pin A2
#define controller4Pin A3

/*
#define wheel1Pin A4
#define wheel2Pin A5
#define wheel3Pin A6
#define wheel4Pin A7

#define accelerationPin A8
#define steeringPin A9
#define brakingPin A10
#define chargeControllerPin A11
#define powerManagmentPin A12

*/
//Variables to store relavent values

  int controller1 = 0;
  int controller2 = 0;
  int controller3 = 0;
  int controller4 = 0;

  int wheel1 = 0;
  int wheel2 = 0;
  int wheel3 = 0;
  int wheel4 = 0;

  int acceleration = 0;
  int steering = 0;
  int braking = 0;
  int chargController = 0;
  int powerManagment  = 0;
  
  

void setup() {
//Setting pinModes
  pinMode(controller1Pin, INPUT);
  pinMode(controller2Pin, INPUT);
  pinMode(controller3Pin, INPUT);
  pinMode(controller4Pin, INPUT);

 /* 
  pinMode(wheel1Pin, INPUT);
  pinMode(wheel2Pin, INPUT);
  pinMode(wheel3Pin, INPUT);
  pinMode(wheel4Pin, INPUT);
  
  pinMode(accelerationPin, INPUT);
  pinMode(steeringPin, INPUT);
  pinMode(brakingPin, INPUT);
  pinMode(chargeControllerPin, INPUT);
  pinMode(powerManagmentPin, INPUT);
*/
// Start serial monitor
  Serial.begin(9600);

}

void loop() {
//Reading the sensor values using analogRead()

  controller1 = analogRead(controller1Pin);
  controller2 = analogRead(controller2Pin);
  controller3 = analogRead(controller3Pin);
  controller4 = analogRead(controller4Pin);
/*
  wheel1 = analogRead(wheel1Pin);
  wheel2 = analogRead(wheel2Pin);
  wheel3 = analogRead(wheel3Pin);
  wheel4 = analogRead(wheel4Pin);

  acceleration = analogRead(accelerationPin);
  steering = analogRead(steeringPin);
  braking = analogRead(brakingPin);
  chargController = analogRead(chargeControllerPin);
  powerManagment = analogRead(powerManagmentPin);
*/
  Serial.print("controller 1 = ");
  Serial.print(controller1,DEC);
  Serial.println();
  
}




