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
static /*const*/ pearlrt::Character<7>         CONSTANT_CHARACTER_d7a31e63_395f_4792_bb4b_0c80afdee0e7("STARTET");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_97de995d_ea2e_4ea9_9b63_3abeb7904108("Phil1 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_c89d778f_b260_4f6d_9e70_49b0c71a19b7("Phil2 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_841d59d2_ab16_4e51_9893_fd4a6cce1243("Phil3 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_72c277a2_0cf9_4a67_9d38_072aa3810f67("Phil4 - Isst");
static /*const*/ pearlrt::Character<12>         CONSTANT_CHARACTER_a4334fe8_d17c_4da1_b03d_9885a58448a5("Phil5 - Isst");

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


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *g1_g2_semas[] = {&_g1,&_g2}; 
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
        me->setLocation(16, filename);
        {
            _termout.dationOpen(
                0
            , (pearlrt::Character<1>*) 0
            , (pearlrt::Fixed<31>*) 0
            );
        }

        me->setLocation(17, filename);
        // PUT STATEMENT BEGIN
        try {
            _termout.beginSequence(me);
            _termout.toA(CONSTANT_CHARACTER_d7a31e63_395f_4792_bb4b_0c80afdee0e7) ;
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

        me->setLocation(18, filename);
        _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

        me->setLocation(19, filename);
            _p1.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(20, filename);
            _p2.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(21, filename);
            _p3.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(22, filename);
            _p4.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(23, filename);
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
        me->setLocation(26, filename);
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

                    me->setLocation(26, filename);
                        ;
                    me->setLocation(27, filename);
                        pearlrt::Semaphore::request( me, 2, g1_g2_semas);
                    me->setLocation(28, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(29, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_97de995d_ea2e_4ea9_9b63_3abeb7904108) ;
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

                    me->setLocation(30, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(31, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(32, filename);
                        pearlrt::Semaphore::release( me, 2, g1_g2_semas);

                    me->setLocation(26, filename);

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
        me->setLocation(36, filename);
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

                    me->setLocation(36, filename);
                        ;
                    me->setLocation(37, filename);
                        pearlrt::Semaphore::request( me, 2, g2_g3_semas);
                    me->setLocation(38, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(39, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_c89d778f_b260_4f6d_9e70_49b0c71a19b7) ;
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

                    me->setLocation(40, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(41, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(42, filename);
                        pearlrt::Semaphore::release( me, 2, g2_g3_semas);

                    me->setLocation(36, filename);

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
        me->setLocation(46, filename);
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

                    me->setLocation(46, filename);
                        ;
                    me->setLocation(47, filename);
                        pearlrt::Semaphore::request( me, 2, g3_g4_semas);
                    me->setLocation(48, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(49, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_841d59d2_ab16_4e51_9893_fd4a6cce1243) ;
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

                    me->setLocation(50, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(51, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(52, filename);
                        pearlrt::Semaphore::release( me, 2, g3_g4_semas);

                    me->setLocation(46, filename);

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
        me->setLocation(56, filename);
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

                    me->setLocation(56, filename);
                        ;
                    me->setLocation(57, filename);
                        pearlrt::Semaphore::request( me, 2, g4_g5_semas);
                    me->setLocation(58, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(59, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_72c277a2_0cf9_4a67_9d38_072aa3810f67) ;
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

                    me->setLocation(60, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(61, filename);
                        me->resume( pearlrt::Task::AFTER,
                                    /* at     */  pearlrt::Clock(),
                                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                                  );

                    me->setLocation(62, filename);
                        pearlrt::Semaphore::release( me, 2, g4_g5_semas);

                    me->setLocation(56, filename);

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
        me->setLocation(66, filename);
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

                    me->setLocation(66, filename);
                        ;
                    me->setLocation(67, filename);
                        pearlrt::Semaphore::request( me, 1, g1_semas);
                    me->setLocation(68, filename);
                        pearlrt::Semaphore::request( me, 1, g5_semas);
                    me->setLocation(69, filename);
                    {
                        _termout.dationOpen(
                            0
                        , (pearlrt::Character<1>*) 0
                        , (pearlrt::Fixed<31>*) 0
                        );
                    }

                    me->setLocation(70, filename);
                    // PUT STATEMENT BEGIN
                    try {
                        _termout.beginSequence(me);
                        _termout.toA(CONSTANT_CHARACTER_a4334fe8_d17c_4da1_b03d_9885a58448a5) ;
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

                    me->setLocation(71, filename);
                    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

                    me->setLocation(72, filename);
                        pearlrt::Semaphore::release( me, 1, g1_semas);
                    me->setLocation(73, filename);
                        pearlrt::Semaphore::release( me, 1, g5_semas);

                    me->setLocation(66, filename);

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



