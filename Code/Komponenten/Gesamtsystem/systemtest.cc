/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "systemtest.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_13_31(13);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_8_31(8);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_19_31(19);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4_31(4);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_23_31(23);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_00334393_5e5f_4a95_8291_0da2f8f2e16d("u");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_805a4392_2389_4884_a5b1_807d627ddbd0("linker Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_f436643c_e8bb_4224_bb9c_ae489db8d020("rechter Motor: ");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_driveright);
SPCTASK(_main);
SPCTASK(_readlr);
SPCTASK(_drive);
SPCTASK(_driveleft);


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
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _motorindex, pearlrt::Fixed<31>  _steps, pearlrt::Fixed<31>  _dir, pearlrt::Duration  _time);



/////////////////////////////////////////////////////////////////////////////
// DATION SPECIFICATIONS
/////////////////////////////////////////////////////////////////////////////
extern pearlrt::Device *d_stdout;
static pearlrt::SystemDationNB* _stdout = static_cast<pearlrt::SystemDationNB*>(d_stdout); 

extern pearlrt::Device *d_lichtrechen;
static pearlrt::SystemDationB* _lichtrechen = static_cast<pearlrt::SystemDationB*>(d_lichtrechen); 

extern pearlrt::Device *d_leftstepmotor_out;
static pearlrt::SystemDationB* _leftstepmotor_out = static_cast<pearlrt::SystemDationB*>(d_leftstepmotor_out); 

extern pearlrt::Device *d_rightstepmotor_out;
static pearlrt::SystemDationB* _rightstepmotor_out = static_cast<pearlrt::SystemDationB*>(d_rightstepmotor_out); 



/////////////////////////////////////////////////////////////////////////////
// DATION DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::DationDim2 h_dim_termout(80); 

pearlrt::DationPG _termout(_stdout, pearlrt::Dation::OUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_termout);

pearlrt::DationTS _lr(_lichtrechen, pearlrt::Dation::IN );

pearlrt::DationTS _lmotor(_leftstepmotor_out, pearlrt::Dation::OUT );

pearlrt::DationTS _rmotor(_rightstepmotor_out, pearlrt::Dation::OUT );


/////////////////////////////////////////////////////////////////////////////
// VARIABLE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
pearlrt::Float<53>  _lr_signal; 

pearlrt::Float<53>  _lm_speed; 
pearlrt::Float<53>  _rm_speed; 

pearlrt::Float<53>  _lspeed(1); 
pearlrt::Float<53>  _rspeed(1); 



