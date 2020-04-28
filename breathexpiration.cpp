#include "breathexpiration.h"
#include "breathmachine.h"

CBreathExpiration::CBreathExpiration(CBreathMachine *ctx):CBreathState(ctx) {
    this->m_szStateName = (char*)"Expiration";
}
void CBreathExpiration::Insp() {
    ChangeStatus(this->context->m_stInsp);
}

void CBreathExpiration::Recalib() {
    ChangeStatus(this->context->m_stRecalib);
}