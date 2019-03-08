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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa3/lab3_start/test_traffic_light_controller.v";
static int ng1[] = {0, 0};
static int ng2[] = {5, 0};
static int ng3[] = {1, 0};
static int ng4[] = {24, 0};
static int ng5[] = {20, 0};
static int ng6[] = {10, 0};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {0U, 0U};
static unsigned int ng9[] = {1U, 0U};
static const char *ng10 = "TIME = %d\tSTATE = %b";
static unsigned int ng11[] = {33U, 0U};
static unsigned int ng12[] = {57U, 0U};
static const char *ng13 = "ERROR: Rule 2  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng14[] = {145U, 0U};
static unsigned int ng15[] = {44U, 0U};
static const char *ng16 = "ERROR: Rule 4 (not lights)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static const char *ng17 = "Warning: Rule 4 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static const char *ng18 = "Warning: Rule 4 (EW)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng19[] = {81U, 0U};
static const char *ng20 = "ERROR: Rule 8 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng21[] = {42U, 0U};



static void Initial_74_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    double t16;
    double t17;
    char *t18;

LAB0:    t1 = (t0 + 2732U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(74, ng0);

LAB4:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1564);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(79, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1656);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1748);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(86, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t16 = xsi_vlog_convert_to_real(t4, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB13;

LAB14:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB15:    t16 = (t16 * 1.0000000000000000);
    t5 = (t0 + 2632);
    xsi_process_wait(t5, t16);
    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB6:    xsi_set_current_line(83, ng0);

LAB8:    xsi_set_current_line(84, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB9;

LAB10:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB11:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    t16 = 0.00000000000000000;
    goto LAB11;

LAB12:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB13:    t16 = 0.00000000000000000;
    goto LAB15;

LAB16:    xsi_set_current_line(88, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1472);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(90, ng0);
    xsi_set_current_line(90, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB17:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB28;

LAB26:    if (*((unsigned int *)t5) == 0)
        goto LAB25;

LAB27:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB28:    t13 = (t0 + 1748);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(96, ng0);
    xsi_set_current_line(96, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB29:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1748);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB40;

LAB38:    if (*((unsigned int *)t5) == 0)
        goto LAB37;

LAB39:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB40:    t13 = (t0 + 1748);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t5) == 0)
        goto LAB41;

LAB43:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB44:    t13 = (t0 + 1564);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB48;

LAB46:    if (*((unsigned int *)t5) == 0)
        goto LAB45;

LAB47:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB48:    t13 = (t0 + 1656);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(104, ng0);
    xsi_set_current_line(104, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB49:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB60;

LAB58:    if (*((unsigned int *)t5) == 0)
        goto LAB57;

LAB59:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB60:    t13 = (t0 + 1656);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(110, ng0);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB61:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB62;

LAB63:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (~(t8));
    t10 = *((unsigned int *)t4);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB72;

LAB70:    if (*((unsigned int *)t5) == 0)
        goto LAB69;

LAB71:    t7 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t7) = 1;

LAB72:    t13 = (t0 + 1564);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 1);
    xsi_set_current_line(116, ng0);
    xsi_set_current_line(116, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2024);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB73:    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng5)));
    memset(t6, 0, 8);
    xsi_vlog_signed_less(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(120, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

LAB18:    xsi_set_current_line(90, ng0);

LAB20:    xsi_set_current_line(91, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB21;

LAB22:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB23:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB21:    t16 = 0.00000000000000000;
    goto LAB23;

LAB24:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB17;

LAB25:    *((unsigned int *)t6) = 1;
    goto LAB28;

LAB30:    xsi_set_current_line(96, ng0);

LAB32:    xsi_set_current_line(97, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB33;

LAB34:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB35:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB33:    t16 = 0.00000000000000000;
    goto LAB35;

LAB36:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB29;

LAB37:    *((unsigned int *)t6) = 1;
    goto LAB40;

LAB41:    *((unsigned int *)t6) = 1;
    goto LAB44;

LAB45:    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(104, ng0);

LAB52:    xsi_set_current_line(105, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB53;

LAB54:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB55:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB56;
    goto LAB1;

LAB53:    t16 = 0.00000000000000000;
    goto LAB55;

LAB56:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB49;

LAB57:    *((unsigned int *)t6) = 1;
    goto LAB60;

LAB62:    xsi_set_current_line(110, ng0);

LAB64:    xsi_set_current_line(111, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB65;

LAB66:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB67:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB65:    t16 = 0.00000000000000000;
    goto LAB67;

LAB68:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB61;

LAB69:    *((unsigned int *)t6) = 1;
    goto LAB72;

LAB74:    xsi_set_current_line(116, ng0);

LAB76:    xsi_set_current_line(117, ng0);
    t13 = (t0 + 1932);
    t14 = (t13 + 36U);
    t15 = *((char **)t14);
    t16 = xsi_vlog_convert_to_real(t15, 32, 1);
    t16 = (t16 * 1000.0000000000000);
    t17 = (t16 < 0.00000000000000000);
    if (t17 == 1)
        goto LAB77;

LAB78:    t16 = (t16 + 0.50000000000000000);
    t16 = ((int64)(t16));

LAB79:    t16 = (t16 * 1.0000000000000000);
    t18 = (t0 + 2632);
    xsi_process_wait(t18, t16);
    *((char **)t1) = &&LAB80;
    goto LAB1;

LAB77:    t16 = 0.00000000000000000;
    goto LAB79;

LAB80:    xsi_set_current_line(116, ng0);
    t2 = (t0 + 2024);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 2024);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB73;

}

static void Always_129_1(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    double t7;
    double t8;
    char *t9;

LAB0:    t1 = (t0 + 2876U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(129, ng0);

LAB4:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t7 = (t7 * 1000.0000000000000);
    t8 = (t7 < 0.00000000000000000);
    if (t8 == 1)
        goto LAB5;

LAB6:    t7 = (t7 + 0.50000000000000000);
    t7 = ((int64)(t7));

LAB7:    t7 = (t7 * 1.0000000000000000);
    t9 = (t0 + 2776);
    xsi_process_wait(t9, t7);
    *((char **)t1) = &&LAB8;

LAB1:    return;
LAB5:    t7 = 0.00000000000000000;
    goto LAB7;

LAB8:    xsi_set_current_line(131, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(132, ng0);
    t2 = (t0 + 1932);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_signed_divide(t6, 32, t4, 32, t5, 32);
    t7 = xsi_vlog_convert_to_real(t6, 32, 1);
    t7 = (t7 * 1000.0000000000000);
    t8 = (t7 < 0.00000000000000000);
    if (t8 == 1)
        goto LAB9;

LAB10:    t7 = (t7 + 0.50000000000000000);
    t7 = ((int64)(t7));

LAB11:    t7 = (t7 * 1.0000000000000000);
    t9 = (t0 + 2776);
    xsi_process_wait(t9, t7);
    *((char **)t1) = &&LAB12;
    goto LAB1;

LAB9:    t7 = 0.00000000000000000;
    goto LAB11;

LAB12:    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1380);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_add(t6, 32, t4, 32, t5, 32);
    t9 = (t0 + 1840);
    xsi_vlogvar_assign_value(t9, t6, 0, 0, 32);
    goto LAB2;

}

static void Always_138_2(char *t0)
{
    char t6[8];
    char t21[8];
    char t32[8];
    char t44[8];
    char t56[8];
    char t68[8];
    char t80[8];
    char t105[8];
    char t113[8];
    char t145[8];
    char t152[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t69;
    char *t70;
    char *t71;
    char *t72;
    char *t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    char *t81;
    char *t82;
    char *t83;
    char *t84;
    char *t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    char *t94;
    int t95;
    int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    char *t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    char *t114;
    char *t115;
    char *t116;
    char *t117;
    char *t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    char *t125;
    char *t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    char *t153;
    char *t154;
    unsigned int t155;
    unsigned int t156;
    unsigned int t157;
    unsigned int t158;
    unsigned int t159;
    unsigned int t160;
    char *t161;
    char *t162;
    char *t163;

LAB0:    t1 = (t0 + 3020U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 3216);
    *((int *)t2) = 1;
    t3 = (t0 + 3048);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(138, ng0);

LAB5:    xsi_set_current_line(139, ng0);
    t4 = (t0 + 2920);
    xsi_process_wait(t4, 2000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(140, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2208);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 32);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    t2 = (t0 + 968U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t6, 32, 8, 3U, t5, 3, t4, 2, t3, 3);
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 32);
    xsi_set_current_line(143, ng0);
    t2 = (t0 + 1472);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t4 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t4);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB7;

LAB8:
LAB9:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2116);
    t12 = (t5 + 36U);
    t13 = *((char **)t12);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t15 = (t13 + 4);
    t7 = *((unsigned int *)t13);
    t8 = (t7 >> 0);
    *((unsigned int *)t6) = t8;
    t9 = *((unsigned int *)t15);
    t10 = (t9 >> 0);
    *((unsigned int *)t14) = t10;
    t11 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t11 & 255U);
    t16 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t16 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)119, t4, 32, (char)118, t6, 8);
    xsi_set_current_line(148, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB11:    t5 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t5, 32);
    if (t17 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng14)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng15)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 32, t2, 32);
    if (t17 == 1)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB7:    xsi_set_current_line(143, ng0);

