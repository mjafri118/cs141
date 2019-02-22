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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa2/lab2_start/test_cla_adder_32bit.v";
static int ng1[] = {0, 0};
static unsigned int ng2[] = {5U, 0U};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {15U, 0U};
static int ng5[] = {1, 0};
static unsigned int ng6[] = {639872U, 0U};
static unsigned int ng7[] = {19837U, 0U};
static unsigned int ng8[] = {19893U, 0U};
static unsigned int ng9[] = {2147483547U, 0U};
static unsigned int ng10[] = {75U, 0U};
static unsigned int ng11[] = {125U, 0U};
static const char *ng12 = "Add: carry is %d; %d + %d = ";
static const char *ng13 = "ERROR addition error ABOVE";
static int ng14[] = {2147483647, 0};
static const char *ng15 = "ERROR no overflow ABOVE";
static const char *ng16 = "WARNING overflow";



static void Initial_52_0(char *t0)
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

LAB0:    t1 = (t0 + 1996U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);

LAB4:    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1896);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(63, ng0);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB6:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB8;

LAB7:    if (t18 != 0)
        goto LAB9;

LAB10:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB11;

LAB12:    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB15:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng8)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB17;

LAB16:    if (t18 != 0)
        goto LAB18;

LAB19:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB20;

LAB21:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(74, ng0);
    xsi_set_current_line(74, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB24:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB26;

LAB25:    if (t18 != 0)
        goto LAB27;

LAB28:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB29;

LAB30:    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng9)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_unary_minus(t6, 32, t2, 32);
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t6, 0, 0, 32);
    xsi_set_current_line(79, ng0);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB33:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB35;

LAB34:    if (t18 != 0)
        goto LAB36;

LAB37:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB38;

LAB39:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(84, ng0);
    xsi_set_current_line(84, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB42:    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t8 = (t5 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
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
        goto LAB44;

LAB43:    if (t18 != 0)
        goto LAB45;

LAB46:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB47;

LAB48:    goto LAB1;

LAB8:    *((unsigned int *)t6) = 1;
    goto LAB10;

LAB9:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB10;

LAB11:    xsi_set_current_line(63, ng0);

LAB13:    xsi_set_current_line(64, ng0);
    t28 = (t0 + 1896);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB14;
    goto LAB1;

LAB14:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB17:    *((unsigned int *)t6) = 1;
    goto LAB19;

LAB18:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB19;

LAB20:    xsi_set_current_line(69, ng0);

LAB22:    xsi_set_current_line(70, ng0);
    t28 = (t0 + 1896);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB23:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB15;

LAB26:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB27:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB28;

LAB29:    xsi_set_current_line(74, ng0);

LAB31:    xsi_set_current_line(75, ng0);
    t28 = (t0 + 1896);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB32:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB24;

LAB35:    *((unsigned int *)t6) = 1;
    goto LAB37;

LAB36:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(79, ng0);

LAB40:    xsi_set_current_line(80, ng0);
    t28 = (t0 + 1896);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB41:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB33;

LAB44:    *((unsigned int *)t6) = 1;
    goto LAB46;

LAB45:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(84, ng0);

LAB49:    xsi_set_current_line(85, ng0);
    t28 = (t0 + 1896);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB50;
    goto LAB1;

LAB50:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1196);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB42;

}

static void Always_90_1(char *t0)
{
    char t13[8];
    char t14[8];
    char t15[8];
    char t17[8];
    char t31[8];
    char t34[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t16;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    int t66;
    int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;

LAB0:    t1 = (t0 + 2140U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2336);
    *((int *)t2) = 1;
    t3 = (t0 + 2168);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(90, ng0);

LAB5:    xsi_set_current_line(91, ng0);
    t4 = (t0 + 2040);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(92, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1196);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    t8 = (t0 + 1288);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t4, 1, (char)119, t7, 32, (char)119, t10, 32, (char)119, t12, 32);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 32, t7, 32);
    t8 = (t0 + 1380);
    t9 = (t8 + 36U);
    t10 = *((char **)t9);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t13, 32, t10, 1);
    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    memset(t15, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t12))
        goto LAB8;

LAB7:    t11 = (t14 + 4);
    t16 = (t12 + 4);
    if (*((unsigned int *)t11) != *((unsigned int *)t16))
        goto LAB8;

