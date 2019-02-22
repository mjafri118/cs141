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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa2/lab2_start/test_SLL.v";
static unsigned int ng1[] = {2147483658U, 0U};
static unsigned int ng2[] = {321313U, 0U};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {1U, 0U};
static const char *ng5 = "End of test!";
static int ng6[] = {0, 0};
static unsigned int ng7[] = {32U, 0U};
static int ng8[] = {1, 0};
static const char *ng9 = "Error below when x is %b";
static const char *ng10 = "X: %d, switch value=%d, output=%b . Expected %b";



static void Initial_30_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;

LAB0:    t1 = (t0 + 1536U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);

LAB4:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 75000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(38, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 75000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng3)));
    t3 = ((char*)((ng4)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_minus(t4, 32, t2, 32, t3, 32);
    t5 = (t0 + 828);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1436);
    xsi_process_wait(t2, 75000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(46, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    xsi_vlogfile_write(1, 0, 0, ng5, 1, t0);
    goto LAB1;

}

static void Always_53_1(char *t0)
{
    char t7[8];
    char t30[8];
    char t37[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
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
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;

LAB0:    t1 = (t0 + 1680U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1876);
    *((int *)t2) = 1;
    t3 = (t0 + 1708);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(53, ng0);

LAB5:    xsi_set_current_line(54, ng0);
    t4 = (t0 + 1580);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:
LAB9:
LAB8:    xsi_set_current_line(56, ng0);

LAB11:    xsi_set_current_line(58, ng0);
    xsi_set_current_line(58, ng0);
    t5 = ((char*)((ng6)));
    t6 = (t0 + 920);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);

LAB12:    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t7, 0, 8);
    t8 = (t5 + 4);
    t9 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t8);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t8);
    t18 = *((unsigned int *)t9);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB14;

LAB13:    if (t19 != 0)
        goto LAB15;

LAB16:    t23 = (t7 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB17;

LAB18:
LAB10:    goto LAB2;

LAB14:    *((unsigned int *)t7) = 1;
    goto LAB16;

LAB15:    t22 = (t7 + 4);
    *((unsigned int *)t7) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB16;

LAB17:    xsi_set_current_line(58, ng0);

LAB19:    xsi_set_current_line(59, ng0);
    t29 = (t0 + 1580);
    xsi_process_wait(t29, 2000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 920);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_lshift(t7, 32, t5, 32, t9, 32);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    memset(t30, 0, 8);
    t22 = (t7 + 4);
    t29 = (t23 + 4);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t23);
    t12 = (t10 ^ t11);
    t13 = *((unsigned int *)t22);
    t14 = *((unsigned int *)t29);
    t15 = (t13 ^ t14);
    t16 = (t12 | t15);
    t17 = *((unsigned int *)t22);
    t18 = *((unsigned int *)t29);
    t19 = (t17 | t18);
    t20 = (~(t19));
    t21 = (t16 & t20);
    if (t21 != 0)
        goto LAB22;

LAB21:    if (t19 != 0)
        goto LAB23;

LAB24:    t32 = (t30 + 4);
    t24 = *((unsigned int *)t32);
    t25 = (~(t24));
    t26 = *((unsigned int *)t30);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB25;

LAB26:
LAB27:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 920);
    t8 = (t6 + 36U);
    t9 = *((char **)t8);
    t22 = (t0 + 600U);
    t23 = *((char **)t22);
    t22 = (t0 + 828);
    t29 = (t22 + 36U);
    t31 = *((char **)t29);
    t32 = (t0 + 920);
    t33 = (t32 + 36U);
    t34 = *((char **)t33);
    memset(t7, 0, 8);
    xsi_vlog_unsigned_lshift(t7, 32, t31, 32, t34, 32);
    xsi_vlogfile_write(1, 0, 0, ng10, 5, t0, (char)118, t5, 32, (char)118, t9, 32, (char)118, t23, 32, (char)118, t7, 32);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng8)));
    memset(t7, 0, 8);
    xsi_vlog_unsigned_add(t7, 32, t5, 32, t6, 32);
    t8 = (t0 + 920);
    xsi_vlogvar_assign_value(t8, t7, 0, 0, 32);
    goto LAB12;

LAB22:    *((unsigned int *)t30) = 1;
    goto LAB24;

LAB23:    t31 = (t30 + 4);
    *((unsigned int *)t30) = 1;
    *((unsigned int *)t31) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(62, ng0);

LAB28:    xsi_set_current_line(63, ng0);
    t33 = (t0 + 1012);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng8)));
    memset(t37, 0, 8);
    xsi_vlog_signed_add(t37, 32, t35, 32, t36, 32);
    t38 = (t0 + 1012);
    xsi_vlogvar_assign_value(t38, t37, 0, 0, 32);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 828);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng9, 2, t0, (char)118, t5, 32);
    goto LAB27;

}


extern void work_m_00000000002964443329_2108120146_init()
{
	static char *pe[] = {(void *)Initial_30_0,(void *)Always_53_1};
	xsi_register_didat("work_m_00000000002964443329_2108120146", "isim/test_SLL_isim_beh.exe.sim/work/m_00000000002964443329_2108120146.didat");
	xsi_register_executes(pe);
}
