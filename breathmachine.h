#ifndef CBREATHMACHINE_
#define CBREATHMACHINE_

#include "breathinsp.h"
#include "breathexpiration.h"
#include "breathrecalib.h"

class CBreathState;

class CBreathMachine  {
    public:
    CBreathState* m_stInsp;
    CBreathState* m_stExpiration;
    CBreathState* m_stRecalib;

    CBreathState *state;

    void Expiration();
    void Recalib();
    void Insp();
    CBreathMachine();
    void ChangeStatus(CBreathState *s);
    
    virtual ~CBreathMachine();
  

};
#endif