LAB10:    xsi_set_current_line(144, ng0);
    t12 = ((char*)((ng1)));
    t13 = (t0 + 2208);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB9;

LAB12:    xsi_set_current_line(149, ng0);

LAB21:    xsi_set_current_line(150, ng0);
    t12 = (t0 + 2116);
    t13 = (t12 + 36U);
    t14 = *((char **)t13);
    t15 = ((char*)((ng12)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t14) != *((unsigned int *)t15))
        goto LAB23;

LAB22:    t18 = (t14 + 4);
    t19 = (t15 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB23;

LAB24:    t20 = (t6 + 4);
    t7 = *((unsigned int *)t20);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB25;

LAB26:
LAB27:    goto LAB20;

LAB14:    xsi_set_current_line(155, ng0);

LAB29:    xsi_set_current_line(156, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng14)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB31;

LAB30:    t14 = (t12 + 4);
    t15 = (t13 + 4);
    if (*((unsigned int *)t14) != *((unsigned int *)t15))
        goto LAB31;

LAB32:    t18 = (t0 + 2116);
    t19 = (t18 + 36U);
    t20 = *((char **)t19);
    t22 = ((char*)((ng15)));
    memset(t21, 0, 8);
    if (*((unsigned int *)t20) != *((unsigned int *)t22))
        goto LAB34;

LAB33:    t23 = (t20 + 4);
    t24 = (t22 + 4);
    if (*((unsigned int *)t23) != *((unsigned int *)t24))
        goto LAB34;

LAB35:    t7 = *((unsigned int *)t6);
    t8 = *((unsigned int *)t21);
    t9 = (t7 | t8);
    *((unsigned int *)t32) = t9;
    t25 = (t6 + 4);
    t26 = (t21 + 4);
    t33 = (t32 + 4);
    t10 = *((unsigned int *)t25);
    t11 = *((unsigned int *)t26);
    t16 = (t10 | t11);
    *((unsigned int *)t33) = t16;
    t27 = *((unsigned int *)t33);
    t28 = (t27 != 0);
    if (t28 == 1)
        goto LAB36;

LAB37:
LAB38:    t36 = (t32 + 4);
    t53 = *((unsigned int *)t36);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t62 = (t55 & t54);
    t63 = (t62 != 0);
    if (t63 > 0)
        goto LAB39;

LAB40:
LAB41:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t13 = (t5 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t16 = (t10 ^ t11);
    t27 = (t9 | t16);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t38 = (t27 & t31);
    if (t38 != 0)
        goto LAB46;

LAB43:    if (t30 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t6) = 1;

LAB46:    memset(t21, 0, 8);
    t18 = (t6 + 4);
    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t18) != 0)
        goto LAB49;

