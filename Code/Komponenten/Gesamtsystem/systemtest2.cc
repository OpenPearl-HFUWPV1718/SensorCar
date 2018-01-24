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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_25_31(25);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_24_31(24);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_26_31(26);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_27_31(27);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_50_31(50);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_a43ede92_77e6_4071_9c0f_66a3e0b8dd31("u");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_125202e5_96a2_45be_932d_e03e333a546f("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<9>         CONSTANT_CHARACTER_7d6efb61_9f35_4aae_8842_8499f0e5be07("Tschuess.");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_131d202d_5cd4_4652_a925_9409606a958f("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_11943cfe_4c5e_45b6_82f3_791480655c1b("Waehlen Sie:");
static /*const*/ pearlrt::Character<29>         CONSTANT_CHARACTER_2e40500f_f84f_4ee3_9753_c5ad707bd4a6("0 um das Programm zu beenden.");
static /*const*/ pearlrt::Character<31>         CONSTANT_CHARACTER_7d388d2b_1115_4c7a_bc31_6abdfe34f42a("1 um den Demo-Modus zu starten.");
static /*const*/ pearlrt::Character<34>         CONSTANT_CHARACTER_45b6e450_8402_4400_b963_24cda28af581("2 um den Parcour-Modus zu starten.");
static /*const*/ pearlrt::Character<18>         CONSTANT_CHARACTER_5527c4fd_98db_4c26_aa49_6c67619f77ba("Ungueltige Eingabe");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_2422d89d_9791_487c_8b56_c39ca8ab61ed("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_e4d5d108_a108_4655_a8d8_e860166ebf7a("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_29bac037_6c77_4282_b2e2_8c0cf4e7430f("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_ebc4f75d_2fe2_4fd5_8899_40f16f4ce04d("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_11745f08_dc7b_4a94_96f4_55c5591dd169("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_5dd879ae_d404_4113_96fe_bba213d3761e("Command 0: stop");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_19959f69_d437_4818_90f6_d87004377a68("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_cd265c09_b4c1_43e9_a75b_d17acb456eca("Geben Sie die gewuenschte Geschwindigkeit ein [-10, 10]");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_c24194dc_b2a5_4a7a_8127_101be2836747("main");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_03bde236_e570_42dd_a8a8_a585eb22f8e2("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_d8aa6f40_acfd_44d4_8245_bf0ac5f1b361("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_632fc5cd_2d56_403f_803d_9ffcf4b3f8d5("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_7332f18a_29b4_4608_aaa0_f09283612365("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_833ac4e2_b7d6_48ad_b44e_dee6f843cce6("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_4cce919b_2cd0_4093_9a94_b6d5d8f96d8b("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_63942710_87ce_4652_bd9d_4f4755645a90("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_83e5b66f_b175_48c5_9b4b_7b47dd1c7b8f("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_ae667b05_2fa1_43f2_9b09_fbfeb04e6ddc("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_164d1174_785a_408f_bedf_4d61bad711d5("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_f7e68283_5702_4245_9493_230e4e8cd70e("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_3a795eb0_4823_4a96_abbe_783d4d12fcba("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_b3160d4d_7b5a_4ccd_a27d_9542b488faba("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_77035cbf_ee75_4871_ba7e_33379adcba8b("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_1f77cc10_332f_41d6_8323_14928ffe76e2("<li>Geschwindigkeit Links:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_b25280c4_d068_4a68_81d2_cee5dc49ba22("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_84d5e992_c2e6_4d13_905e_0c4d3bbd7b73("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_6f41b2ac_5ba7_4eac_8354_8475805f4812("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_b10371be_bf2d_4133_94ee_f7774acb9ea5("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_911af54a_6434_4526_b2d2_e5ad6983221f("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_8edf8346_a665_44d3_8e2f_4b403e3f3cfe("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_b9c35ef1_81b8_4820_b9dd_f1ddd51a0b06("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_0c355a66_5a89_4445_ac7f_f559031abc34("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_a4e1705f_8138_4519_a8df_adc92b147a2f("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_aa6dc79b_22c4_45d9_9254_19f790dc7a8b("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_e746f122_8a4a_4d72_801a_c82fb5caac48("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_031bd942_9bbd_4019_8baa_fea71a5baf7c("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_ae615230_3d70_41ba_b273_3a0d3ce14064("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_bf2a14a2_b76b_4664_9e0d_430f81367024("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_5b6cbb68_0d56_4854_bc3b_a66e0a4eed4f("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_882a59a1_9888_49d6_987f_efa74d7656f0("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_ab1ccbbc_0104_49bf_b9c7_be34aaca2070("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_69572801_7fad_4246_a3be_b82fb846c7a8("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_0137cd11_ee17_4c74_bf91_1eca62c42ccb(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_e2d57f07_921f_4e91_bffc_3986d4a6efde("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_30a4b0d1_a9e2_4af8_a9b5_6c177ddfdaea(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_4ae396db_20bd_4caf_a0ea_30d35a87370f("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_4369e3a7_b92b_421a_ba57_3bdf3ab5c276("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_44fe42e8_7790_463e_a672_e6ed32a6ddc7("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_c5abafbf_e570_4bce_be3d_511e3de0b559("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_main);
SPCTASK(_driveleft);
SPCTASK(_parcour);
SPCTASK(_driveright);
SPCTASK(_light);
SPCTASK(_demo);
SPCTASK(_readlr);
SPCTASK(_blinker);


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
_switchlights(pearlrt::Task *me, pearlrt::Fixed<31>  _state);
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

extern pearlrt::Device *d_left_blinker;
static pearlrt::SystemDationB* _left_blinker = static_cast<pearlrt::SystemDationB*>(d_left_blinker); 

extern pearlrt::Device *d_right_blinker;
static pearlrt::SystemDationB* _right_blinker = static_cast<pearlrt::SystemDationB*>(d_right_blinker); 

extern pearlrt::Device *d_std_lights;
static pearlrt::SystemDationB* _std_lights = static_cast<pearlrt::SystemDationB*>(d_std_lights); 

extern pearlrt::Device *d_stop_lights;
static pearlrt::SystemDationB* _stop_lights = static_cast<pearlrt::SystemDationB*>(d_stop_lights); 

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

pearlrt::DationTS _blinker_l(_left_blinker, pearlrt::Dation::OUT );

pearlrt::DationTS _blinker_r(_right_blinker, pearlrt::Dation::OUT );

pearlrt::DationTS _lights(_std_lights, pearlrt::Dation::OUT );

pearlrt::DationTS _stop_light(_stop_lights, pearlrt::Dation::OUT );
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

pearlrt::Fixed<31>  _global_light(1); 

pearlrt::Fixed<31>  _global_blinker(0); 

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
DCLBOLT(_blinker_bolt);
DCLBOLT(_light_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Bolt *stop_bolt_bolts[] = {&_stop_bolt}; 
static pearlrt::Bolt *demo_var_bolt_bolts[] = {&_demo_var_bolt}; 
static pearlrt::Bolt *demo_state_bolt_bolts[] = {&_demo_state_bolt}; 
static pearlrt::Bolt *lm_bolt_bolts[] = {&_lm_bolt}; 
static pearlrt::Bolt *rm_bolt_bolts[] = {&_rm_bolt}; 
static pearlrt::Bolt *lr_bolt_bolts[] = {&_lr_bolt}; 
static pearlrt::Bolt *light_bolt_bolts[] = {&_light_bolt}; 
static pearlrt::Bolt *blinker_bolt_bolts[] = {&_blinker_bolt}; 


/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// PROCEDURE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
void
_init(pearlrt::Task *me)
{
    me->setLocation(74, filename);
        _lr_signal = CONSTANT_FIXED_POS_0_31;
    me->setLocation(75, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(76, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(78, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(79, filename);
    {
        _lmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(80, filename);
    {
        _rmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(81, filename);
    {
        _termin.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(82, filename);
    {
        _lights.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(83, filename);
    {
        _blinker_l.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(84, filename);
    {
        _blinker_r.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(85, filename);
    {
        _stop_light.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(87, filename);
        _webinterface.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(88, filename);
        _readlr.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(89, filename);
        _driveleft.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(90, filename);
        _driveright.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(91, filename);
        _light.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(92, filename);
        _blinker.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(94, filename);
    _stop_motors( me);
    me->setLocation(95, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_125202e5_96a2_45be_932d_e03e333a546f) ;
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
    me->setLocation(99, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7d6efb61_9f35_4aae_8842_8499f0e5be07) ;
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

    me->setLocation(101, filename);
    _webinterface.terminate(me);

    me->setLocation(102, filename);
    _readlr.terminate(me);

    me->setLocation(103, filename);
    _driveleft.terminate(me);

    me->setLocation(104, filename);
    _driveright.terminate(me);

    me->setLocation(105, filename);
    _light.terminate(me);

    me->setLocation(106, filename);
    _blinker.terminate(me);

    me->setLocation(109, filename);
    _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(110, filename);
    _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(111, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(112, filename);
    _termin.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(113, filename);
    _lights.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(114, filename);
    _blinker_l.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(115, filename);
    _blinker_r.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(116, filename);
    _stop_light.dationClose(0, (pearlrt::Fixed<15>*) 0);

}

void
_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 


    me->setLocation(123, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_131d202d_5cd4_4652_a925_9409606a958f) ;
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

    me->setLocation(124, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_11943cfe_4c5e_45b6_82f3_791480655c1b) ;
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
        _termout.toA(CONSTANT_CHARACTER_2e40500f_f84f_4ee3_9753_c5ad707bd4a6) ;
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
        _termout.toA(CONSTANT_CHARACTER_7d388d2b_1115_4c7a_bc31_6abdfe34f42a) ;
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
        _termout.toA(CONSTANT_CHARACTER_45b6e450_8402_4400_b963_24cda28af581) ;
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
    {
            while ( 1 )
            {

                me->setLocation(130, filename);
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

                me->setLocation(132, filename);
                if (((_input == CONSTANT_FIXED_POS_0_31).bitOr((_input == CONSTANT_FIXED_POS_1_31)).bitOr((
                _input == CONSTANT_FIXED_POS_2_31))).bitNot().getBoolean()) {
                    me->setLocation(133, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_5527c4fd_98db_4c26_aa49_6c67619f77ba) ;
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
                    me->setLocation(135, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(137, filename);
                                goto _repeat;

                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(139, filename);
                            _demo_menu( me);
                            break;
                        } // end case
                        case 2 :
                        {
                            me->setLocation(141, filename);
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


    me->setLocation(153, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_125202e5_96a2_45be_932d_e03e333a546f) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_2422d89d_9791_487c_8b56_c39ca8ab61ed) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_11943cfe_4c5e_45b6_82f3_791480655c1b) ;
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

    me->setLocation(156, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e4d5d108_a108_4655_a8d8_e860166ebf7a) ;
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

    me->setLocation(157, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_29bac037_6c77_4282_b2e2_8c0cf4e7430f) ;
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

    me->setLocation(158, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_ebc4f75d_2fe2_4fd5_8899_40f16f4ce04d) ;
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
    {
            while ( 1 )
            {

                me->setLocation(161, filename);
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

                me->setLocation(164, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(165, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_5527c4fd_98db_4c26_aa49_6c67619f77ba) ;
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


                    me->setLocation(168, filename);
                    me->setLocation(172, filename);
                    if (_temp.getBoolean()) {
                        me->setLocation(173, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_11745f08_dc7b_4a94_96f4_55c5591dd169) ;
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

                        me->setLocation(174, filename);
                        _demo.terminate(me);

                        me->setLocation(175, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                    me->setLocation(179, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(181, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_5dd879ae_d404_4113_96fe_bba213d3761e) ;
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

                            me->setLocation(183, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(184, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(185, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(188, filename);
                            if ((_temp == pearlrt::BitString<1>(0)).getBoolean()) {
                                me->setLocation(189, filename);
                                    pearlrt::Semaphore::request( me, 1, dt_semas);
                                me->setLocation(190, filename);
                                _demo.terminate(me);

                            }

                            me->setLocation(192, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(194, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_19959f69_d437_4818_90f6_d87004377a68) ;
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

                            me->setLocation(196, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_cd265c09_b4c1_43e9_a75b_d17acb456eca) ;
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

                            me->setLocation(197, filename);
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

                            me->setLocation(198, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_var_bolt_bolts);
                            me->setLocation(199, filename);
                                _demo_var = _var;
                            me->setLocation(200, filename);
                            pearlrt::Bolt::free( me, 1, demo_var_bolt_bolts);
                            me->setLocation(203, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(204, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(205, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(207, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(209, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_state_bolt_bolts);
                            me->setLocation(210, filename);
                                _demo_state = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(211, filename);
                            pearlrt::Bolt::free( me, 1, demo_state_bolt_bolts);
                            me->setLocation(213, filename);
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
                            me->setLocation(215, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_c24194dc_b2a5_4a7a_8127_101be2836747) ;
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


    me->setLocation(243, filename);
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

                me->setLocation(244, filename);
                    pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                me->setLocation(245, filename);
                    pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                me->setLocation(247, filename);
                pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                me->setLocation(248, filename);
                    _lm_speed = _speed;
                me->setLocation(249, filename);
                pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                me->setLocation(251, filename);
                pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                me->setLocation(252, filename);
                    _rm_speed = _speed;
                me->setLocation(253, filename);
                pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                me->setLocation(255, filename);
                    pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                me->setLocation(256, filename);
                    pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                me->setLocation(258, filename);
                pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                me->setLocation(259, filename);
                    _stop = _global_stop;
                me->setLocation(260, filename);
                pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                me->setLocation(243, filename);

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
    me->setLocation(263, filename);
    _stop_motors( me);
}

void
_parcour_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(271, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_125202e5_96a2_45be_932d_e03e333a546f) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_03bde236_e570_42dd_a8a8_a585eb22f8e2) ;
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

    me->setLocation(273, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_11943cfe_4c5e_45b6_82f3_791480655c1b) ;
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

    me->setLocation(274, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_e4d5d108_a108_4655_a8d8_e860166ebf7a) ;
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

    me->setLocation(275, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d8aa6f40_acfd_44d4_8245_bf0ac5f1b361) ;
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

    me->setLocation(276, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_ebc4f75d_2fe2_4fd5_8899_40f16f4ce04d) ;
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

    me->setLocation(278, filename);
    {
            while ( 1 )
            {

                me->setLocation(279, filename);
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

                me->setLocation(282, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(283, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_5527c4fd_98db_4c26_aa49_6c67619f77ba) ;
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
                    me->setLocation(286, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(288, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_5dd879ae_d404_4113_96fe_bba213d3761e) ;
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

                            me->setLocation(290, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(291, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(292, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(295, filename);
                                pearlrt::Semaphore::request( me, 1, p_semas);
                            me->setLocation(296, filename);
                            _parcour.terminate(me);

                            me->setLocation(297, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(299, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_632fc5cd_2d56_403f_803d_9ffcf4b3f8d5) ;
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

                            me->setLocation(301, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(302, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(303, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(305, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(307, filename);
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
                            me->setLocation(309, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_c24194dc_b2a5_4a7a_8127_101be2836747) ;
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

                            me->setLocation(310, filename);
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
    me->setLocation(376, filename);
        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
    me->setLocation(377, filename);
        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
    me->setLocation(380, filename);
    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
    me->setLocation(381, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(382, filename);
    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
    me->setLocation(384, filename);
    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
    me->setLocation(385, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(386, filename);
    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
    me->setLocation(389, filename);
        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
    me->setLocation(390, filename);
        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
}

void
_switchlights(pearlrt::Task *me, pearlrt::Fixed<31>  _state)
{
    me->setLocation(471, filename);
    if ((_state == CONSTANT_FIXED_POS_1_31).bitOr((_state == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
        me->setLocation(472, filename);
        pearlrt::Bolt::reserve( me, 1, light_bolt_bolts);
        me->setLocation(473, filename);
            _global_light = _state;
        me->setLocation(474, filename);
        pearlrt::Bolt::free( me, 1, light_bolt_bolts);
    }

}

void
_step(pearlrt::Task *me, pearlrt::Fixed<31>  _motorindex, pearlrt::Fixed<31>  _steps, pearlrt::Fixed<31>  _dir, pearlrt::Duration  _time)
{
    pearlrt::BitString<4>  _a(pearlrt::BitString<4>(0xa)); 
    pearlrt::BitString<4>  _b(pearlrt::BitString<4>(0x9)); 

    pearlrt::BitString<4>  _c; 
    pearlrt::BitString<4>  _d; 
    pearlrt::BitString<4>  _e; 


    me->setLocation(633, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(634, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(635, filename);
        _e = pearlrt::BitString<4>(0);
    me->setLocation(638, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(639, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(640, filename);
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
            me->setLocation(642, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(643, filename);
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

                            me->setLocation(644, filename);
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

                            me->setLocation(645, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(647, filename);
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

                            me->setLocation(648, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(650, filename);
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

                            me->setLocation(651, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(653, filename);
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

                            me->setLocation(654, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(643, filename);

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

            me->setLocation(658, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(659, filename);
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

                            me->setLocation(660, filename);
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

                            me->setLocation(661, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(663, filename);
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

                            me->setLocation(664, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(666, filename);
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

                            me->setLocation(667, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(669, filename);
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

                            me->setLocation(670, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(659, filename);

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

    me->setLocation(676, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(677, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(678, filename);
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
            me->setLocation(680, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(681, filename);
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

                            me->setLocation(682, filename);
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

                            me->setLocation(683, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(685, filename);
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

                            me->setLocation(686, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(688, filename);
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

                            me->setLocation(689, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(691, filename);
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

                            me->setLocation(692, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(681, filename);

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

            me->setLocation(696, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(697, filename);
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

                            me->setLocation(698, filename);
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

                            me->setLocation(699, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(701, filename);
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

                            me->setLocation(702, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(704, filename);
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

                            me->setLocation(705, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(707, filename);
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

                            me->setLocation(708, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(697, filename);

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


    me->setLocation(757, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(758, filename);
        _speedl = _lm_speed;
    me->setLocation(759, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(761, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(762, filename);
        _speedr = _rm_speed;
    me->setLocation(763, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(766, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_164d1174_785a_408f_bedf_4d61bad711d5) ;
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

    me->setLocation(767, filename);
    _style( me);
    me->setLocation(768, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f7e68283_5702_4245_9493_230e4e8cd70e) ;
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

    me->setLocation(769, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_3a795eb0_4823_4a96_abbe_783d4d12fcba) ;
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

    me->setLocation(771, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b3160d4d_7b5a_4ccd_a27d_9542b488faba) ;
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

    me->setLocation(772, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_77035cbf_ee75_4871_ba7e_33379adcba8b) ;
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

    me->setLocation(773, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1f77cc10_332f_41d6_8323_14928ffe76e2) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_b25280c4_d068_4a68_81d2_cee5dc49ba22) ;
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

    me->setLocation(774, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_84d5e992_c2e6_4d13_905e_0c4d3bbd7b73) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_b25280c4_d068_4a68_81d2_cee5dc49ba22) ;
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

    me->setLocation(775, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f41b2ac_5ba7_4eac_8354_8475805f4812) ;
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

    me->setLocation(776, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b10371be_bf2d_4133_94ee_f7774acb9ea5) ;
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

    me->setLocation(777, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_911af54a_6434_4526_b2d2_e5ad6983221f) ;
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
    me->setLocation(781, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_164d1174_785a_408f_bedf_4d61bad711d5) ;
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

    me->setLocation(782, filename);
    _style( me);
    me->setLocation(783, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8edf8346_a665_44d3_8e2f_4b403e3f3cfe) ;
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

    me->setLocation(785, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b9c35ef1_81b8_4820_b9dd_f1ddd51a0b06) ;
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

    me->setLocation(786, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0c355a66_5a89_4445_ac7f_f559031abc34) ;
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

    me->setLocation(787, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a4e1705f_8138_4519_a8df_adc92b147a2f) ;
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

    me->setLocation(788, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b10371be_bf2d_4133_94ee_f7774acb9ea5) ;
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

    me->setLocation(789, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_aa6dc79b_22c4_45d9_9254_19f790dc7a8b) ;
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
    me->setLocation(793, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_164d1174_785a_408f_bedf_4d61bad711d5) ;
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

    me->setLocation(794, filename);
    _style( me);
    me->setLocation(795, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8edf8346_a665_44d3_8e2f_4b403e3f3cfe) ;
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

    me->setLocation(797, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e746f122_8a4a_4d72_801a_c82fb5caac48) ;
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

    me->setLocation(798, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_031bd942_9bbd_4019_8baa_fea71a5baf7c) ;
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

    me->setLocation(799, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a4e1705f_8138_4519_a8df_adc92b147a2f) ;
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

    me->setLocation(800, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b10371be_bf2d_4133_94ee_f7774acb9ea5) ;
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

    me->setLocation(801, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ae615230_3d70_41ba_b273_3a0d3ce14064) ;
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
    me->setLocation(805, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_164d1174_785a_408f_bedf_4d61bad711d5) ;
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

    me->setLocation(806, filename);
    _style( me);
    me->setLocation(807, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8edf8346_a665_44d3_8e2f_4b403e3f3cfe) ;
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

    me->setLocation(809, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_bf2a14a2_b76b_4664_9e0d_430f81367024) ;
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
    me->setLocation(814, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_5b6cbb68_0d56_4854_bc3b_a66e0a4eed4f) ;
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

    me->setLocation(815, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_882a59a1_9888_49d6_987f_efa74d7656f0) ;
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

    me->setLocation(816, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ab1ccbbc_0104_49bf_b9c7_be34aaca2070) ;
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

    me->setLocation(817, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_69572801_7fad_4246_a3be_b82fb846c7a8) ;
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

    me->setLocation(818, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0137cd11_ee17_4c74_bf91_1eca62c42ccb) ;
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

    me->setLocation(819, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e2d57f07_921f_4e91_bffc_3986d4a6efde) ;
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

    me->setLocation(820, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_30a4b0d1_a9e2_4af8_a9b5_6c177ddfdaea) ;
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

    me->setLocation(821, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4ae396db_20bd_4caf_a0ea_30d35a87370f) ;
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

    me->setLocation(822, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4369e3a7_b92b_421a_ba57_3bdf3ab5c276) ;
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

    me->setLocation(823, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_44fe42e8_7790_463e_a672_e6ed32a6ddc7) ;
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

    me->setLocation(824, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c5abafbf_e570_4bce_be3d_511e3de0b559) ;
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
        me->setLocation(68, filename);
        _init( me);
        me->setLocation(69, filename);
        _menu( me);
        me->setLocation(70, filename);
        _term( me);
}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _state(0); 
        pearlrt::Fixed<31>  _var(0); 


        me->setLocation(225, filename);
        pearlrt::Bolt::enter( me, 1, demo_state_bolt_bolts);
        me->setLocation(226, filename);
            _state = _demo_state;
        me->setLocation(227, filename);
        pearlrt::Bolt::leave( me, 1, demo_state_bolt_bolts);
        me->setLocation(229, filename);
        pearlrt::Bolt::enter( me, 1, demo_var_bolt_bolts);
        me->setLocation(230, filename);
            _var = _demo_var;
        me->setLocation(231, filename);
        pearlrt::Bolt::leave( me, 1, demo_var_bolt_bolts);
        me->setLocation(233, filename);
        if ((_state == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(234, filename);
            _straight( me, _var);
        }

        me->setLocation(236, filename);
            pearlrt::Semaphore::release( me, 1, dt_semas);
        me->setLocation(237, filename);
        me->suspend(me);


}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _in(1); 

        pearlrt::Fixed<31>  _stop(0); 


        me->setLocation(322, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(324, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                    me->setLocation(325, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                    me->setLocation(328, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(329, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(331, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(332, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(333, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(335, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(336, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(337, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(340, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(341, filename);
                            _lspeed = _in;
                        me->setLocation(342, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(345, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(346, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(347, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(350, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(351, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(352, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(354, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(355, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(356, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(359, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                    me->setLocation(360, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                    me->setLocation(363, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(364, filename);
                        _stop = _global_stop;
                    me->setLocation(365, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(368, filename);
        _stop_motors( me);
        me->setLocation(370, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(371, filename);
        me->suspend(me);


}
DCLTASK(_light, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _rspeed(0); 
        pearlrt::Float<53>  _lspeed(0); 

        pearlrt::Fixed<31>  _light(0); 

        pearlrt::BitString<1>  _on(pearlrt::BitString<1>(0x1)); 
        pearlrt::BitString<1>  _off(pearlrt::BitString<1>(0x0)); 


        me->setLocation(398, filename);
        {
                while ( 1 )
                {

                    me->setLocation(398, filename);
                        ;
                    me->setLocation(399, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(400, filename);
                        _lspeed = _lm_speed;
                    me->setLocation(401, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(403, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(404, filename);
                        _rspeed = _rm_speed;
                    me->setLocation(405, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(407, filename);
                    pearlrt::Bolt::enter( me, 1, light_bolt_bolts);
                    me->setLocation(408, filename);
                        _light = _global_light;
                    me->setLocation(409, filename);
                    pearlrt::Bolt::leave( me, 1, light_bolt_bolts);
                    me->setLocation(412, filename);
                    if ((_lspeed == CONSTANT_FIXED_POS_0_31).bitAnd((_rspeed == 
                    CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(413, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _stop_light.beginSequence(me);
                            _stop_light.dationWrite(&_on, sizeof(_on));
                            _stop_light.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _stop_light.updateRst(&s) ) {
                                _stop_light.endSequence();
                                throw;
                            }
                            _stop_light.endSequence();
                        }
                        // SEND STATEMENT END

                    }
                    else {
                        me->setLocation(415, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _stop_light.beginSequence(me);
                            _stop_light.dationWrite(&_off, sizeof(_off));
                            _stop_light.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _stop_light.updateRst(&s) ) {
                                _stop_light.endSequence();
                                throw;
                            }
                            _stop_light.endSequence();
                        }
                        // SEND STATEMENT END

                    }
                    me->setLocation(418, filename);
                    if ((_lspeed > _rspeed).getBoolean()) {
                        me->setLocation(419, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(420, filename);
                            _global_blinker = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(421, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(424, filename);
                    if ((_rspeed > _lspeed).getBoolean()) {
                        me->setLocation(425, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(426, filename);
                            _global_blinker = CONSTANT_FIXED_NEG_1_31;
                        me->setLocation(427, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(430, filename);
                    if ((_rspeed == _lspeed).getBoolean()) {
                        me->setLocation(431, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(432, filename);
                            _global_blinker = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(433, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(436, filename);
                    if ((_light == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(437, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _lights.beginSequence(me);
                            _lights.dationWrite(&_on, sizeof(_on));
                            _lights.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _lights.updateRst(&s) ) {
                                _lights.endSequence();
                                throw;
                            }
                            _lights.endSequence();
                        }
                        // SEND STATEMENT END

                    }
                    else {
                        me->setLocation(439, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _lights.beginSequence(me);
                            _lights.dationWrite(&_off, sizeof(_off));
                            _lights.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _lights.updateRst(&s) ) {
                                _lights.endSequence();
                                throw;
                            }
                            _lights.endSequence();
                        }
                        // SEND STATEMENT END

                    }
                    me->setLocation(441, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(0.01))
                                  );


                }

        }
}
DCLTASK(_blinker, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _var(0); 

        pearlrt::BitString<1>  _on(pearlrt::BitString<1>(0x1)); 
        pearlrt::BitString<1>  _off(pearlrt::BitString<1>(0x0)); 


        me->setLocation(449, filename);
        {
                while ( 1 )
                {

                    me->setLocation(449, filename);
                        ;
                    me->setLocation(450, filename);
                    pearlrt::Bolt::enter( me, 1, blinker_bolt_bolts);
                    me->setLocation(451, filename);
                        _var = _global_blinker;
                    me->setLocation(452, filename);
                    pearlrt::Bolt::leave( me, 1, blinker_bolt_bolts);
                    me->setLocation(454, filename);
                    if ((_var == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(455, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _blinker_r.beginSequence(me);
                            _blinker_r.dationWrite(&_on, sizeof(_on));
                            _blinker_r.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _blinker_r.updateRst(&s) ) {
                                _blinker_r.endSequence();
                                throw;
                            }
                            _blinker_r.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(456, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(457, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _blinker_r.beginSequence(me);
                            _blinker_r.dationWrite(&_off, sizeof(_off));
                            _blinker_r.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _blinker_r.updateRst(&s) ) {
                                _blinker_r.endSequence();
                                throw;
                            }
                            _blinker_r.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(458, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                    }

                    me->setLocation(461, filename);
                    if ((_var == CONSTANT_FIXED_NEG_1_31).getBoolean()) {
                        me->setLocation(462, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _blinker_l.beginSequence(me);
                            _blinker_l.dationWrite(&_on, sizeof(_on));
                            _blinker_l.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _blinker_l.updateRst(&s) ) {
                                _blinker_l.endSequence();
                                throw;
                            }
                            _blinker_l.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(463, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(464, filename);
                        // SEND STATEMENT BEGIN
                        try {
                            _blinker_l.beginSequence(me);
                            _blinker_l.dationWrite(&_off, sizeof(_off));
                            _blinker_l.endSequence();
                        }
                        catch(pearlrt::Signal &s) {
                            if ( ! _blinker_l.updateRst(&s) ) {
                                _blinker_l.endSequence();
                                throw;
                            }
                            _blinker_l.endSequence();
                        }
                        // SEND STATEMENT END

                        me->setLocation(465, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                    }


                }

        }
}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(486, filename);
        {
                while ( 1 )
                {

                    me->setLocation(487, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_out_semas);
                    me->setLocation(489, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(490, filename);
                        _speed = _lm_speed;
                    me->setLocation(491, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(493, filename);
                    if ((_speed == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(495, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(496, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(499, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(500, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(501, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }

                        me->setLocation(504, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(505, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(509, filename);
                    _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
                    me->setLocation(511, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_in_semas);

                }

        }
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(523, filename);
        {
                while ( 1 )
                {

                    me->setLocation(524, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_out_semas);
                    me->setLocation(526, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(527, filename);
                        _speed = _rm_speed;
                    me->setLocation(528, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(530, filename);
                    if (((_speed == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(531, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(532, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(535, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(536, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(537, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }
                        else {
                            me->setLocation(539, filename);
                                _direction = CONSTANT_FIXED_POS_1_31;
                        }
                        me->setLocation(542, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(543, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(547, filename);
                    _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
                    me->setLocation(549, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_in_semas);

                }

        }
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(561, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(562, filename);
        {
                while ( 1 )
                {

                    me->setLocation(563, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(564, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(566, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(567, filename);
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

                    me->setLocation(571, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(572, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(573, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(576, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(577, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(578, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(581, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(582, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(583, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(586, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(587, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(588, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(591, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(592, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(593, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(596, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(597, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(598, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(601, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(602, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(603, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(606, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(607, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(608, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(611, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(612, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(616, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(617, filename);
                        _lr_signal = _out;
                    me->setLocation(618, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(619, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(624, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(724, filename);
        {
                while ( 1 )
                {

                    me->setLocation(725, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(727, filename);
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

                    me->setLocation(729, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_7332f18a_29b4_4608_aaa0_f09283612365) ;
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

                    me->setLocation(730, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_833ac4e2_b7d6_48ad_b44e_dee6f843cce6) ;
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

                    me->setLocation(731, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_4cce919b_2cd0_4093_9a94_b6d5d8f96d8b) ;
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

                    me->setLocation(733, filename);
                    if ((_request == CONSTANT_CHARACTER_63942710_87ce_4652_bd9d_4f4755645a90).getBoolean()) {
                        me->setLocation(734, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(736, filename);
                        if ((_request == CONSTANT_CHARACTER_83e5b66f_b175_48c5_9b4b_7b47dd1c7b8f).getBoolean()) {
                            me->setLocation(737, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(739, filename);
                            if ((_request == CONSTANT_CHARACTER_ae667b05_2fa1_43f2_9b09_fbfeb04e6ddc).getBoolean()) {
                                me->setLocation(740, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(742, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(747, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



