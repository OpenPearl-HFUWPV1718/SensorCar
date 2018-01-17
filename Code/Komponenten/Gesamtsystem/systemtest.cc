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
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_2_31(-2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_6_31(6);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Character<1>         CONSTANT_CHARACTER_d683ea81_f7fd_4d85_96d4_f707a834d7b0("u");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_6f844c02_3fc9_4db7_8f94_67cce7475898("linker Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_f22b239c_1d9b_4f67_a694_48a164721755("rechter Motor: ");
static /*const*/ pearlrt::Character<15>         CONSTANT_CHARACTER_cfabd0f6_b9ce_46f3_922b_43ab09f55267("HTTP/1.1 200 ok");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_134c6b4c_ce37_4999_8338_a956a42f7353("Connection: close");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_69ed6ecf_9b57_470b_b611_5e456fc7fbbb("Context-Type: text/html");
static /*const*/ pearlrt::Character<24>         CONSTANT_CHARACTER_e1eca61e_242c_4c86_99c4_a8765bb08905("GET /index.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_216065ce_186f_4f5c_ba19_80d6588e30c1("GET /info.html HTTP/1.1");
static /*const*/ pearlrt::Character<23>         CONSTANT_CHARACTER_51a2372a_9c95_4311_b4bf_cb3a316a8058("GET /doku.html HTTP/1.1");
static /*const*/ pearlrt::Character<19>         CONSTANT_CHARACTER_72216120_0750_4007_9368_3c50ee880fe4("<HTML><HEAD><style>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_06ddc185_6ac2_439c_9e30_6bcd10548f9f("</style><meta http-equiv = refresh content = 1; URL = /index.html >");
static /*const*/ pearlrt::Character<39>         CONSTANT_CHARACTER_adb5f389_162d_4468_b57a_a07debe83691("<TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_4c6346f7_845d_4048_b4ae_9143e876007d("<BODY><div id = value_div><div class = head_div><h1>Auto</h1></div>");
static /*const*/ pearlrt::Character<45>         CONSTANT_CHARACTER_3ce003b5_594e_4cf8_abb8_1cef88d8d291("<div id = value_list_div><ul id = value_list>");
static /*const*/ pearlrt::Character<25>         CONSTANT_CHARACTER_d7a130f5_e32e_4ab5_bd67_f49efe064743("<li>Geschwindigkeit Lins:");
static /*const*/ pearlrt::Character<5>         CONSTANT_CHARACTER_9c0dbe70_c48d_42ea_8d64_0249f8dfe4c5("</li>");
static /*const*/ pearlrt::Character<27>         CONSTANT_CHARACTER_ea1743c9_03db_4ac4_a71d_f1340e2d1ea2("<li>Geschwindigkeit Rechts:");
static /*const*/ pearlrt::Character<17>         CONSTANT_CHARACTER_0f6e4ec8_24fc_4e41_872e_a8762aeddff7("</ul></div></div>");
static /*const*/ pearlrt::Character<51>         CONSTANT_CHARACTER_30890aa0_1ff7_4a39_ab83_bda122f04b30("<div id = navigation ><div class = head_div ></div>");
static /*const*/ pearlrt::Character<118>         CONSTANT_CHARACTER_b3021a9c_04bd_4dcd_ba27_79087e193644("<div class = nav_div ><p><a href = info.html>Info</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<47>         CONSTANT_CHARACTER_c71b03c4_286c_4989_97f7_16fd953d752f("</style><TITLE>OpenPEARL Projekt</TITLE></HEAD>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_64ad343d_643e_4aeb_8569_84fd68ce9be6("<BODY><div id = value_div><div class = head_div><h1>Info</h1></div>");
static /*const*/ pearlrt::Character<55>         CONSTANT_CHARACTER_3e6d4756_a912_4900_a7a5_f6ce1a8e9951("<div id = value_list_div> Hier koennte ihre info stehen");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_4e820a32_2944_461e_92e7_de0ff52b6814("</div></div>");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_ffbee45d_6f21_44ee_8817_dbf02be4c2d7("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = doku.html>Doku</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<67>         CONSTANT_CHARACTER_a38ccd57_e4bf_42ea_bb6d_7880946c7697("<BODY><div id = value_div><div class = head_div><h1>Doku</h1></div>");
static /*const*/ pearlrt::Character<54>         CONSTANT_CHARACTER_74255ecb_c70b_4281_9094_132cd2b18b0a("<div id = value_list_div>Hier koennte ihre Doku stehen");
static /*const*/ pearlrt::Character<120>         CONSTANT_CHARACTER_50628d9d_ad86_4080_a4bc_19395d556a8a("<div class = nav_div ><p><a href = index.html>Start</a></p><p><a href = info.html>Info</a></p></div></div></BODY></HTML>");
static /*const*/ pearlrt::Character<250>         CONSTANT_CHARACTER_755d08f0_362c_4f47_b7bb_284723fc2b90("<BODY><div id = value_div><div class = head_div><h1>Error 404</h1></div><div id = value_list_div style = text-align:center; ><ul id = value_list><li>Site not found</li></ul></div></div><div id = navigation ><div class = head_div ></div></BODY></HTML>");
static /*const*/ pearlrt::Character<41>         CONSTANT_CHARACTER_e50cd202_b453_4226_8925_e696bb0bb118("html{margin: 0; font-family: sans-serif;}");
static /*const*/ pearlrt::Character<43>         CONSTANT_CHARACTER_344dfdec_2885_417a_977e_d60c0c3cad53("body{margin: 0; background-color: #eaecbd;}");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_d33df7d5_a871_4b9e_9b4e_209483131030("h1{margin: 0;}");
static /*const*/ pearlrt::Character<91>         CONSTANT_CHARACTER_fe098856_ab74_487f_b1c7_2b8271cacdff("#navigation{position: absolute; overflow: auto; left: 0; top: 0; width: 13%; height: 100%;}");
static /*const*/ pearlrt::Character<169>         CONSTANT_CHARACTER_90f2051f_13ac_4f1a_92fb_f651d3adff60(".head_div{position: relative ; left: 0; top: 0; width: 100%; height: 3.78em; line-height: 3.7em; margin: 0; background-color: #008040; color: white; text-align: center;}");
static /*const*/ pearlrt::Character<77>         CONSTANT_CHARACTER_c228fe17_4ffa_4441_8981_79666ac106b0("value_div{position: absolute; right: 0; bottom: 0; width: 87%; height: 100%;}");
static /*const*/ pearlrt::Character<71>         CONSTANT_CHARACTER_52387ec2_9acf_48a2_9a12_50082b963e06(".nav_div{font-size: 1.5em; margin-left: 1em; border-right: solid gray;}");
static /*const*/ pearlrt::Character<38>         CONSTANT_CHARACTER_370ad053_f9a7_4bd2_95c9_8a574ebd59e5("a{text-decoration: none; color: gray;}");
static /*const*/ pearlrt::Character<36>         CONSTANT_CHARACTER_4a63c1d4_aabd_48b2_b045_cf0bcbd6562c("a:hover{text-decoration: underline;}");
static /*const*/ pearlrt::Character<75>         CONSTANT_CHARACTER_709349dc_b08b_42a2_9cc0_b737c243c07a("#value_list_div{overflow: auto; width: 60%; height: 80%; margin-left: 15%;}");
static /*const*/ pearlrt::Character<58>         CONSTANT_CHARACTER_216280e1_12b2_4e80_9a92_2cd361501c7d("#value_list{text-decoration: none; list-style-type: none;}");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_webinterface);
SPCTASK(_driveright);
SPCTASK(_main);
SPCTASK(_readlr);
SPCTASK(_drive);
SPCTASK(_driveleft);


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

pearlrt::DationTS _lr(_lichtrechen, pearlrt::Dation::IN );

pearlrt::DationTS _lmotor(_leftstepmotor_out, pearlrt::Dation::OUT );

pearlrt::DationTS _rmotor(_rightstepmotor_out, pearlrt::Dation::OUT );
static pearlrt::DationDim2 h_dim_usHttpSocket(200); 

pearlrt::DationPG _usHttpSocket(_httpSocket, pearlrt::Dation::INOUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_usHttpSocket);


/////////////////////////////////////////////////////////////////////////////
// VARIABLE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
pearlrt::Float<53>  _lr_signal; 

pearlrt::Float<53>  _lm_speed; 
pearlrt::Float<53>  _rm_speed; 

pearlrt::Float<53>  _lspeed(1); 
pearlrt::Float<53>  _rspeed(1); 



/////////////////////////////////////////////////////////////////////////////
// SEMAPHORE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLSEMA(_lr_sema,1);
DCLSEMA(_lm_sema,1);
DCLSEMA(_rm_sema,1);
DCLSEMA(_d1,0);
DCLSEMA(_d2,0);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *lr_sema_semas[] = {&_lr_sema}; 
static pearlrt::Semaphore *d1_d2_semas[] = {&_d1,&_d2}; 
static pearlrt::Semaphore *d1_semas[] = {&_d1}; 
static pearlrt::Semaphore *d2_semas[] = {&_d2}; 


/////////////////////////////////////////////////////////////////////////////
// BOLT DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLBOLT(_lm_bolt);
DCLBOLT(_rm_bolt);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////
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


    me->setLocation(194, filename);
        _c = pearlrt::BitString<4>(5);
    me->setLocation(195, filename);
        _d = pearlrt::BitString<4>(6);
    me->setLocation(196, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_0_31).getBoolean()) {
        me->setLocation(197, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(198, filename);
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

                        me->setLocation(199, filename);
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

                        me->setLocation(200, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(202, filename);
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

                        me->setLocation(203, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(205, filename);
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

                        me->setLocation(206, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(208, filename);
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

                        me->setLocation(209, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(198, filename);

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

        me->setLocation(213, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(214, filename);
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

                        me->setLocation(215, filename);
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

                        me->setLocation(216, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(218, filename);
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

                        me->setLocation(219, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(221, filename);
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

                        me->setLocation(222, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(224, filename);
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

                        me->setLocation(225, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


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
        }

    }

    me->setLocation(229, filename);
    if ((_motorindex == CONSTANT_FIXED_POS_1_31).getBoolean()) {
        me->setLocation(230, filename);
        if ((_dir == CONSTANT_FIXED_POS_0_31).getBoolean()) {
            me->setLocation(231, filename);
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

                        me->setLocation(232, filename);
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

                        me->setLocation(233, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(235, filename);
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

                        me->setLocation(236, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(238, filename);
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

                        me->setLocation(239, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(241, filename);
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

                        me->setLocation(242, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(231, filename);

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

        me->setLocation(246, filename);
        if ((_dir == CONSTANT_FIXED_POS_1_31).getBoolean()) {
            me->setLocation(247, filename);
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

                        me->setLocation(248, filename);
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

                        me->setLocation(249, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(251, filename);
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

                        me->setLocation(252, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(254, filename);
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

                        me->setLocation(255, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );

                        me->setLocation(257, filename);
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

                        me->setLocation(258, filename);
                            me->resume( pearlrt::Task::AFTER,
                                        /* at     */  pearlrt::Clock(),
                                        /* after  */  pearlrt::Duration(_time)
                                      );


                        me->setLocation(247, filename);

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


    me->setLocation(303, filename);
    pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
    me->setLocation(304, filename);
        _speedl = _lm_speed;
    me->setLocation(305, filename);
    pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
    me->setLocation(307, filename);
    pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
    me->setLocation(308, filename);
        _speedr = _rm_speed;
    me->setLocation(309, filename);
    pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
    me->setLocation(312, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_72216120_0750_4007_9368_3c50ee880fe4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(313, filename);
    _style( me);
    me->setLocation(314, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_06ddc185_6ac2_439c_9e30_6bcd10548f9f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(315, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_adb5f389_162d_4468_b57a_a07debe83691) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(317, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4c6346f7_845d_4048_b4ae_9143e876007d) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(318, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_3ce003b5_594e_4cf8_abb8_1cef88d8d291) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(319, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_d7a130f5_e32e_4ab5_bd67_f49efe064743) ;
        _usHttpSocket.toF(_speedl,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_9c0dbe70_c48d_42ea_8d64_0249f8dfe4c5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(320, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ea1743c9_03db_4ac4_a71d_f1340e2d1ea2) ;
        _usHttpSocket.toF(_speedr,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_6_31));
        _usHttpSocket.toA(CONSTANT_CHARACTER_9c0dbe70_c48d_42ea_8d64_0249f8dfe4c5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(321, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_0f6e4ec8_24fc_4e41_872e_a8762aeddff7) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(322, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_30890aa0_1ff7_4a39_ab83_bda122f04b30) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(323, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_b3021a9c_04bd_4dcd_ba27_79087e193644) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(327, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_72216120_0750_4007_9368_3c50ee880fe4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(328, filename);
    _style( me);
    me->setLocation(329, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c71b03c4_286c_4989_97f7_16fd953d752f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(331, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_64ad343d_643e_4aeb_8569_84fd68ce9be6) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(332, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_3e6d4756_a912_4900_a7a5_f6ce1a8e9951) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(333, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4e820a32_2944_461e_92e7_de0ff52b6814) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(334, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_30890aa0_1ff7_4a39_ab83_bda122f04b30) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(335, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_ffbee45d_6f21_44ee_8817_dbf02be4c2d7) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(339, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_72216120_0750_4007_9368_3c50ee880fe4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(340, filename);
    _style( me);
    me->setLocation(341, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c71b03c4_286c_4989_97f7_16fd953d752f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(343, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_a38ccd57_e4bf_42ea_bb6d_7880946c7697) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(344, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_74255ecb_c70b_4281_9094_132cd2b18b0a) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(345, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4e820a32_2944_461e_92e7_de0ff52b6814) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(346, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_30890aa0_1ff7_4a39_ab83_bda122f04b30) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(347, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_50628d9d_ad86_4080_a4bc_19395d556a8a) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(351, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_72216120_0750_4007_9368_3c50ee880fe4) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(352, filename);
    _style( me);
    me->setLocation(353, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c71b03c4_286c_4989_97f7_16fd953d752f) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(355, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_755d08f0_362c_4f47_b7bb_284723fc2b90) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
    me->setLocation(360, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_e50cd202_b453_4226_8925_e696bb0bb118) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(361, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_344dfdec_2885_417a_977e_d60c0c3cad53) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(362, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_d33df7d5_a871_4b9e_9b4e_209483131030) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(363, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_fe098856_ab74_487f_b1c7_2b8271cacdff) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(364, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_90f2051f_13ac_4f1a_92fb_f651d3adff60) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(365, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_c228fe17_4ffa_4441_8981_79666ac106b0) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(366, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_52387ec2_9acf_48a2_9a12_50082b963e06) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(367, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_370ad053_f9a7_4bd2_95c9_8a574ebd59e5) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(368, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_4a63c1d4_aabd_48b2_b045_cf0bcbd6562c) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(369, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_709349dc_b08b_42a2_9cc0_b737c243c07a) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
    }
    catch(pearlrt::Signal &s) {
        if ( ! _usHttpSocket.updateRst(&s) ) {
            _usHttpSocket.endSequence();
            throw;
        }
        _usHttpSocket.endSequence();
    }
    // PUT STATEMENT END

    me->setLocation(370, filename);
    // PUT STATEMENT BEGIN
    try {
        _usHttpSocket.beginSequence(me);
        _usHttpSocket.toA(CONSTANT_CHARACTER_216280e1_12b2_4e80_9a92_2cd361501c7d) ;
        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _usHttpSocket.endSequence();
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
        me->setLocation(35, filename);
            _lr_signal = CONSTANT_FIXED_POS_0_31;
        me->setLocation(36, filename);
            _lm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(37, filename);
            _rm_speed = CONSTANT_FIXED_POS_1_31;
        me->setLocation(39, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(40, filename);
        {
            _lmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(41, filename);
        {
            _rmotor.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(42, filename);
            _readlr.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(43, filename);
            _drive.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(44, filename);
            _webinterface.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(45, filename);
        me->suspend(me);


        me->setLocation(46, filename);
        _lmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(47, filename);
        _rmotor.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(48, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_drive, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Float<53>  _lrin; 

        pearlrt::Float<53>  _in; 


        me->setLocation(56, filename);
        {
                while ( 1 )
                {

                    me->setLocation(57, filename);
                        pearlrt::Semaphore::request( me, 1, lr_sema_semas);
                    me->setLocation(58, filename);
                        _in = CONSTANT_FIXED_NEG_2_31*_lr_signal;
                    me->setLocation(59, filename);
                        pearlrt::Semaphore::release( me, 1, lr_sema_semas);
                    me->setLocation(61, filename);
                    if ((_in < CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(62, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(63, filename);
                            _rspeed = CONSTANT_FIXED_NEG_1_31*_in;
                    }

                    me->setLocation(66, filename);
                    if ((_in > CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(67, filename);
                            _lspeed = _in;
                        me->setLocation(68, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(71, filename);
                    if ((_in == CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(72, filename);
                            _lspeed = CONSTANT_FIXED_POS_1_31;
                        me->setLocation(73, filename);
                            _rspeed = CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(76, filename);
                    pearlrt::Bolt::reserve( me, 1, lm_bolt_bolts);
                    me->setLocation(77, filename);
                        _lm_speed = _lspeed;
                    me->setLocation(78, filename);
                    pearlrt::Bolt::free( me, 1, lm_bolt_bolts);
                    me->setLocation(80, filename);
                    pearlrt::Bolt::reserve( me, 1, rm_bolt_bolts);
                    me->setLocation(81, filename);
                        _rm_speed = _rspeed;
                    me->setLocation(82, filename);
                    pearlrt::Bolt::free( me, 1, rm_bolt_bolts);
                    me->setLocation(84, filename);
                        _driveleft.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(85, filename);
                        _driveright.activate( me,
                                          0,
                                          /* prio   */  pearlrt::Prio(),
                                          /* at     */  pearlrt::Clock(),
                                          /* after  */  pearlrt::Duration(),
                                          /* all    */  pearlrt::Duration(),
                                          /* until  */  pearlrt::Clock(),
                                          /* during */  pearlrt::Duration()
                                        );

                    me->setLocation(86, filename);
                        pearlrt::Semaphore::request( me, 2, d1_d2_semas);
                    me->setLocation(87, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(0.001))
                                  );


                }

        }
}
DCLTASK(_driveleft, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _time(0.02); 

        pearlrt::Fixed<31>  _steps(1); 

        pearlrt::Float<53>  _speed; 


        me->setLocation(96, filename);
        pearlrt::Bolt::enter( me, 1, lm_bolt_bolts);
        me->setLocation(97, filename);
            _speed = _lm_speed;
        me->setLocation(98, filename);
        pearlrt::Bolt::leave( me, 1, lm_bolt_bolts);
        me->setLocation(99, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_time;
        me->setLocation(100, filename);
            _steps = ((_speed*_steps)).round();
        me->setLocation(102, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_6f844c02_3fc9_4db7_8f94_67cce7475898) ;
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

        me->setLocation(103, filename);
        _step( me, CONSTANT_FIXED_POS_0_31, _steps, CONSTANT_FIXED_POS_1_31, _time);
        me->setLocation(104, filename);
            pearlrt::Semaphore::release( me, 1, d1_semas);
}
DCLTASK(_driveright, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Duration  _time(0.02); 

        pearlrt::Fixed<31>  _steps(1); 

        pearlrt::Float<53>  _speed; 


        me->setLocation(112, filename);
        pearlrt::Bolt::enter( me, 1, rm_bolt_bolts);
        me->setLocation(113, filename);
            _speed = _rm_speed;
        me->setLocation(114, filename);
        pearlrt::Bolt::leave( me, 1, rm_bolt_bolts);
        me->setLocation(115, filename);
            _time = (CONSTANT_FIXED_POS_1_31/_speed)*_time;
        me->setLocation(116, filename);
            _steps = ((_speed*_steps)).round();
        me->setLocation(117, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_f22b239c_1d9b_4f67_a694_48a164721755) ;
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

        me->setLocation(119, filename);
        _step( me, CONSTANT_FIXED_POS_1_31, _steps, CONSTANT_FIXED_POS_1_31, _time);
        me->setLocation(120, filename);
            pearlrt::Semaphore::release( me, 1, d2_semas);
}
DCLTASK(_readlr, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::BitString<8>  _bits; 

        pearlrt::Duration  _timeinterval; 

        pearlrt::Float<53>  _out; 

        pearlrt::Fixed<31>  _count; 


        me->setLocation(130, filename);
        {
            _lr.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(131, filename);
            _timeinterval = pearlrt::Duration(0.005);
        me->setLocation(132, filename);
        {
                while ( 1 )
                {

                    me->setLocation(133, filename);
                        _out = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(134, filename);
                        _count = CONSTANT_FIXED_POS_0_31;
                    me->setLocation(135, filename);
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

                    me->setLocation(138, filename);
                    if ((_bits.getSlice(1,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(140, filename);
                            _out = _out+CONSTANT_FIXED_POS_4_31;
                        me->setLocation(141, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(143, filename);
                    if ((_bits.getSlice(2,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(145, filename);
                            _out = _out+CONSTANT_FIXED_POS_3_31;
                        me->setLocation(146, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(148, filename);
                    if ((_bits.getSlice(3,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(150, filename);
                            _out = _out+CONSTANT_FIXED_POS_2_31;
                        me->setLocation(151, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(153, filename);
                    if ((_bits.getSlice(4,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(155, filename);
                            _out = _out+CONSTANT_FIXED_POS_1_31;
                        me->setLocation(156, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(158, filename);
                    if ((_bits.getSlice(5,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(160, filename);
                            _out = _out-CONSTANT_FIXED_POS_1_31;
                        me->setLocation(161, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(163, filename);
                    if ((_bits.getSlice(6,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(165, filename);
                            _out = _out-CONSTANT_FIXED_POS_2_31;
                        me->setLocation(166, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(168, filename);
                    if ((_bits.getSlice(7,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(170, filename);
                            _out = _out-CONSTANT_FIXED_POS_3_31;
                        me->setLocation(171, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(173, filename);
                    if ((_bits.getSlice(8,(pearlrt::BitString<1>*) 0) == pearlrt::BitString<1>(1)).getBoolean()) {
                        me->setLocation(175, filename);
                            _out = _out-CONSTANT_FIXED_POS_4_31;
                        me->setLocation(176, filename);
                            _count = _count+CONSTANT_FIXED_POS_1_31;
                    }

                    me->setLocation(178, filename);
                    if ((_count != CONSTANT_FIXED_POS_0_31).getBoolean()) {
                        me->setLocation(180, filename);
                            _out = _out/_count;
                    }

                    me->setLocation(182, filename);
                        pearlrt::Semaphore::request( me, 1, lr_sema_semas);
                    me->setLocation(183, filename);
                        _lr_signal = _out;
                    me->setLocation(184, filename);
                        pearlrt::Semaphore::release( me, 1, lr_sema_semas);
                    me->setLocation(185, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(_timeinterval)
                                  );


                }

        }
        me->setLocation(187, filename);
        _lr.dationClose(0, (pearlrt::Fixed<15>*) 0);

}
DCLTASK(_webinterface, (pearlrt::Prio( (pearlrt::Fixed<15>)255)), ((pearlrt::BitString<1>)0)) {
        pearlrt::Character<70>  _request; 


        me->setLocation(274, filename);
        {
                while ( 1 )
                {

                    me->setLocation(275, filename);
                    {
                        _usHttpSocket.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(276, filename);
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

                    me->setLocation(278, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_cfabd0f6_b9ce_46f3_922b_43ab09f55267) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(279, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_134c6b4c_ce37_4999_8338_a956a42f7353) ;
                        _usHttpSocket.toSkip((pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
                        _usHttpSocket.endSequence();
                    }
                    catch(pearlrt::Signal &s) {
                        if ( ! _usHttpSocket.updateRst(&s) ) {
                            _usHttpSocket.endSequence();
                            throw;
                        }
                        _usHttpSocket.endSequence();
                    }
                    // PUT STATEMENT END

                    me->setLocation(280, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _usHttpSocket.beginSequence(me);
                        _usHttpSocket.toA(CONSTANT_CHARACTER_69ed6ecf_9b57_470b_b611_5e456fc7fbbb) ;
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

                    me->setLocation(282, filename);
                    if ((_request == CONSTANT_CHARACTER_e1eca61e_242c_4c86_99c4_a8765bb08905).getBoolean()) {
                        me->setLocation(283, filename);
                        _index( me);
                    }
                    else {
                        me->setLocation(284, filename);
                        if ((_request == CONSTANT_CHARACTER_216065ce_186f_4f5c_ba19_80d6588e30c1).getBoolean()) {
                            me->setLocation(285, filename);
                            _info( me);
                        }
                        else {
                            me->setLocation(286, filename);
                            if ((_request == CONSTANT_CHARACTER_51a2372a_9c95_4311_b4bf_cb3a316a8058).getBoolean()) {
                                me->setLocation(287, filename);
                                _doku( me);
                            }
                            else {
                                me->setLocation(289, filename);
                                _error( me);
                            }
                        }
                    }
                    me->setLocation(293, filename);
                    _usHttpSocket.dationClose(0, (pearlrt::Fixed<15>*) 0);


                }

        }
}