LAB50:    t20 = (t21 + 4);
    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t20);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB51;

LAB52:    memcpy(t56, t21, 8);

LAB53:    t48 = (t56 + 4);
    t107 = *((unsigned int *)t48);
    t108 = (~(t107));
    t109 = *((unsigned int *)t56);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB64;

LAB65:
LAB66:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t12 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t13 = (t5 + 4);
    t14 = (t12 + 4);
    t7 = *((unsigned int *)t5);
    t8 = *((unsigned int *)t12);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t13);
    t11 = *((unsigned int *)t14);
    t16 = (t10 ^ t11);
    t27 = (t9 | t16);
    t28 = *((unsigned int *)t13);
    t29 = *((unsigned int *)t14);
    t30 = (t28 | t29);
    t31 = (~(t30));
    t38 = (t27 & t31);
    if (t38 != 0)
        goto LAB71;

LAB68:    if (t30 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t6) = 1;

LAB71:    memset(t21, 0, 8);
    t18 = (t6 + 4);
    t39 = *((unsigned int *)t18);
    t40 = (~(t39));
    t41 = *((unsigned int *)t6);
    t42 = (t41 & t40);
    t43 = (t42 & 1U);
    if (t43 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t18) != 0)
        goto LAB74;

LAB75:    t20 = (t21 + 4);
    t50 = *((unsigned int *)t21);
    t51 = *((unsigned int *)t20);
    t52 = (t50 || t51);
    if (t52 > 0)
        goto LAB76;

LAB77:    memcpy(t56, t21, 8);

LAB78:    t48 = (t56 + 4);
    t107 = *((unsigned int *)t48);
    t108 = (~(t107));
    t109 = *((unsigned int *)t56);
    t110 = (t109 & t108);
    t111 = (t110 != 0);
    if (t111 > 0)
        goto LAB89;

LAB90:
LAB91:    goto LAB20;

LAB16:    xsi_set_current_line(167, ng0);

LAB93:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng19)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB95;

LAB94:    t14 = (t12 + 4);
    t15 = (t13 + 4);
    if (*((unsigned int *)t14) != *((unsigned int *)t15))
        goto LAB95;

LAB96:    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB97;

LAB98:
LAB99:    goto LAB20;

LAB18:    xsi_set_current_line(173, ng0);

