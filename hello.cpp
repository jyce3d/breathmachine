#include<iostream>
#include "breathmachine.h"
int main() {
    CBreathMachine *btm = new CBreathMachine();
    try {
        btm->Expiration();
        btm->Insp();
        btm->Recalib();
     
        //btm->Insp();
    } catch (const char *e) {
        std::cout << e << std::endl;
    }
    std::cout << "Finished !" << std::endl;
    //NPPCPC c'est pas du java!
    delete btm;

    return 0;
}