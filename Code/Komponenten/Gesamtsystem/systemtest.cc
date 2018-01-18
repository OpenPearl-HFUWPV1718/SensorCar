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
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_964a14a4_d7e2_4157_a8e9_8da58399a26a("u");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_b2fbe0d9_6b53_459f_8d16_3fff20c11255("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_ff6dd948_0525_45b7_8a96_98d511be57bc("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_3b37a31f_630b_4411_a915_d059ff75009d("Waehlen Sie:");
static /*const*/ pearlrt::Character<30>         CONSTANT_CHARACTER_948e5ba3_d147_43aa_a7e9_a29f9d4bfa56("1 um den Demo-Modus zu starten");
static /*const*/ pearlrt::Character<33>         CONSTANT_CHARACTER_0b313574_6b9a_4ffb_9bbf_7e25a2a1d832("2 um den Parcour-Modus zu starten");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_77fe48cb_04fd_4cad_bf04_f3ad754155d0("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_b281a8c4_de82_48f8_8b32_93307339297f("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_fe276c79_40f6_4fca_a2f5_6e17185dc949("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_116e213c_7a47_4daf_bb52_1eb2d3a129d7("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_ef8aba71_1ac7_43d9_b0e8_b7547388d774("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_51e888fe_97b6_4bb2_a734_5314ddc6f2d5("main");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_977031fc_1af1_4110_aa8b_1548fd1882f7("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_3a8b95dc_41da_4200_844a_792eae998c72("Command 0: stop");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_e9b65cf4_ccc7_460b_b931_37b6cf050673("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_91bfa863_62c4_4c3b_9abe_c84c1e0cbc3d("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_781ece75_7208_42c7_bdbb_171d5c7b9267("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_8463b73b_16ac_4b98_a1e6_73858768e913("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_41ab81e5_27f3_4dd1_a8cc_4fbb3a4a1d9f("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_c2ac0370_a345_440e_945a_8089abc9700a("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_fddae1f7_459d_421d_98db_b74ec992ae82("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_a615798e_748b_4692_8901_f20880e2282e("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_9a7d0ddd_7522_4c37_b91b_26742d38bc6e("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_2c554598_5776_4e1a_bcc8_af54cad2b69b("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_11f922a9_0402_4c14_b845_254ff9efa0bb("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_9622a554_6cf5_4a78_bbd7_40f1f59d3c42("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_7a8ad476_9f7a_4082_8728_1d4660f86ce5("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_050c5182_cf1d_43da_ae5f_2a6be8fecdba("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<25>         CONSTANT_CHARACTER_21ce9886_2e76_4d28_8368_15f97ca23f88("<li>Geschwindigkeit Lins:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_a66c7dc9_554a_4a42_8fcd_a4c60bf14cbc("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_0a66944c_fafa_4434_86a1_29cff2bb3b82("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_ccba23a0_fc75_4163_97e2_4553d16f446b("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_ee1272d0_6f51_45a2_aa68_b5e5c2855510("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_e193813b_9d04_4a7d_a85b_02a2413967a6("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_6f7b6b10_90b4_4d0d_8609_14911be8a287("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_2dedfbd2_ee28_4c21_90e3_35dc6fdac18e("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_c3f92ec3_cd68_4392_ad9f_6f630284f209("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_7150cd2b_0485_4750_979f_f389462b5d85("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_b2b82035_9487_4dbb_a354_e4713562cb55("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_330180ee_d276_40f6_91d4_dc3ac6b1c081("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_2d22ed97_9eed_4ea3_aa20_e72a8c2a7a72("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_245bd285_693e_467c_a7a0_11592943b699("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_ba88edf8_9637_4123_9a69_f1d6786d4e65("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_237f23ca_37aa_454a_b7a5_f08aaf232832("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_1a171d3b_7200_4f6c_9479_296a36ba5bd0("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_3028472f_b8c5_48b5_9fb1_4266c0a6d334("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_8efe5d30_5914_41a5_a8ca_18453fdbe412("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_a0729872_e8e7_45f7_b22f_fc7e0de3bba7(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_4e4cd6aa_dd36_4826_a5ce_cd18f3ee0643("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_6559a19a_3f9a_44bc_8880_9ef035c06817(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_e86c9d07_e33d_45bb_826f_653c59d9cfc1("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_2c80ff77_b956_4801_be5c_2c93ba48aac5("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_7a537c87_62b3_48c3_ae0c_39578d74afa7("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_72f62366_9d93_49a8_bb96_73504773ef87("#value_list{text-decoration: none; list-style-type: none;}");

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
        _termout.toA(CONSTANT_CHARACTER_b2fbe0d9_6b53_459f_8d16_3fff20c11255) ;
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
        _termout.toA(CONSTANT_CHARACTER_ff6dd948_0525_45b7_8a96_98d511be57bc) ;
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
        _termout.toA(CONSTANT_CHARACTER_3b37a31f_630b_4411_a915_d059ff75009d) ;
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
        _termout.toA(CONSTANT_CHARACTER_948e5ba3_d147_43aa_a7e9_a29f9d4bfa56) ;
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
        _termout.toA(CONSTANT_CHARACTER_0b313574_6b9a_4ffb_9bbf_7e25a2a1d832) ;
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
        _termout.toA(CONSTANT_CHARACTER_b2fbe0d9_6b53_459f_8d16_3fff20c11255) ;
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
        _termout.toA(CONSTANT_CHARACTER_77fe48cb_04fd_4cad_bf04_f3ad754155d0) ;
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
        _termout.toA(CONSTANT_CHARACTER_3b37a31f_630b_4411_a915_d059ff75009d) ;
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
        _termout.toA(CONSTANT_CHARACTER_b281a8c4_de82_48f8_8b32_93307339297f) ;
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
        _termout.toA(CONSTANT_CHARACTER_fe276c79_40f6_4fca_a2f5_6e17185dc949) ;
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
        _termout.toA(CONSTANT_CHARACTER_116e213c_7a47_4daf_bb52_1eb2d3a129d7) ;
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
                            _termout.toA(CONSTANT_CHARACTER_ef8aba71_1ac7_43d9_b0e8_b7547388d774) ;
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
                            _termout.toA(CONSTANT_CHARACTER_51e888fe_97b6_4bb2_a734_5314ddc6f2d5) ;
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
                    me->setLocation(145, filename);
                        _temp = pearlrt::Semaphore::dotry( me, 1, dt_semas);;
                    me->setLocation(146, filename);
                    if (_temp.getBoolean()) {
                        me->setLocation(147, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_977031fc_1af1_4110_aa8b_1548fd1882f7) ;
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

                        me->setLocation(148, filename);
                        _demo.terminate(me);

                        me->setLocation(149, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                    me->setLocation(152, filename);
                    if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(153, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_3a8b95dc_41da_4200_844a_792eae998c72) ;
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

                        me->setLocation(155, filename);
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(156, filename);
                            _global_stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(157, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(160, filename);
                            pearlrt::Semaphore::request( me, 1, dt_semas);
                        me->setLocation(161, filename);
                        _demo.terminate(me);

                        me->setLocation(162, filename);
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


    me->setLocation(185, filename);
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

                me->setLocation(186, filename);
                pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                me->setLocation(187, filename);
                    _lm_speed = _speed;
                me->setLocation(188, filename);
                pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                me->setLocation(190, filename);
                pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                me->setLocation(191, filename);
                    _rm_speed = _speed;
                me->setLocation(192, filename);
                pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                me->setLocation(195, filename);
                    _driveleft.activate( me,
                                      0,
                                      /* prio   */  pearlrt::Prio(),
                                      /* at     */  pearlrt::Clock(),
                                      /* after  */  pearlrt::Duration(),
                                      /* all    */  pearlrt::Duration(),
                                      /* until  */  pearlrt::Clock(),
                                      /* during */  pearlrt::Duration()
                                    );

                me->setLocation(196, filename);
                    _driveright.activate( me,
                                      0,
                                      /* prio   */  pearlrt::Prio(),
                                      /* at     */  pearlrt::Clock(),
                                      /* after  */  pearlrt::Duration(),
                                      /* all    */  pearlrt::Duration(),
                                      /* until  */  pearlrt::Clock(),
                                      /* during */  pearlrt::Duration()
                                    );

                me->setLocation(198, filename);
                    pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                me->setLocation(200, filename);
                _driveleft.terminate(me);

                me->setLocation(201, filename);
                _driveright.terminate(me);

                me->setLocation(203, filename);
                pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                me->setLocation(204, filename);
                    _stop = _global_stop;
                me->setLocation(205, filename);
                pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                me->setLocation(185, filename);

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


    me->setLocation(215, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_b2fbe0d9_6b53_459f_8d16_3fff20c11255) ;
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

    me->setLocation(216, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e9b65cf4_ccc7_460b_b931_37b6cf050673) ;
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

    me->setLocation(217, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_3b37a31f_630b_4411_a915_d059ff75009d) ;
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

    me->setLocation(218, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_b281a8c4_de82_48f8_8b32_93307339297f) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_91bfa863_62c4_4c3b_9abe_c84c1e0cbc3d) ;
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

    me->setLocation(220, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_116e213c_7a47_4daf_bb52_1eb2d3a129d7) ;
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

    me->setLocation(222, filename);
    {
            while ( 1 )
            {

                me->setLocation(223, filename);
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

                me->setLocation(224, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                    me->setLocation(225, filename);
                    if ((_input == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(226, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_781ece75_7208_42c7_bdbb_171d5c7b9267) ;
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
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(229, filename);
                            _global_stop = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(230, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(232, filename);
                            _is_driving = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(234, filename);
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

                    me->setLocation(236, filename);
                    if ((_input == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(237, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_51e888fe_97b6_4bb2_a734_5314ddc6f2d5) ;
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

                        me->setLocation(238, filename);
                            goto _repeat;

                    }

                }

                me->setLocation(242, filename);
                if ((_is_driving == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                    me->setLocation(243, filename);
                    if ((_input == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(244, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_3a8b95dc_41da_4200_844a_792eae998c72) ;
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
                        pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                        me->setLocation(247, filename);
                            _global_stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(248, filename);
                        pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                        me->setLocation(251, filename);
                            pearlrt::Semaphore::request( me, 1, p_semas);
                        me->setLocation(252, filename);
                        _parcour.terminate(me);

                        me->setLocation(253, filename);
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


    me->setLocation(450, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(451, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(454, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(455, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(456, filename);
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

                        me->setLocation(457, filename);
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

                        me->setLocation(458, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(460, filename);
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

                        me->setLocation(461, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(463, filename);
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

                        me->setLocation(464, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(466, filename);
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

                        me->setLocation(467, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(456, filename);

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

        me->setLocation(471, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(472, filename);
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

                        me->setLocation(473, filename);
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

                        me->setLocation(474, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(476, filename);
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

                        me->setLocation(477, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(479, filename);
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

                        me->setLocation(480, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(482, filename);
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

                        me->setLocation(483, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(472, filename);

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

    me->setLocation(488, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(489, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(490, filename);
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

                        me->setLocation(491, filename);
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

                        me->setLocation(492, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(494, filename);
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

                        me->setLocation(495, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(497, filename);
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

                        me->setLocation(498, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(500, filename);
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

                        me->setLocation(501, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(490, filename);

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

        me->setLocation(505, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(506, filename);
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

                        me->setLocation(507, filename);
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

                        me->setLocation(508, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(510, filename);
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

                        me->setLocation(511, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(513, filename);
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

                        me->setLocation(514, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(516, filename);
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

                        me->setLocation(517, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(506, filename);

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


    me->setLocation(565, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(566, filename);
        _speedl = _lm_speed;
    me->setLocation(567, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(569, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(570, filename);
        _speedr = _rm_speed;
    me->setLocation(571, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(574, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c554598_5776_4e1a_bcc8_af54cad2b69b) ;
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

    me->setLocation(575, filename);
    _style( me);
    me->setLocation(576, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_11f922a9_0402_4c14_b845_254ff9efa0bb) ;
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

    me->setLocation(577, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_9622a554_6cf5_4a78_bbd7_40f1f59d3c42) ;
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

    me->setLocation(579, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_7a8ad476_9f7a_4082_8728_1d4660f86ce5) ;
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

    me->setLocation(580, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_050c5182_cf1d_43da_ae5f_2a6be8fecdba) ;
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

    me->setLocation(581, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_21ce9886_2e76_4d28_8368_15f97ca23f88) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_a66c7dc9_554a_4a42_8fcd_a4c60bf14cbc) ;
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

    me->setLocation(582, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0a66944c_fafa_4434_86a1_29cff2bb3b82) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_a66c7dc9_554a_4a42_8fcd_a4c60bf14cbc) ;
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

    me->setLocation(583, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ccba23a0_fc75_4163_97e2_4553d16f446b) ;
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
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ee1272d0_6f51_45a2_aa68_b5e5c2855510) ;
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

    me->setLocation(585, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e193813b_9d04_4a7d_a85b_02a2413967a6) ;
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
    me->setLocation(589, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c554598_5776_4e1a_bcc8_af54cad2b69b) ;
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
    _style( me);
    me->setLocation(591, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f7b6b10_90b4_4d0d_8609_14911be8a287) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_2dedfbd2_ee28_4c21_90e3_35dc6fdac18e) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_c3f92ec3_cd68_4392_ad9f_6f630284f209) ;
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

    me->setLocation(595, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_7150cd2b_0485_4750_979f_f389462b5d85) ;
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

    me->setLocation(596, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ee1272d0_6f51_45a2_aa68_b5e5c2855510) ;
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

    me->setLocation(597, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b2b82035_9487_4dbb_a354_e4713562cb55) ;
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
    me->setLocation(601, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c554598_5776_4e1a_bcc8_af54cad2b69b) ;
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
    _style( me);
    me->setLocation(603, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f7b6b10_90b4_4d0d_8609_14911be8a287) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_330180ee_d276_40f6_91d4_dc3ac6b1c081) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_2d22ed97_9eed_4ea3_aa20_e72a8c2a7a72) ;
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

    me->setLocation(607, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_7150cd2b_0485_4750_979f_f389462b5d85) ;
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

    me->setLocation(608, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ee1272d0_6f51_45a2_aa68_b5e5c2855510) ;
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

    me->setLocation(609, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_245bd285_693e_467c_a7a0_11592943b699) ;
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
    me->setLocation(613, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c554598_5776_4e1a_bcc8_af54cad2b69b) ;
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
    _style( me);
    me->setLocation(615, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f7b6b10_90b4_4d0d_8609_14911be8a287) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_ba88edf8_9637_4123_9a69_f1d6786d4e65) ;
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
    me->setLocation(622, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_237f23ca_37aa_454a_b7a5_f08aaf232832) ;
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
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1a171d3b_7200_4f6c_9479_296a36ba5bd0) ;
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

    me->setLocation(624, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_3028472f_b8c5_48b5_9fb1_4266c0a6d334) ;
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

    me->setLocation(625, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8efe5d30_5914_41a5_a8ca_18453fdbe412) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_a0729872_e8e7_45f7_b22f_fc7e0de3bba7) ;
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

    me->setLocation(627, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4e4cd6aa_dd36_4826_a5ce_cd18f3ee0643) ;
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

    me->setLocation(628, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6559a19a_3f9a_44bc_8880_9ef035c06817) ;
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

    me->setLocation(629, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e86c9d07_e33d_45bb_826f_653c59d9cfc1) ;
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

    me->setLocation(630, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2c80ff77_b956_4801_be5c_2c93ba48aac5) ;
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

    me->setLocation(631, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_7a537c87_62b3_48c3_ae0c_39578d74afa7) ;
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_72f62366_9d93_49a8_bb96_73504773ef87) ;
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


        me->setLocation(171, filename);
        pearlrt::Bolt::enter( me, 1, demo_state_bolt_bolts);
        me->setLocation(172, filename);
            _state = _demo_state;
        me->setLocation(173, filename);
        pearlrt::Bolt::leave( me, 1, demo_state_bolt_bolts);
        me->setLocation(175, filename);
        if ((_state == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(176, filename);
            _straight( me, CONSTANT_FIXED_POS_5_31);
        }

        me->setLocation(178, filename);
            pearlrt::Semaphore::release( me, 1, dt_semas);
        me->setLocation(179, filename);
        me->suspend(me);


}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop(0); 


        me->setLocation(265, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(266, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(267, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(268, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(269, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(271, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(272, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(273, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(276, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(277, filename);
                            _lspeed = _in;
                        me->setLocation(278, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(281, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(282, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(283, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(286, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(287, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(288, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(290, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(291, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(292, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(295, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(296, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(298, filename);
                        pearlrt::Semaphore::request( me, 2, dl_dr_semas);
                    me->setLocation(300, filename);
                    _driveleft.terminate(me);

                    me->setLocation(301, filename);
                    _driveright.terminate(me);

                    me->setLocation(303, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(305, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(306, filename);
                        _stop = _global_stop;
                    me->setLocation(307, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(309, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(310, filename);
        me->suspend(me);


}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(322, filename);
        pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
        me->setLocation(323, filename);
            _speed = _lm_speed;
        me->setLocation(324, filename);
        pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
        me->setLocation(327, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(328, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(329, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(332, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(333, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(336, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
        me->setLocation(338, filename);
            pearlrt::Semaphore::release( me, 1, dl_semas);
        me->setLocation(339, filename);
        me->suspend(me);


}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(351, filename);
        pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
        me->setLocation(352, filename);
            _speed = _rm_speed;
        me->setLocation(353, filename);
        pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
        me->setLocation(356, filename);
        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(357, filename);
                _direction = CONSTANT_FIXED_POS_0_31;
            me->setLocation(358, filename);
                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
        }

        me->setLocation(360, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
        me->setLocation(361, filename);
            _steps = ((_speed*_default_motor_steps)).round();
        me->setLocation(364, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
        me->setLocation(366, filename);
            pearlrt::Semaphore::release( me, 1, dr_semas);
        me->setLocation(367, filename);
        me->suspend(me);


}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(378, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(379, filename);
        {
                while ( 1 )
                {

                    me->setLocation(380, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(381, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(383, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(384, filename);
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

                    me->setLocation(388, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(389, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(390, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(393, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(394, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(395, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(398, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(399, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(400, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(403, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(404, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(405, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(408, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(409, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(410, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(413, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(414, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(415, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(418, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(419, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(420, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(423, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(424, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(425, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(428, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(429, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(433, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(434, filename);
                        _lr_signal = _out;
                    me->setLocation(435, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(436, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(441, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(532, filename);
        {
                while ( 1 )
                {

                    me->setLocation(533, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(535, filename);
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

                    me->setLocation(537, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_8463b73b_16ac_4b98_a1e6_73858768e913) ;
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

                    me->setLocation(538, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_41ab81e5_27f3_4dd1_a8cc_4fbb3a4a1d9f) ;
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

                    me->setLocation(539, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_c2ac0370_a345_440e_945a_8089abc9700a) ;
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

                    me->setLocation(541, filename);
                    if ((_request == CONSTANT_CHARACTER_fddae1f7_459d_421d_98db_b74ec992ae82).getBoolean()) {
                        me->setLocation(542, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(544, filename);
                        if ((_request == CONSTANT_CHARACTER_a615798e_748b_4692_8901_f20880e2282e).getBoolean()) {
                            me->setLocation(545, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(547, filename);
                            if ((_request == CONSTANT_CHARACTER_9a7d0ddd_7522_4c37_b91b_26742d38bc6e).getBoolean()) {
                                me->setLocation(548, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(550, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(555, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