LAB101:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t12 = *((char **)t5);
    t13 = ((char*)((ng21)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB103;

LAB102:    t14 = (t12 + 4);
    t15 = (t13 + 4);
    if (*((unsigned int *)t14) != *((unsigned int *)t15))
        goto LAB103;

LAB104:    t18 = (t6 + 4);
    t7 = *((unsigned int *)t18);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB105;

LAB106:
LAB107:    goto LAB20;

LAB23:    *((unsigned int *)t6) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(150, ng0);

LAB28:    xsi_set_current_line(151, ng0);
    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    memset(t21, 0, 8);
    t25 = (t21 + 4);
    t26 = (t24 + 4);
    t16 = *((unsigned int *)t24);
    t27 = (t16 >> 5);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t26);
    t29 = (t28 >> 5);
    *((unsigned int *)t25) = t29;
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 7U);
    t31 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t31 & 7U);
    t33 = (t0 + 2116);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t32 + 4);
    t37 = (t35 + 4);
    t38 = *((unsigned int *)t35);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t37);
    t41 = (t40 >> 0);
    *((unsigned int *)t36) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t43 & 7U);
    t45 = (t0 + 2116);
    t46 = (t45 + 36U);
    t47 = *((char **)t46);
    memset(t44, 0, 8);
    t48 = (t44 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t49);
    t53 = (t52 >> 3);
    *((unsigned int *)t48) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t48);
    *((unsigned int *)t48) = (t55 & 3U);
    t57 = (t0 + 2208);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    memset(t56, 0, 8);
    t60 = (t56 + 4);
    t61 = (t59 + 4);
    t62 = *((unsigned int *)t59);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t61);
    t65 = (t64 >> 5);
    *((unsigned int *)t60) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t60);
    *((unsigned int *)t60) = (t67 & 7U);
    t69 = (t0 + 2208);
    t70 = (t69 + 36U);
    t71 = *((char **)t70);
    memset(t68, 0, 8);
    t72 = (t68 + 4);
    t73 = (t71 + 4);
    t74 = *((unsigned int *)t71);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t73);
    t77 = (t76 >> 0);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t72);
    *((unsigned int *)t72) = (t79 & 7U);
    t81 = (t0 + 2208);
    t82 = (t81 + 36U);
    t83 = *((char **)t82);
    memset(t80, 0, 8);
    t84 = (t80 + 4);
    t85 = (t83 + 4);
    t86 = *((unsigned int *)t83);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t85);
    t89 = (t88 >> 3);
    *((unsigned int *)t84) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t91 & 3U);
    t92 = (t0 + 1840);
    t93 = (t92 + 36U);
    t94 = *((char **)t93);
    xsi_vlogfile_write(1, 0, 0, ng13, 8, t0, (char)118, t21, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t94, 32);
    goto LAB27;

LAB31:    *((unsigned int *)t6) = 1;
    goto LAB32;

LAB34:    *((unsigned int *)t21) = 1;
    goto LAB35;

LAB36:    t29 = *((unsigned int *)t32);
    t30 = *((unsigned int *)t33);
    *((unsigned int *)t32) = (t29 | t30);
    t34 = (t6 + 4);
    t35 = (t21 + 4);
    t31 = *((unsigned int *)t34);
    t38 = (~(t31));
    t39 = *((unsigned int *)t6);
    t95 = (t39 & t38);
    t40 = *((unsigned int *)t35);
    t41 = (~(t40));
    t42 = *((unsigned int *)t21);
    t96 = (t42 & t41);
    t43 = (~(t95));
    t50 = (~(t96));
    t51 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t51 & t43);
    t52 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t52 & t50);
    goto LAB38;

LAB39:    xsi_set_current_line(156, ng0);

LAB42:    xsi_set_current_line(157, ng0);
    t37 = (t0 + 2116);
    t45 = (t37 + 36U);
    t46 = *((char **)t45);
    memset(t44, 0, 8);
    t47 = (t44 + 4);
    t48 = (t46 + 4);
    t64 = *((unsigned int *)t46);
    t65 = (t64 >> 5);
    *((unsigned int *)t44) = t65;
    t66 = *((unsigned int *)t48);
    t67 = (t66 >> 5);
    *((unsigned int *)t47) = t67;
    t74 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t74 & 7U);
    t75 = *((unsigned int *)t47);
    *((unsigned int *)t47) = (t75 & 7U);
    t49 = (t0 + 2116);
    t57 = (t49 + 36U);
    t58 = *((char **)t57);
    memset(t56, 0, 8);
    t59 = (t56 + 4);
    t60 = (t58 + 4);
    t76 = *((unsigned int *)t58);
    t77 = (t76 >> 0);
    *((unsigned int *)t56) = t77;
    t78 = *((unsigned int *)t60);
    t79 = (t78 >> 0);
    *((unsigned int *)t59) = t79;
    t86 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t86 & 7U);
    t87 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t87 & 7U);
    t61 = (t0 + 2116);
    t69 = (t61 + 36U);
    t70 = *((char **)t69);
    memset(t68, 0, 8);
    t71 = (t68 + 4);
    t72 = (t70 + 4);
    t88 = *((unsigned int *)t70);
    t89 = (t88 >> 3);
    *((unsigned int *)t68) = t89;
    t90 = *((unsigned int *)t72);
    t91 = (t90 >> 3);
    *((unsigned int *)t71) = t91;
    t97 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t97 & 3U);
    t98 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t98 & 3U);
    t73 = (t0 + 2208);
    t81 = (t73 + 36U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t83 = (t80 + 4);
    t84 = (t82 + 4);
    t99 = *((unsigned int *)t82);
    t100 = (t99 >> 5);
    *((unsigned int *)t80) = t100;
    t101 = *((unsigned int *)t84);
    t102 = (t101 >> 5);
    *((unsigned int *)t83) = t102;
    t103 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t103 & 7U);
    t104 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t104 & 7U);
    t85 = (t0 + 2208);
    t92 = (t85 + 36U);
    t93 = *((char **)t92);
    memset(t105, 0, 8);
    t94 = (t105 + 4);
    t106 = (t93 + 4);
    t107 = *((unsigned int *)t93);
    t108 = (t107 >> 0);
    *((unsigned int *)t105) = t108;
    t109 = *((unsigned int *)t106);
    t110 = (t109 >> 0);
    *((unsigned int *)t94) = t110;
    t111 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t111 & 7U);
    t112 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t112 & 7U);
    t114 = (t0 + 2208);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    memset(t113, 0, 8);
    t117 = (t113 + 4);
    t118 = (t116 + 4);
    t119 = *((unsigned int *)t116);
    t120 = (t119 >> 3);
    *((unsigned int *)t113) = t120;
    t121 = *((unsigned int *)t118);
    t122 = (t121 >> 3);
    *((unsigned int *)t117) = t122;
    t123 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t123 & 3U);
    t124 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t124 & 3U);
    t125 = (t0 + 1840);
    t126 = (t125 + 36U);
    t127 = *((char **)t126);
    xsi_vlogfile_write(1, 0, 0, ng16, 8, t0, (char)118, t44, 3, (char)118, t56, 3, (char)118, t68, 2, (char)118, t80, 3, (char)118, t105, 3, (char)118, t113, 2, (char)119, t127, 32);
    goto LAB41;

