#ifndef USER_APPLICATIONS_H
#define USER_APPLICATIONS_H

#include "Variables_def.h"


void Generator(ChannelTimerVar *var );
void fillStructDefValues(ChannelTimerVar *var );
void copyVar2toVar1(ChannelTimerVar *var1, ChannelTimerVar *var2);
unsigned int makeValueInRange(unsigned int const CurrentValue, int const varValue, unsigned int const  minValue, unsigned int const  maxValue);
unsigned int setValueInRange(unsigned int const CurrentValue, int const newValue,  unsigned int const  minValue, unsigned int const  maxValue);

void getAvarageVoltage(RingBuffStruct *Var);
void writeToRingBuffer(RingBuffStruct *Var, float Voltage);
//void ResistorLedStatusChecker(ResStatusStruct *Var, float PreLoadVoltage, float StepLoadVoltage, float LoadVoltage);

float getLoadVoltage();
float getPreLoadVoltage();
float getStepLoadVoltage();
int getBoardID(); 

void CLIWeclomeMassage(void);

void printStatusToSerial(ChannelTimerVar const *var, int const Nruns, float const Vload);
void printHelptoSerial (void);
void printVloadToSerial(float const Vload);


#endif
