#include "breathinsp.h"
#include "breathmachine.h"

CBreathInsp::CBreathInsp(CBreathMachine *ctx):CBreathState(ctx) {
    this->m_szStateName = (char*)"Insp";
}
void CBreathInsp::Expiration() {
    ChangeStatus(this->context->m_stExpiration);
}

/*void CBreathInsp::Insp() {
     throw "Invalid State!";
}

void CBreathInsp::Recalib() {
     throw "Invalid State!";
}*/
