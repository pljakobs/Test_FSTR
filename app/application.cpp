#include <SmingCore.h>
#include <stdio.h>

#include "Test_FSTR.h"
#include "classA.h"
#include "classB.h"

classA a;
classB b;

void init(){
	Serial.begin(SERIAL_BAUD_RATE); // 115200 by default
	Serial.systemDebugOutput(true); // Debug output to serial
	FSTR::Stream fs(fileMap["config/pinconfig.json"]);	
	Serial.println(fileMap["config/pinconfig.json"]);

	a.print();

	b.print();
}
