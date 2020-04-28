#ifndef C_BR_EXP_STATE_
#define C_BR_EXP_STATE_
#include "breathstate.h"
class CBreathExpiration : public CBreathState {
    public: 
        void Insp();
        void Recalib();
        CBreathExpiration(CBreathMachine *ctx);

};
#endif