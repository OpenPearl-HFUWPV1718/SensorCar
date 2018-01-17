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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_722bade4_727b_4e81_b54a_086522d317b1("u");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_3a925291_2808_4260_a3c0_50cd8039e828("linker Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_eb4668f9_b75f_43b9_9994_1c4def08759f("rechter Motor: ");

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


    me->setLocation(189, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(190, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(191, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(192, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(193, filename);
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

                        me->setLocation(194, filename);
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

                        me->setLocation(195, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(197, filename);
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

                        me->setLocation(198, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(200, filename);
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

                        me->setLocation(201, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(203, filename);
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

                        me->setLocation(204, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(193, filename);

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

        me->setLocation(208, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(209, filename);
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

                        me->setLocation(210, filename);
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

                        me->setLocation(211, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(213, filename);
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

                        me->setLocation(214, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(216, filename);
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

                        me->setLocation(217, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(219, filename);
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

                        me->setLocation(220, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(209, filename);

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

    me->setLocation(224, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(225, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(226, filename);
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

                        me->setLocation(227, filename);
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

                        me->setLocation(228, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(230, filename);
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

                        me->setLocation(231, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(233, filename);
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

                        me->setLocation(234, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(236, filename);
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

                        me->setLocation(237, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(226, filename);

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

        me->setLocation(241, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(242, filename);
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

                        me->setLocation(243, filename);
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

                        me->setLocation(244, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(246, filename);
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

                        me->setLocation(247, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(249, filename);
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

                        me->setLocation(250, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(252, filename);
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

                        me->setLocation(253, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(242, filename);

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
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
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
                    me->setLocation(78, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(79, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(80, filename);
                        pearlrt::Semaphore::request( me, 2, d1_d2_semas);
                    me->setLocation(81, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(0.001))
                                  );


                }

        }
}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _time(0.02); 

        pearlrt::Fixed<31>  _steps(1); 

        pearlrt::Float<53>  _speed; 


        me->setLocation(90, filename);
            pearlrt::Semaphore::request( me, 1, lm_sema_semas);
        me->setLocation(91, filename);
            _speed = _lm_speed;
        me->setLocation(92, filename);
            pearlrt::Semaphore::release( me, 1, lm_sema_semas);
        me->setLocation(93, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_time;
        me->setLocation(94, filename);
            _steps = ((_speed*_steps)).round();
        me->setLocation(96, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_3a925291_2808_4260_a3c0_50cd8039e828) ;
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

        me->setLocation(97, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, CONSTANT_FIXED_POS_1_31, _time);
        me->setLocation(98, filename);
            pearlrt::Semaphore::release( me, 1, d1_semas);
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _time(0.02); 

        pearlrt::Fixed<31>  _steps(1); 

        pearlrt::Float<53>  _speed; 


        me->setLocation(106, filename);
            pearlrt::Semaphore::request( me, 1, rm_sema_semas);
        me->setLocation(107, filename);
            _speed = _rm_speed;
        me->setLocation(108, filename);
            pearlrt::Semaphore::release( me, 1, rm_sema_semas);
        me->setLocation(109, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_time;
        me->setLocation(110, filename);
            _steps = ((_speed*_steps)).round();
        me->setLocation(112, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_eb4668f9_b75f_43b9_9994_1c4def08759f) ;
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

        me->setLocation(114, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, CONSTANT_FIXED_POS_1_31, _time);
        me->setLocation(115, filename);
            pearlrt::Semaphore::release( me, 1, d2_semas);
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Duration  _timeinterval; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(125, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(126, filename);
            _timeinterval = pearlrt::Duration(0.005);
        me->setLocation(127, filename);
        {
                while ( 1 )
                {

                    me->setLocation(128, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(129, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(130, filename);
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

                    me->setLocation(133, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(135, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(136, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(138, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(140, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(141, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(143, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(145, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(146, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(148, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(150, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(151, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(153, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(155, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(156, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(158, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(160, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(161, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(163, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(165, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(166, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(168, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(170, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(171, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(173, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(175, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(177, filename);
                        pearlrt::Semaphore::request( me, 1, lr_sema_semas);
                    me->setLocation(178, filename);
                        _lr_signal = _out;
                    me->setLocation(179, filename);
                        pearlrt::Semaphore::release( me, 1, lr_sema_semas);
                    me->setLocation(180, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_timeinterval)
                                  );


                }

        }
        me->setLocation(182, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



