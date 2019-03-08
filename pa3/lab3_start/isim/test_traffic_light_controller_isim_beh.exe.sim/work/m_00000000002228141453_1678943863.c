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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa3/lab3_start/timer.v";
static unsigned int ng1[] = {15U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {1, 0};



static void Always_22_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;

LAB0:    t1 = (t0 + 1984U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(22, ng0);
    t2 = (t0 + 2468);
    *((int *)t2) = 1;
    t3 = (t0 + 2012);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(23, ng0);

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t0 + 772U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1460);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(25, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1368);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 4, 0LL);
    goto LAB8;

}

static void Always_31_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t51[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    char *t37;
    char *t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t52;

LAB0:    t1 = (t0 + 2128U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(31, ng0);
    t2 = (t0 + 2476);
    *((int *)t2) = 1;
    t3 = (t0 + 2156);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t4 = (t0 + 956U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 864U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 4, 0LL);

LAB11:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);
    t11 = (t0 + 1048U);
    t12 = *((char **)t11);
    t11 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t11, t12, 0, 0, 4, 0LL);
    goto LAB8;

LAB9:    xsi_set_current_line(40, ng0);
    t4 = (t0 + 1368);
    t5 = (t4 + 36U);
    t11 = *((char **)t5);
    t12 = ((char*)((ng2)));
    memset(t15, 0, 8);
    t16 = (t11 + 4);
    t17 = (t12 + 4);
    t18 = *((unsigned int *)t11);
    t19 = *((unsigned int *)t12);
    t20 = (t18 ^ t19);
    t21 = *((unsigned int *)t16);
    t22 = *((unsigned int *)t17);
    t23 = (t21 ^ t22);
    t24 = (t20 | t23);
    t25 = *((unsigned int *)t16);
    t26 = *((unsigned int *)t17);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t29 = (t24 & t28);
    if (t29 != 0)
        goto LAB15;

LAB12:    if (t27 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t15) = 1;

LAB15:    memset(t14, 0, 8);
    t31 = (t15 + 4);
    t32 = *((unsigned int *)t31);
    t33 = (~(t32));
    t34 = *((unsigned int *)t15);
    t35 = (t34 & t33);
    t36 = (t35 & 1U);
    if (t36 != 0)
        goto LAB16;

LAB17:    if (*((unsigned int *)t31) != 0)
        goto LAB18;

LAB19:    t38 = (t14 + 4);
    t39 = *((unsigned int *)t14);
    t40 = *((unsigned int *)t38);
    t41 = (t39 || t40);
    if (t41 > 0)
        goto LAB20;

LAB21:    t43 = *((unsigned int *)t14);
    t44 = (~(t43));
    t45 = *((unsigned int *)t38);
    t46 = (t44 || t45);
    if (t46 > 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t38) > 0)
        goto LAB24;

LAB25:    if (*((unsigned int *)t14) > 0)
        goto LAB26;

LAB27:    memcpy(t13, t51, 8);

LAB28:    t52 = (t0 + 1460);
    xsi_vlogvar_wait_assign_value(t52, t13, 0, 0, 4, 0LL);
    goto LAB11;

LAB14:    t30 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t30) = 1;
    goto LAB15;

LAB16:    *((unsigned int *)t14) = 1;
    goto LAB19;

LAB18:    t37 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t37) = 1;
    goto LAB19;

LAB20:    t42 = ((char*)((ng2)));
    goto LAB21;

LAB22:    t47 = (t0 + 1368);
    t48 = (t47 + 36U);
    t49 = *((char **)t48);
    t50 = ((char*)((ng3)));
    memset(t51, 0, 8);
    xsi_vlog_unsigned_minus(t51, 32, t49, 4, t50, 32);
    goto LAB23;

LAB24:    xsi_vlog_unsigned_bit_combine(t13, 32, t42, 32, t51, 32);
    goto LAB28;

LAB26:    memcpy(t13, t42, 8);
    goto LAB28;

}

static void Cont_47_2(char *t0)
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

LAB0:    t1 = (t0 + 2272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 1368);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2528);
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
    t18 = (t0 + 2484);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_00000000002228141453_1678943863_init()
{
	static char *pe[] = {(void *)Always_22_0,(void *)Always_31_1,(void *)Cont_47_2};
	xsi_register_didat("work_m_00000000002228141453_1678943863", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000002228141453_1678943863.didat");
	xsi_register_executes(pe);
}
