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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_9fd21ae2_031c_4c83_91f6_68c1e70b1489("u");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_233c805f_fbf5_4772_9e87_ccc1703499f9("Command 0: stop");
static /*const*/ pearlrt::Character<22>         CONSTANT_CHARACTER_3e49fde7_339d_4b9b_a7e1_93efdd595f36("Command 1: follow_line");
static /*const*/ pearlrt::Character<18>         CONSTANT_CHARACTER_27887df8_de8f_454d_a8d3_f2a45b2879b8("Command 2: reverse");
static /*const*/ pearlrt::Character<22>         CONSTANT_CHARACTER_4a877a83_6bf5_4b3a_9bc9_949924ba0f8b("Command 3: nothing yet");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_9dc59e98_c3cf_40a5_a1a2_88e7767eab24("linker Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_5ec50f3d_35c2_4981_a4d9_46a853b5bd64("rechter Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_2b45cc75_6db2_4fec_805c_d7d6d47c892b("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_15ec5dca_b464_47d9_9b8d_88a9cb8d88ed("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_7bcdaf54_78d6_4c60_8f8f_7b0ef595b563("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_6711a86d_8e43_4f8b_bf82_940dd94daf23("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_d24a92a6_521a_48f5_9c35_ce49bfbfcc8c("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_7baa814c_3c09_4225_a0f9_327573d1ed5d("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_b8cd83c9_520a_4275_9808_cb057a48def9("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_247b2669_651f_44b8_8414_b9d5ef277e00("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_0af33d94_0892_4a8f_a62c_7d67fa3f73e4("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_90b63d32_978c_4f9f_9587_840cba856221("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_e70ed3b6_1a88_4f03_9ff9_b50bff57e5f0("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<25>         CONSTANT_CHARACTER_0cfc490e_cfe5_4558_8746_825d57ae243f("<li>Geschwindigkeit Lins:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_157612b6_08ae_41ef_b732_d9f59af2cc28("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_ed470ebd_c89b_4d0c_bb4e_ca10e545dde6("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_d82a33da_af2e_45a4_a54b_ab01b33d16e2("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_11623db9_823f_485f_b4b1_920c7689ed6d("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_b940c275_9414_4836_a6ce_a39922f9ade5("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_dc0f1e79_d32a_4730_8336_f60fc38f2f3f("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_eec3fd8c_03de_4627_b7bd_16c80f5f5362("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_29baea71_b0fd_49d2_9771_0eb1963d00be("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_4356b675_8063_4e8c_bfcf_ab861064a0f6("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_aee7685c_74d1_4e4d_acaf_d8dde83bb6b4("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_de6106a6_8030_4ded_a961_ccbfcc5c1bd4("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_ce2ba335_5468_4e56_b7d9_c3d51a56b07d("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_841abc3f_fb68_4e67_be2e_c62e99be676a("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_73a81e29_8e6b_4b6a_9d44_8edb200a2caa("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_2f5bebe8_ea68_4361_a659_44e2d1f797ce("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_f192d554_4dae_4be5_9731_36c95da7b577("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_432575ae_28ae_4755_9268_0b1a46576d39("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_b3c10e89_4820_4f8e_8725_44281643e7ed("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_48fb2cc8_297f_4488_b6cb_214315c6094e(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_21ed4c92_8002_423f_bbd9_abc8738f1216("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_2f378a8c_9027_4ed5_b312_5deb16c5b525(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_5a0bbc7d_1875_4703_9ec9_9f043161a6d9("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_3f8e29a7_6eaa_4e10_9e6e_809c232e92aa("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_ffff8bdb_f1d5_4016_953d_24dde20d5e08("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_251f4bbc_9f0f_4986_a5f7_9199a6be3ba2("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_main);
SPCTASK(_demo);
SPCTASK(_readlr);
SPCTASK(_driveleft);
SPCTASK(_commands);
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
DCLSEMA(_fl,1);


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


    me->setLocation(313, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(314, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(317, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(318, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(319, filename);
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

                        me->setLocation(320, filename);
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

                        me->setLocation(321, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(323, filename);
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

                        me->setLocation(324, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(326, filename);
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

                        me->setLocation(327, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(329, filename);
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

                        me->setLocation(330, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(319, filename);

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

        me->setLocation(334, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(335, filename);
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

                        me->setLocation(336, filename);
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

                        me->setLocation(337, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(339, filename);
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

                        me->setLocation(340, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(342, filename);
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

                        me->setLocation(343, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(345, filename);
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

                        me->setLocation(346, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(335, filename);

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

    me->setLocation(351, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(352, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(353, filename);
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

                        me->setLocation(354, filename);
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

                        me->setLocation(355, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(357, filename);
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

                        me->setLocation(358, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(360, filename);
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

                        me->setLocation(361, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(363, filename);
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

                        me->setLocation(364, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(353, filename);

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

        me->setLocation(368, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(369, filename);
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

                        me->setLocation(370, filename);
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

                        me->setLocation(371, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(373, filename);
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

                        me->setLocation(374, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(376, filename);
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

                        me->setLocation(377, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(379, filename);
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

                        me->setLocation(380, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(369, filename);

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


    me->setLocation(428, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(429, filename);
        _speedl = _lm_speed;
    me->setLocation(430, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(432, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(433, filename);
        _speedr = _rm_speed;
    me->setLocation(434, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(437, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b8cd83c9_520a_4275_9808_cb057a48def9) ;
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

    me->setLocation(438, filename);
    _style( me);
    me->setLocation(439, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_247b2669_651f_44b8_8414_b9d5ef277e00) ;
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

    me->setLocation(440, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0af33d94_0892_4a8f_a62c_7d67fa3f73e4) ;
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

    me->setLocation(442, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_90b63d32_978c_4f9f_9587_840cba856221) ;
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

    me->setLocation(443, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e70ed3b6_1a88_4f03_9ff9_b50bff57e5f0) ;
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

    me->setLocation(444, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0cfc490e_cfe5_4558_8746_825d57ae243f) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_157612b6_08ae_41ef_b732_d9f59af2cc28) ;
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

    me->setLocation(445, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ed470ebd_c89b_4d0c_bb4e_ca10e545dde6) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_157612b6_08ae_41ef_b732_d9f59af2cc28) ;
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

    me->setLocation(446, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_d82a33da_af2e_45a4_a54b_ab01b33d16e2) ;
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

    me->setLocation(447, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_11623db9_823f_485f_b4b1_920c7689ed6d) ;
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

    me->setLocation(448, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b940c275_9414_4836_a6ce_a39922f9ade5) ;
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
    me->setLocation(452, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b8cd83c9_520a_4275_9808_cb057a48def9) ;
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

    me->setLocation(453, filename);
    _style( me);
    me->setLocation(454, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_dc0f1e79_d32a_4730_8336_f60fc38f2f3f) ;
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

    me->setLocation(456, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_eec3fd8c_03de_4627_b7bd_16c80f5f5362) ;
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

    me->setLocation(457, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_29baea71_b0fd_49d2_9771_0eb1963d00be) ;
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

    me->setLocation(458, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4356b675_8063_4e8c_bfcf_ab861064a0f6) ;
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

    me->setLocation(459, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_11623db9_823f_485f_b4b1_920c7689ed6d) ;
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

    me->setLocation(460, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_aee7685c_74d1_4e4d_acaf_d8dde83bb6b4) ;
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
    me->setLocation(464, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b8cd83c9_520a_4275_9808_cb057a48def9) ;
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

    me->setLocation(465, filename);
    _style( me);
    me->setLocation(466, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_dc0f1e79_d32a_4730_8336_f60fc38f2f3f) ;
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

    me->setLocation(468, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_de6106a6_8030_4ded_a961_ccbfcc5c1bd4) ;
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

    me->setLocation(469, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ce2ba335_5468_4e56_b7d9_c3d51a56b07d) ;
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

    me->setLocation(470, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4356b675_8063_4e8c_bfcf_ab861064a0f6) ;
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
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_11623db9_823f_485f_b4b1_920c7689ed6d) ;
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

    me->setLocation(472, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_841abc3f_fb68_4e67_be2e_c62e99be676a) ;
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
    me->setLocation(476, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b8cd83c9_520a_4275_9808_cb057a48def9) ;
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
    _style( me);
    me->setLocation(478, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_dc0f1e79_d32a_4730_8336_f60fc38f2f3f) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_73a81e29_8e6b_4b6a_9d44_8edb200a2caa) ;
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
    me->setLocation(485, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2f5bebe8_ea68_4361_a659_44e2d1f797ce) ;
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
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f192d554_4dae_4be5_9731_36c95da7b577) ;
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

    me->setLocation(487, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_432575ae_28ae_4755_9268_0b1a46576d39) ;
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

    me->setLocation(488, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b3c10e89_4820_4f8e_8725_44281643e7ed) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_48fb2cc8_297f_4488_b6cb_214315c6094e) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_21ed4c92_8002_423f_bbd9_abc8738f1216) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_2f378a8c_9027_4ed5_b312_5deb16c5b525) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_5a0bbc7d_1875_4703_9ec9_9f043161a6d9) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_3f8e29a7_6eaa_4e10_9e6e_809c232e92aa) ;
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

    me->setLocation(494, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ffff8bdb_f1d5_4016_953d_24dde20d5e08) ;
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

    me->setLocation(495, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_251f4bbc_9f0f_4986_a5f7_9199a6be3ba2) ;
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
        me->setLocation(74, filename);
        {
                while ( 1 )
                {

                    pearlrt::Fixed<31>  _command; 

                    me->setLocation(76, filename);
                    // GET STATEMENT BEGIN
                    try {
                        _termin.beginSequence(me);
                        _termin.fromF(_command,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31)) ;
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

                    me->setLocation(78, filename);
                    if ((_command == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(79, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_233c805f_fbf5_4772_9e87_ccc1703499f9) ;
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

                        me->setLocation(81, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(82, filename);
                            _global_stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(83, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(86, filename);
                            pearlrt::Semaphore::request( me, 1, fl_semas);
                        me->setLocation(87, filename);
                        _follow_line.terminate(me);

                        me->setLocation(88, filename);
                            pearlrt::Semaphore::release( me, 1, fl_semas);
                    }

                    me->setLocation(91, filename);
                    if ((_command == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(92, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_3e49fde7_339d_4b9b_a7e1_93efdd595f36) ;
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

                        me->setLocation(93, filename);
                            pearlrt::Semaphore::request( me, 1, fl_semas);
                        me->setLocation(94, filename);
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

                    me->setLocation(97, filename);
                    if ((_command == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(98, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_27887df8_de8f_454d_a8d3_f2a45b2879b8) ;
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

                    }

                    me->setLocation(101, filename);
                    if ((_command == CONSTANT_FIXED_POS_3_31).getBoolean()) {
                        me->setLocation(102, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_4a877a83_6bf5_4b3a_9bc9_949924ba0f8b) ;
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

                    }


                }

        }
}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
}
DCLTASK(_follow_line, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop; 


        me->setLocation(118, filename);
        pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
        me->setLocation(119, filename);
            _stop = _global_stop;
        me->setLocation(120, filename);
        pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);
        me->setLocation(122, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(123, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(124, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(125, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(126, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(128, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(129, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(130, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(133, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(134, filename);
                            _lspeed = _in;
                        me->setLocation(135, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(138, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(139, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(140, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(143, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(144, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(145, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(147, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(148, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(149, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(152, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(153, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(155, filename);
                        pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                    me->setLocation(157, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(0.001))
                                  );

                    me->setLocation(159, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(161, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(162, filename);
                        _stop = _global_stop;
                    me->setLocation(163, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(165, filename);
            pearlrt::Semaphore::release( me, 1, fl_semas);
        me->setLocation(166, filename);
        me->suspend(me);


}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(178, filename);
        pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
        me->setLocation(179, filename);
            _speed = _lm_speed;
        me->setLocation(180, filename);
        pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
        me->setLocation(183, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(184, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(185, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(188, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(189, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(191, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_9dc59e98_c3cf_40a5_a1a2_88e7767eab24) ;
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

        me->setLocation(192, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
        me->setLocation(194, filename);
            pearlrt::Semaphore::release( me, 1, dl_semas);
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(206, filename);
        pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
        me->setLocation(207, filename);
            _speed = _rm_speed;
        me->setLocation(208, filename);
        pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
        me->setLocation(211, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(212, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(213, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(215, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(216, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(218, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_5ec50f3d_35c2_4981_a4d9_46a853b5bd64) ;
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

        me->setLocation(219, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
        me->setLocation(221, filename);
            pearlrt::Semaphore::release( me, 1, dr_semas);
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(232, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(233, filename);
        {
                while ( 1 )
                {

                    me->setLocation(234, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(235, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(237, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(238, filename);
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

                    me->setLocation(242, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(244, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(245, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(248, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(250, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(251, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(254, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(256, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(257, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(260, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(262, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(263, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(266, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(268, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(269, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(272, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(274, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(275, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(278, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(280, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(281, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(284, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(286, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(287, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(290, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(292, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(296, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(297, filename);
                        _lr_signal = _out;
                    me->setLocation(298, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(299, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(304, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(395, filename);
        {
                while ( 1 )
                {

                    me->setLocation(396, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(398, filename);
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

                    me->setLocation(400, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_2b45cc75_6db2_4fec_805c_d7d6d47c892b) ;
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

                    me->setLocation(401, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_15ec5dca_b464_47d9_9b8d_88a9cb8d88ed) ;
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

                    me->setLocation(402, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_7bcdaf54_78d6_4c60_8f8f_7b0ef595b563) ;
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

                    me->setLocation(404, filename);
                    if ((_request == CONSTANT_CHARACTER_6711a86d_8e43_4f8b_bf82_940dd94daf23).getBoolean()) {
                        me->setLocation(405, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(407, filename);
                        if ((_request == CONSTANT_CHARACTER_d24a92a6_521a_48f5_9c35_ce49bfbfcc8c).getBoolean()) {
                            me->setLocation(408, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(410, filename);
                            if ((_request == CONSTANT_CHARACTER_7baa814c_3c09_4225_a0f9_327573d1ed5d).getBoolean()) {
                                me->setLocation(411, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(413, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(418, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



