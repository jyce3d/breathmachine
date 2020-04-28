#include "breathrecalib.h"
#include "breathmachine.h"

CBreathRecalib::CBreathRecalib(CBreathMachine *ctx):CBreathState(ctx) {
    this->m_szStateName = (char*) "Recalib";
}
void CBreathRecalib::Insp() {
    ChangeStatus(this->context->m_stInsp);
}