#include <TM1637.h>

int clk=2;
int dio=3;
TM1637 tm(clk,dio);
void setup() {
    tm.init();
    tm.set(2);
}

void loop() {
    //tm.display(position);
    tm.display(0,1);
    tm.display(1,9);
    tm.point(1);
    tm.display(2,0);
    tm.display(3,3);
    
}
