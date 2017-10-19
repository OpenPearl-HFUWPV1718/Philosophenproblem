/////////////////////////////////////////////////////////////////////////////
// PROLOGUE
/////////////////////////////////////////////////////////////////////////////
#include <PearlIncludes.h>
#include <cmath>

const char* filename = (char*) "philosophers.prl";


/////////////////////////////////////////////////////////////////////////////
// CONSTANT POOL
/////////////////////////////////////////////////////////////////////////////
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_0_31(0);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_1_31(1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_NEG_1_31(-1);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_5_31(5);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_3_31(3);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_2_31(2);
static /*const*/ pearlrt::Fixed<31>         CONSTANT_FIXED_POS_4_31(4);
static /*const*/ pearlrt::Character<13>         CONSTANT_CHARACTER_79a5b676_0970_4919_8251_42d2673899da("Philosopher #");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_7bba054a_69ab_4c1f_985a_334bc0e83764(": I am eating!");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_cfb69bf3_7c85_4f66_afc1_21dc895fe161(": I am thinking!");

/////////////////////////////////////////////////////////////////////////////
// TASK SPECIFIERS
/////////////////////////////////////////////////////////////////////////////
SPCTASK(_taskPhilo4);
SPCTASK(_taskPhilo3);
SPCTASK(_taskPhilo5);
SPCTASK(_taskPhilo2);
SPCTASK(_taskPhilo1);
SPCTASK(_main);


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
_eat(pearlrt::Task *me, pearlrt::Fixed<31>  _num);
void
_think(pearlrt::Task *me, pearlrt::Fixed<31>  _num);



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
DCLSEMA(_semaTermout,1);
DCLSEMA(_semaFork1,1);
DCLSEMA(_semaFork2,1);
DCLSEMA(_semaFork3,1);
DCLSEMA(_semaFork4,1);
DCLSEMA(_semaFork5,1);


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY SEMAPHORE ARRAYS
/////////////////////////////////////////////////////////////////////////////
static pearlrt::Semaphore *semaTermout_semas[] = {&_semaTermout}; 
static pearlrt::Semaphore *semaFork1_semaFork5_semas[] = {&_semaFork1,&_semaFork5}; 
static pearlrt::Semaphore *semaFork1_semaFork2_semas[] = {&_semaFork1,&_semaFork2}; 
static pearlrt::Semaphore *semaFork2_semaFork3_semas[] = {&_semaFork2,&_semaFork3}; 
static pearlrt::Semaphore *semaFork3_semaFork4_semas[] = {&_semaFork3,&_semaFork4}; 
static pearlrt::Semaphore *semaFork4_semaFork5_semas[] = {&_semaFork4,&_semaFork5}; 


/////////////////////////////////////////////////////////////////////////////
// TEMPORARY BOLT ARRAYS
/////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// ARRAY DESCRIPTORS
/////////////////////////////////////////////////////////////////////////////


/////////////////////////////////////////////////////////////////////////////
// PROCEDURE DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
void
_eat(pearlrt::Task *me, pearlrt::Fixed<31>  _num)
{
    me->setLocation(18, filename);
        pearlrt::Semaphore::request( me, 1, semaTermout_semas);
    me->setLocation(19, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(20, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_79a5b676_0970_4919_8251_42d2673899da) ;
        _termout.toF(_num,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _termout.toA(CONSTANT_CHARACTER_7bba054a_69ab_4c1f_985a_334bc0e83764) ;
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

    me->setLocation(21, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(22, filename);
        pearlrt::Semaphore::release( me, 1, semaTermout_semas);
    me->setLocation(23, filename);
        me->resume( pearlrt::Task::AFTER,
                    /* at     */  pearlrt::Clock(),
                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                  );

}

void
_think(pearlrt::Task *me, pearlrt::Fixed<31>  _num)
{
    me->setLocation(27, filename);
        pearlrt::Semaphore::request( me, 1, semaTermout_semas);
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
        _termout.toA(CONSTANT_CHARACTER_79a5b676_0970_4919_8251_42d2673899da) ;
        _termout.toF(_num,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _termout.toA(CONSTANT_CHARACTER_cfb69bf3_7c85_4f66_afc1_21dc895fe161) ;
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
        pearlrt::Semaphore::release( me, 1, semaTermout_semas);
    me->setLocation(32, filename);
        me->resume( pearlrt::Task::AFTER,
                    /* at     */  pearlrt::Clock(),
                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                  );

}



/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_1_31)), ((pearlrt::BitString<1>)1)) {
        me->setLocation(36, filename);
            _taskPhilo1.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(37, filename);
            _taskPhilo2.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(38, filename);
            _taskPhilo3.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(39, filename);
            _taskPhilo4.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(40, filename);
            _taskPhilo5.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

}
DCLTASK(_taskPhilo1, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(44, filename);
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

                    me->setLocation(45, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork1_semaFork5_semas);
                    me->setLocation(46, filename);
                    _eat( me, CONSTANT_FIXED_POS_1_31);
                    me->setLocation(47, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork1_semaFork5_semas);
                    me->setLocation(48, filename);
                    _think( me, CONSTANT_FIXED_POS_1_31);

                    me->setLocation(44, filename);

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
DCLTASK(_taskPhilo2, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(53, filename);
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

                    me->setLocation(54, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork1_semaFork2_semas);
                    me->setLocation(55, filename);
                    _eat( me, CONSTANT_FIXED_POS_2_31);
                    me->setLocation(56, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork1_semaFork2_semas);
                    me->setLocation(57, filename);
                    _think( me, CONSTANT_FIXED_POS_2_31);

                    me->setLocation(53, filename);

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
DCLTASK(_taskPhilo3, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(62, filename);
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
                        pearlrt::Semaphore::request( me, 2, semaFork2_semaFork3_semas);
                    me->setLocation(64, filename);
                    _eat( me, CONSTANT_FIXED_POS_3_31);
                    me->setLocation(65, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork2_semaFork3_semas);
                    me->setLocation(66, filename);
                    _think( me, CONSTANT_FIXED_POS_3_31);

                    me->setLocation(62, filename);

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
DCLTASK(_taskPhilo4, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(71, filename);
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

                    me->setLocation(72, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork3_semaFork4_semas);
                    me->setLocation(73, filename);
                    _eat( me, CONSTANT_FIXED_POS_4_31);
                    me->setLocation(74, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork3_semaFork4_semas);
                    me->setLocation(75, filename);
                    _think( me, CONSTANT_FIXED_POS_4_31);

                    me->setLocation(71, filename);

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
DCLTASK(_taskPhilo5, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_5_31)), ((pearlrt::BitString<1>)0)) {
        me->setLocation(80, filename);
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

                    me->setLocation(81, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork4_semaFork5_semas);
                    me->setLocation(82, filename);
                    _eat( me, CONSTANT_FIXED_POS_5_31);
                    me->setLocation(83, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork4_semaFork5_semas);
                    me->setLocation(84, filename);
                    _think( me, CONSTANT_FIXED_POS_5_31);

                    me->setLocation(80, filename);

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



