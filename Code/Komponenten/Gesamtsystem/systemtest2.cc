/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "systemtest2.prl";


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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_50_31(50);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_2d5fa241_979b_4160_a5e4_1d9715ff256a("u");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_e649452c_7c4b_47d8_b78e_2ef588694cd3("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<9>         CONSTANT_CHARACTER_dee48ba7_2fd5_4a4f_8326_113a6199508d("Tschuess.");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_7d4c5678_cd38_428a_bad0_57fd398cca76("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_d6617ca6_855c_4e24_81f2_0584dcd38b36("Waehlen Sie:");
static /*const*/ pearlrt::Character<30>         CONSTANT_CHARACTER_34ac490b_4d16_4b91_87a9_07e0c17a65ea("1 um den Demo-Modus zu starten");
static /*const*/ pearlrt::Character<33>         CONSTANT_CHARACTER_092eb15a_6a18_42a4_93fb_d515ecdc728c("2 um den Parcour-Modus zu starten");
static /*const*/ pearlrt::Character<18>         CONSTANT_CHARACTER_987b253c_99fa_45f3_a838_e64d17bb0a18("Ungueltige Eingabe");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_9efbff73_c122_42ed_bc82_0ecfab7fe42f("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_31fe6c37_b82a_41bf_b250_fa54a8628e91("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_5d6f2d4c_9081_4104_8310_a144c3161053("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_dcac285c_07a0_4d67_af20_ea3ef4cc586b("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_d15b9df7_dc1d_4da6_b7c7_143ed6140fd9("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_c87d2ffa_b50f_4ef4_abe7_d9ece6e4e947("Command 0: stop");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_b2bb8b4a_a9e7_4387_91cd_483e82f67fed("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_ed9f1e32_857a_4d79_bfd2_064f8f7499ab("Geben Sie die gewuenschte Geschwindigkeit ein [-10, 10]");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_6b82b1f3_1405_4033_bd53_86c8d48e7eac("main");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_2d5a59f2_ee3e_4982_9c82_2d6087e66a72("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_9b095dfc_e655_4d1c_ab5b_e0d175d9d7f2("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_6224883d_ad0a_464c_8aaf_f6774ddad56b("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_eee110c9_5485_4f13_b5a6_7ce9af3dd96d("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_7550b768_4199_4150_ae52_e65d7f7c003e("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_afafdc27_6839_4520_89e7_3b22ac038113("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_3ed62833_999b_4c99_aff0_434821baafeb("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_2a507d76_448e_4716_881b_b202d39a7485("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_eb746031_fe7c_409d_836a_927a6fa39aa6("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_841b83cb_2259_4f76_bdee_d0785a8cf038("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_905922ae_f0e5_4e7a_9af2_91c845a3201e("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_e528f477_cfec_47f9_a662_b25036e71929("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_f650ce19_a541_4ab4_80b8_dd886788b9cb("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_1a21dfca_6eed_4959_939d_01fdcd61ba22("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_4e6efa14_7747_4b1d_8829_37d9f311b567("<li>Geschwindigkeit Links:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_f9e4c971_7fa7_4627_a95b_97a6334b6eed("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_23d822f3_e705_4de2_a617_5e26f4a31d0c("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_0da366a2_2995_4c52_bd3d_069d58580a56("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_14fd0913_4980_4cd7_9473_14d5e00a18eb("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_a95b4061_282e_495e_b9bc_7002a1e885b2("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_f971a210_8760_4ce1_993f_57ae8f84e531("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_b43f642d_d5dc_414b_a0a4_1353833e74a0("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_f89b4be9_d650_434d_a0ab_bd9ba5fd92f1("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_21717541_3348_4d59_9ae3_b89e8f8ec90f("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_1d79064d_bb0a_43a6_8523_a47f5586351c("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_f9af01ed_0619_450c_91b4_52e9db175a29("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_b283997c_5ab8_43d0_803b_22b4884f5c74("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_82db8ba8_1156_4579_bf50_b03f2dd255b1("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_4b1ee317_3605_40d1_bb36_424cde0ae240("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_158b95db_0ea6_4722_8e3a_a2e557fa2741("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_732ebb75_c7b5_4012_827f_7ee346c00a17("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_d4863d43_44db_4543_990e_48b1e9b912c4("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_fe678e73_983a_4d8b_8934_d95c7dadb861("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_e78ad579_23e5_45be_96d4_98bc9569241d(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_6631e8f9_e80e_4b5c_a58d_54edf295c5f5("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_1ec101eb_36e8_4e54_8584_f088d752280b(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_a645f883_4e00_42fc_a169_c2c71e700088("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_fbf817e7_e760_416e_b210_b6a833a11003("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_b05b4db9_0ccf_41c3_93df_b25ee0b71ad5("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_4e12e452_90c6_43d8_8174_ad12f0c6ba40("#value_list{text-decoration: none; list-style-type: none;}");

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
_init(pearlrt::Task *me);
void
_term(pearlrt::Task *me);
void
_menu(pearlrt::Task *me);
void
_demo_menu(pearlrt::Task *me);
void
_straight(pearlrt::Task *me, pearlrt::Fixed<31>  _speed);
void
_parcour_menu(pearlrt::Task *me);
void
_stop_motors(pearlrt::Task *me);
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

pearlrt::Fixed<31>  _demo_var(0); 

pearlrt::Float<53>  _lr_signal; 

pearlrt::Float<53>  _lm_speed; 
pearlrt::Float<53>  _rm_speed; 



/////////////////////////////////////////////////////////////////////////////
// SEMAPHORE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLSEMA(_lr_buffer_in,1);
DCLSEMA(_lr_buffer_out,0);
DCLSEMA(_lm_buffer_in,1);
DCLSEMA(_lm_buffer_out,0);
DCLSEMA(_rm_buffer_in,1);
DCLSEMA(_rm_buffer_out,0);
DCLSEMA(_p,0);
DCLSEMA(_dt,0);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *dt_semas[] = {&_dt}; 
static pearlrt::Semaphore *lm_buffer_in_semas[] = {&_lm_buffer_in}; 
static pearlrt::Semaphore *rm_buffer_in_semas[] = {&_rm_buffer_in}; 
static pearlrt::Semaphore *lm_buffer_out_semas[] = {&_lm_buffer_out}; 
static pearlrt::Semaphore *rm_buffer_out_semas[] = {&_rm_buffer_out}; 
static pearlrt::Semaphore *p_semas[] = {&_p}; 
static pearlrt::Semaphore *lr_buffer_in_semas[] = {&_lr_buffer_in}; 
static pearlrt::Semaphore *lr_buffer_out_semas[] = {&_lr_buffer_out}; 


/////////////////////////////////////////////////////////////////////////////
// BOLT DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLBOLT(_lm_bolt);
DCLBOLT(_rm_bolt);
DCLBOLT(_lr_bolt);
DCLBOLT(_stop_bolt);
DCLBOLT(_demo_state_bolt);
DCLBOLT(_demo_var_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Bolt *stop_bolt_bolts[] = {&_stop_bolt}; 
static pearlrt::Bolt *demo_var_bolt_bolts[] = {&_demo_var_bolt}; 
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
_init(pearlrt::Task *me)
{
    me->setLocation(58, filename);
        _lr_signal = CONSTANT_FIXED_POS_0_31;
    me->setLocation(59, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(60, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(62, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(63, filename);
    {
        _lmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(64, filename);
    {
        _rmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(65, filename);
    {
        _termin.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(67, filename);
        _webinterface.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(68, filename);
        _readlr.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(69, filename);
        _driveleft.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(70, filename);
        _driveright.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(72, filename);
    _stop_motors( me);
    me->setLocation(73, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e649452c_7c4b_47d8_b78e_2ef588694cd3) ;
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

void
_term(pearlrt::Task *me)
{
    me->setLocation(77, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_dee48ba7_2fd5_4a4f_8326_113a6199508d) ;
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
    _webinterface.terminate(me);

    me->setLocation(80, filename);
    _readlr.terminate(me);

    me->setLocation(81, filename);
    _driveleft.terminate(me);

    me->setLocation(82, filename);
    _driveright.terminate(me);

    me->setLocation(85, filename);
    _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(86, filename);
    _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(87, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(88, filename);
    _termin.dationClose(0, (pearlrt::Fixed<15>*) 0);

}

void
_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 


    me->setLocation(95, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7d4c5678_cd38_428a_bad0_57fd398cca76) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d6617ca6_855c_4e24_81f2_0584dcd38b36) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_34ac490b_4d16_4b91_87a9_07e0c17a65ea) ;
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

    me->setLocation(98, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_092eb15a_6a18_42a4_93fb_d515ecdc728c) ;
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

    me->setLocation(100, filename);
    {
            while ( 1 )
            {

                me->setLocation(101, filename);
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

                me->setLocation(103, filename);
                if (((_input == CONSTANT_FIXED_POS_0_31).bitOr((_input == CONSTANT_FIXED_POS_1_31)).bitOr((
                _input == CONSTANT_FIXED_POS_2_31))).bitNot().getBoolean()) {
                    me->setLocation(104, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_987b253c_99fa_45f3_a838_e64d17bb0a18) ;
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
                else {
                    me->setLocation(106, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(108, filename);
                                goto _repeat;

                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(110, filename);
                            _demo_menu( me);
                            break;
                        } // end case
                        case 2 :
                        {
                            me->setLocation(112, filename);
                            _parcour_menu( me);
                            break;
                        } // end case

                    }
                }

            }

            _repeat: ;
    }
}

void
_demo_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 
    pearlrt::Fixed<31>  _var; 

    pearlrt::BitString<1>  _temp; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(124, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e649452c_7c4b_47d8_b78e_2ef588694cd3) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_9efbff73_c122_42ed_bc82_0ecfab7fe42f) ;
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

    me->setLocation(126, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d6617ca6_855c_4e24_81f2_0584dcd38b36) ;
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

    me->setLocation(127, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_31fe6c37_b82a_41bf_b250_fa54a8628e91) ;
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

    me->setLocation(128, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_5d6f2d4c_9081_4104_8310_a144c3161053) ;
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

    me->setLocation(129, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_dcac285c_07a0_4d67_af20_ea3ef4cc586b) ;
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

    me->setLocation(131, filename);
    {
            while ( 1 )
            {

                me->setLocation(132, filename);
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

                me->setLocation(135, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(136, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_987b253c_99fa_45f3_a838_e64d17bb0a18) ;
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
                else {
                    #warning __cpp__ inline inserted
                    {int dummy = pearlrt::Semaphore::dotry( me, 1, dt_semas);
                    if (dummy) { _temp.x = 0x80;} else {_temp.x = 0;}}


                    me->setLocation(139, filename);
                    me->setLocation(143, filename);
                    if (_temp.getBoolean()) {
                        me->setLocation(144, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_d15b9df7_dc1d_4da6_b7c7_143ed6140fd9) ;
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

                        me->setLocation(145, filename);
                        _demo.terminate(me);

                        me->setLocation(146, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                    me->setLocation(150, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(152, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_c87d2ffa_b50f_4ef4_abe7_d9ece6e4e947) ;
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

                            me->setLocation(154, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(155, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(156, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(159, filename);
                            if ((_temp == pearlrt::BitString<1>(0)).getBoolean()) {
                                me->setLocation(160, filename);
                                    pearlrt::Semaphore::request( me, 1, dt_semas);
                                me->setLocation(161, filename);
                                _demo.terminate(me);

                            }

                            me->setLocation(163, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(165, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_b2bb8b4a_a9e7_4387_91cd_483e82f67fed) ;
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

                            me->setLocation(167, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_ed9f1e32_857a_4d79_bfd2_064f8f7499ab) ;
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

                            me->setLocation(168, filename);
                            // GET STATEMENT BEGIN
                            try {
                                _termin.beginSequence(me);
                                _termin.fromF(_var,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31)) ;
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

                            me->setLocation(169, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_var_bolt_bolts);
                            me->setLocation(170, filename);
                                _demo_var = _var;
                            me->setLocation(171, filename);
                            pearlrt::Bolt::free( me, 1, demo_var_bolt_bolts);
                            me->setLocation(174, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(175, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(176, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(178, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(180, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_state_bolt_bolts);
                            me->setLocation(181, filename);
                                _demo_state = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(182, filename);
                            pearlrt::Bolt::free( me, 1, demo_state_bolt_bolts);
                            me->setLocation(184, filename);
                                _demo.activate( me,
                                                  0,
                                                  /* prio   */  pearlrt::Prio(),
                                                  /* at     */  pearlrt::Clock(),
                                                  /* after  */  pearlrt::Duration(),
                                                  /* all    */  pearlrt::Duration(),
                                                  /* until  */  pearlrt::Clock(),
                                                  /* during */  pearlrt::Duration()
                                                );

                            break;
                        } // end case
                        case 2 :
                        {
                            me->setLocation(186, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_6b82b1f3_1405_4033_bd53_86c8d48e7eac) ;
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

                            me->setLocation(187, filename);
                                goto _repeat;

                            break;
                        } // end case

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


    me->setLocation(214, filename);
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

                me->setLocation(215, filename);
                    pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                me->setLocation(216, filename);
                    pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                me->setLocation(218, filename);
                pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                me->setLocation(219, filename);
                    _lm_speed = _speed;
                me->setLocation(220, filename);
                pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                me->setLocation(222, filename);
                pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                me->setLocation(223, filename);
                    _rm_speed = _speed;
                me->setLocation(224, filename);
                pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                me->setLocation(226, filename);
                    pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                me->setLocation(227, filename);
                    pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                me->setLocation(229, filename);
                pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                me->setLocation(230, filename);
                    _stop = _global_stop;
                me->setLocation(231, filename);
                pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                me->setLocation(214, filename);

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
    me->setLocation(234, filename);
    _stop_motors( me);
}

void
_parcour_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(242, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e649452c_7c4b_47d8_b78e_2ef588694cd3) ;
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

    me->setLocation(243, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_2d5a59f2_ee3e_4982_9c82_2d6087e66a72) ;
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

    me->setLocation(244, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d6617ca6_855c_4e24_81f2_0584dcd38b36) ;
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

    me->setLocation(245, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_31fe6c37_b82a_41bf_b250_fa54a8628e91) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_9b095dfc_e655_4d1c_ab5b_e0d175d9d7f2) ;
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

    me->setLocation(247, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_dcac285c_07a0_4d67_af20_ea3ef4cc586b) ;
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

    me->setLocation(249, filename);
    {
            while ( 1 )
            {

                me->setLocation(250, filename);
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

                me->setLocation(253, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(254, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_987b253c_99fa_45f3_a838_e64d17bb0a18) ;
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
                else {
                    me->setLocation(257, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(259, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_c87d2ffa_b50f_4ef4_abe7_d9ece6e4e947) ;
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
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(262, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(263, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(266, filename);
                                pearlrt::Semaphore::request( me, 1, p_semas);
                            me->setLocation(267, filename);
                            _parcour.terminate(me);

                            me->setLocation(268, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(270, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_6224883d_ad0a_464c_8aaf_f6774ddad56b) ;
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

                            me->setLocation(272, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(273, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(274, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(276, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(278, filename);
                                _parcour.activate( me,
                                                  0,
                                                  /* prio   */  pearlrt::Prio(),
                                                  /* at     */  pearlrt::Clock(),
                                                  /* after  */  pearlrt::Duration(),
                                                  /* all    */  pearlrt::Duration(),
                                                  /* until  */  pearlrt::Clock(),
                                                  /* during */  pearlrt::Duration()
                                                );

                            break;
                        } // end case
                        case 2 :
                        {
                            me->setLocation(280, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_6b82b1f3_1405_4033_bd53_86c8d48e7eac) ;
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

                            me->setLocation(281, filename);
                                goto _repeat;

                            break;
                        } // end case

                    }
                }

            }

            _repeat: ;
    }
}

void
_stop_motors(pearlrt::Task *me)
{
    me->setLocation(347, filename);
        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
    me->setLocation(348, filename);
        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
    me->setLocation(351, filename);
    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
    me->setLocation(352, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(353, filename);
    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
    me->setLocation(355, filename);
    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
    me->setLocation(356, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(357, filename);
    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
    me->setLocation(360, filename);
        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
    me->setLocation(361, filename);
        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
}

void
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _motorindex, pearlrt::Fixed<31>  _steps, pearlrt::Fixed<31>  _dir, pearlrt::Duration  _time)
{
    pearlrt::BitString<4>  _a(pearlrt::BitString<4>(0xa)); 
    pearlrt::BitString<4>  _b(pearlrt::BitString<4>(0x9)); 

    pearlrt::BitString<4>  _c; 
    pearlrt::BitString<4>  _d; 
    pearlrt::BitString<4>  _e; 


    me->setLocation(519, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(520, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(521, filename);
        _e = pearlrt::BitString<4>(0);
    me->setLocation(524, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(525, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(526, filename);
            // SEND STATEMENT BEGIN
            try {
                _lmotor.beginSequence(me);
                _lmotor.dationWrite(&_e, sizeof(_e));
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

        }
        else {
            me->setLocation(528, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(529, filename);
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

                            me->setLocation(530, filename);
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

                            me->setLocation(531, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(533, filename);
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

                            me->setLocation(534, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(536, filename);
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

                            me->setLocation(537, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(539, filename);
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

                            me->setLocation(540, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(529, filename);

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

            me->setLocation(544, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(545, filename);
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

                            me->setLocation(546, filename);
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

                            me->setLocation(547, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(549, filename);
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

                            me->setLocation(550, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(552, filename);
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

                            me->setLocation(553, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(555, filename);
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

                            me->setLocation(556, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(545, filename);

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

    me->setLocation(562, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(563, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(564, filename);
            // SEND STATEMENT BEGIN
            try {
                _rmotor.beginSequence(me);
                _rmotor.dationWrite(&_e, sizeof(_e));
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

        }
        else {
            me->setLocation(566, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(567, filename);
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

                            me->setLocation(568, filename);
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

                            me->setLocation(569, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(571, filename);
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

                            me->setLocation(572, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(574, filename);
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

                            me->setLocation(575, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(577, filename);
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

                            me->setLocation(578, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(567, filename);

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

            me->setLocation(582, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(583, filename);
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

                            me->setLocation(584, filename);
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

                            me->setLocation(585, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(587, filename);
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

                            me->setLocation(588, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(590, filename);
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

                            me->setLocation(591, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(593, filename);
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

                            me->setLocation(594, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(583, filename);

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

}

void
_index(pearlrt::Task *me)
{
    pearlrt::Float<53>  _speedl; 

    pearlrt::Float<53>  _speedr; 


    me->setLocation(643, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(644, filename);
        _speedl = _lm_speed;
    me->setLocation(645, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(647, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(648, filename);
        _speedr = _rm_speed;
    me->setLocation(649, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(652, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_841b83cb_2259_4f76_bdee_d0785a8cf038) ;
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

    me->setLocation(653, filename);
    _style( me);
    me->setLocation(654, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_905922ae_f0e5_4e7a_9af2_91c845a3201e) ;
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

    me->setLocation(655, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e528f477_cfec_47f9_a662_b25036e71929) ;
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

    me->setLocation(657, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f650ce19_a541_4ab4_80b8_dd886788b9cb) ;
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

    me->setLocation(658, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1a21dfca_6eed_4959_939d_01fdcd61ba22) ;
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

    me->setLocation(659, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4e6efa14_7747_4b1d_8829_37d9f311b567) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_f9e4c971_7fa7_4627_a95b_97a6334b6eed) ;
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

    me->setLocation(660, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_23d822f3_e705_4de2_a617_5e26f4a31d0c) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_f9e4c971_7fa7_4627_a95b_97a6334b6eed) ;
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

    me->setLocation(661, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0da366a2_2995_4c52_bd3d_069d58580a56) ;
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

    me->setLocation(662, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_14fd0913_4980_4cd7_9473_14d5e00a18eb) ;
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

    me->setLocation(663, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a95b4061_282e_495e_b9bc_7002a1e885b2) ;
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
    me->setLocation(667, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_841b83cb_2259_4f76_bdee_d0785a8cf038) ;
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

    me->setLocation(668, filename);
    _style( me);
    me->setLocation(669, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f971a210_8760_4ce1_993f_57ae8f84e531) ;
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

    me->setLocation(671, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b43f642d_d5dc_414b_a0a4_1353833e74a0) ;
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

    me->setLocation(672, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f89b4be9_d650_434d_a0ab_bd9ba5fd92f1) ;
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

    me->setLocation(673, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_21717541_3348_4d59_9ae3_b89e8f8ec90f) ;
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

    me->setLocation(674, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_14fd0913_4980_4cd7_9473_14d5e00a18eb) ;
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

    me->setLocation(675, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1d79064d_bb0a_43a6_8523_a47f5586351c) ;
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
    me->setLocation(679, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_841b83cb_2259_4f76_bdee_d0785a8cf038) ;
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

    me->setLocation(680, filename);
    _style( me);
    me->setLocation(681, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f971a210_8760_4ce1_993f_57ae8f84e531) ;
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

    me->setLocation(683, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f9af01ed_0619_450c_91b4_52e9db175a29) ;
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

    me->setLocation(684, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b283997c_5ab8_43d0_803b_22b4884f5c74) ;
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

    me->setLocation(685, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_21717541_3348_4d59_9ae3_b89e8f8ec90f) ;
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

    me->setLocation(686, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_14fd0913_4980_4cd7_9473_14d5e00a18eb) ;
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

    me->setLocation(687, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_82db8ba8_1156_4579_bf50_b03f2dd255b1) ;
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
    me->setLocation(691, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_841b83cb_2259_4f76_bdee_d0785a8cf038) ;
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

    me->setLocation(692, filename);
    _style( me);
    me->setLocation(693, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f971a210_8760_4ce1_993f_57ae8f84e531) ;
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

    me->setLocation(695, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4b1ee317_3605_40d1_bb36_424cde0ae240) ;
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
    me->setLocation(700, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_158b95db_0ea6_4722_8e3a_a2e557fa2741) ;
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

    me->setLocation(701, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_732ebb75_c7b5_4012_827f_7ee346c00a17) ;
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

    me->setLocation(702, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_d4863d43_44db_4543_990e_48b1e9b912c4) ;
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

    me->setLocation(703, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_fe678e73_983a_4d8b_8934_d95c7dadb861) ;
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

    me->setLocation(704, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e78ad579_23e5_45be_96d4_98bc9569241d) ;
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

    me->setLocation(705, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6631e8f9_e80e_4b5c_a58d_54edf295c5f5) ;
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

    me->setLocation(706, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1ec101eb_36e8_4e54_8584_f088d752280b) ;
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

    me->setLocation(707, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a645f883_4e00_42fc_a169_c2c71e700088) ;
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

    me->setLocation(708, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_fbf817e7_e760_416e_b210_b6a833a11003) ;
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

    me->setLocation(709, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b05b4db9_0ccf_41c3_93df_b25ee0b71ad5) ;
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

    me->setLocation(710, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4e12e452_90c6_43d8_8174_ad12f0c6ba40) ;
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
        me->setLocation(52, filename);
        _init( me);
        me->setLocation(53, filename);
        _menu( me);
        me->setLocation(54, filename);
        _term( me);
}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _state(0); 
        pearlrt::Fixed<31>  _var(0); 


        me->setLocation(196, filename);
        pearlrt::Bolt::enter( me, 1, demo_state_bolt_bolts);
        me->setLocation(197, filename);
            _state = _demo_state;
        me->setLocation(198, filename);
        pearlrt::Bolt::leave( me, 1, demo_state_bolt_bolts);
        me->setLocation(200, filename);
        pearlrt::Bolt::enter( me, 1, demo_var_bolt_bolts);
        me->setLocation(201, filename);
            _var = _demo_var;
        me->setLocation(202, filename);
        pearlrt::Bolt::leave( me, 1, demo_var_bolt_bolts);
        me->setLocation(204, filename);
        if ((_state == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(205, filename);
            _straight( me, _var);
        }

        me->setLocation(207, filename);
            pearlrt::Semaphore::release( me, 1, dt_semas);
        me->setLocation(208, filename);
        me->suspend(me);


}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop(0); 


        me->setLocation(293, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(295, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                    me->setLocation(296, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                    me->setLocation(299, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(300, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(302, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(303, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(304, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(306, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(307, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(308, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(311, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(312, filename);
                            _lspeed = _in;
                        me->setLocation(313, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(316, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(317, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(318, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(321, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(322, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(323, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(325, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(326, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(327, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(330, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                    me->setLocation(331, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                    me->setLocation(334, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(335, filename);
                        _stop = _global_stop;
                    me->setLocation(336, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(339, filename);
        _stop_motors( me);
        me->setLocation(341, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(342, filename);
        me->suspend(me);


}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(372, filename);
        {
                while ( 1 )
                {

                    me->setLocation(373, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_out_semas);
                    me->setLocation(375, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(376, filename);
                        _speed = _lm_speed;
                    me->setLocation(377, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(379, filename);
                    if ((_speed == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(381, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(382, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(385, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(386, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(387, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }

                        me->setLocation(390, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(391, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(395, filename);
                    _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
                    me->setLocation(397, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_in_semas);

                }

        }
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(409, filename);
        {
                while ( 1 )
                {

                    me->setLocation(410, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_out_semas);
                    me->setLocation(412, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(413, filename);
                        _speed = _rm_speed;
                    me->setLocation(414, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(416, filename);
                    if (((_speed == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(417, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(418, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(421, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(422, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(423, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }
                        else {
                            me->setLocation(425, filename);
                                _direction = CONSTANT_FIXED_POS_1_31;
                        }
                        me->setLocation(428, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(429, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(433, filename);
                    _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
                    me->setLocation(435, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_in_semas);

                }

        }
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(447, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(448, filename);
        {
                while ( 1 )
                {

                    me->setLocation(449, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(450, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(452, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(453, filename);
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

                    me->setLocation(457, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(458, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(459, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(462, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(463, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(464, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(467, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(468, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(469, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(472, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(473, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(474, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(477, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(478, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(479, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(482, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(483, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(484, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(487, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(488, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(489, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(492, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(493, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(494, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(497, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(498, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(502, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(503, filename);
                        _lr_signal = _out;
                    me->setLocation(504, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(505, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(510, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(610, filename);
        {
                while ( 1 )
                {

                    me->setLocation(611, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(613, filename);
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

                    me->setLocation(615, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_eee110c9_5485_4f13_b5a6_7ce9af3dd96d) ;
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_7550b768_4199_4150_ae52_e65d7f7c003e) ;
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_afafdc27_6839_4520_89e7_3b22ac038113) ;
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

                    me->setLocation(619, filename);
                    if ((_request == CONSTANT_CHARACTER_3ed62833_999b_4c99_aff0_434821baafeb).getBoolean()) {
                        me->setLocation(620, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(622, filename);
                        if ((_request == CONSTANT_CHARACTER_2a507d76_448e_4716_881b_b202d39a7485).getBoolean()) {
                            me->setLocation(623, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(625, filename);
                            if ((_request == CONSTANT_CHARACTER_eb746031_fe7c_409d_836a_927a6fa39aa6).getBoolean()) {
                                me->setLocation(626, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(628, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(633, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



