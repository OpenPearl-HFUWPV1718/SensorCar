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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_13000_31(13000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6000_31(6000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_12000_31(12000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_11000_31(11000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2500_31(2500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3500_31(3500);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4000_31(4000);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2200_31(2200);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_25000_31(25000);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_a321c61a_8022_417c_8606_b5cd3e448a22("u");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_c45d1803_1e99_42dc_a080_98246364f1d4("/dev/i2c-1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_c6fc32de_fc7b_426e_82de_29449c006ef8("SensorCar OpenPEARL");
static /*const*/ pearlrt::Character<9>         CONSTANT_CHARACTER_3425d5fa_3d89_4331_9b27_d53a30ba6375("Tschuess.");
static /*const*/ pearlrt::Character<10>         CONSTANT_CHARACTER_47adcfc5_6923_4c39_a8ce_d2aa12637efc("Hauptmenue");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_f42eddf0_cead_428d_9272_c71ce9eb2c92("Waehlen Sie:");
static /*const*/ pearlrt::Character<29>         CONSTANT_CHARACTER_3d74fcb9_5f6a_48d9_a1c5_c4c05ee30464("0 um das Programm zu beenden.");
static /*const*/ pearlrt::Character<31>         CONSTANT_CHARACTER_87310e7e_4bb7_4ab5_bfab_8e392a527a98("1 um den Demo-Modus zu starten.");
static /*const*/ pearlrt::Character<34>         CONSTANT_CHARACTER_e1aac3a7_98b2_46b4_8661_3c175c1fa930("2 um den Parcour-Modus zu starten.");
static /*const*/ pearlrt::Character<18>         CONSTANT_CHARACTER_cc49c874_7707_4663_b633_45ae723e9312("Ungueltige Eingabe");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_95a86ed8_8dec_4894_8885_bb8ec94c7f5a("Demo-------------");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_c3d93691_7303_435a_b9d8_f1a66dc99e16("0 um anzuhalten");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_f469d94b_613d_4544_923e_783f2c507858("1 um geradeaus zu fahren");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_c1129d48_92c8_4688_ba84_4558f1f4c158("2 um zurueck ins Hauptmenue zu gelangen");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_3be7bde0_3077_41d1_9d07_b80a399b4ad1("Done");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_940a541a_76b5_4482_b2a2_a221f0959062("Command 0: stop");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_9a30fab0_f963_4b00_82c3_22580b1b2e02("Command 1: Geradeausfahren");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_a001d848_885e_46d8_b7e8_8dee6a61f8a5("Geben Sie die gewuenschte Geschwindigkeit ein [-10, 10]");
static /*const*/ pearlrt::Character<4>         CONSTANT_CHARACTER_110a18c4_727c_4b72_b0e4_ca7ebc050315("main");
static /*const*/ pearlrt::Character<20>         CONSTANT_CHARACTER_f7cdb9f0_96c6_427d_b8d7_850c648346a4("Parcour-------------");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_7316c20e_2b7c_43a4_8999_0070ea732cb5("1 um loszufahren");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_c9f826bc_ba06_46cb_b05f_5eaf67832ccd("Command 1: Parcour starten");
static /*const*/ pearlrt::Character<29>         CONSTANT_CHARACTER_7ba3ea40_cbf2_4d6b_8515_160551c8552c("rot erkannt, stop eingeleitet");
static /*const*/ pearlrt::Character<32>         CONSTANT_CHARACTER_7c30b486_e0e8_4241_a1d9_6c9d2cfca596("gruen erkannt, geradeausfahren..");
static /*const*/ pearlrt::Character<11>         CONSTANT_CHARACTER_fb2c729a_1c65_4da6_8a1f_a91c90f67762("rot erkannt");
static /*const*/ pearlrt::Character<13>         CONSTANT_CHARACTER_4a25aa47_6d89_4254_8d14_8658b649116d("gruen erkannt");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_7fa75fa7_d802_412e_b269_62b8c5099415("blau erkannt");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_401e611e_573a_4796_a200_cd17fc1f396e("schwarz erkannt");
static /*const*/ pearlrt::Character<13>         CONSTANT_CHARACTER_1a74b659_bbbb_441d_bf1f_a012dee998d7("weiss erkannt");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_60ddb92c_40f2_4016_a903_d16664622d66("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_5c9ff354_6a48_453c_975d_09427ccc3f8e("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_c7670349_6d52_4485_9524_b627d885916b("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_77eadb32_c9aa_40d0_9e72_728b3561ab45("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_69166795_aa7d_43b3_a162_2bc9bc63f301("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_9f78d07c_5b38_40ec_9c39_4c052a1d5b5c("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_1bd2d1b7_93d6_4839_ac2b_4483182abe81("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_ebe5d8f5_a90d_41f6_be08_e113fafb3874("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_a452a8be_03f0_4081_9e9b_65db261ed42e("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_9ba2dd3b_3a0a_4727_93e0_8ee42343c409("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_b729a379_6ef5_49e4_96d4_50756146c6a4("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<26>         CONSTANT_CHARACTER_b4931447_c616_40ff_8c54_4c43aa3537d0("<li>Geschwindigkeit Links:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_13964ad2_cca0_44b2_a878_5294f9930cb7("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_10955655_c716_4576_9886_f2506a634027("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_8e797daf_b28d_46f3_bb53_8867e60245c3("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_a967d692_6d87_4b67_9eee_a850d1f24e42("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_80873240_ca92_443a_8132_015a423b4d47("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_6ef16dbf_9aa8_478a_9f49_abcea5cb8916("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_78b3cddb_2539_4ff5_8fef_9b966b77af4b("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_f6eb5ff1_13a8_4231_a287_52f2798e38c0("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_0f7a069f_5968_4701_9aac_327377081268("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_6095be2d_36f8_4882_847a_ac8ac015947f("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_2012dc7c_658a_4b00_962e_d40d1e490b25("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_e5d1f942_9a4f_4aa8_bb23_f7f52ebf4c30("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_6f78ba5a_a127_4625_a682_d16ae3e91866("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_f8b33584_8c3b_436d_bdc5_9574bf37c27a("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_0c4fabf5_bb4e_4af7_8b94_e0c91e84baee("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_96ae2f8a_1742_4566_845e_e9288340f09f("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_a274b959_f120_4b76_a5ea_148586fc3cbd("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_e42c3a9c_11b6_4b60_a6c7_55ae69198b19("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_76e33a4d_8849_4395_967c_d7b0c65f5071(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_c512a966_dc7d_48bd_9487_f518c51a71be("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_fd17696e_2345_42e4_a25e_cf9dc4744487(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_d2ac1714_a640_422c_858b_c59f245ce591("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_1075a230_c297_4be7_9e11_1e2ed26c402f("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_b5d93ad5_4030_4d4a_8d28_eb2d08a828ae("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_28b9a0ea_d559_449f_ac2a_5836e88245e5("#value_list{text-decoration: none; list-style-type: none;}");

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
static pearlrt::Semaphore *fs_buffer_in_semas[] = {&_fs_buffer_in}; 
static pearlrt::Semaphore *fs_buffer_out_semas[] = {&_fs_buffer_out}; 


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
static pearlrt::Bolt *lr_bolt_bolts[] = {&_lr_bolt}; 
static pearlrt::Bolt *fs_bolt_bolts[] = {&_fs_bolt}; 
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
        _termout.toA(CONSTANT_CHARACTER_c6fc32de_fc7b_426e_82de_29449c006ef8) ;
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
        _termout.toA(CONSTANT_CHARACTER_3425d5fa_3d89_4331_9b27_d53a30ba6375) ;
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
        _termout.toA(CONSTANT_CHARACTER_47adcfc5_6923_4c39_a8ce_d2aa12637efc) ;
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
        _termout.toA(CONSTANT_CHARACTER_f42eddf0_cead_428d_9272_c71ce9eb2c92) ;
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
        _termout.toA(CONSTANT_CHARACTER_3d74fcb9_5f6a_48d9_a1c5_c4c05ee30464) ;
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
        _termout.toA(CONSTANT_CHARACTER_87310e7e_4bb7_4ab5_bfab_8e392a527a98) ;
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
        _termout.toA(CONSTANT_CHARACTER_e1aac3a7_98b2_46b4_8661_3c175c1fa930) ;
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
                        _termout.toA(CONSTANT_CHARACTER_cc49c874_7707_4663_b633_45ae723e9312) ;
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
        _termout.toA(CONSTANT_CHARACTER_c6fc32de_fc7b_426e_82de_29449c006ef8) ;
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
        _termout.toA(CONSTANT_CHARACTER_95a86ed8_8dec_4894_8885_bb8ec94c7f5a) ;
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
        _termout.toA(CONSTANT_CHARACTER_f42eddf0_cead_428d_9272_c71ce9eb2c92) ;
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
        _termout.toA(CONSTANT_CHARACTER_c3d93691_7303_435a_b9d8_f1a66dc99e16) ;
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
        _termout.toA(CONSTANT_CHARACTER_f469d94b_613d_4544_923e_783f2c507858) ;
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
        _termout.toA(CONSTANT_CHARACTER_c1129d48_92c8_4688_ba84_4558f1f4c158) ;
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
                        _termout.toA(CONSTANT_CHARACTER_cc49c874_7707_4663_b633_45ae723e9312) ;
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
                            _termout.toA(CONSTANT_CHARACTER_3be7bde0_3077_41d1_9d07_b80a399b4ad1) ;
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
                                _termout.toA(CONSTANT_CHARACTER_940a541a_76b5_4482_b2a2_a221f0959062) ;
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
                                _termout.toA(CONSTANT_CHARACTER_9a30fab0_f963_4b00_82c3_22580b1b2e02) ;
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
                                _termout.toA(CONSTANT_CHARACTER_a001d848_885e_46d8_b7e8_8dee6a61f8a5) ;
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
                                _termout.toA(CONSTANT_CHARACTER_110a18c4_727c_4b72_b0e4_ca7ebc050315) ;
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
        _termout.toA(CONSTANT_CHARACTER_c6fc32de_fc7b_426e_82de_29449c006ef8) ;
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
        _termout.toA(CONSTANT_CHARACTER_f7cdb9f0_96c6_427d_b8d7_850c648346a4) ;
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
        _termout.toA(CONSTANT_CHARACTER_f42eddf0_cead_428d_9272_c71ce9eb2c92) ;
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
        _termout.toA(CONSTANT_CHARACTER_c3d93691_7303_435a_b9d8_f1a66dc99e16) ;
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
        _termout.toA(CONSTANT_CHARACTER_7316c20e_2b7c_43a4_8999_0070ea732cb5) ;
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
        _termout.toA(CONSTANT_CHARACTER_c1129d48_92c8_4688_ba84_4558f1f4c158) ;
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
                        _termout.toA(CONSTANT_CHARACTER_cc49c874_7707_4663_b633_45ae723e9312) ;
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
                                _termout.toA(CONSTANT_CHARACTER_940a541a_76b5_4482_b2a2_a221f0959062) ;
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
                                _termout.toA(CONSTANT_CHARACTER_c9f826bc_ba06_46cb_b05f_5eaf67832ccd) ;
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
                                _termout.toA(CONSTANT_CHARACTER_110a18c4_727c_4b72_b0e4_ca7ebc050315) ;
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
    me->setLocation(405, filename);
        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
    me->setLocation(406, filename);
        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
    me->setLocation(409, filename);
    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
    me->setLocation(410, filename);
        _lm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(411, filename);
    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
    me->setLocation(413, filename);
    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
    me->setLocation(414, filename);
        _rm_speed = CONSTANT_FIXED_POS_0_31;
    me->setLocation(415, filename);
    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
    me->setLocation(418, filename);
        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
    me->setLocation(419, filename);
        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
}

void
_switchlights(pearlrt::Task *me, pearlrt::Fixed<31>  _state)
{
    me->setLocation(500, filename);
    if ((_state == CONSTANT_FIXED_POS_1_31).bitOr((_state == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
        me->setLocation(501, filename);
        pearlrt::Bolt::reserve( me, 1, light_bolt_bolts);
        me->setLocation(502, filename);
            _global_light = _state;
        me->setLocation(503, filename);
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


    me->setLocation(661, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(662, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(663, filename);
        _e = pearlrt::BitString<4>(0);
    me->setLocation(666, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(667, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(668, filename);
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
            me->setLocation(670, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(671, filename);
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

                            me->setLocation(672, filename);
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

                            me->setLocation(673, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(675, filename);
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

                            me->setLocation(676, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(678, filename);
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

                            me->setLocation(679, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(681, filename);
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

                            me->setLocation(682, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(671, filename);

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

            me->setLocation(686, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(687, filename);
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

                            me->setLocation(688, filename);
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

                            me->setLocation(689, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(691, filename);
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

                            me->setLocation(692, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(694, filename);
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

                            me->setLocation(695, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(697, filename);
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

                            me->setLocation(698, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(687, filename);

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

    me->setLocation(704, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(705, filename);
        if ((_steps == CONSTANT_FIXED_POS_0_31).bitAnd((_time == pearlrt::Duration(0.0))).getBoolean()) {
            me->setLocation(706, filename);
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
            me->setLocation(708, filename);
            if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                me->setLocation(709, filename);
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

                            me->setLocation(710, filename);
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

                            me->setLocation(711, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(713, filename);
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

                            me->setLocation(714, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(716, filename);
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

                            me->setLocation(717, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(719, filename);
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

                            me->setLocation(720, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(709, filename);

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

            me->setLocation(724, filename);
            if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                me->setLocation(725, filename);
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

                            me->setLocation(726, filename);
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

                            me->setLocation(727, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(729, filename);
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

                            me->setLocation(730, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(732, filename);
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

                            me->setLocation(733, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );

                            me->setLocation(735, filename);
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

                            me->setLocation(736, filename);
                                me->resume( pearlrt::Task::AFTER,
                                            /* at     */  pearlrt::Clock(),
                                            /* after  */  pearlrt::Duration(_time)
                                          );


                            me->setLocation(725, filename);

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


    me->setLocation(827, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(828, filename);
        _speedl = _lm_speed;
    me->setLocation(829, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(831, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(832, filename);
        _speedr = _rm_speed;
    me->setLocation(833, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(836, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1bd2d1b7_93d6_4839_ac2b_4483182abe81) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(837, filename);
    _style( me);
    me->setLocation(838, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ebe5d8f5_a90d_41f6_be08_e113fafb3874) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_a452a8be_03f0_4081_9e9b_65db261ed42e) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_9ba2dd3b_3a0a_4727_93e0_8ee42343c409) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_b729a379_6ef5_49e4_96d4_50756146c6a4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_b4931447_c616_40ff_8c54_4c43aa3537d0) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_13964ad2_cca0_44b2_a878_5294f9930cb7) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_10955655_c716_4576_9886_f2506a634027) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_13964ad2_cca0_44b2_a878_5294f9930cb7) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(845, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_8e797daf_b28d_46f3_bb53_8867e60245c3) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(846, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a967d692_6d87_4b67_9eee_a850d1f24e42) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(847, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_80873240_ca92_443a_8132_015a423b4d47) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(851, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1bd2d1b7_93d6_4839_ac2b_4483182abe81) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    _style( me);
    me->setLocation(853, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6ef16dbf_9aa8_478a_9f49_abcea5cb8916) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_78b3cddb_2539_4ff5_8fef_9b966b77af4b) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_f6eb5ff1_13a8_4231_a287_52f2798e38c0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(857, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0f7a069f_5968_4701_9aac_327377081268) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(858, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a967d692_6d87_4b67_9eee_a850d1f24e42) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(859, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6095be2d_36f8_4882_847a_ac8ac015947f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(863, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1bd2d1b7_93d6_4839_ac2b_4483182abe81) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    _style( me);
    me->setLocation(865, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6ef16dbf_9aa8_478a_9f49_abcea5cb8916) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_2012dc7c_658a_4b00_962e_d40d1e490b25) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_e5d1f942_9a4f_4aa8_bb23_f7f52ebf4c30) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(869, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0f7a069f_5968_4701_9aac_327377081268) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(870, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a967d692_6d87_4b67_9eee_a850d1f24e42) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(871, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6f78ba5a_a127_4625_a682_d16ae3e91866) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(875, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1bd2d1b7_93d6_4839_ac2b_4483182abe81) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    _style( me);
    me->setLocation(877, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_6ef16dbf_9aa8_478a_9f49_abcea5cb8916) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(879, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_f8b33584_8c3b_436d_bdc5_9574bf37c27a) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(884, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0c4fabf5_bb4e_4af7_8b94_e0c91e84baee) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_96ae2f8a_1742_4566_845e_e9288340f09f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_a274b959_f120_4b76_a5ea_148586fc3cbd) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_e42c3a9c_11b6_4b60_a6c7_55ae69198b19) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_76e33a4d_8849_4395_967c_d7b0c65f5071) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_c512a966_dc7d_48bd_9487_f518c51a71be) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_fd17696e_2345_42e4_a25e_cf9dc4744487) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        _usHttpSocket.toA(CONSTANT_CHARACTER_d2ac1714_a640_422c_858b_c59f245ce591) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(892, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_1075a230_c297_4be7_9e11_1e2ed26c402f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(893, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b5d93ad5_4030_4d4a_8d28_eb2d08a828ae) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(894, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_28b9a0ea_d559_449f_ac2a_5836e88245e5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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


        me->setLocation(334, filename);
        {
                while ( 1 )
                {

                    if (!((_stop == CONSTANT_FIXED_POS_0_31).getBoolean()))
                        break;

                    me->setLocation(336, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_in_semas);
                    me->setLocation(337, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_in_semas);
                    me->setLocation(340, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_in_semas);
                    me->setLocation(341, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_out_semas);
                    me->setLocation(343, filename);
                    pearlrt::Bolt::enter( me, 1, lr_bolt_bolts);
                    me->setLocation(344, filename);
                        _lr_in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(345, filename);
                    pearlrt::Bolt::leave( me, 1, lr_bolt_bolts);
                    me->setLocation(347, filename);
                        pearlrt::Semaphore::release( me, 1, fs_buffer_in_semas);
                    me->setLocation(348, filename);
                        pearlrt::Semaphore::request( me, 1, fs_buffer_out_semas);
                    me->setLocation(350, filename);
                    pearlrt::Bolt::enter( me, 1, fs_bolt_bolts);
                    me->setLocation(351, filename);
                        _fs_in = _fs_signal;
                    me->setLocation(352, filename);
                    pearlrt::Bolt::leave( me, 1, fs_bolt_bolts);
                    me->setLocation(354, filename);
                    if ((_fs_in == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(355, filename);
                            _stop = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(356, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_7ba3ea40_cbf2_4d6b_8515_160551c8552c) ;
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

                    me->setLocation(358, filename);
                    if ((_fs_in == CONSTANT_FIXED_POS_2_31).getBoolean()) {
                        me->setLocation(359, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_7c30b486_e0e8_4241_a1d9_6c9d2cfca596) ;
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

                        me->setLocation(360, filename);
                        _straight( me, CONSTANT_FIXED_POS_5_31);
                    }

                    me->setLocation(364, filename);
                    if ((_lr_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(365, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(366, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_lr_in;
                    }

                    me->setLocation(369, filename);
                    if ((_lr_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(370, filename);
                            _lspeed = _lr_in;
                        me->setLocation(371, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(374, filename);
                    if ((_lr_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(375, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(376, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(379, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(380, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(381, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(383, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(384, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(385, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(388, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_out_semas);
                    me->setLocation(389, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_out_semas);
                    me->setLocation(392, filename);
                    pearlrt::Bolt::enter( me, 1, stop_bolt_bolts);
                    me->setLocation(393, filename);
                        _stop = _global_stop;
                    me->setLocation(394, filename);
                    pearlrt::Bolt::leave( me, 1, stop_bolt_bolts);

                }

        }
        me->setLocation(397, filename);
        _stop_motors( me);
        me->setLocation(399, filename);
            pearlrt::Semaphore::release( me, 1, p_semas);
        me->setLocation(400, filename);
        me->suspend(me);


}
DCLTASK(_light, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _rspeed(0); 
        pearlrt::Float<53>  _lspeed(0); 

        pearlrt::Fixed<31>  _light(0); 

        pearlrt::BitString<1>  _on(pearlrt::BitString<1>(0x1)); 
        pearlrt::BitString<1>  _off(pearlrt::BitString<1>(0x0)); 


        me->setLocation(427, filename);
        {
                while ( 1 )
                {

                    me->setLocation(427, filename);
                        ;
                    me->setLocation(428, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(429, filename);
                        _lspeed = _lm_speed;
                    me->setLocation(430, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(432, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(433, filename);
                        _rspeed = _rm_speed;
                    me->setLocation(434, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(436, filename);
                    pearlrt::Bolt::enter( me, 1, light_bolt_bolts);
                    me->setLocation(437, filename);
                        _light = _global_light;
                    me->setLocation(438, filename);
                    pearlrt::Bolt::leave( me, 1, light_bolt_bolts);
                    me->setLocation(441, filename);
                    if ((_lspeed == CONSTANT_FIXED_POS_0_31).bitAnd((_rspeed == 
                    CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(442, filename);
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
                        me->setLocation(444, filename);
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
                    me->setLocation(447, filename);
                    if ((_lspeed > _rspeed).getBoolean()) {
                        me->setLocation(448, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(449, filename);
                            _global_blinker = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(450, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(453, filename);
                    if ((_rspeed > _lspeed).getBoolean()) {
                        me->setLocation(454, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(455, filename);
                            _global_blinker = CONSTANT_FIXED_NEG_1_31;
                        me->setLocation(456, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(459, filename);
                    if ((_rspeed == _lspeed).getBoolean()) {
                        me->setLocation(460, filename);
                        pearlrt::Bolt::reserve( me, 1, blinker_bolt_bolts);
                        me->setLocation(461, filename);
                            _global_blinker = CONSTANT_FIXED_POS_0_31;
                        me->setLocation(462, filename);
                        pearlrt::Bolt::free( me, 1, blinker_bolt_bolts);
                    }

                    me->setLocation(465, filename);
                    if ((_light == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(466, filename);
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
                        me->setLocation(468, filename);
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
                    me->setLocation(470, filename);
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


        me->setLocation(478, filename);
        {
                while ( 1 )
                {

                    me->setLocation(478, filename);
                        ;
                    me->setLocation(479, filename);
                    pearlrt::Bolt::enter( me, 1, blinker_bolt_bolts);
                    me->setLocation(480, filename);
                        _var = _global_blinker;
                    me->setLocation(481, filename);
                    pearlrt::Bolt::leave( me, 1, blinker_bolt_bolts);
                    me->setLocation(483, filename);
                    if ((_var == CONSTANT_FIXED_POS_1_31).getBoolean()) {
                        me->setLocation(484, filename);
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

                        me->setLocation(485, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(486, filename);
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

                        me->setLocation(487, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                    }

                    me->setLocation(490, filename);
                    if ((_var == CONSTANT_FIXED_NEG_1_31).getBoolean()) {
                        me->setLocation(491, filename);
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

                        me->setLocation(492, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(pearlrt::Duration(0.5))
                                      );

                        me->setLocation(493, filename);
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

                        me->setLocation(494, filename);
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


        me->setLocation(515, filename);
        {
                while ( 1 )
                {

                    me->setLocation(516, filename);
                        pearlrt::Semaphore::request( me, 1, lm_buffer_out_semas);
                    me->setLocation(518, filename);
                    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
                    me->setLocation(519, filename);
                        _speed = _lm_speed;
                    me->setLocation(520, filename);
                    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
                    me->setLocation(522, filename);
                    if ((_speed == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(524, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(525, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(528, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(529, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(530, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }

                        me->setLocation(533, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(534, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(538, filename);
                    _step( me, CONSTANT_FIXED_POS_0_31, _steps, _direction, _time);
                    me->setLocation(540, filename);
                        pearlrt::Semaphore::release( me, 1, lm_buffer_in_semas);

                }

        }
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _speed; 

        pearlrt::Duration  _time; 

        pearlrt::Fixed<31>  _steps; 

        pearlrt::Fixed<31>  _direction(1); 


        me->setLocation(552, filename);
        {
                while ( 1 )
                {

                    me->setLocation(553, filename);
                        pearlrt::Semaphore::request( me, 1, rm_buffer_out_semas);
                    me->setLocation(555, filename);
                    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
                    me->setLocation(556, filename);
                        _speed = _rm_speed;
                    me->setLocation(557, filename);
                    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
                    me->setLocation(559, filename);
                    if (((_speed == CONSTANT_FIXED_POS_0_31)).getBoolean()) {
                        me->setLocation(560, filename);
                            _time = pearlrt::Duration(0.0);
                        me->setLocation(561, filename);
                            _steps = CONSTANT_FIXED_POS_0_31;
                    }
                    else {
                        me->setLocation(564, filename);
                        if ((_speed < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                            me->setLocation(565, filename);
                                _direction = CONSTANT_FIXED_POS_0_31;
                            me->setLocation(566, filename);
                                _speed = CONSTANT_FIXED_NEG_1_31*_speed;
                        }
                        else {
                            me->setLocation(568, filename);
                                _direction = CONSTANT_FIXED_POS_1_31;
                        }
                        me->setLocation(571, filename);
                            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_default_motor_time;
                        me->setLocation(572, filename);
                            _steps = ((_speed*_default_motor_steps)).round();
                    }
                    me->setLocation(576, filename);
                    _step( me, CONSTANT_FIXED_POS_1_31, _steps, _direction, _time);
                    me->setLocation(578, filename);
                        pearlrt::Semaphore::release( me, 1, rm_buffer_in_semas);

                }

        }
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(590, filename);
        {
                while ( 1 )
                {

                    me->setLocation(591, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(592, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(594, filename);
                        pearlrt::Semaphore::request( me, 1, lr_buffer_in_semas);
                    me->setLocation(595, filename);
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

                    me->setLocation(599, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(600, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(601, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(604, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(605, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(606, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(609, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(610, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(611, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(614, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(615, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(616, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(619, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(620, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(621, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(624, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(625, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(626, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(629, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(630, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(631, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(634, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(635, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(636, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(639, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(640, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(644, filename);
                    pearlrt::Bolt::reserve( me, 1, lr_bolt_bolts);
                    me->setLocation(645, filename);
                        _lr_signal = _out;
                    me->setLocation(646, filename);
                    pearlrt::Bolt::free( me, 1, lr_bolt_bolts);
                    me->setLocation(647, filename);
                        pearlrt::Semaphore::release( me, 1, lr_buffer_out_semas);

                }

        }
        me->setLocation(652, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_readfs, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Fixed<31> data_colors[5] ; 
        pearlrt::Fixed<31>  _fs_color(0); 

        pearlrt::Duration  _read_sensor_interval(0.005); 


        me->setLocation(748, filename);
        {
                while ( 1 )
                {

                    me->setLocation(749, filename);
                        pearlrt::Semaphore::request( me, 1, fs_buffer_in_semas);
                    #warning __cpp__ inline inserted
                    _fs.dationRead(data_colors, sizeof(data_colors));


                    me->setLocation(751, filename);
                    me->setLocation(753, filename);
                        _fs_color = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(755, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    CONSTANT_FIXED_POS_13000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_6000_31)
                    )).getBoolean()) {
                        me->setLocation(756, filename);
                            _fs_color = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(757, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_fb2c729a_1c65_4da6_8a1f_a91c90f67762) ;
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

                    me->setLocation(759, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_6000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) > CONSTANT_FIXED_POS_12000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_11000_31)
                    )).getBoolean()) {
                        me->setLocation(760, filename);
                            _fs_color = CONSTANT_FIXED_POS_2_31;
                        me->setLocation(761, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_4a25aa47_6d89_4254_8d14_8658b649116d) ;
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

                    me->setLocation(763, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_2500_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_3500_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) > CONSTANT_FIXED_POS_4000_31)
                    )).getBoolean()) {
                        me->setLocation(764, filename);
                            _fs_color = CONSTANT_FIXED_POS_3_31;
                        me->setLocation(765, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_7fa75fa7_d802_412e_b269_62b8c5099415) ;
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

                    me->setLocation(767, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) < 
                    CONSTANT_FIXED_POS_2200_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) < CONSTANT_FIXED_POS_2200_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) < CONSTANT_FIXED_POS_2200_31)
                    )).getBoolean()) {
                        me->setLocation(768, filename);
                            _fs_color = CONSTANT_FIXED_POS_5_31;
                        me->setLocation(769, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_401e611e_573a_4796_a200_cd17fc1f396e) ;
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

                    me->setLocation(771, filename);
                    if ((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(CONSTANT_FIXED_POS_1_31)))) > 
                    CONSTANT_FIXED_POS_25000_31)).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_2_31)))) > CONSTANT_FIXED_POS_25000_31)
                    )).bitAnd((((*(data_colors + ad_1_1_5->offset(pearlrt::Fixed<31>(
                        CONSTANT_FIXED_POS_3_31)))) > CONSTANT_FIXED_POS_25000_31)
                    )).getBoolean()) {
                        me->setLocation(772, filename);
                            _fs_color = CONSTANT_FIXED_POS_4_31;
                        me->setLocation(773, filename);
                        // PUT STATEMENT BEGIN
                        try {
                            _termout.beginSequence(me);
                            _termout.toA(CONSTANT_CHARACTER_1a74b659_bbbb_441d_bf1f_a012dee998d7) ;
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

                    me->setLocation(776, filename);
                    pearlrt::Bolt::reserve( me, 1, fs_bolt_bolts);
                    me->setLocation(777, filename);
                        _fs_signal = _fs_color;
                    me->setLocation(778, filename);
                    pearlrt::Bolt::free( me, 1, fs_bolt_bolts);
                    me->setLocation(779, filename);
                        pearlrt::Semaphore::release( me, 1, fs_buffer_out_semas);

                }

        }
}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(794, filename);
        {
                while ( 1 )
                {

                    me->setLocation(795, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(797, filename);
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

                    me->setLocation(799, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_60ddb92c_40f2_4016_a903_d16664622d66) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_5c9ff354_6a48_453c_975d_09427ccc3f8e) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
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
                        _usHttpSocket.toA(CONSTANT_CHARACTER_c7670349_6d52_4485_9524_b627d885916b) ;
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

                    me->setLocation(803, filename);
                    if ((_request == CONSTANT_CHARACTER_77eadb32_c9aa_40d0_9e72_728b3561ab45).getBoolean()) {
                        me->setLocation(804, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(806, filename);
                        if ((_request == CONSTANT_CHARACTER_69166795_aa7d_43b3_a162_2bc9bc63f301).getBoolean()) {
                            me->setLocation(807, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(809, filename);
                            if ((_request == CONSTANT_CHARACTER_9f78d07c_5b38_40ec_9c39_4c052a1d5b5c).getBoolean()) {
                                me->setLocation(810, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(812, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(817, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



