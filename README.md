# StepperMotorLilLib
AccelStepper extension library for better control

## O que já descobri
1. Motor Stepper 0.9deg/step
  1 grau = (1/0.9) * 4
  x graus = (x/0.9) * 4

  * [+] [-]
  * [-] [-]
  * [+] [+]
  * [-] [+]

2. Utilizar o Serial coloca um delay

3. Construtor:
  1. AccelStepper stepper(AccelStepper::FULL2WIRE, 2, 3, 4, 5);
    * Controller -> Arduino
      * 4 -> 2
      * 3 -> 3
      * 2 -> 4
      * 1 -> 5
    * Stepper -> motor
      * A -> vermelho
      * B -> azul
      * C -> preto
      * D -> verde
    * Power
      * 12v
      * GND // tem que estar ligado ao arduino
      * GND
      * 5v // vem do arduino
