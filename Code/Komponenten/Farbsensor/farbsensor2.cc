/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "farbsensor2.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_13000_31(13000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6000_31(6000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5000_31(5000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_12000_31(12000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_11000_31(11000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2500_31(2500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3500_31(3500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4000_31(4000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2200_31(2200);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_27000_31(27000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_7_31(7);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_40f1c22b_d1b4_477d_9275_69592ed6ba38("/dev/i2c-1");
static /*const*/ pearlrt::Character<3>         CONSTANT_CHARACTER_942b600e_65ed_4497_b39c_3b80022e2457("rot");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_e00180e7_6fca_493c_8506_09dd43ee6adb("gruen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_94b3cba0_5edd_4e31_8e05_479a6a395f8b("blau");
static /*const*/ pearlrt::Character<7>         CONSTANT_CHARACTER_b2567db9_8cc9_4fb3_9952_f7d16b106a81("schwarz");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_04af4930_47b2_4bcb_8555_3b4a8535486c("white");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_readfs);


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
// VARIABLE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
pearlrt::Fixed<31>  _fs_signal_red(0); 
pearlrt::Fixed<31>  _fs_signal_green(0); 
pearlrt::Fixed<31>  _fs_signal_blue(0); 
pearlrt::Fixed<31>  _fs_signal_black(0); 
pearlrt::Fixed<31>  _fs_signal_white(0); 



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
DCLTASK(_readfs, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)1)) {
        pearlrt::Fixed<31> data_colors[5] ; 
        pearlrt::Duration  _read_sensor_interval(0.005); 

        pearlrt::Duration  _timeintervall; 


        me->setLocation(17, filename);
            _timeintervall = pearlrt::Duration(1.0);
        me->setLocation(18, filename);
        {
            _so.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(19, filename);
        {
            _fs.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(20, filename);
        {
                while ( 1 )
                {

                    me->setLocation(21, filename);
                        _fs_signal_red = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(22, filename);
                        _fs_signal_green = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(23, filename);
                        _fs_signal_blue = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(24, filename);
                        _fs_signal_black = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(25, filename);
                        _fs_signal_white = CONSTANT_FIXED_POS_0_31;
                    #warning __cpp__ inline inserted
                    _fs.dationRead(data_colors, sizeof(data_colors));


                    me->setLocation(27, filename);
                    me->setLocation(41, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    CONSTANT_FIXED_POS_13000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).getBoolean()) {
                        me->setLocation(42, filename);
                            _fs_signal_red = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(44, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_5000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) > CONSTANT_FIXED_POS_12000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_11000_31)
                    )).getBoolean()) {
                        me->setLocation(45, filename);
                            _fs_signal_green = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(47, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_2500_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_3500_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) > CONSTANT_FIXED_POS_4000_31)
                    )).getBoolean()) {
                        me->setLocation(48, filename);
                            _fs_signal_blue = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(50, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_2200_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_2200_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_2200_31)
                    )).getBoolean()) {
                        me->setLocation(51, filename);
                            _fs_signal_black = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(53, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    CONSTANT_FIXED_POS_27000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) > CONSTANT_FIXED_POS_27000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) > CONSTANT_FIXED_POS_27000_31)
                    )).getBoolean()) {
                        me->setLocation(54, filename);
                            _fs_signal_white = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(56, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _so.beginSequence(me);
                        _so.toA(CONSTANT_CHARACTER_942b600e_65ed_4497_b39c_3b80022e2457,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_7_31)) ;
                        _so.toF(_fs_signal_red,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_e00180e7_6fca_493c_8506_09dd43ee6adb,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_7_31)) ;
                        _so.toF(_fs_signal_green,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_94b3cba0_5edd_4e31_8e05_479a6a395f8b,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_7_31)) ;
                        _so.toF(_fs_signal_blue,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_b2567db9_8cc9_4fb3_9952_f7d16b106a81,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_7_31)) ;
                        _so.toF(_fs_signal_black,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_04af4930_47b2_4bcb_8555_3b4a8535486c,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_7_31)) ;
                        _so.toF(_fs_signal_white,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
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

                    me->setLocation(57, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_read_sensor_interval)
                                  );

                    me->setLocation(58, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_timeintervall)
                                  );


                }

        }
        me->setLocation(60, filename);
        _fs.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(61, filename);
        _so.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



