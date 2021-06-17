void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  
//Serial.println("!AIVDM,1,1,,A,4000001v0oe4C00000000000050l,0*41");
Serial.println("!AIVDO,1,1,,A,100000?0000000000000001f050l,0*24");
delay(5000);
}