LAB9:    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t15);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB10;

LAB11:    if (*((unsigned int *)t18) != 0)
        goto LAB12;

LAB13:    t25 = (t17 + 4);
    t26 = *((unsigned int *)t17);
    t27 = *((unsigned int *)t25);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB14;

LAB15:    memcpy(t42, t17, 8);

LAB16:    t74 = (t42 + 4);
    t75 = *((unsigned int *)t74);
    t76 = (~(t75));
    t77 = *((unsigned int *)t42);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB27;

LAB28:
LAB29:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1196);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 1288);
    t6 = (t5 + 36U);
    t7 = *((char **)t6);
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t7, 32);
    t8 = ((char*)((ng14)));
    memset(t14, 0, 8);
    xsi_vlog_signed_greater(t14, 32, t13, 32, t8, 32);
    memset(t15, 0, 8);
    t9 = (t14 + 4);
    t19 = *((unsigned int *)t9);
    t20 = (~(t19));
    t21 = *((unsigned int *)t14);
    t22 = (t21 & t20);
    t23 = (t22 & 1U);
    if (t23 != 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t9) != 0)
        goto LAB33;

LAB34:    t11 = (t15 + 4);
    t26 = *((unsigned int *)t15);
    t27 = *((unsigned int *)t11);
    t28 = (t26 || t27);
    if (t28 > 0)
        goto LAB35;

LAB36:    memcpy(t34, t15, 8);

LAB37:    t46 = (t34 + 4);
    t75 = *((unsigned int *)t46);
    t76 = (~(t75));
    t77 = *((unsigned int *)t34);
    t78 = (t77 & t76);
    t79 = (t78 != 0);
    if (t79 > 0)
        goto LAB48;

LAB49:
LAB50:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 968U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t19 = *((unsigned int *)t3);
    t20 = *((unsigned int *)t2);
    t21 = (t19 ^ t20);
    t22 = *((unsigned int *)t4);
    t23 = *((unsigned int *)t5);
    t26 = (t22 ^ t23);
    t27 = (t21 | t26);
    t28 = *((unsigned int *)t4);
    t36 = *((unsigned int *)t5);
    t37 = (t28 | t36);
    t38 = (~(t37));
    t39 = (t27 & t38);
    if (t39 != 0)
        goto LAB55;

LAB52:    if (t37 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t13) = 1;

LAB55:    t7 = (t13 + 4);
    t40 = *((unsigned int *)t7);
    t43 = (~(t40));
    t44 = *((unsigned int *)t13);
    t45 = (t44 & t43);
    t49 = (t45 != 0);
    if (t49 > 0)
        goto LAB56;

LAB57:
LAB58:    goto LAB2;

LAB8:    *((unsigned int *)t15) = 1;
    goto LAB9;

LAB10:    *((unsigned int *)t17) = 1;
    goto LAB13;

LAB12:    t24 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t24) = 1;
    goto LAB13;

LAB14:    t29 = (t0 + 968U);
    t30 = *((char **)t29);
    t29 = ((char*)((ng5)));
    memset(t31, 0, 8);
    if (*((unsigned int *)t30) != *((unsigned int *)t29))
        goto LAB18;

LAB17:    t32 = (t30 + 4);
    t33 = (t29 + 4);
    if (*((unsigned int *)t32) != *((unsigned int *)t33))
        goto LAB18;

LAB19:    memset(t34, 0, 8);
    t35 = (t31 + 4);
    t36 = *((unsigned int *)t35);
    t37 = (~(t36));
    t38 = *((unsigned int *)t31);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t35) != 0)
        goto LAB22;

LAB23:    t43 = *((unsigned int *)t17);
    t44 = *((unsigned int *)t34);
    t45 = (t43 & t44);
    *((unsigned int *)t42) = t45;
    t46 = (t17 + 4);
    t47 = (t34 + 4);
    t48 = (t42 + 4);
    t49 = *((unsigned int *)t46);
    t50 = *((unsigned int *)t47);
    t51 = (t49 | t50);
    *((unsigned int *)t48) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB16;

LAB18:    *((unsigned int *)t31) = 1;
    goto LAB19;

LAB20:    *((unsigned int *)t34) = 1;
    goto LAB23;