LAB45:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t21) = 1;
    goto LAB50;

LAB49:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB50;

LAB51:    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng14)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB55;

LAB54:    t26 = (t24 + 4);
    t33 = (t25 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t33))
        goto LAB55;

LAB56:    memset(t44, 0, 8);
    t34 = (t32 + 4);
    t53 = *((unsigned int *)t34);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t62 = (t55 & t54);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB57;

LAB58:    if (*((unsigned int *)t34) != 0)
        goto LAB59;

LAB60:    t64 = *((unsigned int *)t21);
    t65 = *((unsigned int *)t44);
    t66 = (t64 & t65);
    *((unsigned int *)t56) = t66;
    t36 = (t21 + 4);
    t37 = (t44 + 4);
    t45 = (t56 + 4);
    t67 = *((unsigned int *)t36);
    t74 = *((unsigned int *)t37);
    t75 = (t67 | t74);
    *((unsigned int *)t45) = t75;
    t76 = *((unsigned int *)t45);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB61;

LAB62:
LAB63:    goto LAB53;

LAB55:    *((unsigned int *)t32) = 1;
    goto LAB56;

LAB57:    *((unsigned int *)t44) = 1;
    goto LAB60;

LAB59:    t35 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB60;

LAB61:    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t45);
    *((unsigned int *)t56) = (t78 | t79);
    t46 = (t21 + 4);
    t47 = (t44 + 4);
    t86 = *((unsigned int *)t21);
    t87 = (~(t86));
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t44);
    t91 = (~(t90));
    t97 = *((unsigned int *)t47);
    t98 = (~(t97));
    t17 = (t87 & t89);
    t95 = (t91 & t98);
    t99 = (~(t17));
    t100 = (~(t95));
    t101 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t101 & t99);
    t102 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t102 & t100);
    t103 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t103 & t99);
    t104 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t104 & t100);
    goto LAB63;

LAB64:    xsi_set_current_line(159, ng0);

