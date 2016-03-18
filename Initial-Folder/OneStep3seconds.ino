// ConstantSpeed.pde
// -*- mode: C++ -*-
//
// Shows how to run AccelStepper in the simplest,
// fixed speed mode with no accelerations
/// \author  Mike McCauley (mikem@airspayce.com)
// Copyright (C) 2009 Mike McCauley
// $Id: ConstantSpeed.pde,v 1.1 2011/01/05 01:51:01 mikem Exp mikem $

#include <AccelStepper.h>

AccelStepper stepper(AccelStepper::FULL2WIRE, 2, 3, 4, 5); // Defaults to AccelStepper::FULL4WIRE (4 pins) on 2, 3, 4, 5

void setup()
{  
   stepper.move(4);
   stepper.setMaxSpeed(800);
   stepper.setSpeed(500);
   Serial.begin(9600);
}

int valuetown = 1;

void loop()
{   
    //Serial.println(stepper.distanceToGo());
    if (stepper.distanceToGo() == 0)
    {
      delay(3000);
      stepper.move(1600); // UMA VOLTA = 1600
      stepper.setMaxSpeed(800);
      stepper.setSpeed(500);
      //stepper.setAcceleration(150);
    }
    stepper.runSpeed();
}