/////////////////////////////////////////////////////////////////////////////
// SEMAPHORE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLSEMA(_lr_sema,1);
DCLSEMA(_lm_sema,1);
DCLSEMA(_rm_sema,1);
DCLSEMA(_d1,0);
DCLSEMA(_d2,0);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *lr_sema_semas[] = {&_lr_sema}; 
static pearlrt::Semaphore *lm_sema_semas[] = {&_lm_sema}; 
static pearlrt::Semaphore *rm_sema_semas[] = {&_rm_sema}; 
static pearlrt::Semaphore *d1_d2_semas[] = {&_d1,&_d2}; 
static pearlrt::Semaphore *d1_semas[] = {&_d1}; 
static pearlrt::Semaphore *d2_semas[] = {&_d2}; 


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
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _motorindex, pearlrt::Fixed<31>  _steps, pearlrt::Fixed<31>  _dir, pearlrt::Duration  _time)
{
    pearlrt::BitString<4>  _a(pearlrt::BitString<4>(0xa)); 
    pearlrt::BitString<4>  _b(pearlrt::BitString<4>(0x9)); 

    pearlrt::BitString<4>  _c; 
    pearlrt::BitString<4>  _d; 


    me->setLocation(187, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(188, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(189, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(190, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(191, filename);
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

                        me->setLocation(192, filename);
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

                        me->setLocation(193, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(195, filename);
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

                        me->setLocation(196, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(198, filename);
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

                        me->setLocation(199, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(201, filename);
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

                        me->setLocation(202, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(191, filename);

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

        me->setLocation(206, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(207, filename);
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

                        me->setLocation(208, filename);
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

                        me->setLocation(209, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(211, filename);
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

                        me->setLocation(212, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(214, filename);
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

                        me->setLocation(215, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(217, filename);
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

                        me->setLocation(218, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(207, filename);

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

    }

    me->setLocation(222, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(223, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(224, filename);
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

                        me->setLocation(225, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_a, sizeof(_a));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(226, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(228, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_b, sizeof(_b));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(229, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(231, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_c, sizeof(_c));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(232, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(234, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_d, sizeof(_d));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(235, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(224, filename);

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

        me->setLocation(239, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(240, filename);
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

                        me->setLocation(241, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_d, sizeof(_d));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(242, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(244, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_c, sizeof(_c));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(245, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(247, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_b, sizeof(_b));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(248, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(250, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _rmotor.beginSequence(me);
                            _rmotor.dationWrite(&_a, sizeof(_a));
                            _rmotor.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _rmotor.updateRst(&s) ) {
                                _rmotor.endSequence();
                                throw;
                            }
                            _rmotor.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(251, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(240, filename);

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

    }

}



/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)1)) {
        me->setLocation(31, filename);
            _lr_signal = CONSTANT_FIXED_POS_0_31;
        me->setLocation(32, filename);
            _lm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(33, filename);
            _rm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(35, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(36, filename);
        {
            _lmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(37, filename);
        {
            _rmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(38, filename);
            _readlr.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(39, filename);
            _drive.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(40, filename);
        me->suspend(me);


        me->setLocation(41, filename);
        _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(42, filename);
        _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(43, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_drive, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lrin; 

        pearlrt::Float<53>  _in; 


        me->setLocation(51, filename);
        {
                while ( 1 )
                {

                    me->setLocation(52, filename);
                        pearlrt::Semaphore::request( me, 1, lr_sema_semas);
                    me->setLocation(53, filename);
                        _in = CONSTANT_FIXED_NEG_1_31*_lr_signal;
                    me->setLocation(54, filename);
                        pearlrt::Semaphore::release( me, 1, lr_sema_semas);
                    me->setLocation(56, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(57, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(58, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(61, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(62, filename);
                            _lspeed = _in;
                        me->setLocation(63, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(66, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(67, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(68, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(71, filename);
                        pearlrt::Semaphore::request( me, 1, lm_sema_semas);
                    me->setLocation(72, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(73, filename);
                        pearlrt::Semaphore::release( me, 1, lm_sema_semas);
                    me->setLocation(75, filename);
                        pearlrt::Semaphore::request( me, 1, rm_sema_semas);
                    me->setLocation(76, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(77, filename);
                        pearlrt::Semaphore::release( me, 1, rm_sema_semas);
                    me->setLocation(79, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(80, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(81, filename);
                        pearlrt::Semaphore::request( me, 2, d1_d2_semas);

                }

        }
}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _default(0.05); 

        pearlrt::Duration  _time; 

        pearlrt::Float<53>  _speed; 


        me->setLocation(90, filename);
            pearlrt::Semaphore::request( me, 1, lm_sema_semas);
        me->setLocation(91, filename);
            _speed = _lm_speed;
        me->setLocation(92, filename);
            pearlrt::Semaphore::release( me, 1, lm_sema_semas);
        me->setLocation(93, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default;
        me->setLocation(95, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_805a4392_2389_4884_a5b1_807d627ddbd0) ;
            _termout.toF(_speed,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
            _termout.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
            _termout.endSequence();
        }
        catch(pearlrt::Signal &s) {
            if ( ! _termout.updateRst(&s) ) {
                _termout.endSequence();
                throw;
            }
            _termout.endSequence();
        }
        // PUT STATEMENT END

        me->setLocation(96, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, CONSTANT_FIXED_POS_1_31, CONSTANT_FIXED_POS_1_31, 
        _time);
        me->setLocation(97, filename);
            pearlrt::Semaphore::release( me, 1, d1_semas);
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _default(0.05); 

        pearlrt::Duration  _time; 

        pearlrt::Float<53>  _speed; 


        me->setLocation(105, filename);
            pearlrt::Semaphore::request( me, 1, rm_sema_semas);
        me->setLocation(106, filename);
            _speed = _rm_speed;
        me->setLocation(107, filename);
            pearlrt::Semaphore::release( me, 1, rm_sema_semas);
        me->setLocation(108, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default;
        me->setLocation(110, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_f436643c_e8bb_4224_bb9c_ae489db8d020) ;
            _termout.toF(_speed,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
            _termout.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
            _termout.endSequence();
        }
        catch(pearlrt::Signal &s) {
            if ( ! _termout.updateRst(&s) ) {
                _termout.endSequence();
                throw;
            }
            _termout.endSequence();
        }
        // PUT STATEMENT END

        me->setLocation(112, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, CONSTANT_FIXED_POS_1_31, CONSTANT_FIXED_POS_1_31, 
        _time);
        me->setLocation(113, filename);
            pearlrt::Semaphore::release( me, 1, d2_semas);
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Duration  _timeinterval; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(123, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(124, filename);
            _timeinterval = pearlrt::Duration(0.01);
        me->setLocation(125, filename);
        {
                while ( 1 )
                {

                    me->setLocation(126, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(127, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(128, filename);
                    // TAKE STATEMENT BEGIN
                    try {
                        _lr.beginSequence(me);
                        _lr.dationRead(&_bits, sizeof(_bits));
                        _lr.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _lr.updateRst(&s) ) {
                            _lr.endSequence();
                            throw;
                        }
                        _lr.endSequence();
                    }
                    // TAKE STATEMENT END

                    me->setLocation(131, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(133, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(134, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(136, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(138, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(139, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(141, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(143, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(144, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(146, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(148, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(149, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(151, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(153, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(154, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(156, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(158, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(159, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(161, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(163, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(164, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(166, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(168, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(169, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(171, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(173, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(175, filename);
                        pearlrt::Semaphore::request( me, 1, lr_sema_semas);
                    me->setLocation(176, filename);
                        _lr_signal = _out;
                    me->setLocation(177, filename);
                        pearlrt::Semaphore::release( me, 1, lr_sema_semas);
                    me->setLocation(178, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_timeinterval)
                                  );


                }

        }
        me->setLocation(180, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



