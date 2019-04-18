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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa4/lab4_start/lab4_start/test_mips_multicycle.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static const char *ng3 = "NUM_CYCLES=%d";
static const char *ng4 = "defaulting to 1000 cycles";
static int ng5[] = {1000, 0};
static int ng6[] = {2, 0};
static const char *ng7 = "simulated %d cycles";
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {10U, 0U};
static const char *ng10 = "Dumping data memory from address %d -> %d:";
static const char *ng11 = "\tDMEM[%d]=%h";



static void Cont_19_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;

LAB0:    t1 = (t0 + 2444U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(19, ng0);
    t2 = (t0 + 1920);
    t4 = (t2 + 36U);
    t5 = *((char **)t4);
    memset(t3, 0, 8);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB7;

LAB5:    if (*((unsigned int *)t6) == 0)
        goto LAB4;

LAB6:    t12 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t12) = 1;

LAB7:    t13 = (t3 + 4);
    t14 = (t5 + 4);
    t15 = *((unsigned int *)t5);
    t16 = (~(t15));
    *((unsigned int *)t3) = t16;
    *((unsigned int *)t13) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB9;

LAB8:    t21 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t21 & 1U);
    t22 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t22 & 1U);
    t23 = (t0 + 2988);
    t24 = (t23 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memset(t27, 0, 8);
    t28 = 1U;
    t29 = t28;
    t30 = (t3 + 4);
    t31 = *((unsigned int *)t3);
    t28 = (t28 & t31);
    t32 = *((unsigned int *)t30);
    t29 = (t29 & t32);
    t33 = (t27 + 4);
    t34 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t34 | t28);
    t35 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t35 | t29);
    xsi_driver_vfirst_trans(t23, 0, 0);
    t36 = (t0 + 2928);
    *((int *)t36) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t3) = 1;
    goto LAB7;

LAB9:    t17 = *((unsigned int *)t3);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t3) = (t17 | t18);
    t19 = *((unsigned int *)t13);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t19 | t20);
    goto LAB8;

}

static void Initial_58_1(char *t0)
{
    char t4[8];
    char t5[8];
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 2588U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(58, ng0);

LAB4:    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1828);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    xsi_vlog_bit_copy(t5, 0, t6, 0, 32);
    *((int *)t7) = xsi_vlog_valueplusarg(ng3, -1, 2, t0, (char)119, t5, 32);
    t8 = (t7 + 4);
    *((int *)t8) = 0;
    t9 = (t0 + 1368);
    xsi_vlogvar_assign_value(t9, t5, 0, 0, 32);
    memset(t4, 0, 8);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t10);
    t12 = (~(t11));
    t13 = *((unsigned int *)t7);
    t14 = (t13 & t12);
    t15 = (t14 & 4294967295U);
    if (t15 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t10) == 0)
        goto LAB5;

LAB7:    t16 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t16) = 1;

LAB8:    t17 = (t4 + 4);
    t18 = *((unsigned int *)t17);
    t19 = (~(t18));
    t20 = *((unsigned int *)t4);
    t21 = (t20 & t19);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = (~(t11));
    t13 = *((unsigned int *)t2);
    t23 = (t13 & t12);
    t6 = (t0 + 4532);
    *((int *)t6) = t23;

LAB13:    t8 = (t0 + 4532);
    if (*((int *)t8) > 0)
        goto LAB14;

