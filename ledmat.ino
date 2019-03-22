#include <MaxMatrix.h>
#define bnrC 8
#define nbrR 8

int DIN_PIN = 7;      // data in pin
int CLK_PIN = 6;      // clock pin
int CS_PIN = 5;       // load (CS) pin
int maxInUse = 2;

MaxMatrix m(DIN, CS, CLK, maxInUse); 

bool HEART[nbrC][nbrR] = {
  B01100110,
  B11111111,
  B11111111,
  B11111111,
  B01111110,
  B00111100,
  B00011000,
  B00000000
  }; 

void setup() {
  pinMode(DIN_PIN, OUTPUT);
  pinMode(CLK_PIN, OUTPUT);
  pinMode(CS_PIN, OUTPUT);

}

void loop() {


for (int i  = 0; i<nbrC ; i++)
{
  for ( int j = 0; j < nbrR; j++)
  {
    if(HEART[i][j] == true)
    {
       
    } 
  }  
}



}
