/*
 *  A simple counterclockwise bouncing animation 
 *  written for a multiplexed 2x2x2 LED cube
 *  Sam Tang 2013
 */

int columns[] = {9,10,11,12};
int layers[] = {3,2};

void setup () {
  
  for(int i = 0; i < 4; i++) {        
    pinMode(columns[i],OUTPUT); 
  }      
  
  for (int i = 0; i < 2; i++) {
    pinMode(layers[i],OUTPUT);
  }
  
}
  
void loop() {
  
  bounce();
  
}

void bounce() {
  
  int delayBottom = 75;
  int delayTop = 120;
  
  digitalWrite(layers[0],HIGH);
  digitalWrite(columns[0], HIGH);
  delay(delayBottom);
  digitalWrite(layers[0],LOW);
  digitalWrite(layers[1],HIGH);
  delay(delayTop);
  digitalWrite(columns[1],HIGH);
  delay(delayTop);
  digitalWrite(columns[0],LOW);
  delay(delayBottom);
    
  digitalWrite(layers[1],LOW);
  digitalWrite(layers[0],HIGH);
  delay(delayBottom);
  digitalWrite(layers[0],LOW);
  digitalWrite(layers[1],HIGH);
  delay(delayTop);
  digitalWrite(columns[2],HIGH);
  delay(delayTop);
  digitalWrite(columns[1],LOW);
  delay(delayBottom);
  
  digitalWrite(layers[1],LOW);
  digitalWrite(layers[0],HIGH);
  delay(delayBottom);
  digitalWrite(layers[0],LOW);
  digitalWrite(layers[1],HIGH);
  delay(delayTop);
  digitalWrite(columns[3],HIGH);
  delay(delayTop);
  digitalWrite(columns[2],LOW);
  delay(delayBottom);
  
  digitalWrite(layers[1],LOW);
  digitalWrite(layers[0],HIGH);
  delay(delayBottom);
  digitalWrite(layers[0],LOW);
  digitalWrite(layers[1],HIGH);
  delay(delayTop);
  digitalWrite(columns[0],HIGH);
  delay(delayTop);
  digitalWrite(columns[3],LOW);
  delay(delayBottom);
  
  digitalWrite(layers[1],LOW);
  digitalWrite(layers[0],HIGH);
}

