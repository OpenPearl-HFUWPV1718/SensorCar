/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "farbsensor.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_250_31(250);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4_31(4);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_512_31(512);
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_6e8d4d72_1d70_4cf5_94be_3577cc2d8ed8("/dev/i2c-1");
static /*const*/ pearlrt::Character<6>         CONSTANT_CHARACTER_a7681299_dd3f_4762_b6bb_b48f10f71f09("START:");
static /*const*/ pearlrt::Character<3>         CONSTANT_CHARACTER_4ed5b377_0051_4253_b28e_fc65f297a56f("rot");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_3a7eb183_4b7f_4f47_b50f_6c2ef9a8b26d("gruen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_fcaf3abf_0295_4c50_8224_f45d0123c6ff("blau");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_3c34752d_0439_4553_9e1f_4d4218998866("summe");
static /*const*/ pearlrt::Character<3>         CONSTANT_CHARACTER_c7ca909f_99f9_459a_9304_0d4d2b2293bf("lum");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_0d00530e_4781_4be0_b5d8_b9edc46ec516("RGB ");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_83e797ab_612b_4359_8cbc_917675d6020e("END!");

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
// DATION SPECIFICATIONS
/////////////////////////////////////////////////////////////////////////////
extern pearlrt::Device *d_stdout;
static pearlrt::SystemDationNB* _stdout = static_cast<pearlrt::SystemDationNB*>(d_stdout); 

extern pearlrt::Device *d_farbsensor;
static pearlrt::SystemDationB* _farbsensor = static_cast<pearlrt::SystemDationB*>(d_farbsensor); 



/////////////////////////////////////////////////////////////////////////////
// DATION DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::DationDim2 h_dim_so(80); 

pearlrt::DationPG _so(_stdout, pearlrt::Dation::OUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_so);

pearlrt::DationTS _fs(_farbsensor, pearlrt::Dation::IN );


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////
DCLARRAY(ad_1_1_5, 1, LIMITS({{1,5,1}}));


/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)1)) {
        pearlrt::Fixed<31> data_colors[5] ; 
        pearlrt::Duration  _timeinterval; 

        pearlrt::BitString<8>  _rBits; 
        pearlrt::BitString<8>  _gBits; 
        pearlrt::BitString<8>  _bBits; 

        pearlrt::BitString<24>  _gesamt; 

        pearlrt::Fixed<7>  _help; 

        pearlrt::Fixed<24>  _help2; 


        me->setLocation(19, filename);
        {
            _so.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(20, filename);
        {
            _fs.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(21, filename);
            _timeinterval = pearlrt::Duration(1.0);
        me->setLocation(22, filename);
        // PUT STATEMENT BEGIN
        try {
            _so.beginSequence(me);
            _so.toA(CONSTANT_CHARACTER_a7681299_dd3f_4762_b6bb_b48f10f71f09) ;
            _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
            _so.endSequence();
        }
        catch(pearlrt::Signal &s) {
            if ( ! _so.updateRst(&s) ) {
                _so.endSequence();
                throw;
            }
            _so.endSequence();
        }
        // PUT STATEMENT END

        me->setLocation(23, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_250_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    #warning __cpp__ inline inserted
                    _fs.dationRead(data_colors, sizeof(data_colors));


                    me->setLocation(26, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _so.beginSequence(me);
                        _so.toA(CONSTANT_CHARACTER_4ed5b377_0051_4253_b28e_fc65f297a56f,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                            CONSTANT_FIXED_POS_1_31)))),(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_3a7eb183_4b7f_4f47_b50f_6c2ef9a8b26d,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                            CONSTANT_FIXED_POS_2_31)))),(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_fcaf3abf_0295_4c50_8224_f45d0123c6ff,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                            CONSTANT_FIXED_POS_3_31)))),(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_3c34752d_0439_4553_9e1f_4d4218998866,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                            CONSTANT_FIXED_POS_4_31)))),(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_c7ca909f_99f9_459a_9304_0d4d2b2293bf,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                            CONSTANT_FIXED_POS_5_31)))),(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _so.updateRst(&s) ) {
                            _so.endSequence();
                            throw;
                        }
                        _so.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(30, filename);
                        _help = ((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_4_31))))/CONSTANT_FIXED_POS_512_31);
                    me->setLocation(31, filename);
                        _rBits = pearlrt::BitString<8>(_help);
                    me->setLocation(32, filename);
                        _rBits = _rBits.bitShift(CONSTANT_FIXED_POS_1_31);
                    me->setLocation(33, filename);
                        _help = ((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31))))/CONSTANT_FIXED_POS_512_31);
                    me->setLocation(34, filename);
                        _gBits = pearlrt::BitString<8>(_help);
                    me->setLocation(35, filename);
                        _gBits = _gBits.bitShift(CONSTANT_FIXED_POS_1_31);
                    me->setLocation(36, filename);
                        _help = ((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31))))/CONSTANT_FIXED_POS_512_31);
                    me->setLocation(37, filename);
                        _bBits = pearlrt::BitString<8>(_help);
                    me->setLocation(38, filename);
                        _bBits = _bBits.bitShift(CONSTANT_FIXED_POS_1_31);
                    me->setLocation(41, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _so.beginSequence(me);
                        _so.toA(CONSTANT_CHARACTER_0d00530e_4781_4be0_b5d8_b9edc46ec516) ;
                        _so.toX((pearlrt::Fixed<31>)(1));
                        _so.toB4(_rBits,CONSTANT_FIXED_POS_2_31);
                        _so.toX((pearlrt::Fixed<31>)(1));
                        _so.toB4(_gBits,CONSTANT_FIXED_POS_2_31);
                        _so.toX((pearlrt::Fixed<31>)(1));
                        _so.toB4(_bBits,CONSTANT_FIXED_POS_2_31);
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _so.updateRst(&s) ) {
                            _so.endSequence();
                            throw;
                        }
                        _so.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(42, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _so.beginSequence(me);
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _so.updateRst(&s) ) {
                            _so.endSequence();
                            throw;
                        }
                        _so.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(43, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_timeinterval)
                                  );


                    me->setLocation(23, filename);

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
        me->setLocation(45, filename);
        // PUT STATEMENT BEGIN
        try {
            _so.beginSequence(me);
            _so.toA(CONSTANT_CHARACTER_83e797ab_612b_4359_8cbc_917675d6020e) ;
            _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
            _so.endSequence();
        }
        catch(pearlrt::Signal &s) {
            if ( ! _so.updateRst(&s) ) {
                _so.endSequence();
                throw;
            }
            _so.endSequence();
        }
        // PUT STATEMENT END

        me->setLocation(46, filename);
        _fs.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(47, filename);
        _so.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



