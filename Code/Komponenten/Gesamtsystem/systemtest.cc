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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_50_31(50);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_3fc05522_5f97_4cbe_b251_5098bbac8360("u");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_7a890524_a211_49e3_af83_9b36e14b34b6("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_2c30fb89_6876_464b_a9cb_bc5ef812bf75("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_5cd986ee_c953_4c2e_b148_8243e2d42c65("Waehlen Sie:");
static /*const*/ pearlrt::Character<30>         CONSTANT_CHARACTER_8645d851_106f_4637_a689_5ab2bc523fe3("1 um den Demo-Modus zu starten");
static /*const*/ pearlrt::Character<33>         CONSTANT_CHARACTER_5503115d_f2f8_4eb4_ab56_7d10c986a0ac("2 um den Parcour-Modus zu starten");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_9ee273d9_ca7b_43c9_94fb_27b8aeeaeac0("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_fce1fa14_bbb9_45f1_9bd7_7d7c51c2d0b3("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_7b275058_1a07_4d60_b0fd_c8f3f26df9f9("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_23cf763e_86f7_46c0_9e44_5d0da490a68d("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_f5a46a7d_4183_4164_a4dc_04a078d661e7("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_4039c8e7_58ba_40d4_a02a_a397df92bb26("main");
static /*const*/ pearlrt::Character<7>         CONSTANT_CHARACTER_562a887b_9052_4d17_aacc_9a7ce9dd98a9("vor try");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_513a820a_b787_47ee_aa2c_f16766eb2f28("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_e907f232_567e_45a0_8bb6_8bd9739921ec("Command 0: stop");
static /*const*/ pearlrt::Character<21>         CONSTANT_CHARACTER_25365229_aa99_4d80_8dd8_22b3b545a8f0("demo speed geshrieben");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_8267f7c9_a38a_48c2_b91d_de0979d236d9("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_5db9cbd6_1c29_49ef_9005_affaadaa304b("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_14a9f163_2ac2_4a6a_a5e3_758cf9bdbd76("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_9fdaca13_f0b6_4a7c_97db_dd0e67853209("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_3bd8e2e7_d05b_466b_a5b3_9afe3a3dfa7d("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_5e924053_3bbb_47bc_ab46_d577502c3725("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_6c22857c_bd5f_4264_b142_dd7b678402b8("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_6f4644eb_1d6e_4d8a_942c_41dbcaa6408a("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_11f27927_5072_4d10_9504_dfafa1469352("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_f0121b88_411e_4947_80a9_b903bcbc367a("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_6e267fce_42d0_4723_a8f9_46cfbe2390d3("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_fed7a32f_b072_4b97_be76_c3a39aafa65a("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_5972d7c2_cd16_4cd6_98b8_7c2d2746390c("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_bcbd1307_8f46_4fbf_9b02_adf44a92d658("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<25>         CONSTANT_CHARACTER_97a50478_a9c5_4c12_b92f_cdeba0542a47("<li>Geschwindigkeit Lins:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_9e5d1451_5215_4bbf_a245_c390260b894c("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_682b9174_aa98_46e5_8f5b_17f6d2505a4e("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_b89f9c1a_f0ec_4188_b64a_8b22513035a5("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_8a8c5233_5761_4dc9_9d3b_54df39e77fae("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_62cf5ec5_fefe_4659_86b3_24fab1897533("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_4c2f7ba0_6c5c_45fa_ac7d_fb8049e1cb41("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_f18e642f_eb1c_4053_b030_e67c7a467484("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_fffb48c8_baba_4e70_a092_9d508d375c1f("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_25a0351c_1f55_418e_ae68_8799403feebd("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_e3f60717_0443_4dc5_8de8_319f709e0c42("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_4ebb9d9d_078c_478c_ac0b_68ff7f10df13("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_0b2d63ae_9f08_4636_ab4a_3d665b585a5d("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_f14e7004_6a0a_4194_94c8_0fdb795462b1("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_1b63041e_2397_4295_a934_0ed5a42ee234("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_bcd4e972_c828_4eff_9f4d_09abe2ef00af("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_f637862a_180e_4f23_80d6_55fd53af5d3c("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_bc625780_5465_4dac_9591_3e69c297e8f8("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_6af45db7_49bb_460e_ac2e_4496359f7b38("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_20eff0be_6df7_4838_98ac_9dbbcb78009e(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_f136a5ec_e957_4cc1_b3c3_b73214311136("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_1eebfcc3_c574_496f_99d0_15f37148d636(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_a5eaa9a3_7c10_473b_82d4_437fc8156ee8("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_c5fe0f16_e31d_4c48_ba0a_82fcf8438bba("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_63923638_3043_4304_ab70_309ce111ecc7("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_6ee3225e_b6c6_4e29_ae3c_9fa1b6dca6fc("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_main);
SPCTASK(_demo);
SPCTASK(_readlr);
SPCTASK(_driveleft);
SPCTASK(_parcour);
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
_menu(pearlrt::Task *me);
void
_demo_menu(pearlrt::Task *me);
void
_straight(pearlrt::Task *me, pearlrt::Fixed<31>  _speed);
void
_parcour_menu(pearlrt::Task *me);
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

pearlrt::Fixed<31>  _demo_state(0); 

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
DCLSEMA(_p,0);
DCLSEMA(_dt,0);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *dt_semas[] = {&_dt}; 
static pearlrt::Semaphore *dl_dr_semas[] = {&_dl,&_dr}; 
static pearlrt::Semaphore *p_semas[] = {&_p}; 
static pearlrt::Semaphore *lr_buffer_out_semas[] = {&_lr_buffer_out}; 
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
DCLBOLT(_demo_state_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Bolt *stop_bolt_bolts[] = {&_stop_bolt}; 
static pearlrt::Bolt *demo_state_bolt_bolts[] = {&_demo_state_bolt}; 
static pearlrt::Bolt *lm_bolt_bolts[] = {&_lm_bolt}; 
static pearlrt::Bolt *rm_bolt_bolts[] = {&_rm_bolt}; 
static pearlrt::Bolt *lr_bolt_bolts[] = {&_lr_bolt}; 


/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// PROCEDURE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
void
_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 


    me->setLocation(80, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7a890524_a211_49e3_af83_9b36e14b34b6) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_2c30fb89_6876_464b_a9cb_bc5ef812bf75) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_5cd986ee_c953_4c2e_b148_8243e2d42c65) ;
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

    me->setLocation(83, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_8645d851_106f_4637_a689_5ab2bc523fe3) ;
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

    me->setLocation(84, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_5503115d_f2f8_4eb4_ab56_7d10c986a0ac) ;
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

    me->setLocation(86, filename);
    {
            while ( 1 )
            {

                me->setLocation(87, filename);
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

                me->setLocation(92, filename);
                if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                    me->setLocation(93, filename);
                        goto _repeat;

                }

                me->setLocation(96, filename);
                if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                    me->setLocation(97, filename);
                    _demo_menu( me);
                }

                me->setLocation(100, filename);
                if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                    me->setLocation(101, filename);
                    _parcour_menu( me);
                }


            }

            _repeat: ;
    }
}

void
_demo_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 

    pearlrt::BitString<1>  _temp; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(112, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7a890524_a211_49e3_af83_9b36e14b34b6) ;
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
        _termout.toA(CONSTANT_CHARACTER_9ee273d9_ca7b_43c9_94fb_27b8aeeaeac0) ;
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
        _termout.toA(CONSTANT_CHARACTER_5cd986ee_c953_4c2e_b148_8243e2d42c65) ;
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
        _termout.toA(CONSTANT_CHARACTER_fce1fa14_bbb9_45f1_9bd7_7d7c51c2d0b3) ;
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

    me->setLocation(116, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7b275058_1a07_4d60_b0fd_c8f3f26df9f9) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_23cf763e_86f7_46c0_9e44_5d0da490a68d) ;
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

    me->setLocation(119, filename);
    {
            while ( 1 )
            {

                me->setLocation(120, filename);
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

                me->setLocation(121, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                    me->setLocation(122, filename);
                    if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(123, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_f5a46a7d_4183_4164_a4dc_04a078d661e7) ;
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

                        me->setLocation(125, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(126, filename);
                            _global_stop = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(127, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(129, filename);
                            _is_driving = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(131, filename);
                        pearlrt::Bolt::reserve( me, 1, demo_state_bolt_bolts);
                        me->setLocation(132, filename);
                            _demo_state = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(133, filename);
                        pearlrt::Bolt::free( me, 1, demo_state_bolt_bolts);
                        me->setLocation(135, filename);
                            _demo.activate( me,
                                              0,
                                              /* prio   */  pearlrt::Prio(),
                                              /* at     */  pearlrt::Clock(),
                                              /* after  */  pearlrt::Duration(),
                                              /* all    */  pearlrt::Duration(),
                                              /* until  */  pearlrt::Clock(),
                                              /* during */  pearlrt::Duration()
                                            );

                    }

                    me->setLocation(138, filename);
                    if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(139, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_4039c8e7_58ba_40d4_a02a_a397df92bb26) ;
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

                        me->setLocation(140, filename);
                            goto _repeat;

                    }

                }

                me->setLocation(144, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                    me->setLocation(146, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_562a887b_9052_4d17_aacc_9a7ce9dd98a9) ;
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

                    #warning __cpp__ inline inserted
                    {int dummy = pearlrt::Semaphore::dotry( me, 1, dt_semas);
                    if (dummy) { _temp.x = 0x80;} else {_temp.x = 0;}}


                    me->setLocation(147, filename);
                    me->setLocation(151, filename);
                    if (_temp.getBoolean()) {
                        me->setLocation(152, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_513a820a_b787_47ee_aa2c_f16766eb2f28) ;
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

                        me->setLocation(153, filename);
                        _demo.terminate(me);

                        me->setLocation(154, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                    me->setLocation(157, filename);
                    if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(158, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_e907f232_567e_45a0_8bb6_8bd9739921ec) ;
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

                        me->setLocation(160, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(161, filename);
                            _global_stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(162, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(165, filename);
                        if ((_temp == pearlrt::BitString<1>(0)).getBoolean()) {
                            me->setLocation(166, filename);
                                pearlrt::Semaphore::request( me, 1, dt_semas);
                            me->setLocation(167, filename);
                            _demo.terminate(me);

                        }

                        me->setLocation(169, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                }


            }

            _repeat: ;
    }
}

void
_straight(pearlrt::Task *me, pearlrt::Fixed<31>  _speed)
{
    pearlrt::Fixed<31>  _stop(0); 


    me->setLocation(192, filename);
    {
        pearlrt::Fixed<15> a_value(1);

        pearlrt::Fixed<31> e_value;
        e_value = CONSTANT_FIXED_POS_50_31;

        pearlrt::Fixed<15> s_value(1);

            while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                    ((a_value <= e_value).getBoolean())) ||
                    (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                    ((a_value >= e_value).getBoolean())))
            {

                if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                    break;

                me->setLocation(193, filename);
                pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                me->setLocation(194, filename);
                    _lm_speed = _speed;
                me->setLocation(195, filename);
                pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                me->setLocation(197, filename);
                pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                me->setLocation(198, filename);
                    _rm_speed = _speed;
                me->setLocation(199, filename);
                pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                me->setLocation(201, filename);
                // PUT STATEMENT BEGIN
                try {
                    _termout.beginSequence(me);
                    _termout.toA(CONSTANT_CHARACTER_25365229_aa99_4d80_8dd8_22b3b545a8f0) ;
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

                me->setLocation(203, filename);
                    _driveleft.activate( me,
                                      0,
                                      /* prio   */  pearlrt::Prio(),
                                      /* at     */  pearlrt::Clock(),
                                      /* after  */  pearlrt::Duration(),
                                      /* all    */  pearlrt::Duration(),
                                      /* until  */  pearlrt::Clock(),
                                      /* during */  pearlrt::Duration()
                                    );

                me->setLocation(204, filename);
                    _driveright.activate( me,
                                      0,
                                      /* prio   */  pearlrt::Prio(),
                                      /* at     */  pearlrt::Clock(),
                                      /* after  */  pearlrt::Duration(),
                                      /* all    */  pearlrt::Duration(),
                                      /* until  */  pearlrt::Clock(),
                                      /* during */  pearlrt::Duration()
                                    );

                me->setLocation(206, filename);
                    pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                me->setLocation(208, filename);
                _driveleft.terminate(me);

                me->setLocation(209, filename);
                _driveright.terminate(me);

                me->setLocation(211, filename);
                pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                me->setLocation(212, filename);
                    _stop = _global_stop;
                me->setLocation(213, filename);
                pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                me->setLocation(192, filename);

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

void
_parcour_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(223, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7a890524_a211_49e3_af83_9b36e14b34b6) ;
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

    me->setLocation(224, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_8267f7c9_a38a_48c2_b91d_de0979d236d9) ;
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

    me->setLocation(225, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_5cd986ee_c953_4c2e_b148_8243e2d42c65) ;
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

    me->setLocation(226, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_fce1fa14_bbb9_45f1_9bd7_7d7c51c2d0b3) ;
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

    me->setLocation(227, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_5db9cbd6_1c29_49ef_9005_affaadaa304b) ;
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

    me->setLocation(228, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_23cf763e_86f7_46c0_9e44_5d0da490a68d) ;
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

    me->setLocation(230, filename);
    {
            while ( 1 )
            {

                me->setLocation(231, filename);
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

                me->setLocation(232, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                    me->setLocation(233, filename);
                    if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(234, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_14a9f163_2ac2_4a6a_a5e3_758cf9bdbd76) ;
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

                        me->setLocation(236, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(237, filename);
                            _global_stop = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(238, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(240, filename);
                            _is_driving = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(242, filename);
                            _parcour.activate( me,
                                              0,
                                              /* prio   */  pearlrt::Prio(),
                                              /* at     */  pearlrt::Clock(),
                                              /* after  */  pearlrt::Duration(),
                                              /* all    */  pearlrt::Duration(),
                                              /* until  */  pearlrt::Clock(),
                                              /* during */  pearlrt::Duration()
                                            );

                    }

                    me->setLocation(244, filename);
                    if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(245, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_4039c8e7_58ba_40d4_a02a_a397df92bb26) ;
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

                        me->setLocation(246, filename);
                            goto _repeat;

                    }

                }

                me->setLocation(250, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                    me->setLocation(251, filename);
                    if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(252, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_e907f232_567e_45a0_8bb6_8bd9739921ec) ;
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

                        me->setLocation(254, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(255, filename);
                            _global_stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(256, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(259, filename);
                            pearlrt::Semaphore::request( me, 1, p_semas);
                        me->setLocation(260, filename);
                        _parcour.terminate(me);

                        me->setLocation(261, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                }


            }

            _repeat: ;
    }
}

void
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _motorindex, pearlrt::Fixed<31>  _steps, pearlrt::Fixed<31>  _dir, pearlrt::Duration  _time)
{
    pearlrt::BitString<4>  _a(pearlrt::BitString<4>(0xa)); 
    pearlrt::BitString<4>  _b(pearlrt::BitString<4>(0x9)); 

    pearlrt::BitString<4>  _c; 
    pearlrt::BitString<4>  _d; 


    me->setLocation(459, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(460, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(463, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(464, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(465, filename);
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

                        me->setLocation(466, filename);
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

                        me->setLocation(467, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(469, filename);
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

                        me->setLocation(470, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(472, filename);
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

                        me->setLocation(473, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(475, filename);
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

                        me->setLocation(476, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(465, filename);

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

        me->setLocation(480, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(481, filename);
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

                        me->setLocation(482, filename);
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

                        me->setLocation(483, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(485, filename);
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

                        me->setLocation(486, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(488, filename);
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

                        me->setLocation(489, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(491, filename);
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

                        me->setLocation(492, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(481, filename);

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

    me->setLocation(497, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(498, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(499, filename);
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

                        me->setLocation(500, filename);
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

                        me->setLocation(501, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(503, filename);
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

                        me->setLocation(504, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(506, filename);
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

                        me->setLocation(507, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(509, filename);
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

                        me->setLocation(510, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(499, filename);

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

        me->setLocation(514, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(515, filename);
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

                        me->setLocation(516, filename);
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

                        me->setLocation(517, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(519, filename);
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

                        me->setLocation(520, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(522, filename);
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

                        me->setLocation(523, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(525, filename);
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

                        me->setLocation(526, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(515, filename);

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


    me->setLocation(574, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(575, filename);
        _speedl = _lm_speed;
    me->setLocation(576, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(578, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(579, filename);
        _speedr = _rm_speed;
    me->setLocation(580, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(583, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f0121b88_411e_4947_80a9_b903bcbc367a) ;
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

    me->setLocation(584, filename);
    _style( me);
    me->setLocation(585, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6e267fce_42d0_4723_a8f9_46cfbe2390d3) ;
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

    me->setLocation(586, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_fed7a32f_b072_4b97_be76_c3a39aafa65a) ;
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

    me->setLocation(588, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_5972d7c2_cd16_4cd6_98b8_7c2d2746390c) ;
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

    me->setLocation(589, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_bcbd1307_8f46_4fbf_9b02_adf44a92d658) ;
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

    me->setLocation(590, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_97a50478_a9c5_4c12_b92f_cdeba0542a47) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_9e5d1451_5215_4bbf_a245_c390260b894c) ;
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

    me->setLocation(591, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_682b9174_aa98_46e5_8f5b_17f6d2505a4e) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_9e5d1451_5215_4bbf_a245_c390260b894c) ;
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

    me->setLocation(592, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b89f9c1a_f0ec_4188_b64a_8b22513035a5) ;
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

    me->setLocation(593, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8a8c5233_5761_4dc9_9d3b_54df39e77fae) ;
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

    me->setLocation(594, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_62cf5ec5_fefe_4659_86b3_24fab1897533) ;
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
    me->setLocation(598, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f0121b88_411e_4947_80a9_b903bcbc367a) ;
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

    me->setLocation(599, filename);
    _style( me);
    me->setLocation(600, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4c2f7ba0_6c5c_45fa_ac7d_fb8049e1cb41) ;
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

    me->setLocation(602, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f18e642f_eb1c_4053_b030_e67c7a467484) ;
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

    me->setLocation(603, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_fffb48c8_baba_4e70_a092_9d508d375c1f) ;
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

    me->setLocation(604, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_25a0351c_1f55_418e_ae68_8799403feebd) ;
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

    me->setLocation(605, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8a8c5233_5761_4dc9_9d3b_54df39e77fae) ;
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

    me->setLocation(606, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e3f60717_0443_4dc5_8de8_319f709e0c42) ;
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
    me->setLocation(610, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f0121b88_411e_4947_80a9_b903bcbc367a) ;
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

    me->setLocation(611, filename);
    _style( me);
    me->setLocation(612, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4c2f7ba0_6c5c_45fa_ac7d_fb8049e1cb41) ;
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

    me->setLocation(614, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4ebb9d9d_078c_478c_ac0b_68ff7f10df13) ;
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

    me->setLocation(615, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0b2d63ae_9f08_4636_ab4a_3d665b585a5d) ;
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

    me->setLocation(616, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_25a0351c_1f55_418e_ae68_8799403feebd) ;
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

    me->setLocation(617, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8a8c5233_5761_4dc9_9d3b_54df39e77fae) ;
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

    me->setLocation(618, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f14e7004_6a0a_4194_94c8_0fdb795462b1) ;
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
    me->setLocation(622, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f0121b88_411e_4947_80a9_b903bcbc367a) ;
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

    me->setLocation(623, filename);
    _style( me);
    me->setLocation(624, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4c2f7ba0_6c5c_45fa_ac7d_fb8049e1cb41) ;
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

    me->setLocation(626, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1b63041e_2397_4295_a934_0ed5a42ee234) ;
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
    me->setLocation(631, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_bcd4e972_c828_4eff_9f4d_09abe2ef00af) ;
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

    me->setLocation(632, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f637862a_180e_4f23_80d6_55fd53af5d3c) ;
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

    me->setLocation(633, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_bc625780_5465_4dac_9591_3e69c297e8f8) ;
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

    me->setLocation(634, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6af45db7_49bb_460e_ac2e_4496359f7b38) ;
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

    me->setLocation(635, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_20eff0be_6df7_4838_98ac_9dbbcb78009e) ;
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

    me->setLocation(636, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f136a5ec_e957_4cc1_b3c3_b73214311136) ;
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

    me->setLocation(637, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1eebfcc3_c574_496f_99d0_15f37148d636) ;
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

    me->setLocation(638, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a5eaa9a3_7c10_473b_82d4_437fc8156ee8) ;
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

    me->setLocation(639, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c5fe0f16_e31d_4c48_ba0a_82fcf8438bba) ;
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

    me->setLocation(640, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_63923638_3043_4304_ab70_309ce111ecc7) ;
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

    me->setLocation(641, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6ee3225e_b6c6_4e29_ae3c_9fa1b6dca6fc) ;
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
        me->setLocation(51, filename);
            _lr_signal = CONSTANT_FIXED_POS_0_31;
        me->setLocation(52, filename);
            _lm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(53, filename);
            _rm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(55, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(56, filename);
        {
            _lmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(57, filename);
        {
            _rmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(58, filename);
        {
            _termin.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

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

        me->setLocation(63, filename);
        _menu( me);
        me->setLocation(65, filename);
        _webinterface.terminate(me);

        me->setLocation(66, filename);
        _readlr.terminate(me);

        me->setLocation(68, filename);
        _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(69, filename);
        _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(70, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(71, filename);
        _termin.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _state(0); 


        me->setLocation(178, filename);
        pearlrt::Bolt::enter( me, 1, demo_state_bolt_bolts);
        me->setLocation(179, filename);
            _state = _demo_state;
        me->setLocation(180, filename);
        pearlrt::Bolt::leave( me, 1, demo_state_bolt_bolts);
        me->setLocation(182, filename);
        if ((_state == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(183, filename);
            _straight( me, CONSTANT_FIXED_POS_5_31);
        }

        me->setLocation(185, filename);
            pearlrt::Semaphore::release( me, 1, dt_semas);
        me->setLocation(186, filename);
        me->suspend(me);


}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop(0); 


        me->setLocation(273, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(274, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(275, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(276, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(277, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(279, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(280, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(281, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(284, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(285, filename);
                            _lspeed = _in;
                        me->setLocation(286, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(289, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(290, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(291, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(294, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(295, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(296, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(298, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(299, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(300, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(303, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(304, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(306, filename);
                        pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                    me->setLocation(308, filename);
                    _driveleft.terminate(me);

                    me->setLocation(309, filename);
                    _driveright.terminate(me);

                    me->setLocation(311, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(313, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(314, filename);
                        _stop = _global_stop;
                    me->setLocation(315, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(317, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(318, filename);
        me->suspend(me);


}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(330, filename);
        pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
        me->setLocation(331, filename);
            _speed = _lm_speed;
        me->setLocation(332, filename);
        pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
        me->setLocation(335, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(336, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(337, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(340, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(341, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(344, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
        me->setLocation(346, filename);
            pearlrt::Semaphore::release( me, 1, dl_semas);
        me->setLocation(347, filename);
        me->suspend(me);


}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(359, filename);
        pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
        me->setLocation(360, filename);
            _speed = _rm_speed;
        me->setLocation(361, filename);
        pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
        me->setLocation(365, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(366, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(367, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(369, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(370, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(373, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
        me->setLocation(375, filename);
            pearlrt::Semaphore::release( me, 1, dr_semas);
        me->setLocation(376, filename);
        me->suspend(me);


}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(387, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(388, filename);
        {
                while ( 1 )
                {

                    me->setLocation(389, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(390, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(392, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(393, filename);
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

                    me->setLocation(397, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(398, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(399, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(402, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(403, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(404, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(407, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(408, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(409, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(412, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(413, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(414, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(417, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(418, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(419, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(422, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(423, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(424, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(427, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(428, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(429, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(432, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(433, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(434, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(437, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(438, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(442, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(443, filename);
                        _lr_signal = _out;
                    me->setLocation(444, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(445, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(450, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(541, filename);
        {
                while ( 1 )
                {

                    me->setLocation(542, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(544, filename);
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

                    me->setLocation(546, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_9fdaca13_f0b6_4a7c_97db_dd0e67853209) ;
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

                    me->setLocation(547, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_3bd8e2e7_d05b_466b_a5b3_9afe3a3dfa7d) ;
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

                    me->setLocation(548, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_5e924053_3bbb_47bc_ab46_d577502c3725) ;
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

                    me->setLocation(550, filename);
                    if ((_request == CONSTANT_CHARACTER_6c22857c_bd5f_4264_b142_dd7b678402b8).getBoolean()) {
                        me->setLocation(551, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(553, filename);
                        if ((_request == CONSTANT_CHARACTER_6f4644eb_1d6e_4d8a_942c_41dbcaa6408a).getBoolean()) {
                            me->setLocation(554, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(556, filename);
                            if ((_request == CONSTANT_CHARACTER_11f27927_5072_4d10_9504_dfafa1469352).getBoolean()) {
                                me->setLocation(557, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(559, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(564, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



