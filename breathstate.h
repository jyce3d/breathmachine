#ifndef C_BREATH_STATE_
#define C_BREATH_STATE_
class CBreathMachine;

class CBreathState {
    public:
        CBreathMachine *context;
        char* m_szStateName;
        CBreathState(CBreathMachine *ctx);
        virtual void Insp();
        virtual void Expiration();
        virtual void Recalib();
    protected:
        void ChangeStatus(CBreathState *state);
};
#endif