LAB67:    xsi_set_current_line(160, ng0);
    t49 = (t0 + 2116);
    t57 = (t49 + 36U);
    t58 = *((char **)t57);
    memset(t68, 0, 8);
    t59 = (t68 + 4);
    t60 = (t58 + 4);
    t112 = *((unsigned int *)t58);
    t119 = (t112 >> 5);
    *((unsigned int *)t68) = t119;
    t120 = *((unsigned int *)t60);
    t121 = (t120 >> 5);
    *((unsigned int *)t59) = t121;
    t122 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t122 & 7U);
    t123 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t123 & 7U);
    t61 = (t0 + 2116);
    t69 = (t61 + 36U);
    t70 = *((char **)t69);
    memset(t80, 0, 8);
    t71 = (t80 + 4);
    t72 = (t70 + 4);
    t124 = *((unsigned int *)t70);
    t128 = (t124 >> 0);
    *((unsigned int *)t80) = t128;
    t129 = *((unsigned int *)t72);
    t130 = (t129 >> 0);
    *((unsigned int *)t71) = t130;
    t131 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t131 & 7U);
    t132 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t132 & 7U);
    t73 = (t0 + 2116);
    t81 = (t73 + 36U);
    t82 = *((char **)t81);
    memset(t105, 0, 8);
    t83 = (t105 + 4);
    t84 = (t82 + 4);
    t133 = *((unsigned int *)t82);
    t134 = (t133 >> 3);
    *((unsigned int *)t105) = t134;
    t135 = *((unsigned int *)t84);
    t136 = (t135 >> 3);
    *((unsigned int *)t83) = t136;
    t137 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t137 & 3U);
    t138 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t138 & 3U);
    t85 = (t0 + 2208);
    t92 = (t85 + 36U);
    t93 = *((char **)t92);
    memset(t113, 0, 8);
    t94 = (t113 + 4);
    t106 = (t93 + 4);
    t139 = *((unsigned int *)t93);
    t140 = (t139 >> 5);
    *((unsigned int *)t113) = t140;
    t141 = *((unsigned int *)t106);
    t142 = (t141 >> 5);
    *((unsigned int *)t94) = t142;
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & 7U);
    t144 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t144 & 7U);
    t114 = (t0 + 2208);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    memset(t145, 0, 8);
    t117 = (t145 + 4);
    t118 = (t116 + 4);
    t146 = *((unsigned int *)t116);
    t147 = (t146 >> 0);
    *((unsigned int *)t145) = t147;
    t148 = *((unsigned int *)t118);
    t149 = (t148 >> 0);
    *((unsigned int *)t117) = t149;
    t150 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t150 & 7U);
    t151 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t151 & 7U);
    t125 = (t0 + 2208);
    t126 = (t125 + 36U);
    t127 = *((char **)t126);
    memset(t152, 0, 8);
    t153 = (t152 + 4);
    t154 = (t127 + 4);
    t155 = *((unsigned int *)t127);
    t156 = (t155 >> 3);
    *((unsigned int *)t152) = t156;
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 3);
    *((unsigned int *)t153) = t158;
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t159 & 3U);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t160 & 3U);
    t161 = (t0 + 1840);
    t162 = (t161 + 36U);
    t163 = *((char **)t162);
    xsi_vlogfile_write(1, 0, 0, ng17, 8, t0, (char)118, t68, 3, (char)118, t80, 3, (char)118, t105, 2, (char)118, t113, 3, (char)118, t145, 3, (char)118, t152, 2, (char)119, t163, 32);
    goto LAB66;

LAB70:    t15 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t21) = 1;
    goto LAB75;

LAB74:    t19 = (t21 + 4);
    *((unsigned int *)t21) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB75;

LAB76:    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t24 = *((char **)t23);
    t25 = ((char*)((ng15)));
    memset(t32, 0, 8);
    if (*((unsigned int *)t24) != *((unsigned int *)t25))
        goto LAB80;

LAB79:    t26 = (t24 + 4);
    t33 = (t25 + 4);
    if (*((unsigned int *)t26) != *((unsigned int *)t33))
        goto LAB80;

LAB81:    memset(t44, 0, 8);
    t34 = (t32 + 4);
    t53 = *((unsigned int *)t34);
    t54 = (~(t53));
    t55 = *((unsigned int *)t32);
    t62 = (t55 & t54);
    t63 = (t62 & 1U);
    if (t63 != 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t34) != 0)
        goto LAB84;

LAB85:    t64 = *((unsigned int *)t21);
    t65 = *((unsigned int *)t44);
    t66 = (t64 & t65);
    *((unsigned int *)t56) = t66;
    t36 = (t21 + 4);
    t37 = (t44 + 4);
    t45 = (t56 + 4);
    t67 = *((unsigned int *)t36);
    t74 = *((unsigned int *)t37);
    t75 = (t67 | t74);
    *((unsigned int *)t45) = t75;
    t76 = *((unsigned int *)t45);
    t77 = (t76 != 0);
    if (t77 == 1)
        goto LAB86;

LAB87:
LAB88:    goto LAB78;

LAB80:    *((unsigned int *)t32) = 1;
    goto LAB81;

LAB82:    *((unsigned int *)t44) = 1;
    goto LAB85;

LAB84:    t35 = (t44 + 4);
    *((unsigned int *)t44) = 1;
    *((unsigned int *)t35) = 1;
    goto LAB85;

LAB86:    t78 = *((unsigned int *)t56);
    t79 = *((unsigned int *)t45);
    *((unsigned int *)t56) = (t78 | t79);
    t46 = (t21 + 4);
    t47 = (t44 + 4);
    t86 = *((unsigned int *)t21);
    t87 = (~(t86));
    t88 = *((unsigned int *)t46);
    t89 = (~(t88));
    t90 = *((unsigned int *)t44);
    t91 = (~(t90));
    t97 = *((unsigned int *)t47);
    t98 = (~(t97));
    t17 = (t87 & t89);
    t95 = (t91 & t98);
    t99 = (~(t17));
    t100 = (~(t95));
    t101 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t101 & t99);
    t102 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t102 & t100);
    t103 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t103 & t99);
    t104 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t104 & t100);
    goto LAB88;

LAB89:    xsi_set_current_line(162, ng0);

