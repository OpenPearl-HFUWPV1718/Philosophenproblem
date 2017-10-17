/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "philo.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_10_31(10);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Character<7>         CONSTANT_CHARACTER_54a663f6_307d_4d56_ae65_81176b729394("STARTET");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_5f419ae7_3281_4b45_a751_cae747e36702("Phil1 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_299feea1_3d62_4c56_954a_a30c478956c9("Phil2 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_aff67052_f3bd_41fd_b4de_91679c7340f6("Phil3 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_b2b90ced_fcbb_4219_ad1c_dd855b9ccde2("Phil4 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_a0835750_493b_42c1_88f6_363d24c9a687("Phil5 - Isst");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_p1);
SPCTASK(_p2);
SPCTASK(_p3);
SPCTASK(_p4);
SPCTASK(_p5);
SPCTASK(_main);


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



/////////////////////////////////////////////////////////////////////////////
// DATION DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::DationDim2 h_dim_termout(80); 

pearlrt::DationPG _termout(_stdout, pearlrt::Dation::OUT  | pearlrt::Dation::FORWARD | pearlrt::Dation::STREAM, &h_dim_termout);


/////////////////////////////////////////////////////////////////////////////
// SEMAPHORE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLSEMA(_g1,1);
DCLSEMA(_g2,1);
DCLSEMA(_g3,1);
DCLSEMA(_g4,1);
DCLSEMA(_g5,1);
DCLSEMA(_console,1);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *g1_g2_semas[] = {&_g1,&_g2}; 
static pearlrt::Semaphore *console_semas[] = {&_console}; 
static pearlrt::Semaphore *g2_g3_semas[] = {&_g2,&_g3}; 
static pearlrt::Semaphore *g3_g4_semas[] = {&_g3,&_g4}; 
static pearlrt::Semaphore *g4_g5_semas[] = {&_g4,&_g5}; 
static pearlrt::Semaphore *g1_semas[] = {&_g1}; 
static pearlrt::Semaphore *g5_semas[] = {&_g5}; 


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_10_31)), ((pearlrt::BitString<1>)1)) {
        me->setLocation(17, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(18, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_54a663f6_307d_4d56_ae65_81176b729394) ;
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

        me->setLocation(19, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(20, filename);
            _p1.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(21, filename);
            _p2.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(22, filename);
            _p3.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(23, filename);
            _p4.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(24, filename);
            _p5.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

}
DCLTASK(_p1, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(27, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_3_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    me->setLocation(27, filename);
                        ;
                    me->setLocation(28, filename);
                        pearlrt::Semaphore::request( me, 2, g1_g2_semas);
                    me->setLocation(29, filename);
                        pearlrt::Semaphore::request( me, 1, console_semas);
                    me->setLocation(30, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(31, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_5f419ae7_3281_4b45_a751_cae747e36702) ;
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

                    me->setLocation(32, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(33, filename);
                        pearlrt::Semaphore::release( me, 1, console_semas);
                    me->setLocation(34, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(35, filename);
                        pearlrt::Semaphore::release( me, 2, g1_g2_semas);

                    me->setLocation(27, filename);

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
DCLTASK(_p2, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(39, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_3_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    me->setLocation(39, filename);
                        ;
                    me->setLocation(40, filename);
                        pearlrt::Semaphore::request( me, 2, g2_g3_semas);
                    me->setLocation(41, filename);
                        pearlrt::Semaphore::request( me, 1, console_semas);
                    me->setLocation(42, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(43, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_299feea1_3d62_4c56_954a_a30c478956c9) ;
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

                    me->setLocation(44, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(45, filename);
                        pearlrt::Semaphore::release( me, 1, console_semas);
                    me->setLocation(46, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(47, filename);
                        pearlrt::Semaphore::release( me, 2, g2_g3_semas);

                    me->setLocation(39, filename);

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
DCLTASK(_p3, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(51, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_3_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    me->setLocation(51, filename);
                        ;
                    me->setLocation(52, filename);
                        pearlrt::Semaphore::request( me, 2, g3_g4_semas);
                    me->setLocation(53, filename);
                        pearlrt::Semaphore::request( me, 1, console_semas);
                    me->setLocation(54, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(55, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_aff67052_f3bd_41fd_b4de_91679c7340f6) ;
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

                    me->setLocation(56, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(57, filename);
                        pearlrt::Semaphore::release( me, 1, console_semas);
                    me->setLocation(58, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(59, filename);
                        pearlrt::Semaphore::release( me, 2, g3_g4_semas);

                    me->setLocation(51, filename);

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
DCLTASK(_p4, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(63, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_3_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    me->setLocation(63, filename);
                        ;
                    me->setLocation(64, filename);
                        pearlrt::Semaphore::request( me, 2, g4_g5_semas);
                    me->setLocation(65, filename);
                        pearlrt::Semaphore::request( me, 1, console_semas);
                    me->setLocation(66, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(67, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_b2b90ced_fcbb_4219_ad1c_dd855b9ccde2) ;
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

                    me->setLocation(68, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(69, filename);
                        pearlrt::Semaphore::release( me, 1, console_semas);
                    me->setLocation(70, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(71, filename);
                        pearlrt::Semaphore::release( me, 2, g4_g5_semas);

                    me->setLocation(63, filename);

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
DCLTASK(_p5, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(75, filename);
        {
            pearlrt::Fixed<15> a_value(1);

            pearlrt::Fixed<31> e_value;
            e_value = CONSTANT_FIXED_POS_3_31;

            pearlrt::Fixed<15> s_value(1);

                while ((((s_value > CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value <= e_value).getBoolean())) ||
                        (((s_value < CONSTANT_FIXED_POS_0_31).getBoolean()) &&
                        ((a_value >= e_value).getBoolean())))
                {

                    me->setLocation(75, filename);
                        ;
                    me->setLocation(76, filename);
                        pearlrt::Semaphore::request( me, 1, g1_semas);
                    me->setLocation(77, filename);
                        pearlrt::Semaphore::request( me, 1, g5_semas);
                    me->setLocation(78, filename);
                        pearlrt::Semaphore::request( me, 1, console_semas);
                    me->setLocation(79, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(80, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_a0835750_493b_42c1_88f6_363d24c9a687) ;
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
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(82, filename);
                        pearlrt::Semaphore::release( me, 1, console_semas);
                    me->setLocation(83, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(84, filename);
                        pearlrt::Semaphore::release( me, 1, g1_semas);
                    me->setLocation(85, filename);
                        pearlrt::Semaphore::release( me, 1, g5_semas);

                    me->setLocation(75, filename);

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



