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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_80_31(80);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_2567224d_a4ca_44d8_83c3_47a5c86b1cf1("u");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_b803117b_6f1a_461e_8bcb_00bf15032ec5("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_33578320_0146_4a44_9c8e_3acedbf8c346("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_8f3c4961_7fd8_40e0_a9fd_4cc8d174d4cb("Waehlen Sie:");
static /*const*/ pearlrt::Character<30>         CONSTANT_CHARACTER_293ebace_1a3e_4611_9589_06eebc812469("1 um den Demo-Modus zu starten");
static /*const*/ pearlrt::Character<33>         CONSTANT_CHARACTER_9701e47b_7126_4e68_916e_eead825dfe42("2 um den Parcour-Modus zu starten");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_82d9ac15_f195_4f2e_8dcd_6398e1e0f4b5("Parcour-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_dd0cb1d9_b2a1_4cf1_a108_a015aa39c669("0 um anzuhalten");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_a41585cb_4327_49ba_b3fa_d3d8697127a0("1 um loszufahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_00b41f7c_558f_42da_a94e_a65185b8ee03("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_9fedbac9_727f_4e59_9382_6d0ab1ba8e73("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_f34cb437_5a12_4ca2_8017_0a197ac93aed("Command 0: stop");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_1b16f89a_f485_49e8_9b34_224c7e71fec4("linker Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_0ce58caf_c3fd_4a79_a246_b562370f1fda("rechter Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_33a542fa_1084_47d7_a7ae_d0b417784733("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_f676c26a_d85c_4cab_b4b0_60ad0cc05c96("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_4291dfc6_8130_4beb_b77a_5b9c0a79ba67("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_1c9aa517_8d46_4794_91db_da62b8f8d9cc("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_eafe9030_2b4b_4bc3_b625_0a57deab949f("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_8c03b3c6_dee6_4a2d_b398_733c40336e34("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_cec94f9b_73d5_45fe_8c9e_70943a8eccf5("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_2d0c36f5_e859_45c5_90f0_ac9b47283cb4("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_6f59ca32_79ba_4a3d_bdd7_83fcfdda2769("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_4b7656e3_48e6_4de9_82e9_d81bb76b0786("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_c9bbddc2_11ab_45ba_85f6_5ff1ea14fec6("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<25>         CONSTANT_CHARACTER_957176ea_4305_4b19_8596_716836686402("<li>Geschwindigkeit Lins:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_f1182f60_ae3d_49bb_822f_8e3bbbe35d1b("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_d73211c4_f80a_4373_9b4f_b833d4acd4a5("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_bd9263a3_b391_484a_8834_27884006b482("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_f5ee6957_548c_418f_8510_aa7e67b0f71c("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_3ad17731_1920_415b_baca_821f5e40dc0d("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_90420ce9_084a_4df8_bec8_5f5990f337d0("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_4697a92c_9c37_4a34_b230_912182d38dd7("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_a2a9a008_fc9c_4ba5_bed7_e35017db1786("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_b7918000_b293_4ab9_b36e_5067d1116964("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_7ff880d1_9d0a_42eb_8e78_767447fa8f00("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_277cf125_c996_4f97_a7b5_0541cebf0a55("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_2c414086_fddf_4827_b84c_3a8c3aab9e78("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_cd4ddc21_0f86_4732_b0e8_62ec8a4c22a4("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_a21c7528_3370_4b84_8b9d_ef3da73aaf6e("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_afb3c82c_fb73_4bca_8fcf_5ac04cf55950("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_914948bd_d4ba_42ab_bbb8_e8fd42fb4e7b("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_715c3be8_5307_4252_9ab2_63e90da80525("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_27f3c3b1_5a87_4db4_9491_aba574d47ae3("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_e57dd805_fe7d_4295_a994_b08591a23ef8(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_5e3bea72_5cce_442a_8cce_724473e44d8b("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_59b3f2e9_3b3f_4585_acf5_ac7b4eac65e0(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_b19e165c_7d5e_4638_89c5_71cfc993af80("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_23dddaa1_9c24_4edc_8dbd_030a65a558fe("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_238f0b9e_f138_4d39_9cf9_9286e0218b5f("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_38b3b257_6f81_45b9_8c4d_94a522d09624("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_main);
SPCTASK(_demo);
SPCTASK(_readlr);
SPCTASK(_driveleft);
SPCTASK(_commands);
SPCTASK(_parcour);
SPCTASK(_follow_line);
SPCTASK(_driveright);


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
void
_index(pearlrt::Task *me);
void
_info(pearlrt::Task *me);
void
_doku(pearlrt::Task *me);
void
_error(pearlrt::Task *me);
void
_style(pearlrt::Task *me);



/////////////////////////////////////////////////////////////////////////////
// DATION SPECIFICATIONS
/////////////////////////////////////////////////////////////////////////////
extern pearlrt::Device *d_stdout;
static pearlrt::SystemDationNB* _stdout = static_cast<pearlrt::SystemDationNB*>(d_stdout); 

extern pearlrt::Device *d_stdin;
static pearlrt::SystemDationNB* _stdin = static_cast<pearlrt::SystemDationNB*>(d_stdin); 

extern pearlrt::Device *d_lichtrechen;
static pearlrt::SystemDationB* _lichtrechen = static_cast<pearlrt::SystemDationB*>(d_lichtrechen); 

extern pearlrt::Device *d_leftstepmotor_out;
static pearlrt::SystemDationB* _leftstepmotor_out = static_cast<pearlrt::SystemDationB*>(d_leftstepmotor_out); 

extern pearlrt::Device *d_rightstepmotor_out;
static pearlrt::SystemDationB* _rightstepmotor_out = static_cast<pearlrt::SystemDationB*>(d_rightstepmotor_out); 

extern pearlrt::Device *d_httpSocket;
static pearlrt::SystemDationNB* _httpSocket = static_cast<pearlrt::SystemDationNB*>(d_httpSocket); 



/////////////////////////////////////////////////////////////////////////////
// DATION DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::DationDim2 h_dim_termout(80); 

pearlrt::DationPG _termout(_stdout, pearlrt::Dation::OUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_termout);
static pearlrt::DationDim2 h_dim_termin(80); 

pearlrt::DationPG _termin(_stdin, pearlrt::Dation::IN  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_termin);

pearlrt::DationTS _lr(_lichtrechen, pearlrt::Dation::IN );

pearlrt::DationTS _lmotor(_leftstepmotor_out, pearlrt::Dation::OUT );

pearlrt::DationTS _rmotor(_rightstepmotor_out, pearlrt::Dation::OUT );
static pearlrt::DationDim2 h_dim_usHttpSocket(200); 

pearlrt::DationPG _usHttpSocket(_httpSocket, pearlrt::Dation::INOUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_usHttpSocket);


/////////////////////////////////////////////////////////////////////////////
// VARIABLE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
pearlrt::Duration  _default_motor_time(0.02); 

pearlrt::Fixed<31>  _default_motor_steps(1); 

pearlrt::Fixed<31>  _global_stop(0); 

pearlrt::Float<53>  _lr_signal; 

pearlrt::Float<53>  _lm_speed; 
pearlrt::Float<53>  _rm_speed; 



/////////////////////////////////////////////////////////////////////////////
// SEMAPHORE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLSEMA(_lr_buffer_in,1);
DCLSEMA(_lr_buffer_out,0);
DCLSEMA(_dl,0);
DCLSEMA(_dr,0);
DCLSEMA(_fl,0);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *fl_semas[] = {&_fl}; 
static pearlrt::Semaphore *lr_buffer_out_semas[] = {&_lr_buffer_out}; 
static pearlrt::Semaphore *dl_dr_semas[] = {&_dl,&_dr}; 
static pearlrt::Semaphore *lr_buffer_in_semas[] = {&_lr_buffer_in}; 
static pearlrt::Semaphore *dl_semas[] = {&_dl}; 
static pearlrt::Semaphore *dr_semas[] = {&_dr}; 


/////////////////////////////////////////////////////////////////////////////
// BOLT DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLBOLT(_lm_bolt);
DCLBOLT(_rm_bolt);
DCLBOLT(_lr_bolt);
DCLBOLT(_stop_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Bolt *stop_bolt_bolts[] = {&_stop_bolt}; 
static pearlrt::Bolt *lr_bolt_bolts[] = {&_lr_bolt}; 
static pearlrt::Bolt *lm_bolt_bolts[] = {&_lm_bolt}; 
static pearlrt::Bolt *rm_bolt_bolts[] = {&_rm_bolt}; 


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


    me->setLocation(346, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(347, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(350, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(351, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(352, filename);
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

                        me->setLocation(353, filename);
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

                        me->setLocation(354, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(356, filename);
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

                        me->setLocation(357, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(359, filename);
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

                        me->setLocation(360, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(362, filename);
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

                        me->setLocation(363, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(352, filename);

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

        me->setLocation(367, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(368, filename);
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

                        me->setLocation(369, filename);
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

                        me->setLocation(370, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(372, filename);
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

                        me->setLocation(373, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(375, filename);
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

                        me->setLocation(376, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(378, filename);
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

                        me->setLocation(379, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(368, filename);

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

    me->setLocation(384, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(385, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(386, filename);
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

                        me->setLocation(387, filename);
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

                        me->setLocation(388, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(390, filename);
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

                        me->setLocation(391, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(393, filename);
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

                        me->setLocation(394, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(396, filename);
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

                        me->setLocation(397, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(386, filename);

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

        me->setLocation(401, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(402, filename);
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

                        me->setLocation(403, filename);
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

                        me->setLocation(404, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(406, filename);
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

                        me->setLocation(407, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(409, filename);
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

                        me->setLocation(410, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(412, filename);
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

                        me->setLocation(413, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(402, filename);

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

void
_index(pearlrt::Task *me)
{
    pearlrt::Float<53>  _speedl; 

    pearlrt::Float<53>  _speedr; 


    me->setLocation(461, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(462, filename);
        _speedl = _lm_speed;
    me->setLocation(463, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(465, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(466, filename);
        _speedr = _rm_speed;
    me->setLocation(467, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(470, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_cec94f9b_73d5_45fe_8c9e_70943a8eccf5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(471, filename);
    _style( me);
    me->setLocation(472, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2d0c36f5_e859_45c5_90f0_ac9b47283cb4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(473, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f59ca32_79ba_4a3d_bdd7_83fcfdda2769) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(475, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4b7656e3_48e6_4de9_82e9_d81bb76b0786) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(476, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c9bbddc2_11ab_45ba_85f6_5ff1ea14fec6) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(477, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_957176ea_4305_4b19_8596_716836686402) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_f1182f60_ae3d_49bb_822f_8e3bbbe35d1b) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(478, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_d73211c4_f80a_4373_9b4f_b833d4acd4a5) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_f1182f60_ae3d_49bb_822f_8e3bbbe35d1b) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(479, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_bd9263a3_b391_484a_8834_27884006b482) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(480, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f5ee6957_548c_418f_8510_aa7e67b0f71c) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(481, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_3ad17731_1920_415b_baca_821f5e40dc0d) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

}

void
_info(pearlrt::Task *me)
{
    me->setLocation(485, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_cec94f9b_73d5_45fe_8c9e_70943a8eccf5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(486, filename);
    _style( me);
    me->setLocation(487, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_90420ce9_084a_4df8_bec8_5f5990f337d0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(489, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4697a92c_9c37_4a34_b230_912182d38dd7) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(490, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a2a9a008_fc9c_4ba5_bed7_e35017db1786) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(491, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b7918000_b293_4ab9_b36e_5067d1116964) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(492, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f5ee6957_548c_418f_8510_aa7e67b0f71c) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(493, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_7ff880d1_9d0a_42eb_8e78_767447fa8f00) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

}

void
_doku(pearlrt::Task *me)
{
    me->setLocation(497, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_cec94f9b_73d5_45fe_8c9e_70943a8eccf5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(498, filename);
    _style( me);
    me->setLocation(499, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_90420ce9_084a_4df8_bec8_5f5990f337d0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(501, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_277cf125_c996_4f97_a7b5_0541cebf0a55) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(502, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c414086_fddf_4827_b84c_3a8c3aab9e78) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(503, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b7918000_b293_4ab9_b36e_5067d1116964) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(504, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f5ee6957_548c_418f_8510_aa7e67b0f71c) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(505, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_cd4ddc21_0f86_4732_b0e8_62ec8a4c22a4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

}

void
_error(pearlrt::Task *me)
{
    me->setLocation(509, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_cec94f9b_73d5_45fe_8c9e_70943a8eccf5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(510, filename);
    _style( me);
    me->setLocation(511, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_90420ce9_084a_4df8_bec8_5f5990f337d0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(513, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a21c7528_3370_4b84_8b9d_ef3da73aaf6e) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

}

void
_style(pearlrt::Task *me)
{
    me->setLocation(518, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_afb3c82c_fb73_4bca_8fcf_5ac04cf55950) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(519, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_914948bd_d4ba_42ab_bbb8_e8fd42fb4e7b) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(520, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_715c3be8_5307_4252_9ab2_63e90da80525) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(521, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_27f3c3b1_5a87_4db4_9491_aba574d47ae3) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(522, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e57dd805_fe7d_4295_a994_b08591a23ef8) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(523, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_5e3bea72_5cce_442a_8cce_724473e44d8b) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(524, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_59b3f2e9_3b3f_4585_acf5_ac7b4eac65e0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(525, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b19e165c_7d5e_4638_89c5_71cfc993af80) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(526, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_23dddaa1_9c24_4edc_8dbd_030a65a558fe) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(527, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_238f0b9e_f138_4d39_9cf9_9286e0218b5f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(528, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_38b3b257_6f81_45b9_8c4d_94a522d09624) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

}



/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)1)) {
        me->setLocation(50, filename);
            _lr_signal = CONSTANT_FIXED_POS_0_31;
        me->setLocation(51, filename);
            _lm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(52, filename);
            _rm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(54, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(55, filename);
        {
            _lmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(56, filename);
        {
            _rmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(57, filename);
        {
            _termin.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(59, filename);
            _commands.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(60, filename);
            _webinterface.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(61, filename);
            _readlr.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(62, filename);
        me->suspend(me);


        me->setLocation(64, filename);
        _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(65, filename);
        _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(66, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(67, filename);
        _termin.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_commands, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _input; 


        me->setLocation(76, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_b803117b_6f1a_461e_8bcb_00bf15032ec5) ;
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

        me->setLocation(77, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_33578320_0146_4a44_9c8e_3acedbf8c346) ;
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

        me->setLocation(78, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_8f3c4961_7fd8_40e0_a9fd_4cc8d174d4cb) ;
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

        me->setLocation(79, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_293ebace_1a3e_4611_9589_06eebc812469) ;
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

        me->setLocation(80, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_9701e47b_7126_4e68_916e_eead825dfe42) ;
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

        me->setLocation(82, filename);
        {
                while ( 1 )
                {

                    me->setLocation(83, filename);
                    // GET STATEMENT BEGIN
                    try {
                        _termin.beginSequence(me);
                        _termin.fromF(_input,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31)) ;
                        _termin.fromSkip((pearlrt::Fixed<31>)(1));
                        _termin.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _termin.updateRst(&s) ) {
                            _termin.endSequence();
                            throw;
                        }
                        _termin.endSequence();
                    }
                    // GET STATEMENT END

                    me->setLocation(88, filename);
                    if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(89, filename);
                            _demo.activate( me,
                                              0,
                                              /* prio   */  pearlrt::Prio(),
                                              /* at     */  pearlrt::Clock(),
                                              /* after  */  pearlrt::Duration(),
                                              /* all    */  pearlrt::Duration(),
                                              /* until  */  pearlrt::Clock(),
                                              /* during */  pearlrt::Duration()
                                            );

                        me->setLocation(90, filename);
                        me->suspend(me);


                    }

                    me->setLocation(93, filename);
                    if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(94, filename);
                            _parcour.activate( me,
                                              0,
                                              /* prio   */  pearlrt::Prio(),
                                              /* at     */  pearlrt::Clock(),
                                              /* after  */  pearlrt::Duration(),
                                              /* all    */  pearlrt::Duration(),
                                              /* until  */  pearlrt::Clock(),
                                              /* during */  pearlrt::Duration()
                                            );

                        me->setLocation(95, filename);
                        me->suspend(me);


                    }


                }

        }
}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _input; 

        pearlrt::Fixed<31>  _is_driving(0); 


        me->setLocation(107, filename);
        _commands.terminate(me);

        me->setLocation(110, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_b803117b_6f1a_461e_8bcb_00bf15032ec5) ;
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

        me->setLocation(111, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_82d9ac15_f195_4f2e_8dcd_6398e1e0f4b5) ;
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
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_8f3c4961_7fd8_40e0_a9fd_4cc8d174d4cb) ;
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

        me->setLocation(113, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_dd0cb1d9_b2a1_4cf1_a108_a015aa39c669) ;
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
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_a41585cb_4327_49ba_b3fa_d3d8697127a0) ;
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

        me->setLocation(115, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_00b41f7c_558f_42da_a94e_a65185b8ee03) ;
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

        me->setLocation(117, filename);
        {
                while ( 1 )
                {

                    me->setLocation(118, filename);
                    // GET STATEMENT BEGIN
                    try {
                        _termin.beginSequence(me);
                        _termin.fromF(_input,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31)) ;
                        _termin.fromSkip((pearlrt::Fixed<31>)(1));
                        _termin.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _termin.updateRst(&s) ) {
                            _termin.endSequence();
                            throw;
                        }
                        _termin.endSequence();
                    }
                    // GET STATEMENT END

                    me->setLocation(119, filename);
                    if ((_is_driving == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(120, filename);
                        if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                            me->setLocation(121, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_9fedbac9_727f_4e59_9382_6d0ab1ba8e73) ;
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

                            me->setLocation(123, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(124, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(125, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(127, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(129, filename);
                                _follow_line.activate( me,
                                                  0,
                                                  /* prio   */  pearlrt::Prio(),
                                                  /* at     */  pearlrt::Clock(),
                                                  /* after  */  pearlrt::Duration(),
                                                  /* all    */  pearlrt::Duration(),
                                                  /* until  */  pearlrt::Clock(),
                                                  /* during */  pearlrt::Duration()
                                                );

                        }

                        me->setLocation(131, filename);
                        if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                            me->setLocation(132, filename);
                                _commands.activate( me,
                                                  0,
                                                  /* prio   */  pearlrt::Prio(),
                                                  /* at     */  pearlrt::Clock(),
                                                  /* after  */  pearlrt::Duration(),
                                                  /* all    */  pearlrt::Duration(),
                                                  /* until  */  pearlrt::Clock(),
                                                  /* during */  pearlrt::Duration()
                                                );

                            me->setLocation(133, filename);
                            me->terminate(me);

                        }

                    }

                    me->setLocation(137, filename);
                    if ((_is_driving == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(138, filename);
                        if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(139, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_f34cb437_5a12_4ca2_8017_0a197ac93aed) ;
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

                            me->setLocation(141, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(142, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(143, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(146, filename);
                                pearlrt::Semaphore::request( me, 1, fl_semas);
                            me->setLocation(147, filename);
                            _follow_line.terminate(me);

                            me->setLocation(148, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                        }

                    }


                }

        }
}
DCLTASK(_follow_line, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop; 


        me->setLocation(160, filename);
        pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
        me->setLocation(161, filename);
            _stop = _global_stop;
        me->setLocation(162, filename);
        pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);
        me->setLocation(164, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(165, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(166, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(167, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(168, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(170, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(171, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(172, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(175, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(176, filename);
                            _lspeed = _in;
                        me->setLocation(177, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(180, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(181, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(182, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(185, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(186, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(187, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(189, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(190, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(191, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(194, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(195, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(197, filename);
                        pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                    me->setLocation(199, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(0.001))
                                  );

                    me->setLocation(201, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(203, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(204, filename);
                        _stop = _global_stop;
                    me->setLocation(205, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(207, filename);
            pearlrt::Semaphore::release( me, 1, fl_semas);
        me->setLocation(208, filename);
        me->suspend(me);


}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(220, filename);
        pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
        me->setLocation(221, filename);
            _speed = _lm_speed;
        me->setLocation(222, filename);
        pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
        me->setLocation(225, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(226, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(227, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(230, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(231, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(233, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_1b16f89a_f485_49e8_9b34_224c7e71fec4) ;
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

        me->setLocation(234, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
        me->setLocation(236, filename);
            pearlrt::Semaphore::release( me, 1, dl_semas);
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(248, filename);
        pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
        me->setLocation(249, filename);
            _speed = _rm_speed;
        me->setLocation(250, filename);
        pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
        me->setLocation(253, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(254, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(255, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(257, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(258, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(260, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_0ce58caf_c3fd_4a79_a246_b562370f1fda) ;
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

        me->setLocation(261, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
        me->setLocation(263, filename);
            pearlrt::Semaphore::release( me, 1, dr_semas);
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(274, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(275, filename);
        {
                while ( 1 )
                {

                    me->setLocation(276, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(277, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(279, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(280, filename);
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

                    me->setLocation(284, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(285, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(286, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(289, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(290, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(291, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(294, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(295, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(296, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(299, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(300, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(301, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(304, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(305, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(306, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(309, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(310, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(311, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(314, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(315, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(316, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(319, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(320, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(321, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(324, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(325, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(329, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(330, filename);
                        _lr_signal = _out;
                    me->setLocation(331, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(332, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(337, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(428, filename);
        {
                while ( 1 )
                {

                    me->setLocation(429, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(431, filename);
                    // GET STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.fromA(_request) ;
                        _usHttpSocket.fromSkip((pearlrt::Fixed<31>)(1));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // GET STATEMENT END

                    me->setLocation(433, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_33a542fa_1084_47d7_a7ae_d0b417784733) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(434, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_f676c26a_d85c_4cab_b4b0_60ad0cc05c96) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(435, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_4291dfc6_8130_4beb_b77a_5b9c0a79ba67) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(437, filename);
                    if ((_request == CONSTANT_CHARACTER_1c9aa517_8d46_4794_91db_da62b8f8d9cc).getBoolean()) {
                        me->setLocation(438, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(440, filename);
                        if ((_request == CONSTANT_CHARACTER_eafe9030_2b4b_4bc3_b625_0a57deab949f).getBoolean()) {
                            me->setLocation(441, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(443, filename);
                            if ((_request == CONSTANT_CHARACTER_8c03b3c6_dee6_4a2d_b398_733c40336e34).getBoolean()) {
                                me->setLocation(444, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(446, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(451, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



