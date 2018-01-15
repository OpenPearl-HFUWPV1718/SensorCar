/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "test.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_19_31(19);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4_31(4);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_50_31(50);

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_main);


/////////////////////////////////////////////////////////////////////////////
// SYSTEM PART
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// PROBLEM PART
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// PROCEDURE SPECIFICATIONS
/////////////////////////////////////////////////////////////////////////////
void
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _steps, pearlrt::Duration  _time);



/////////////////////////////////////////////////////////////////////////////
// DATION SPECIFICATIONS
/////////////////////////////////////////////////////////////////////////////
extern pearlrt::Device *d_leftstepmotor_out;
static pearlrt::SystemDationB* _leftstepmotor_out = static_cast<pearlrt::SystemDationB*>(d_leftstepmotor_out); 



/////////////////////////////////////////////////////////////////////////////
// DATION DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
pearlrt::DationTS _lmotor(_leftstepmotor_out, pearlrt::Dation::OUT );


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// PROCEDURE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
void
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _steps, pearlrt::Duration  _time)
{
    pearlrt::BitString<4>  _a(pearlrt::BitString<4>(0xa)); 
    pearlrt::BitString<4>  _b(pearlrt::BitString<4>(0x9)); 
    pearlrt::BitString<4>  _c(pearlrt::BitString<3>(0x5)); 
    pearlrt::BitString<4>  _d(pearlrt::BitString<3>(0x6)); 


    me->setLocation(19, filename);
    {
        pearlrt::Fixed<15> a_value(1);

        pearlrt::Fixed<31> e_value;
        e_value = _steps;

        pearlrt::Fixed<15> s_value(1);

            while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                    ((a_value <= e_value).getBoolean())) ||
                    (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                    ((a_value >= e_value).getBoolean())))
            {

                me->setLocation(20, filename);
                // SEND STATEMENT BEGIN
                try {
                    _lmotor.beginSequence(me);
                    _lmotor.dationWrite(&_a, sizeof(_a));
                    _lmotor.endSequence();
                }
                catch(pearlrt::Signal &s) {
                    if ( ! _lmotor.updateRst(&s) ) {
                        _lmotor.endSequence();
                        throw;
                    }
                    _lmotor.endSequence();
                }
                // SEND STATEMENT END

                me->setLocation(21, filename);
                    me->resume( pearlrt::Task::AFTER,
                                /* at     */  pearlrt::Clock(),
                                /* after  */  pearlrt::Duration(_time)
                              );

                me->setLocation(23, filename);
                // SEND STATEMENT BEGIN
                try {
                    _lmotor.beginSequence(me);
                    _lmotor.dationWrite(&_b, sizeof(_b));
                    _lmotor.endSequence();
                }
                catch(pearlrt::Signal &s) {
                    if ( ! _lmotor.updateRst(&s) ) {
                        _lmotor.endSequence();
                        throw;
                    }
                    _lmotor.endSequence();
                }
                // SEND STATEMENT END

                me->setLocation(24, filename);
                    me->resume( pearlrt::Task::AFTER,
                                /* at     */  pearlrt::Clock(),
                                /* after  */  pearlrt::Duration(_time)
                              );

                me->setLocation(26, filename);
                // SEND STATEMENT BEGIN
                try {
                    _lmotor.beginSequence(me);
                    _lmotor.dationWrite(&_c, sizeof(_c));
                    _lmotor.endSequence();
                }
                catch(pearlrt::Signal &s) {
                    if ( ! _lmotor.updateRst(&s) ) {
                        _lmotor.endSequence();
                        throw;
                    }
                    _lmotor.endSequence();
                }
                // SEND STATEMENT END

                me->setLocation(27, filename);
                    me->resume( pearlrt::Task::AFTER,
                                /* at     */  pearlrt::Clock(),
                                /* after  */  pearlrt::Duration(_time)
                              );

                me->setLocation(29, filename);
                // SEND STATEMENT BEGIN
                try {
                    _lmotor.beginSequence(me);
                    _lmotor.dationWrite(&_d, sizeof(_d));
                    _lmotor.endSequence();
                }
                catch(pearlrt::Signal &s) {
                    if ( ! _lmotor.updateRst(&s) ) {
                        _lmotor.endSequence();
                        throw;
                    }
                    _lmotor.endSequence();
                }
                // SEND STATEMENT END

                me->setLocation(30, filename);
                    me->resume( pearlrt::Task::AFTER,
                                /* at     */  pearlrt::Clock(),
                                /* after  */  pearlrt::Duration(_time)
                              );


                me->setLocation(19, filename);

                if (((s_value > CONSTANT_FIXED_POS_0_31).getBoolean() &&
                     (a_value <= (e_value - s_value)).getBoolean()) ||
                    ((s_value < CONSTANT_FIXED_POS_0_31).getBoolean() &&
                    (a_value >= (e_value - s_value)).getBoolean())) {
                    a_value = a_value + s_value;
                } else {
                    break;
                }
            }
    }
}



/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)1)) {
        pearlrt::Duration  _time(0.01); 


        me->setLocation(12, filename);
        {
            _lmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(13, filename);
        _step( me, CONSTANT_FIXED_POS_50_31, _time);
        me->setLocation(14, filename);
        _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