LAB15:    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = (t6 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t23 = (t13 & t12);
    t9 = (t0 + 4536);
    *((int *)t9) = t23;

LAB17:    t10 = (t0 + 4536);
    if (*((int *)t10) > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng7, 2, t0, (char)119, t6, 32);
    xsi_set_current_line(72, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1460);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = ((char*)((ng9)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t6, 32, t8, 32);
    t9 = (t0 + 1552);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1552);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = (t0 + 1460);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_signed_greater(t4, 32, t6, 32, t10, 32);
    t16 = (t4 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB21;

LAB22:
LAB23:    xsi_set_current_line(82, ng0);
    xsi_vlog_finish(1);

LAB1:    return;
LAB5:    *((unsigned int *)t4) = 1;
    goto LAB8;

LAB9:    xsi_set_current_line(62, ng0);

LAB12:    xsi_set_current_line(63, ng0);
    xsi_vlogfile_write(1, 0, 0, ng4, 1, t0);
    xsi_set_current_line(64, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1368);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB11;

LAB14:    xsi_set_current_line(67, ng0);
    t9 = (t0 + 2936);
    *((int *)t9) = 1;
    t10 = (t0 + 2616);
    *((char **)t10) = t9;
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB16:    t2 = (t0 + 4532);
    t23 = *((int *)t2);
    *((int *)t2) = (t23 - 1);
    goto LAB13;

LAB18:    xsi_set_current_line(69, ng0);
    t16 = (t0 + 2944);
    *((int *)t16) = 1;
    t17 = (t0 + 2616);
    *((char **)t17) = t16;
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB20:    t2 = (t0 + 4536);
    t23 = *((int *)t2);
    *((int *)t2) = (t23 - 1);
    goto LAB17;

LAB21:    xsi_set_current_line(74, ng0);

LAB24:    xsi_set_current_line(75, ng0);
    t17 = (t0 + 1460);
    t24 = (t17 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 1552);
    t27 = (t26 + 36U);
    t28 = *((char **)t27);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)119, t25, 32, (char)119, t28, 32);
    xsi_set_current_line(77, ng0);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = (t0 + 1644);
    xsi_vlogvar_assign_value(t8, t6, 0, 0, 32);

LAB25:    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = (t0 + 1552);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t4, 0, 8);
    xsi_vlog_signed_less(t4, 32, t6, 32, t10, 32);
    t16 = (t4 + 4);
    t11 = *((unsigned int *)t16);
    t12 = (~(t11));
    t13 = *((unsigned int *)t4);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB26;

LAB27:    goto LAB23;

LAB26:    xsi_set_current_line(77, ng0);

LAB28:    xsi_set_current_line(78, ng0);
    t17 = (t0 + 1644);
    t24 = (t17 + 36U);
    t25 = *((char **)t24);
    t26 = (t0 + 4552);
    t27 = *((char **)t26);
    t28 = ((((char*)(t27))) + 36U);
    t29 = *((char **)t28);
    t30 = (t0 + 4568);
    t31 = *((char **)t30);
    t32 = ((((char*)(t31))) + 44U);
    t33 = *((char **)t32);
    t34 = (t0 + 4584);
    t35 = *((char **)t34);
    t36 = ((((char*)(t35))) + 40U);
    t37 = *((char **)t36);
    t38 = (t0 + 1644);
    t39 = (t38 + 36U);
    t40 = *((char **)t39);
    xsi_vlog_generic_get_array_select_value(t5, 32, t29, t33, t37, 2, 1, t40, 32, 1);
    xsi_vlogfile_write(1, 0, 0, ng11, 3, t0, (char)119, t25, 32, (char)118, t5, 32);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1644);
    t3 = (t2 + 36U);
    t6 = *((char **)t3);
    t8 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_signed_add(t4, 32, t6, 32, t8, 32);
    t9 = (t0 + 1644);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 32);
    goto LAB25;

}

static void Always_85_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2632);
    xsi_process_wait(t2, 5000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(85, ng0);
    t4 = (t0 + 1828);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 1828);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}


extern void work_m_00000000000253588458_3459225917_init()
{
	static char *pe[] = {(void *)Cont_19_0,(void *)Initial_58_1,(void *)Always_85_2};
	xsi_register_didat("work_m_00000000000253588458_3459225917", "isim/test_mips_multicycle_isim_beh.exe.sim/work/m_00000000000253588458_3459225917.didat");
	xsi_register_executes(pe);
}
