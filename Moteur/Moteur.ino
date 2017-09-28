int enableA = 1;
int pinA1 = 2;
int pinA2 = 3;
int pinB2 = 4;
int pinB1 = 5;
int enableB = 6;

int IR1 = 8;
int IR2 = 9;
int IR3 = 10;
int IR4 = 11;

boolean run = true;

void setup() {
  pinMode(enableA, OUTPUT);
  pinMode(pinA1, OUTPUT);
  pinMode(pinA2, OUTPUT);

  pinMode(enableB, OUTPUT);
  pinMode(pinB1, OUTPUT);
  pinMode(pinB2, OUTPUT);
}

void loop() {
  if (run) {
    delay(2000);
    enableMotors();
    
    //Go forward
    forward(2000);
    //Go backward
    backward(2000);
    //Turn left
    turnLeft(4000);
    coast(2000);
    //Turn right
    turnRight(4000);
    coast(2000);
    //This stops the loop
    run = false; 
    

    
  }
}
//Define high-level H-bridge commands
 
void enableMotors()
{
 motorAOn();
 motorBOn();
}
 
void disableMotors()
{
 motorAOff();
 motorBOff();
}
 
void forward(int time)
{
 motorAForward();
 motorBForward();
 delay(time);
}
 
void backward(int time)
{
 motorABackward();
 motorBBackward();
 delay(time);
}
 
void turnLeft(int time)
{
 motorABackward();
 motorBForward();
 delay(time);
}
 
void turnRight(int time)
{
 motorAForward();
 motorBBackward();
 delay(time);
}
 
void coast(int time)
{
 motorACoast();
 motorBCoast();
 delay(time);
}
 
void brake(int time)
{
 motorABrake();
 motorBBrake();
 delay(time);
}
//Define low-level H-bridge commands
 
//enable motors
void motorAOn()
{
 digitalWrite(enableA, HIGH);
}
 
void motorBOn()
{
 digitalWrite(enableB, HIGH);
}
 
 //disable motors
void motorAOff()
{
 digitalWrite(enableB, LOW);
}
 
void motorBOff()
{
 digitalWrite(enableA, LOW);
}
 
 //motor A controls
void motorAForward()
{
 digitalWrite(pinA1, HIGH);
 digitalWrite(pinA2, LOW);
}
 
void motorABackward()
{
 digitalWrite(pinA1, LOW);
 digitalWrite(pinA2, HIGH);
}
 
//motor B controls
void motorBForward()
{
 digitalWrite(pinB1, HIGH);
 digitalWrite(pinB2, LOW);
}
 
void motorBBackward()
{
 digitalWrite(pinB1, LOW);
 digitalWrite(pinB2, HIGH);
}
 
//coasting and braking
void motorACoast()
{
 digitalWrite(pinA1, LOW);
 digitalWrite(pinA2, LOW);
}
 
void motorABrake()
{
 digitalWrite(pinA1, HIGH);
 digitalWrite(pinA2, HIGH);
}
 
void motorBCoast()
{
 digitalWrite(pinB1, LOW);
 digitalWrite(pinB2, LOW);
}
 
void motorBBrake()
{
 digitalWrite(pinB1, HIGH);
 digitalWrite(pinB2, HIGH);
}
