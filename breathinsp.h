#ifndef C_BR_INSP_STATE_
#define C_BR_INSP_STATE_

#include "breathstate.h"

class CBreathInsp : public CBreathState {
    public: 
        void Expiration();
         CBreathInsp(CBreathMachine *ctx);

};
#endif