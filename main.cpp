#include "LinkedListGen.h" 



int main(){
    /*
    * Generation Test 1.
    *   Map out the Nodes using the Debugger on paper.
    *   State which 2 nodes creates and infinite loop.
    * 
    *   Do the same for tests 2, 3, and 4
    * 
    *   To start the debugger, press "add breakpoint" on line 21,
    */
    
    Gen test1(191, 0);
    Gen test2(22575, 4);
    Gen test3(0, 100);
    Gen test4(0, 423456);

    Node* start = test1.Start();

    // Test 2, Find the flag that is true.
    start = test2.Start();

    // Test 3, make a table for every node and what it is connected to.
    start = test3.Start();
    
    // Test 4, If there is a loop state what nodes it is looping in.
    start = test4.Start();
    

}
