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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_a416c07a_eb65_495a_b50c_b6c1f07c88b5("/dev/i2c-1");
static /*const*/ pearlrt::Character<3>         CONSTANT_CHARACTER_9e5cc192_e84c_4b94_b17c_2ac92896bcf2("rot");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_cd48e508_bedc_4906_8fa3_4b1507efd073("gruen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_fc54d4db_71fb_4214_97f4_8c342997c283("blau");

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


        me->setLocation(16, filename);
        {
            _so.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(17, filename);
        {
            _fs.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(18, filename);
        {
                while ( 1 )
                {

                    me->setLocation(19, filename);
                        _fs_signal_red = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(20, filename);
                        _fs_signal_green = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(21, filename);
                        _fs_signal_blue = CONSTANT_FIXED_POS_0_31;
                    #warning __cpp__ inline inserted
                    _fs.dationRead(data_colors, sizeof(data_colors));


                    me->setLocation(23, filename);
                    me->setLocation(25, filename);
                    if (((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    (*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_2_31))))
                    +(*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_3_31))))).getBoolean()) {
                        me->setLocation(26, filename);
                            _fs_signal_red = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(28, filename);
                    if (((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_2_31)))) > 
                    (*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31))))
                    +(*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_3_31))))).getBoolean()) {
                        me->setLocation(29, filename);
                            _fs_signal_green = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(31, filename);
                    if (((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_3_31)))) > 
                    (*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_2_31))))
                    +(*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31))))).getBoolean()) {
                        me->setLocation(32, filename);
                            _fs_signal_blue = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(34, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _so.beginSequence(me);
                        _so.toA(CONSTANT_CHARACTER_9e5cc192_e84c_4b94_b17c_2ac92896bcf2,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF(_fs_signal_red,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_cd48e508_bedc_4906_8fa3_4b1507efd073,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF(_fs_signal_green,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
                        _so.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _so.toA(CONSTANT_CHARACTER_fc54d4db_71fb_4214_97f4_8c342997c283,(pearlrt::Fixed<31>)(
                        CONSTANT_FIXED_POS_6_31)) ;
                        _so.toF(_fs_signal_blue,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
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

                    me->setLocation(35, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_read_sensor_interval)
                                  );


                }

        }
        me->setLocation(37, filename);
        _fs.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(38, filename);
        _so.dationClose(0, (pearlrt::Fixed<15>*) 0);

}