LAB92:    xsi_set_current_line(163, ng0);
    t49 = (t0 + 2116);
    t57 = (t49 + 36U);
    t58 = *((char **)t57);
    memset(t68, 0, 8);
    t59 = (t68 + 4);
    t60 = (t58 + 4);
    t112 = *((unsigned int *)t58);
    t119 = (t112 >> 5);
    *((unsigned int *)t68) = t119;
    t120 = *((unsigned int *)t60);
    t121 = (t120 >> 5);
    *((unsigned int *)t59) = t121;
    t122 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t122 & 7U);
    t123 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t123 & 7U);
    t61 = (t0 + 2116);
    t69 = (t61 + 36U);
    t70 = *((char **)t69);
    memset(t80, 0, 8);
    t71 = (t80 + 4);
    t72 = (t70 + 4);
    t124 = *((unsigned int *)t70);
    t128 = (t124 >> 0);
    *((unsigned int *)t80) = t128;
    t129 = *((unsigned int *)t72);
    t130 = (t129 >> 0);
    *((unsigned int *)t71) = t130;
    t131 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t131 & 7U);
    t132 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t132 & 7U);
    t73 = (t0 + 2116);
    t81 = (t73 + 36U);
    t82 = *((char **)t81);
    memset(t105, 0, 8);
    t83 = (t105 + 4);
    t84 = (t82 + 4);
    t133 = *((unsigned int *)t82);
    t134 = (t133 >> 3);
    *((unsigned int *)t105) = t134;
    t135 = *((unsigned int *)t84);
    t136 = (t135 >> 3);
    *((unsigned int *)t83) = t136;
    t137 = *((unsigned int *)t105);
    *((unsigned int *)t105) = (t137 & 3U);
    t138 = *((unsigned int *)t83);
    *((unsigned int *)t83) = (t138 & 3U);
    t85 = (t0 + 2208);
    t92 = (t85 + 36U);
    t93 = *((char **)t92);
    memset(t113, 0, 8);
    t94 = (t113 + 4);
    t106 = (t93 + 4);
    t139 = *((unsigned int *)t93);
    t140 = (t139 >> 5);
    *((unsigned int *)t113) = t140;
    t141 = *((unsigned int *)t106);
    t142 = (t141 >> 5);
    *((unsigned int *)t94) = t142;
    t143 = *((unsigned int *)t113);
    *((unsigned int *)t113) = (t143 & 7U);
    t144 = *((unsigned int *)t94);
    *((unsigned int *)t94) = (t144 & 7U);
    t114 = (t0 + 2208);
    t115 = (t114 + 36U);
    t116 = *((char **)t115);
    memset(t145, 0, 8);
    t117 = (t145 + 4);
    t118 = (t116 + 4);
    t146 = *((unsigned int *)t116);
    t147 = (t146 >> 0);
    *((unsigned int *)t145) = t147;
    t148 = *((unsigned int *)t118);
    t149 = (t148 >> 0);
    *((unsigned int *)t117) = t149;
    t150 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t150 & 7U);
    t151 = *((unsigned int *)t117);
    *((unsigned int *)t117) = (t151 & 7U);
    t125 = (t0 + 2208);
    t126 = (t125 + 36U);
    t127 = *((char **)t126);
    memset(t152, 0, 8);
    t153 = (t152 + 4);
    t154 = (t127 + 4);
    t155 = *((unsigned int *)t127);
    t156 = (t155 >> 3);
    *((unsigned int *)t152) = t156;
    t157 = *((unsigned int *)t154);
    t158 = (t157 >> 3);
    *((unsigned int *)t153) = t158;
    t159 = *((unsigned int *)t152);
    *((unsigned int *)t152) = (t159 & 3U);
    t160 = *((unsigned int *)t153);
    *((unsigned int *)t153) = (t160 & 3U);
    t161 = (t0 + 1840);
    t162 = (t161 + 36U);
    t163 = *((char **)t162);
    xsi_vlogfile_write(1, 0, 0, ng18, 8, t0, (char)118, t68, 3, (char)118, t80, 3, (char)118, t105, 2, (char)118, t113, 3, (char)118, t145, 3, (char)118, t152, 2, (char)119, t163, 32);
    goto LAB91;

LAB95:    *((unsigned int *)t6) = 1;
    goto LAB96;

LAB97:    xsi_set_current_line(168, ng0);

LAB100:    xsi_set_current_line(169, ng0);
    t19 = (t0 + 2116);
    t20 = (t19 + 36U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t23 = (t21 + 4);
    t24 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t27 = (t16 >> 5);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 5);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 7U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 7U);
    t25 = (t0 + 2116);
    t26 = (t25 + 36U);
    t33 = *((char **)t26);
    memset(t32, 0, 8);
    t34 = (t32 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t35);
    t41 = (t40 >> 0);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 7U);
    t36 = (t0 + 2116);
    t37 = (t36 + 36U);
    t45 = *((char **)t37);
    memset(t44, 0, 8);
    t46 = (t44 + 4);
    t47 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t47);
    t53 = (t52 >> 3);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 3U);
    t48 = (t0 + 2208);
    t49 = (t48 + 36U);
    t57 = *((char **)t49);
    memset(t56, 0, 8);
    t58 = (t56 + 4);
    t59 = (t57 + 4);
    t62 = *((unsigned int *)t57);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t59);
    t65 = (t64 >> 5);
    *((unsigned int *)t58) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 7U);
    t60 = (t0 + 2208);
    t61 = (t60 + 36U);
    t69 = *((char **)t61);
    memset(t68, 0, 8);
    t70 = (t68 + 4);
    t71 = (t69 + 4);
    t74 = *((unsigned int *)t69);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t71);
    t77 = (t76 >> 0);
    *((unsigned int *)t70) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 7U);
    t72 = (t0 + 2208);
    t73 = (t72 + 36U);
    t81 = *((char **)t73);
    memset(t80, 0, 8);
    t82 = (t80 + 4);
    t83 = (t81 + 4);
    t86 = *((unsigned int *)t81);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t83);
    t89 = (t88 >> 3);
    *((unsigned int *)t82) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 3U);
    t84 = (t0 + 1840);
    t85 = (t84 + 36U);
    t92 = *((char **)t85);
    xsi_vlogfile_write(1, 0, 0, ng20, 8, t0, (char)118, t21, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t92, 32);
    goto LAB99;

