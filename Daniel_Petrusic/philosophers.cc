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
static /*const*/ pearlrt::Character<13>         CONSTANT_CHARACTER_f349f748_70a4_469f_b2be_eee84e09caef("Philosopher #");
static /*const*/ pearlrt::Character<14>         CONSTANT_CHARACTER_1b04f369_d221_4adc_afb5_6789f98a2c38(": I am eating!");
static /*const*/ pearlrt::Character<16>         CONSTANT_CHARACTER_1769cda7_1eb7_41df_bbf0_0e8a130ef7ad(": I am thinking!");

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
    me->setLocation(14, filename);
        pearlrt::Semaphore::request( me, 1, semaTermout_semas);
    me->setLocation(15, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(16, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_f349f748_70a4_469f_b2be_eee84e09caef) ;
        _termout.toF(_num,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _termout.toA(CONSTANT_CHARACTER_1b04f369_d221_4adc_afb5_6789f98a2c38) ;
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

    me->setLocation(17, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(18, filename);
        pearlrt::Semaphore::release( me, 1, semaTermout_semas);
    me->setLocation(19, filename);
        me->resume( pearlrt::Task::AFTER,
                    /* at     */  pearlrt::Clock(),
                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                  );

}

void
_think(pearlrt::Task *me, pearlrt::Fixed<31>  _num)
{
    me->setLocation(23, filename);
        pearlrt::Semaphore::request( me, 1, semaTermout_semas);
    me->setLocation(24, filename);
    {
        _termout.dationOpen(
            0
        , (pearlrt::Character<1>*) 0
        , (pearlrt::Fixed<31>*) 0
        );
    }

    me->setLocation(25, filename);
    // PUT STATEMENT BEGIN
    try {
        _termout.beginSequence(me);
        _termout.toA(CONSTANT_CHARACTER_f349f748_70a4_469f_b2be_eee84e09caef) ;
        _termout.toF(_num,(pearlrt::Fixed<31>)(CONSTANT_FIXED_POS_1_31));
        _termout.toA(CONSTANT_CHARACTER_1769cda7_1eb7_41df_bbf0_0e8a130ef7ad) ;
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

    me->setLocation(26, filename);
    _termout.dationClose(0, (pearlrt::Fixed<15>*) 0);

    me->setLocation(27, filename);
        pearlrt::Semaphore::release( me, 1, semaTermout_semas);
    me->setLocation(28, filename);
        me->resume( pearlrt::Task::AFTER,
                    /* at     */  pearlrt::Clock(),
                    /* after  */  pearlrt::Duration(pearlrt::Duration(1.0))
                  );

}



/////////////////////////////////////////////////////////////////////////////
// TASK DECLARATIONS
/////////////////////////////////////////////////////////////////////////////
DCLTASK(_main, (pearlrt::Prio( (pearlrt::Fixed<15>)CONSTANT_FIXED_POS_1_31)), ((pearlrt::BitString<1>)1)) {
        me->setLocation(32, filename);
            _taskPhilo1.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(33, filename);
            _taskPhilo2.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(34, filename);
            _taskPhilo3.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(35, filename);
            _taskPhilo4.activate( me,
                              0,
                              /* prio   */  pearlrt::Prio(),
                              /* at     */  pearlrt::Clock(),
                              /* after  */  pearlrt::Duration(),
                              /* all    */  pearlrt::Duration(),
                              /* until  */  pearlrt::Clock(),
                              /* during */  pearlrt::Duration()
                            );

        me->setLocation(36, filename);
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
        me->setLocation(40, filename);
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

                    me->setLocation(41, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork1_semaFork5_semas);
                    me->setLocation(42, filename);
                    _eat( me, CONSTANT_FIXED_POS_1_31);
                    me->setLocation(43, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork1_semaFork5_semas);
                    me->setLocation(44, filename);
                    _think( me, CONSTANT_FIXED_POS_1_31);

                    me->setLocation(40, filename);

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
        me->setLocation(49, filename);
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

                    me->setLocation(50, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork1_semaFork2_semas);
                    me->setLocation(51, filename);
                    _eat( me, CONSTANT_FIXED_POS_2_31);
                    me->setLocation(52, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork1_semaFork2_semas);
                    me->setLocation(53, filename);
                    _think( me, CONSTANT_FIXED_POS_2_31);

                    me->setLocation(49, filename);

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
        me->setLocation(58, filename);
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

                    me->setLocation(59, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork2_semaFork3_semas);
                    me->setLocation(60, filename);
                    _eat( me, CONSTANT_FIXED_POS_3_31);
                    me->setLocation(61, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork2_semaFork3_semas);
                    me->setLocation(62, filename);
                    _think( me, CONSTANT_FIXED_POS_3_31);

                    me->setLocation(58, filename);

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
        me->setLocation(67, filename);
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

                    me->setLocation(68, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork3_semaFork4_semas);
                    me->setLocation(69, filename);
                    _eat( me, CONSTANT_FIXED_POS_4_31);
                    me->setLocation(70, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork3_semaFork4_semas);
                    me->setLocation(71, filename);
                    _think( me, CONSTANT_FIXED_POS_4_31);

                    me->setLocation(67, filename);

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
        me->setLocation(76, filename);
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

                    me->setLocation(77, filename);
                        pearlrt::Semaphore::request( me, 2, semaFork4_semaFork5_semas);
                    me->setLocation(78, filename);
                    _eat( me, CONSTANT_FIXED_POS_5_31);
                    me->setLocation(79, filename);
                        pearlrt::Semaphore::release( me, 2, semaFork4_semaFork5_semas);
                    me->setLocation(80, filename);
                    _think( me, CONSTANT_FIXED_POS_5_31);

                    me->setLocation(76, filename);

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



