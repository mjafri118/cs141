/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa4/lab4_start/lab4_start/alu_decoder.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {7U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {8U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {24U, 0U};
static unsigned int ng7[] = {12U, 0U};
static const char *ng8 = "Multiply ALU decode";
static unsigned int ng9[] = {32U, 0U};
static unsigned int ng10[] = {34U, 0U};
static unsigned int ng11[] = {36U, 0U};
static unsigned int ng12[] = {37U, 0U};
static unsigned int ng13[] = {38U, 0U};
static unsigned int ng14[] = {39U, 0U};
static unsigned int ng15[] = {3U, 0U};
static unsigned int ng16[] = {42U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {5U, 0U};
static unsigned int ng19[] = {6U, 0U};
static unsigned int ng20[] = {11U, 0U};



static void Cont_18_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(18, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1928);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 15U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 3);
    t18 = (t0 + 1876);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Always_21_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1884);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(21, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 600U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t6) = 1;

LAB17:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t6, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t9 = *((unsigned int *)t3);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t4);
    t13 = *((unsigned int *)t5);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB25;

LAB22:    if (t18 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t6) = 1;

LAB25:    t8 = (t6 + 4);
    t23 = *((unsigned int *)t8);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB26;

LAB27:
LAB28:
LAB20:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t28 = ((char*)((ng2)));
    t29 = (t0 + 1012);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    goto LAB12;

LAB16:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(29, ng0);

LAB21:    xsi_set_current_line(30, ng0);
    t21 = ((char*)((ng4)));
    t22 = (t0 + 1012);
    xsi_vlogvar_assign_value(t22, t21, 0, 0, 4);
    goto LAB20;

LAB24:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(34, ng0);

LAB29:    xsi_set_current_line(35, ng0);
    t21 = (t0 + 692U);
    t22 = *((char **)t21);

LAB30:    t21 = ((char*)((ng6)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t21, 6);
    if (t30 == 1)
        goto LAB31;

LAB32:    t2 = ((char*)((ng9)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB33;

LAB34:    t2 = ((char*)((ng10)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB35;

LAB36:    t2 = ((char*)((ng11)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB37;

LAB38:    t2 = ((char*)((ng12)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB39;

LAB40:    t2 = ((char*)((ng13)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB41;

LAB42:    t2 = ((char*)((ng14)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB43;

LAB44:    t2 = ((char*)((ng16)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB45;

LAB46:    t2 = ((char*)((ng1)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB47;

LAB48:    t2 = ((char*)((ng5)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB49;

LAB50:    t2 = ((char*)((ng15)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB51;

LAB52:    t2 = ((char*)((ng4)));
    t30 = xsi_vlog_unsigned_case_compare(t22, 6, t2, 6);
    if (t30 == 1)
        goto LAB53;

LAB54:
LAB55:    goto LAB28;

LAB31:    xsi_set_current_line(37, ng0);

LAB56:    xsi_set_current_line(38, ng0);
    t28 = ((char*)((ng7)));
    t29 = (t0 + 1012);
    xsi_vlogvar_assign_value(t29, t28, 0, 0, 4);
    xsi_set_current_line(39, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB55;

LAB33:    xsi_set_current_line(43, ng0);

LAB57:    xsi_set_current_line(44, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB35:    xsi_set_current_line(48, ng0);

LAB58:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB37:    xsi_set_current_line(53, ng0);

LAB59:    xsi_set_current_line(54, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB39:    xsi_set_current_line(58, ng0);

LAB60:    xsi_set_current_line(59, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB41:    xsi_set_current_line(63, ng0);

LAB61:    xsi_set_current_line(64, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB43:    xsi_set_current_line(68, ng0);

LAB62:    xsi_set_current_line(69, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB45:    xsi_set_current_line(73, ng0);

LAB63:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng17)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB47:    xsi_set_current_line(78, ng0);

LAB64:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB49:    xsi_set_current_line(83, ng0);

LAB65:    xsi_set_current_line(84, ng0);
    t3 = ((char*)((ng19)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB51:    xsi_set_current_line(88, ng0);

LAB66:    xsi_set_current_line(89, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

LAB53:    xsi_set_current_line(93, ng0);

LAB67:    xsi_set_current_line(94, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 1012);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB55;

}


extern void work_m_00000000001865182114_1020968299_init()
{
	static char *pe[] = {(void *)Cont_18_0,(void *)Always_21_1};
	xsi_register_didat("work_m_00000000001865182114_1020968299", "isim/test_mips_multicycle_isim_beh.exe.sim/work/m_00000000001865182114_1020968299.didat");
	xsi_register_executes(pe);
}
