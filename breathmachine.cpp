#include<iostream>
#include "breathmachine.h"
#include "breathinsp.h"
#include "breathexpiration.h"
#include "breathrecalib.h"

CBreathMachine::CBreathMachine() {
  //  std::cout << "start breath machine" << std::endl;
    m_stInsp = new CBreathInsp(this);
    m_stExpiration = new CBreathExpiration(this);
    m_stRecalib = new CBreathRecalib(this); 

    this->state =m_stInsp;

}
void CBreathMachine::ChangeStatus(CBreathState *s) {
    std::cout << "From " << state->m_szStateName << " to " << s->m_szStateName << std::endl;
    this->state = s;
}
CBreathMachine::~CBreathMachine() {
    delete m_stInsp;
    delete m_stExpiration;
    delete m_stRecalib;
}

void CBreathMachine::Expiration() {
    this->state->Expiration();
}
void CBreathMachine::Recalib() {
    this->state->Recalib();
}
void CBreathMachine::Insp() {
    this->state->Insp();
}