LAB22:    t41 = (t34 + 4);
    *((unsigned int *)t34) = 1;
    *((unsigned int *)t41) = 1;
    goto LAB23;

LAB24:    t54 = *((unsigned int *)t42);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t42) = (t54 | t55);
    t56 = (t17 + 4);
    t57 = (t34 + 4);
    t58 = *((unsigned int *)t17);
    t59 = (~(t58));
    t60 = *((unsigned int *)t56);
    t61 = (~(t60));
    t62 = *((unsigned int *)t34);
    t63 = (~(t62));
    t64 = *((unsigned int *)t57);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t70 & t68);
    t71 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t71 & t69);
    t72 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t72 & t68);
    t73 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t73 & t69);
    goto LAB26;

LAB27:    xsi_set_current_line(93, ng0);

LAB30:    xsi_set_current_line(94, ng0);
    xsi_vlogfile_write(1, 0, 0, ng13, 1, t0);
    xsi_set_current_line(95, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t13, 0, 0, 32);
    goto LAB29;

LAB31:    *((unsigned int *)t15) = 1;
    goto LAB34;

LAB33:    t10 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB34;

LAB35:    t12 = (t0 + 968U);
    t16 = *((char **)t12);
    t12 = ((char*)((ng5)));
    memset(t17, 0, 8);
    if (*((unsigned int *)t16) != *((unsigned int *)t12))
        goto LAB39;

LAB38:    t18 = (t16 + 4);
    t24 = (t12 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t24))
        goto LAB39;

LAB40:    memset(t31, 0, 8);
    t25 = (t17 + 4);
    t36 = *((unsigned int *)t25);
    t37 = (~(t36));
    t38 = *((unsigned int *)t17);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t25) != 0)
        goto LAB43;

LAB44:    t43 = *((unsigned int *)t15);
    t44 = *((unsigned int *)t31);
    t45 = (t43 & t44);
    *((unsigned int *)t34) = t45;
    t30 = (t15 + 4);
    t32 = (t31 + 4);
    t33 = (t34 + 4);
    t49 = *((unsigned int *)t30);
    t50 = *((unsigned int *)t32);
    t51 = (t49 | t50);
    *((unsigned int *)t33) = t51;
    t52 = *((unsigned int *)t33);
    t53 = (t52 != 0);
    if (t53 == 1)
        goto LAB45;

LAB46:
LAB47:    goto LAB37;

LAB39:    *((unsigned int *)t17) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t31) = 1;
    goto LAB44;

LAB43:    t29 = (t31 + 4);
    *((unsigned int *)t31) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB44;

LAB45:    t54 = *((unsigned int *)t34);
    t55 = *((unsigned int *)t33);
    *((unsigned int *)t34) = (t54 | t55);
    t35 = (t15 + 4);
    t41 = (t31 + 4);
    t58 = *((unsigned int *)t15);
    t59 = (~(t58));
    t60 = *((unsigned int *)t35);
    t61 = (~(t60));
    t62 = *((unsigned int *)t31);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t65 = (~(t64));
    t66 = (t59 & t61);
    t67 = (t63 & t65);
    t68 = (~(t66));
    t69 = (~(t67));
    t70 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t70 & t68);
    t71 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t71 & t69);
    t72 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t72 & t68);
    t73 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t73 & t69);
    goto LAB47;

LAB48:    xsi_set_current_line(97, ng0);

LAB51:    xsi_set_current_line(98, ng0);
    xsi_vlogfile_write(1, 0, 0, ng15, 1, t0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t6 = (t0 + 1472);
    xsi_vlogvar_assign_value(t6, t13, 0, 0, 32);
    goto LAB50;

LAB54:    t6 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB55;

LAB56:    xsi_set_current_line(101, ng0);

LAB59:    xsi_set_current_line(102, ng0);
    xsi_vlogfile_write(1, 0, 0, ng16, 1, t0);
    goto LAB58;

}


extern void work_m_00000000000350604956_0576225079_init()
{
	static char *pe[] = {(void *)Initial_52_0,(void *)Always_90_1};
	xsi_register_didat("work_m_00000000000350604956_0576225079", "isim/test_cla_adder_32bit_isim_beh.exe.sim/work/m_00000000000350604956_0576225079.didat");
	xsi_register_executes(pe);
}
