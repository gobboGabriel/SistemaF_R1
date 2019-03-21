#define ledvd 7
#define ledvm 8

void setup() {
  // put your setup code here, to run once:
  // essa aula e um saco
pinMode (ledvm, OUTPUT);
pinMode (ledvd, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite (ledvd, HIGH);
  digitalWrite (ledvm, LOW);
delay (2000);
    
  digitalWrite (ledvd, LOW);
  digitalWrite (ledvm, HIGH);
delay (2000);

}
