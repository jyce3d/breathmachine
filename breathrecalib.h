#ifndef C_BR_RECALIB_STATE_
#define C_BR_RECALIB_STATE_
#include "breathstate.h"
class CBreathRecalib  : public CBreathState {
    public:
     void Insp();
     CBreathRecalib(CBreathMachine *ctx);
};
#endif