LAB103:    *((unsigned int *)t6) = 1;
    goto LAB104;

LAB105:    xsi_set_current_line(174, ng0);

LAB108:    xsi_set_current_line(175, ng0);
    t19 = (t0 + 2116);
    t20 = (t19 + 36U);
    t22 = *((char **)t20);
    memset(t21, 0, 8);
    t23 = (t21 + 4);
    t24 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t27 = (t16 >> 5);
    *((unsigned int *)t21) = t27;
    t28 = *((unsigned int *)t24);
    t29 = (t28 >> 5);
    *((unsigned int *)t23) = t29;
    t30 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t30 & 7U);
    t31 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t31 & 7U);
    t25 = (t0 + 2116);
    t26 = (t25 + 36U);
    t33 = *((char **)t26);
    memset(t32, 0, 8);
    t34 = (t32 + 4);
    t35 = (t33 + 4);
    t38 = *((unsigned int *)t33);
    t39 = (t38 >> 0);
    *((unsigned int *)t32) = t39;
    t40 = *((unsigned int *)t35);
    t41 = (t40 >> 0);
    *((unsigned int *)t34) = t41;
    t42 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t42 & 7U);
    t43 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t43 & 7U);
    t36 = (t0 + 2116);
    t37 = (t36 + 36U);
    t45 = *((char **)t37);
    memset(t44, 0, 8);
    t46 = (t44 + 4);
    t47 = (t45 + 4);
    t50 = *((unsigned int *)t45);
    t51 = (t50 >> 3);
    *((unsigned int *)t44) = t51;
    t52 = *((unsigned int *)t47);
    t53 = (t52 >> 3);
    *((unsigned int *)t46) = t53;
    t54 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t54 & 3U);
    t55 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t55 & 3U);
    t48 = (t0 + 2208);
    t49 = (t48 + 36U);
    t57 = *((char **)t49);
    memset(t56, 0, 8);
    t58 = (t56 + 4);
    t59 = (t57 + 4);
    t62 = *((unsigned int *)t57);
    t63 = (t62 >> 5);
    *((unsigned int *)t56) = t63;
    t64 = *((unsigned int *)t59);
    t65 = (t64 >> 5);
    *((unsigned int *)t58) = t65;
    t66 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t66 & 7U);
    t67 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t67 & 7U);
    t60 = (t0 + 2208);
    t61 = (t60 + 36U);
    t69 = *((char **)t61);
    memset(t68, 0, 8);
    t70 = (t68 + 4);
    t71 = (t69 + 4);
    t74 = *((unsigned int *)t69);
    t75 = (t74 >> 0);
    *((unsigned int *)t68) = t75;
    t76 = *((unsigned int *)t71);
    t77 = (t76 >> 0);
    *((unsigned int *)t70) = t77;
    t78 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t78 & 7U);
    t79 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t79 & 7U);
    t72 = (t0 + 2208);
    t73 = (t72 + 36U);
    t81 = *((char **)t73);
    memset(t80, 0, 8);
    t82 = (t80 + 4);
    t83 = (t81 + 4);
    t86 = *((unsigned int *)t81);
    t87 = (t86 >> 3);
    *((unsigned int *)t80) = t87;
    t88 = *((unsigned int *)t83);
    t89 = (t88 >> 3);
    *((unsigned int *)t82) = t89;
    t90 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t90 & 3U);
    t91 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t91 & 3U);
    t84 = (t0 + 1840);
    t85 = (t84 + 36U);
    t92 = *((char **)t85);
    xsi_vlogfile_write(1, 0, 0, ng20, 8, t0, (char)118, t21, 3, (char)118, t32, 3, (char)118, t44, 2, (char)118, t56, 3, (char)118, t68, 3, (char)118, t80, 2, (char)119, t92, 32);
    goto LAB107;

}


extern void work_m_00000000001142193658_0115765590_init()
{
	static char *pe[] = {(void *)Initial_74_0,(void *)Always_129_1,(void *)Always_138_2};
	xsi_register_didat("work_m_00000000001142193658_0115765590", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000001142193658_0115765590.didat");
	xsi_register_executes(pe);
}
