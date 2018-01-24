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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_13000_31(13000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6000_31(6000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_12000_31(12000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_11000_31(11000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2500_31(2500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3500_31(3500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3800_31(3800);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_492dd793_a8d4_4921_9b26_e738ea28ef9c("u");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_b7f2b10b_976c_4433_863d_c270be3400e7("/dev/i2c-1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_f3cce15a_4194_4a94_9ba7_4c105cb4aa52("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<9>         CONSTANT_CHARACTER_a6e30788_14ac_47c8_85e8_3c364cbd3436("Tschuess.");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_d4a5af50_15e5_40b7_a902_063f09531156("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_0d1b3396_0820_40fd_8940_90ce7585a6c9("Waehlen Sie:");
static /*const*/ pearlrt::Character<29>         CONSTANT_CHARACTER_d031ef88_66ec_436c_936b_26a5d766af98("0 um das Programm zu beenden.");
static /*const*/ pearlrt::Character<31>         CONSTANT_CHARACTER_7f0673fc_b270_4748_aa53_ac75f5b07651("1 um den Demo-Modus zu starten.");
static /*const*/ pearlrt::Character<34>         CONSTANT_CHARACTER_c1881fc0_62b4_46d3_ae9b_d7c2a5998a3a("2 um den Parcour-Modus zu starten.");
static /*const*/ pearlrt::Character<18>         CONSTANT_CHARACTER_54d71662_cb5d_4319_8019_c521d7742bb8("Ungueltige Eingabe");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_b0b02fb2_be15_498a_be79_00561f6978e7("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_79d265d3_48d3_4987_ba4d_8dc30e8bcbb7("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_1f2f4902_5494_4ffb_9ba0_2fba7d801835("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_2ae57cf6_4118_4815_9bd0_0e11373e2c85("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_3fa7ec3f_0024_4f6e_b721_3f46fd5f00c6("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_0710a2ba_9a93_411c_8272_80636ddf214f("Command 0: stop");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_8d098b0a_f414_4c51_a6b3_023d0435ed34("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_e10b3029_8400_4c21_bfdb_dfd043f46564("Geben Sie die gewuenschte Geschwindigkeit ein [-10, 10]");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_6286a22b_de98_448d_b8cd_53ca23838e42("main");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_24fb2d7c_f7de_4c67_8c02_76766afaea2a("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_774e01ec_8a14_4ed0_b910_67b517563009("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_aaaedc4d_86eb_4117_8219_fa0f1ec8218b("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<29>         CONSTANT_CHARACTER_d102ebf9_7613_4a5b_b024_b79effe35757("rot erkannt, stop eingeleitet");
static /*const*/ pearlrt::Character<32>         CONSTANT_CHARACTER_e62fb02a_3da4_4b40_9ca3_a8552b573215("gruen erkannt, geradeausfahren..");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_def39abe_872c_40e9_94da_79e0f06e7941("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_0a0442c2_02d6_4b67_99f1_5a91c18efbdb("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_6e7c4b75_df36_4184_8c11_326c41926ee7("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_5edf26d1_8227_437f_9549_35b35c022184("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_db396089_6fbb_4283_ae87_866774ea7ab0("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_b29d0bf1_4a7c_4bae_ab43_24398ae2fd19("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_4da80c1d_f145_4ac0_9cd4_3f27126b4dac("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_e2f5333e_9b8c_4587_a155_5cd2dbd3944d("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_1c7d988f_6ceb_439d_b24f_780d2127d180("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_5ea0988c_c4a1_4b79_bf2e_b820c743b206("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_8a839770_e2c8_46fa_bf1a_bef33d7ca32c("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_8d045892_fa0f_42e0_9cec_75a43c86e1cc("<li>Geschwindigkeit Links:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_4ea697e2_5682_417a_ae54_f59e0db1f6b3("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_8fd394b7_2e07_45c3_89d2_57c4d21b4e29("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_0286b82d_7882_400c_a815_9d28ba45e5a9("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_ccc234d1_5e4e_4f6b_b2eb_70e606370280("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_38fcd2e0_0792_46c0_b924_a80a87f9c601("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_db9d71a2_7a4e_4dc0_9134_1d48f5a6afe3("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_04e95bba_8826_4ef4_bb6e_118868b5e62a("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_a5e1dd79_a30c_4fa9_86ef_0cece19849ef("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_18872db5_67d5_4c0e_8a7d_1fb65888c19c("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_2b20eb6d_6d57_4b19_b0d5_49edfa59a76d("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_156d287a_e760_49ab_aa65_44691e899d4e("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_066a2ecc_8e6c_404a_850b_75214288652b("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_884d961a_b850_45b1_ad46_c576d7b648e7("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_a43634b9_85b4_47b8_926b_51964a4ac509("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_1c5b8289_c344_4097_afa8_53703b860ae0("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_773d68e9_f9ac_4516_93c6_e740048db7b7("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_ca5c93d6_d20c_46eb_929d_dc899ed7f9f1("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_afc2a3d6_1207_4752_a569_e5a80e292470("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_ece648c1_a781_499c_a6d5_6685219374b4(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_4edfa9b3_df6a_4ad7_80ab_11711b7a5100("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_366ba353_c663_4657_b41a_4d2ca95e51e1(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_0c409a96_2851_4b91_9d22_9166ef38f623("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_830204fd_e39c_405b_88d8_8316434bac0a("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_8fe727e4_b17b_40f4_8739_bf9f3292a54e("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_0d25796c_3491_4cda_8ca8_5eee8d017ff8("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_main);
SPCTASK(_driveleft);
SPCTASK(_parcour);
SPCTASK(_readfs);
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

extern pearlrt::Device *d_farbsensor;
static pearlrt::SystemDationB* _farbsensor = static_cast<pearlrt::SystemDationB*>(d_farbsensor); 

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

pearlrt::DationTS _fs(_farbsensor, pearlrt::Dation::IN );

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

pearlrt::Fixed<31>  _fs_signal(0); 

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
DCLSEMA(_fs_buffer_in,1);
DCLSEMA(_fs_buffer_out,0);
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
DCLBOLT(_fs_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Bolt *stop_bolt_bolts[] = {&_stop_bolt}; 
static pearlrt::Bolt *demo_var_bolt_bolts[] = {&_demo_var_bolt}; 
static pearlrt::Bolt *demo_state_bolt_bolts[] = {&_demo_state_bolt}; 
static pearlrt::Bolt *lm_bolt_bolts[] = {&_lm_bolt}; 
static pearlrt::Bolt *rm_bolt_bolts[] = {&_rm_bolt}; 
static pearlrt::Bolt *fs_bolt_bolts[] = {&_fs_bolt}; 
static pearlrt::Bolt *lr_bolt_bolts[] = {&_lr_bolt}; 
static pearlrt::Bolt *light_bolt_bolts[] = {&_light_bolt}; 
static pearlrt::Bolt *blinker_bolt_bolts[] = {&_blinker_bolt}; 


/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////
DCLARRAY(ad_1_1_5, 1, LIMITS({{1,5,1}}));


/////////////////////////////////////////////////////////////////////////////
// PROCEDURE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
void
_init(pearlrt::Task *me)
{
    me->setLocation(79, filename);
        _lr_signal = CONSTANT_FIXED_POS_0_31;
    me->setLocation(80, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(81, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(83, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(84, filename);
    {
        _lmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(85, filename);
    {
        _rmotor.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(86, filename);
    {
        _termin.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(87, filename);
    {
        _lights.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(88, filename);
    {
        _blinker_l.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(89, filename);
    {
        _blinker_r.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(90, filename);
    {
        _stop_light.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(91, filename);
    {
        _fs.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(92, filename);
    {
        _lr.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(94, filename);
        _webinterface.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(95, filename);
        _readlr.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(96, filename);
        _readfs.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(97, filename);
        _driveleft.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(98, filename);
        _driveright.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(99, filename);
        _light.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(100, filename);
        _blinker.activate( me,
                          0,
                          /* prio   */  pearlrt::Prio(),
                          /* at     */  pearlrt::Clock(),
                          /* after  */  pearlrt::Duration(),
                          /* all    */  pearlrt::Duration(),
                          /* until  */  pearlrt::Clock(),
                          /* during */  pearlrt::Duration()
                        );

    me->setLocation(102, filename);
    _stop_motors( me);
    me->setLocation(103, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_f3cce15a_4194_4a94_9ba7_4c105cb4aa52) ;
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
    me->setLocation(107, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_a6e30788_14ac_47c8_85e8_3c364cbd3436) ;
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

    me->setLocation(109, filename);
    _webinterface.terminate(me);

    me->setLocation(110, filename);
    _readlr.terminate(me);

    me->setLocation(111, filename);
    _readfs.terminate(me);

    me->setLocation(112, filename);
    _driveleft.terminate(me);

    me->setLocation(113, filename);
    _driveright.terminate(me);

    me->setLocation(114, filename);
    _light.terminate(me);

    me->setLocation(115, filename);
    _blinker.terminate(me);

    me->setLocation(118, filename);
    _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(119, filename);
    _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(120, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(121, filename);
    _termin.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(122, filename);
    _lights.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(123, filename);
    _blinker_l.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(124, filename);
    _blinker_r.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(125, filename);
    _stop_light.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(126, filename);
    _fs.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(127, filename);
    _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}

void
_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 


    me->setLocation(135, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d4a5af50_15e5_40b7_a902_063f09531156) ;
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

    me->setLocation(136, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_0d1b3396_0820_40fd_8940_90ce7585a6c9) ;
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

    me->setLocation(137, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_d031ef88_66ec_436c_936b_26a5d766af98) ;
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

    me->setLocation(138, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_7f0673fc_b270_4748_aa53_ac75f5b07651) ;
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

    me->setLocation(139, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_c1881fc0_62b4_46d3_ae9b_d7c2a5998a3a) ;
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
    {
            while ( 1 )
            {

                me->setLocation(142, filename);
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

                me->setLocation(144, filename);
                if (((_input == CONSTANT_FIXED_POS_0_31).bitOr((_input == CONSTANT_FIXED_POS_1_31)).bitOr((
                _input == CONSTANT_FIXED_POS_2_31))).bitNot().getBoolean()) {
                    me->setLocation(145, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_54d71662_cb5d_4319_8019_c521d7742bb8) ;
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
                    me->setLocation(147, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(149, filename);
                                goto _repeat;

                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(151, filename);
                            _demo_menu( me);
                            break;
                        } // end case
                        case 2 :
                        {
                            me->setLocation(153, filename);
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


    me->setLocation(165, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_f3cce15a_4194_4a94_9ba7_4c105cb4aa52) ;
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

    me->setLocation(166, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_b0b02fb2_be15_498a_be79_00561f6978e7) ;
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
        _termout.toA(CONSTANT_CHARACTER_0d1b3396_0820_40fd_8940_90ce7585a6c9) ;
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
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_79d265d3_48d3_4987_ba4d_8dc30e8bcbb7) ;
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

    me->setLocation(169, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_1f2f4902_5494_4ffb_9ba0_2fba7d801835) ;
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

    me->setLocation(170, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_2ae57cf6_4118_4815_9bd0_0e11373e2c85) ;
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

    me->setLocation(172, filename);
    {
            while ( 1 )
            {

                me->setLocation(173, filename);
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

                me->setLocation(176, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(177, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_54d71662_cb5d_4319_8019_c521d7742bb8) ;
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


                    me->setLocation(180, filename);
                    me->setLocation(184, filename);
                    if (_temp.getBoolean()) {
                        me->setLocation(185, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_3fa7ec3f_0024_4f6e_b721_3f46fd5f00c6) ;
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

                        me->setLocation(186, filename);
                        _demo.terminate(me);

                        me->setLocation(187, filename);
                            _is_driving = CONSTANT_FIXED_POS_0_31;
                    }

                    me->setLocation(191, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(193, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_0710a2ba_9a93_411c_8272_80636ddf214f) ;
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

                            me->setLocation(195, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(196, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(197, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(200, filename);
                            if ((_temp == pearlrt::BitString<1>(0)).getBoolean()) {
                                me->setLocation(201, filename);
                                    pearlrt::Semaphore::request( me, 1, dt_semas);
                                me->setLocation(202, filename);
                                _demo.terminate(me);

                            }

                            me->setLocation(204, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(206, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_8d098b0a_f414_4c51_a6b3_023d0435ed34) ;
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

                            me->setLocation(208, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_e10b3029_8400_4c21_bfdb_dfd043f46564) ;
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

                            me->setLocation(209, filename);
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

                            me->setLocation(210, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_var_bolt_bolts);
                            me->setLocation(211, filename);
                                _demo_var = _var;
                            me->setLocation(212, filename);
                            pearlrt::Bolt::free( me, 1, demo_var_bolt_bolts);
                            me->setLocation(215, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(216, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(217, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(219, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(221, filename);
                            pearlrt::Bolt::reserve( me, 1, demo_state_bolt_bolts);
                            me->setLocation(222, filename);
                                _demo_state = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(223, filename);
                            pearlrt::Bolt::free( me, 1, demo_state_bolt_bolts);
                            me->setLocation(225, filename);
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
                            me->setLocation(227, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_6286a22b_de98_448d_b8cd_53ca23838e42) ;
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


    me->setLocation(255, filename);
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

                me->setLocation(256, filename);
                    pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                me->setLocation(257, filename);
                    pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                me->setLocation(259, filename);
                pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                me->setLocation(260, filename);
                    _lm_speed = _speed;
                me->setLocation(261, filename);
                pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                me->setLocation(263, filename);
                pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                me->setLocation(264, filename);
                    _rm_speed = _speed;
                me->setLocation(265, filename);
                pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                me->setLocation(267, filename);
                    pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                me->setLocation(268, filename);
                    pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                me->setLocation(270, filename);
                pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                me->setLocation(271, filename);
                    _stop = _global_stop;
                me->setLocation(272, filename);
                pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                me->setLocation(255, filename);

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
    me->setLocation(275, filename);
    _stop_motors( me);
}

void
_parcour_menu(pearlrt::Task *me)
{
    pearlrt::Fixed<31>  _input; 

    pearlrt::Fixed<31>  _is_driving(0); 


    me->setLocation(283, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_f3cce15a_4194_4a94_9ba7_4c105cb4aa52) ;
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

    me->setLocation(284, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_24fb2d7c_f7de_4c67_8c02_76766afaea2a) ;
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

    me->setLocation(285, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_0d1b3396_0820_40fd_8940_90ce7585a6c9) ;
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

    me->setLocation(286, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_79d265d3_48d3_4987_ba4d_8dc30e8bcbb7) ;
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

    me->setLocation(287, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_774e01ec_8a14_4ed0_b910_67b517563009) ;
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

    me->setLocation(288, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_2ae57cf6_4118_4815_9bd0_0e11373e2c85) ;
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
    {
            while ( 1 )
            {

                me->setLocation(291, filename);
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

                me->setLocation(294, filename);
                if (((_is_driving == CONSTANT_FIXED_POS_1_31).bitAnd((_input == 
                CONSTANT_FIXED_POS_0_31))).bitNot().bitAnd(((_is_driving == CONSTANT_FIXED_POS_0_31).bitAnd(
                ((_input == CONSTANT_FIXED_POS_1_31).bitOr((_input == CONSTANT_FIXED_POS_2_31))
                ))).bitNot()).getBoolean()) {
                    me->setLocation(295, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_54d71662_cb5d_4319_8019_c521d7742bb8) ;
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
                    me->setLocation(298, filename);
                    switch (_input.get()) {
                        case 0 :
                        {
                            me->setLocation(300, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_0710a2ba_9a93_411c_8272_80636ddf214f) ;
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

                            me->setLocation(302, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(303, filename);
                                _global_stop = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(304, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(307, filename);
                                pearlrt::Semaphore::request( me, 1, p_semas);
                            me->setLocation(308, filename);
                            _parcour.terminate(me);

                            me->setLocation(309, filename);
                                _is_driving = CONSTANT_FIXED_POS_0_31;
                            break;
                        } // end case
                        case 1 :
                        {
                            me->setLocation(311, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_aaaedc4d_86eb_4117_8219_fa0f1ec8218b) ;
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

                            me->setLocation(313, filename);
                            pearlrt::Bolt::reserve( me, 1, stop_bolt_bolts);
                            me->setLocation(314, filename);
                                _global_stop = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(315, filename);
                            pearlrt::Bolt::free( me, 1, stop_bolt_bolts);
                            me->setLocation(317, filename);
                                _is_driving = CONSTANT_FIXED_POS_1_31;
                            me->setLocation(319, filename);
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
                            me->setLocation(321, filename);
                            // PUT STATEMENT BEGIN
                            try {
                                _termout.beginSequence(me);
                                _termout.toA(CONSTANT_CHARACTER_6286a22b_de98_448d_b8cd_53ca23838e42) ;
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

                            me->setLocation(322, filename);
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
    me->setLocation(410, filename);
        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
    me->setLocation(411, filename);
        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
    me->setLocation(414, filename);
    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
    me->setLocation(415, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(416, filename);
    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
    me->setLocation(418, filename);
    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
    me->setLocation(419, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(420, filename);
    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
    me->setLocation(423, filename);
        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
    me->setLocation(424, filename);
        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
}

void
_switchlights(pearlrt::Task *me, pearlrt::Fixed<31>  _state)
{
    me->setLocation(505, filename);
    if ((_state == CONSTANT_FIXED_POS_1_31).bitOr((_state == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
        me->setLocation(506, filename);
        pearlrt::Bolt::reserve( me, 1, light_bolt_bolts);
        me->setLocation(507, filename);
            _global_light = _state;
        me->setLocation(508, filename);
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


    me->setLocation(666, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(667, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(668, filename);
        _e = pearlrt::BitString<4>(0);
    me->setLocation(671, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(672, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(673, filename);
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
            me->setLocation(675, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(676, filename);
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

                            me->setLocation(677, filename);
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

                            me->setLocation(678, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(680, filename);
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

                            me->setLocation(681, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(683, filename);
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

                            me->setLocation(684, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(686, filename);
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

                            me->setLocation(687, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(676, filename);

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

            me->setLocation(691, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(692, filename);
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

                            me->setLocation(693, filename);
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

                            me->setLocation(694, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(696, filename);
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

                            me->setLocation(697, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(699, filename);
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

                            me->setLocation(700, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(702, filename);
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

                            me->setLocation(703, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(692, filename);

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

    me->setLocation(709, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(710, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(711, filename);
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
            me->setLocation(713, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(714, filename);
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

                            me->setLocation(715, filename);
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

                            me->setLocation(716, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(718, filename);
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

                            me->setLocation(719, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(721, filename);
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

                            me->setLocation(722, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(724, filename);
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

                            me->setLocation(725, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(714, filename);

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

            me->setLocation(729, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(730, filename);
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

                            me->setLocation(731, filename);
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

                            me->setLocation(732, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(734, filename);
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

                            me->setLocation(735, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(737, filename);
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

                            me->setLocation(738, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(740, filename);
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

                            me->setLocation(741, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(730, filename);

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


    me->setLocation(824, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(825, filename);
        _speedl = _lm_speed;
    me->setLocation(826, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(828, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(829, filename);
        _speedr = _rm_speed;
    me->setLocation(830, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(833, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4da80c1d_f145_4ac0_9cd4_3f27126b4dac) ;
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

    me->setLocation(834, filename);
    _style( me);
    me->setLocation(835, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e2f5333e_9b8c_4587_a155_5cd2dbd3944d) ;
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

    me->setLocation(836, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1c7d988f_6ceb_439d_b24f_780d2127d180) ;
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

    me->setLocation(838, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_5ea0988c_c4a1_4b79_bf2e_b820c743b206) ;
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

    me->setLocation(839, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8a839770_e2c8_46fa_bf1a_bef33d7ca32c) ;
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

    me->setLocation(840, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8d045892_fa0f_42e0_9cec_75a43c86e1cc) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_4ea697e2_5682_417a_ae54_f59e0db1f6b3) ;
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

    me->setLocation(841, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8fd394b7_2e07_45c3_89d2_57c4d21b4e29) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_4ea697e2_5682_417a_ae54_f59e0db1f6b3) ;
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

    me->setLocation(842, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0286b82d_7882_400c_a815_9d28ba45e5a9) ;
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

    me->setLocation(843, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ccc234d1_5e4e_4f6b_b2eb_70e606370280) ;
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

    me->setLocation(844, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_38fcd2e0_0792_46c0_b924_a80a87f9c601) ;
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
    me->setLocation(848, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4da80c1d_f145_4ac0_9cd4_3f27126b4dac) ;
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

    me->setLocation(849, filename);
    _style( me);
    me->setLocation(850, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_db9d71a2_7a4e_4dc0_9134_1d48f5a6afe3) ;
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

    me->setLocation(852, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_04e95bba_8826_4ef4_bb6e_118868b5e62a) ;
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

    me->setLocation(853, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a5e1dd79_a30c_4fa9_86ef_0cece19849ef) ;
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

    me->setLocation(854, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_18872db5_67d5_4c0e_8a7d_1fb65888c19c) ;
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

    me->setLocation(855, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ccc234d1_5e4e_4f6b_b2eb_70e606370280) ;
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

    me->setLocation(856, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_2b20eb6d_6d57_4b19_b0d5_49edfa59a76d) ;
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
    me->setLocation(860, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4da80c1d_f145_4ac0_9cd4_3f27126b4dac) ;
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

    me->setLocation(861, filename);
    _style( me);
    me->setLocation(862, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_db9d71a2_7a4e_4dc0_9134_1d48f5a6afe3) ;
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

    me->setLocation(864, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_156d287a_e760_49ab_aa65_44691e899d4e) ;
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

    me->setLocation(865, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_066a2ecc_8e6c_404a_850b_75214288652b) ;
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

    me->setLocation(866, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_18872db5_67d5_4c0e_8a7d_1fb65888c19c) ;
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

    me->setLocation(867, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ccc234d1_5e4e_4f6b_b2eb_70e606370280) ;
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

    me->setLocation(868, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_884d961a_b850_45b1_ad46_c576d7b648e7) ;
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
    me->setLocation(872, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4da80c1d_f145_4ac0_9cd4_3f27126b4dac) ;
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

    me->setLocation(873, filename);
    _style( me);
    me->setLocation(874, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_db9d71a2_7a4e_4dc0_9134_1d48f5a6afe3) ;
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

    me->setLocation(876, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a43634b9_85b4_47b8_926b_51964a4ac509) ;
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
    me->setLocation(881, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1c5b8289_c344_4097_afa8_53703b860ae0) ;
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

    me->setLocation(882, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_773d68e9_f9ac_4516_93c6_e740048db7b7) ;
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

    me->setLocation(883, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ca5c93d6_d20c_46eb_929d_dc899ed7f9f1) ;
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

    me->setLocation(884, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_afc2a3d6_1207_4752_a569_e5a80e292470) ;
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

    me->setLocation(885, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ece648c1_a781_499c_a6d5_6685219374b4) ;
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

    me->setLocation(886, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4edfa9b3_df6a_4ad7_80ab_11711b7a5100) ;
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

    me->setLocation(887, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_366ba353_c663_4657_b41a_4d2ca95e51e1) ;
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

    me->setLocation(888, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0c409a96_2851_4b91_9d22_9166ef38f623) ;
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

    me->setLocation(889, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_830204fd_e39c_405b_88d8_8316434bac0a) ;
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

    me->setLocation(890, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8fe727e4_b17b_40f4_8739_bf9f3292a54e) ;
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

    me->setLocation(891, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0d25796c_3491_4cda_8ca8_5eee8d017ff8) ;
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
        me->setLocation(73, filename);
        _init( me);
        me->setLocation(74, filename);
        _menu( me);
        me->setLocation(75, filename);
        _term( me);
}
DCLTASK(_demo, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31>  _state(0); 
        pearlrt::Fixed<31>  _var(0); 


        me->setLocation(237, filename);
        pearlrt::Bolt::enter( me, 1, demo_state_bolt_bolts);
        me->setLocation(238, filename);
            _state = _demo_state;
        me->setLocation(239, filename);
        pearlrt::Bolt::leave( me, 1, demo_state_bolt_bolts);
        me->setLocation(241, filename);
        pearlrt::Bolt::enter( me, 1, demo_var_bolt_bolts);
        me->setLocation(242, filename);
            _var = _demo_var;
        me->setLocation(243, filename);
        pearlrt::Bolt::leave( me, 1, demo_var_bolt_bolts);
        me->setLocation(245, filename);
        if ((_state == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(246, filename);
            _straight( me, _var);
        }

        me->setLocation(248, filename);
            pearlrt::Semaphore::release( me, 1, dt_semas);
        me->setLocation(249, filename);
        me->suspend(me);


}
DCLTASK(_parcour, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lspeed(1); 
        pearlrt::Float<53>  _rspeed(1); 
        pearlrt::Float<53>  _lr_in(1); 

        pearlrt::Fixed<31>  _stop(0); 
        pearlrt::Fixed<31>  _fs_in(0); 

        pearlrt::BitString<1>  _temp(pearlrt::BitString<1>(0x0)); 


        me->setLocation(335, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(336, filename);
                    pearlrt::Bolt::enter( me, 1, fs_bolt_bolts);
                    me->setLocation(337, filename);
                        _fs_in = _fs_signal;
                    me->setLocation(338, filename);
                    pearlrt::Bolt::leave( me, 1, fs_bolt_bolts);
                    me->setLocation(340, filename);
                    if ((_fs_in == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(341, filename);
                        pearlrt::Bolt::reserve( me, 1, fs_bolt_bolts);
                        me->setLocation(342, filename);
                            _fs_signal = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(343, filename);
                        pearlrt::Bolt::free( me, 1, fs_bolt_bolts);
                        me->setLocation(344, filename);
                            _stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(345, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_d102ebf9_7613_4a5b_b024_b79effe35757) ;
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

                    me->setLocation(347, filename);
                    if ((_fs_in == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(348, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_e62fb02a_3da4_4b40_9ca3_a8552b573215) ;
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

                        me->setLocation(349, filename);
                        pearlrt::Bolt::reserve( me, 1, fs_bolt_bolts);
                        me->setLocation(350, filename);
                            _fs_signal = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(351, filename);
                        pearlrt::Bolt::free( me, 1, fs_bolt_bolts);
                        me->setLocation(352, filename);
                        _straight( me, CONSTANT_FIXED_POS_5_31);
                    }

                    me->setLocation(356, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                    me->setLocation(357, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                    me->setLocation(359, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(360, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(362, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(363, filename);
                        _lr_in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(364, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(367, filename);
                    if ((_lr_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(368, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(369, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_lr_in;
                    }

                    me->setLocation(372, filename);
                    if ((_lr_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(373, filename);
                            _lspeed = _lr_in;
                        me->setLocation(374, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(377, filename);
                    if ((_lr_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(378, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(379, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(382, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(383, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(384, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(386, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(387, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(388, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(391, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                    me->setLocation(392, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                    me->setLocation(395, filename);
                    if ((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(396, filename);
                        pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                        me->setLocation(397, filename);
                            _stop = _global_stop;
                        me->setLocation(398, filename);
                        pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);
                    }


                }

        }
        me->setLocation(402, filename);
        _stop_motors( me);
        me->setLocation(404, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(405, filename);
        me->suspend(me);


}
DCLTASK(_light, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _rspeed(0); 
        pearlrt::Float<53>  _lspeed(0); 

        pearlrt::Fixed<31>  _light(0); 

        pearlrt::BitString<1>  _on(pearlrt::BitString<1>(0x1)); 
        pearlrt::BitString<1>  _off(pearlrt::BitString<1>(0x0)); 


        me->setLocation(432, filename);
        {
                while ( 1 )
                {

                    me->setLocation(432, filename);
                        ;
                    me->setLocation(433, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(434, filename);
                        _lspeed = _lm_speed;
                    me->setLocation(435, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(437, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(438, filename);
                        _rspeed = _rm_speed;
                    me->setLocation(439, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(441, filename);
                    pearlrt::Bolt::enter( me, 1, light_bolt_bolts);
                    me->setLocation(442, filename);
                        _light = _global_light;
                    me->setLocation(443, filename);
                    pearlrt::Bolt::leave( me, 1, light_bolt_bolts);
                    me->setLocation(446, filename);
                    if ((_lspeed == CONSTANT_FIXED_POS_0_31).bitAnd((_rspeed == 
                    CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(447, filename);
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
                        me->setLocation(449, filename);
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
                    me->setLocation(452, filename);
                    if ((_lspeed > _rspeed).getBoolean()) {
                        me->setLocation(453, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(454, filename);
                            _global_blinker = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(455, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(458, filename);
                    if ((_rspeed > _lspeed).getBoolean()) {
                        me->setLocation(459, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(460, filename);
                            _global_blinker = CONSTANT_FIXED_NEG_1_31;
                        me->setLocation(461, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(464, filename);
                    if ((_rspeed == _lspeed).getBoolean()) {
                        me->setLocation(465, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(466, filename);
                            _global_blinker = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(467, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(470, filename);
                    if ((_light == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(471, filename);
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
                        me->setLocation(473, filename);
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
                    me->setLocation(475, filename);
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


        me->setLocation(483, filename);
        {
                while ( 1 )
                {

                    me->setLocation(483, filename);
                        ;
                    me->setLocation(484, filename);
                    pearlrt::Bolt::enter( me, 1, blinker_bolt_bolts);
                    me->setLocation(485, filename);
                        _var = _global_blinker;
                    me->setLocation(486, filename);
                    pearlrt::Bolt::leave( me, 1, blinker_bolt_bolts);
                    me->setLocation(488, filename);
                    if ((_var == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(489, filename);
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

                        me->setLocation(490, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(491, filename);
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

                        me->setLocation(492, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                    }

                    me->setLocation(495, filename);
                    if ((_var == CONSTANT_FIXED_NEG_1_31).getBoolean()) {
                        me->setLocation(496, filename);
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

                        me->setLocation(497, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(498, filename);
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

                        me->setLocation(499, filename);
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


        me->setLocation(520, filename);
        {
                while ( 1 )
                {

                    me->setLocation(521, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_out_semas);
                    me->setLocation(523, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(524, filename);
                        _speed = _lm_speed;
                    me->setLocation(525, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(527, filename);
                    if ((_speed == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(529, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(530, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(533, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(534, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(535, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }

                        me->setLocation(538, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(539, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(543, filename);
                    _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
                    me->setLocation(545, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_in_semas);

                }

        }
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(557, filename);
        {
                while ( 1 )
                {

                    me->setLocation(558, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_out_semas);
                    me->setLocation(560, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(561, filename);
                        _speed = _rm_speed;
                    me->setLocation(562, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(564, filename);
                    if (((_speed == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(565, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(566, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(569, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(570, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(571, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }
                        else {
                            me->setLocation(573, filename);
                                _direction = CONSTANT_FIXED_POS_1_31;
                        }
                        me->setLocation(576, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(577, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(581, filename);
                    _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
                    me->setLocation(583, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_in_semas);

                }

        }
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(595, filename);
        {
                while ( 1 )
                {

                    me->setLocation(596, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(597, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(599, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(600, filename);
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

                    me->setLocation(604, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(605, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(606, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(609, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(610, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(611, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(614, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(615, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(616, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(619, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(620, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(621, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(624, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(625, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(626, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(629, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(630, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(631, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(634, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(635, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(636, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(639, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(640, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(641, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(644, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(645, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(649, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(650, filename);
                        _lr_signal = _out;
                    me->setLocation(651, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(652, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(657, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_readfs, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31> data_colors[5] ; 
        pearlrt::Fixed<31>  _fs_color(0); 

        pearlrt::Duration  _read_sensor_interval(0.005); 


        me->setLocation(753, filename);
        {
                while ( 1 )
                {

                    #warning __cpp__ inline inserted
                    _fs.dationRead(data_colors, sizeof(data_colors));


                    me->setLocation(757, filename);
                        _fs_color = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(759, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    CONSTANT_FIXED_POS_13000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).getBoolean()) {
                        me->setLocation(760, filename);
                            _fs_color = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(763, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_6000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) > CONSTANT_FIXED_POS_12000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_11000_31)
                    )).getBoolean()) {
                        me->setLocation(764, filename);
                            _fs_color = CONSTANT_FIXED_POS_2_31;
                    }

                    me->setLocation(767, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_2500_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_3500_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) > CONSTANT_FIXED_POS_3800_31)
                    )).getBoolean()) {
                        me->setLocation(768, filename);
                            _fs_color = CONSTANT_FIXED_POS_3_31;
                    }

                    me->setLocation(772, filename);
                    if (((_fs_color == CONSTANT_FIXED_POS_0_31)).bitNot().getBoolean()) {
                        me->setLocation(773, filename);
                        pearlrt::Bolt::reserve( me, 1, fs_bolt_bolts);
                        me->setLocation(774, filename);
                            _fs_signal = _fs_color;
                        me->setLocation(775, filename);
                        pearlrt::Bolt::free( me, 1, fs_bolt_bolts);
                    }


                }

        }
}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(791, filename);
        {
                while ( 1 )
                {

                    me->setLocation(792, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(794, filename);
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

                    me->setLocation(796, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_def39abe_872c_40e9_94da_79e0f06e7941) ;
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_0a0442c2_02d6_4b67_99f1_5a91c18efbdb) ;
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_6e7c4b75_df36_4184_8c11_326c41926ee7) ;
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

                    me->setLocation(800, filename);
                    if ((_request == CONSTANT_CHARACTER_5edf26d1_8227_437f_9549_35b35c022184).getBoolean()) {
                        me->setLocation(801, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(803, filename);
                        if ((_request == CONSTANT_CHARACTER_db396089_6fbb_4283_ae87_866774ea7ab0).getBoolean()) {
                            me->setLocation(804, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(806, filename);
                            if ((_request == CONSTANT_CHARACTER_b29d0bf1_4a7c_4bae_ab43_24398ae2fd19).getBoolean()) {
                                me->setLocation(807, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(809, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(814, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



