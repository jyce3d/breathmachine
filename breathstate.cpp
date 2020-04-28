#include "breathstate.h"
#include "breathmachine.h"


CBreathState::CBreathState(CBreathMachine *ctx) {
    this->context = ctx;
}
void CBreathState::Insp() {
     throw "Invalid State!";
}
void CBreathState::Expiration() {
         throw "Invalid State!";
}
void CBreathState::Recalib() {
         throw "Invalid State!";
}

void CBreathState::ChangeStatus(CBreathState *state) {
    this->context->ChangeStatus(state);
}