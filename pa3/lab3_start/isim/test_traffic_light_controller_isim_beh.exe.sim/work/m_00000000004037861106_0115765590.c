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
static const char *ng14 = "Warning: Reset  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng15[] = {145U, 0U};
static unsigned int ng16[] = {44U, 0U};
static const char *ng17 = "%b";
static const char *ng18 = "Warning: Rule 4 (not lights)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static const char *ng19 = "Warning: Rule 4 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static const char *ng20 = "Warning: Rule 4 (EW)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng21[] = {81U, 0U};
static const char *ng22 = "ERROR: Rule 8 (NS)  Cur: NS=%b, EW=%b, PED=%b\t\tPrev: NS=%b, EW=%b, PED=%b\t\tTime=%b";
static unsigned int ng23[] = {42U, 0U};



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
    char t20[8];
    char t29[8];
    char t41[8];
    char t53[8];
    char t65[8];
    char t77[8];
    char t89[8];
    char t130[8];
    char t137[8];
    char t145[8];
    char t157[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    int t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    char *t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t66;
    char *t67;
    char *t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t78;
    char *t79;
    char *t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t90;
    char *t91;
    char *t92;
    char *t93;
    char *t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    char *t101;
    char *t102;
    char *t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    char *t138;
    unsigned int t139;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t146;
    char *t147;
    char *t148;
    char *t149;
    char *t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t158;
    char *t159;
    char *t160;
    char *t161;
    char *t162;
    unsigned int t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    char *t169;
    char *t170;
    char *t171;

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
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);
    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1060U);
    t3 = *((char **)t2);
    t2 = (t0 + 1152U);
    t4 = *((char **)t2);
    t2 = (t0 + 968U);
    t5 = *((char **)t2);
    xsi_vlogtype_concat(t6, 8, 8, 3U, t5, 3, t4, 2, t3, 3);
    t2 = (t0 + 2116);
    xsi_vlogvar_assign_value(t2, t6, 0, 0, 8);
    xsi_set_current_line(144, ng0);
    t2 = (t0 + 1840);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2116);
    t7 = (t5 + 36U);
    t8 = *((char **)t7);
    memset(t6, 0, 8);
    t9 = (t6 + 4);
    t10 = (t8 + 4);
    t11 = *((unsigned int *)t8);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t10);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng10, 3, t0, (char)119, t4, 32, (char)118, t6, 8);
    xsi_set_current_line(145, ng0);
    t2 = (t0 + 2208);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng11)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 8, t5, 8);
    if (t17 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng12)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t17 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng15)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t17 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng16)));
    t17 = xsi_vlog_unsigned_case_compare(t4, 8, t2, 8);
    if (t17 == 1)
        goto LAB14;

LAB15:
LAB16:    goto LAB2;

LAB8:    xsi_set_current_line(146, ng0);

LAB17:    xsi_set_current_line(147, ng0);
    t7 = (t0 + 2116);
    t8 = (t7 + 36U);
    t9 = *((char **)t8);
    memset(t6, 0, 8);
    t10 = (t6 + 4);
    t18 = (t9 + 4);
    t11 = *((unsigned int *)t9);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t18);
    t14 = (t13 >> 0);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t16 & 255U);
    t19 = ((char*)((ng12)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t19))
        goto LAB19;

LAB18:    t21 = (t6 + 4);
    t22 = (t19 + 4);
    if (*((unsigned int *)t21) != *((unsigned int *)t22))
        goto LAB19;

LAB20:    t23 = (t20 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB21;

LAB22:
LAB23:    goto LAB16;

LAB10:    xsi_set_current_line(151, ng0);

LAB25:    xsi_set_current_line(152, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t10 = ((char*)((ng11)));
    memset(t20, 0, 8);
    t18 = (t6 + 4);
    t19 = (t10 + 4);
    t24 = *((unsigned int *)t6);
    t25 = *((unsigned int *)t10);
    t26 = (t24 ^ t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t35 = (t27 ^ t28);
    t36 = (t26 | t35);
    t37 = *((unsigned int *)t18);
    t38 = *((unsigned int *)t19);
    t39 = (t37 | t38);
    t40 = (~(t39));
    t47 = (t36 & t40);
    if (t47 != 0)
        goto LAB29;

LAB26:    if (t39 != 0)
        goto LAB28;

LAB27:    *((unsigned int *)t20) = 1;

LAB29:    t22 = (t20 + 4);
    t48 = *((unsigned int *)t22);
    t49 = (~(t48));
    t50 = *((unsigned int *)t20);
    t51 = (t50 & t49);
    t52 = (t51 != 0);
    if (t52 > 0)
        goto LAB30;

LAB31:    xsi_set_current_line(155, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 0);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 255U);
    t9 = ((char*)((ng15)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t9))
        goto LAB35;

LAB34:    t10 = (t6 + 4);
    t18 = (t9 + 4);
    if (*((unsigned int *)t10) != *((unsigned int *)t18))
        goto LAB35;

LAB36:    memset(t29, 0, 8);
    t19 = (t20 + 4);
    t24 = *((unsigned int *)t19);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB37;

LAB38:    if (*((unsigned int *)t19) != 0)
        goto LAB39;

LAB40:    t22 = (t29 + 4);
    t35 = *((unsigned int *)t29);
    t36 = *((unsigned int *)t22);
    t37 = (t35 || t36);
    if (t37 > 0)
        goto LAB41;

LAB42:    memcpy(t77, t29, 8);

LAB43:    t58 = (t77 + 4);
    t106 = *((unsigned int *)t58);
    t107 = (~(t106));
    t108 = *((unsigned int *)t77);
    t109 = (t108 & t107);
    t110 = (t109 != 0);
    if (t110 > 0)
        goto LAB54;

LAB55:
LAB56:
LAB32:    xsi_set_current_line(159, ng0);
    t2 = (t0 + 1564);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t24 = (t13 | t16);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t9);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t35 = (t24 & t28);
    if (t35 != 0)
        goto LAB61;

LAB58:    if (t27 != 0)
        goto LAB60;

LAB59:    *((unsigned int *)t6) = 1;

LAB61:    memset(t20, 0, 8);
    t18 = (t6 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    t38 = *((unsigned int *)t6);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t18) != 0)
        goto LAB64;

LAB65:    t21 = (t20 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t21);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB66;

LAB67:    memcpy(t65, t20, 8);

LAB68:    t57 = (t65 + 4);
    t112 = *((unsigned int *)t57);
    t113 = (~(t112));
    t114 = *((unsigned int *)t65);
    t115 = (t114 & t113);
    t117 = (t115 != 0);
    if (t117 > 0)
        goto LAB79;

LAB80:
LAB81:    xsi_set_current_line(162, ng0);
    t2 = (t0 + 1656);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t8);
    t15 = *((unsigned int *)t9);
    t16 = (t14 ^ t15);
    t24 = (t13 | t16);
    t25 = *((unsigned int *)t8);
    t26 = *((unsigned int *)t9);
    t27 = (t25 | t26);
    t28 = (~(t27));
    t35 = (t24 & t28);
    if (t35 != 0)
        goto LAB86;

LAB83:    if (t27 != 0)
        goto LAB85;

LAB84:    *((unsigned int *)t6) = 1;

LAB86:    memset(t20, 0, 8);
    t18 = (t6 + 4);
    t36 = *((unsigned int *)t18);
    t37 = (~(t36));
    t38 = *((unsigned int *)t6);
    t39 = (t38 & t37);
    t40 = (t39 & 1U);
    if (t40 != 0)
        goto LAB87;

LAB88:    if (*((unsigned int *)t18) != 0)
        goto LAB89;

LAB90:    t21 = (t20 + 4);
    t47 = *((unsigned int *)t20);
    t48 = *((unsigned int *)t21);
    t49 = (t47 || t48);
    if (t49 > 0)
        goto LAB91;

LAB92:    memcpy(t65, t20, 8);

LAB93:    t57 = (t65 + 4);
    t112 = *((unsigned int *)t57);
    t113 = (~(t112));
    t114 = *((unsigned int *)t65);
    t115 = (t114 & t113);
    t117 = (t115 != 0);
    if (t117 > 0)
        goto LAB104;

LAB105:
LAB106:    goto LAB16;

LAB12:    xsi_set_current_line(167, ng0);

LAB108:    xsi_set_current_line(168, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t8 = (t6 + 4);
    t9 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t9);
    t14 = (t13 >> 0);
    *((unsigned int *)t8) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 255U);
    t16 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t16 & 255U);
    t10 = ((char*)((ng21)));
    memset(t20, 0, 8);
    if (*((unsigned int *)t6) != *((unsigned int *)t10))
        goto LAB110;

LAB109:    t18 = (t6 + 4);
    t19 = (t10 + 4);
    if (*((unsigned int *)t18) != *((unsigned int *)t19))
        goto LAB110;

LAB111:    t21 = (t20 + 4);
    t24 = *((unsigned int *)t21);
    t25 = (~(t24));
    t26 = *((unsigned int *)t20);
    t27 = (t26 & t25);
    t28 = (t27 != 0);
    if (t28 > 0)
        goto LAB112;

LAB113:
LAB114:    goto LAB16;

LAB14:    xsi_set_current_line(173, ng0);

LAB116:    xsi_set_current_line(174, ng0);
    t3 = (t0 + 2116);
    t5 = (t3 + 36U);
    t7 = *((char **)t5);
    t8 = ((char*)((ng23)));
    memset(t6, 0, 8);
    if (*((unsigned int *)t7) != *((unsigned int *)t8))
        goto LAB118;

LAB117:    t9 = (t7 + 4);
    t10 = (t8 + 4);
    if (*((unsigned int *)t9) != *((unsigned int *)t10))
        goto LAB118;

LAB119:    t18 = (t6 + 4);
    t11 = *((unsigned int *)t18);
    t12 = (~(t11));
    t13 = *((unsigned int *)t6);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB120;

LAB121:
LAB122:    goto LAB16;

LAB19:    *((unsigned int *)t20) = 1;
    goto LAB20;

LAB21:    xsi_set_current_line(147, ng0);

LAB24:    xsi_set_current_line(148, ng0);
    t30 = (t0 + 2116);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    memset(t29, 0, 8);
    t33 = (t29 + 4);
    t34 = (t32 + 4);
    t35 = *((unsigned int *)t32);
    t36 = (t35 >> 5);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t34);
    t38 = (t37 >> 5);
    *((unsigned int *)t33) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 7U);
    t40 = *((unsigned int *)t33);
    *((unsigned int *)t33) = (t40 & 7U);
    t42 = (t0 + 2116);
    t43 = (t42 + 36U);
    t44 = *((char **)t43);
    memset(t41, 0, 8);
    t45 = (t41 + 4);
    t46 = (t44 + 4);
    t47 = *((unsigned int *)t44);
    t48 = (t47 >> 0);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t46);
    t50 = (t49 >> 0);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 7U);
    t52 = *((unsigned int *)t45);
    *((unsigned int *)t45) = (t52 & 7U);
    t54 = (t0 + 2116);
    t55 = (t54 + 36U);
    t56 = *((char **)t55);
    memset(t53, 0, 8);
    t57 = (t53 + 4);
    t58 = (t56 + 4);
    t59 = *((unsigned int *)t56);
    t60 = (t59 >> 3);
    *((unsigned int *)t53) = t60;
    t61 = *((unsigned int *)t58);
    t62 = (t61 >> 3);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 3U);
    t64 = *((unsigned int *)t57);
    *((unsigned int *)t57) = (t64 & 3U);
    t66 = (t0 + 2208);
    t67 = (t66 + 36U);
    t68 = *((char **)t67);
    memset(t65, 0, 8);
    t69 = (t65 + 4);
    t70 = (t68 + 4);
    t71 = *((unsigned int *)t68);
    t72 = (t71 >> 5);
    *((unsigned int *)t65) = t72;
    t73 = *((unsigned int *)t70);
    t74 = (t73 >> 5);
    *((unsigned int *)t69) = t74;
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t75 & 7U);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t76 & 7U);
    t78 = (t0 + 2208);
    t79 = (t78 + 36U);
    t80 = *((char **)t79);
    memset(t77, 0, 8);
    t81 = (t77 + 4);
    t82 = (t80 + 4);
    t83 = *((unsigned int *)t80);
    t84 = (t83 >> 0);
    *((unsigned int *)t77) = t84;
    t85 = *((unsigned int *)t82);
    t86 = (t85 >> 0);
    *((unsigned int *)t81) = t86;
    t87 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t87 & 7U);
    t88 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t88 & 7U);
    t90 = (t0 + 2208);
    t91 = (t90 + 36U);
    t92 = *((char **)t91);
    memset(t89, 0, 8);
    t93 = (t89 + 4);
    t94 = (t92 + 4);
    t95 = *((unsigned int *)t92);
    t96 = (t95 >> 3);
    *((unsigned int *)t89) = t96;
    t97 = *((unsigned int *)t94);
    t98 = (t97 >> 3);
    *((unsigned int *)t93) = t98;
    t99 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t99 & 3U);
    t100 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t100 & 3U);
    t101 = (t0 + 1840);
    t102 = (t101 + 36U);
    t103 = *((char **)t102);
    xsi_vlogfile_write(1, 0, 0, ng13, 8, t0, (char)118, t29, 3, (char)118, t41, 3, (char)118, t53, 2, (char)118, t65, 3, (char)118, t77, 3, (char)118, t89, 2, (char)119, t103, 32);
    goto LAB23;

LAB28:    t21 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB29;

LAB30:    xsi_set_current_line(152, ng0);

LAB33:    xsi_set_current_line(153, ng0);
    t23 = (t0 + 2116);
    t30 = (t23 + 36U);
    t31 = *((char **)t30);
    memset(t29, 0, 8);
    t32 = (t29 + 4);
    t33 = (t31 + 4);
    t59 = *((unsigned int *)t31);
    t60 = (t59 >> 5);
    *((unsigned int *)t29) = t60;
    t61 = *((unsigned int *)t33);
    t62 = (t61 >> 5);
    *((unsigned int *)t32) = t62;
    t63 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t63 & 7U);
    t64 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t64 & 7U);
    t34 = (t0 + 2116);
    t42 = (t34 + 36U);
    t43 = *((char **)t42);
    memset(t41, 0, 8);
    t44 = (t41 + 4);
    t45 = (t43 + 4);
    t71 = *((unsigned int *)t43);
    t72 = (t71 >> 0);
    *((unsigned int *)t41) = t72;
    t73 = *((unsigned int *)t45);
    t74 = (t73 >> 0);
    *((unsigned int *)t44) = t74;
    t75 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t75 & 7U);
    t76 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t76 & 7U);
    t46 = (t0 + 2116);
    t54 = (t46 + 36U);
    t55 = *((char **)t54);
    memset(t53, 0, 8);
    t56 = (t53 + 4);
    t57 = (t55 + 4);
    t83 = *((unsigned int *)t55);
    t84 = (t83 >> 3);
    *((unsigned int *)t53) = t84;
    t85 = *((unsigned int *)t57);
    t86 = (t85 >> 3);
    *((unsigned int *)t56) = t86;
    t87 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t87 & 3U);
    t88 = *((unsigned int *)t56);
    *((unsigned int *)t56) = (t88 & 3U);
    t58 = (t0 + 2208);
    t66 = (t58 + 36U);
    t67 = *((char **)t66);
    memset(t65, 0, 8);
    t68 = (t65 + 4);
    t69 = (t67 + 4);
    t95 = *((unsigned int *)t67);
    t96 = (t95 >> 5);
    *((unsigned int *)t65) = t96;
    t97 = *((unsigned int *)t69);
    t98 = (t97 >> 5);
    *((unsigned int *)t68) = t98;
    t99 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t99 & 7U);
    t100 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t100 & 7U);
    t70 = (t0 + 2208);
    t78 = (t70 + 36U);
    t79 = *((char **)t78);
    memset(t77, 0, 8);
    t80 = (t77 + 4);
    t81 = (t79 + 4);
    t104 = *((unsigned int *)t79);
    t105 = (t104 >> 0);
    *((unsigned int *)t77) = t105;
    t106 = *((unsigned int *)t81);
    t107 = (t106 >> 0);
    *((unsigned int *)t80) = t107;
    t108 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t108 & 7U);
    t109 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t109 & 7U);
    t82 = (t0 + 2208);
    t90 = (t82 + 36U);
    t91 = *((char **)t90);
    memset(t89, 0, 8);
    t92 = (t89 + 4);
    t93 = (t91 + 4);
    t110 = *((unsigned int *)t91);
    t111 = (t110 >> 3);
    *((unsigned int *)t89) = t111;
    t112 = *((unsigned int *)t93);
    t113 = (t112 >> 3);
    *((unsigned int *)t92) = t113;
    t114 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t114 & 3U);
    t115 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t115 & 3U);
    t94 = (t0 + 1840);
    t101 = (t94 + 36U);
    t102 = *((char **)t101);
    xsi_vlogfile_write(1, 0, 0, ng14, 8, t0, (char)118, t29, 3, (char)118, t41, 3, (char)118, t53, 2, (char)118, t65, 3, (char)118, t77, 3, (char)118, t89, 2, (char)119, t102, 32);
    goto LAB32;

LAB35:    *((unsigned int *)t20) = 1;
    goto LAB36;

LAB37:    *((unsigned int *)t29) = 1;
    goto LAB40;

LAB39:    t21 = (t29 + 4);
    *((unsigned int *)t29) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB40;

LAB41:    t23 = (t0 + 2116);
    t30 = (t23 + 36U);
    t31 = *((char **)t30);
    memset(t41, 0, 8);
    t32 = (t41 + 4);
    t33 = (t31 + 4);
    t38 = *((unsigned int *)t31);
    t39 = (t38 >> 0);
    *((unsigned int *)t41) = t39;
    t40 = *((unsigned int *)t33);
    t47 = (t40 >> 0);
    *((unsigned int *)t32) = t47;
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t48 & 255U);
    t49 = *((unsigned int *)t32);
    *((unsigned int *)t32) = (t49 & 255U);
    t34 = ((char*)((ng16)));
    memset(t53, 0, 8);
    if (*((unsigned int *)t41) != *((unsigned int *)t34))
        goto LAB45;

LAB44:    t42 = (t41 + 4);
    t43 = (t34 + 4);
    if (*((unsigned int *)t42) != *((unsigned int *)t43))
        goto LAB45;

LAB46:    memset(t65, 0, 8);
    t44 = (t53 + 4);
    t50 = *((unsigned int *)t44);
    t51 = (~(t50));
    t52 = *((unsigned int *)t53);
    t59 = (t52 & t51);
    t60 = (t59 & 1U);
    if (t60 != 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t44) != 0)
        goto LAB49;

LAB50:    t61 = *((unsigned int *)t29);
    t62 = *((unsigned int *)t65);
    t63 = (t61 & t62);
    *((unsigned int *)t77) = t63;
    t46 = (t29 + 4);
    t54 = (t65 + 4);
    t55 = (t77 + 4);
    t64 = *((unsigned int *)t46);
    t71 = *((unsigned int *)t54);
    t72 = (t64 | t71);
    *((unsigned int *)t55) = t72;
    t73 = *((unsigned int *)t55);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB51;

LAB52:
LAB53:    goto LAB43;

LAB45:    *((unsigned int *)t53) = 1;
    goto LAB46;

LAB47:    *((unsigned int *)t65) = 1;
    goto LAB50;

LAB49:    t45 = (t65 + 4);
    *((unsigned int *)t65) = 1;
    *((unsigned int *)t45) = 1;
    goto LAB50;

LAB51:    t75 = *((unsigned int *)t77);
    t76 = *((unsigned int *)t55);
    *((unsigned int *)t77) = (t75 | t76);
    t56 = (t29 + 4);
    t57 = (t65 + 4);
    t83 = *((unsigned int *)t29);
    t84 = (~(t83));
    t85 = *((unsigned int *)t56);
    t86 = (~(t85));
    t87 = *((unsigned int *)t65);
    t88 = (~(t87));
    t95 = *((unsigned int *)t57);
    t96 = (~(t95));
    t17 = (t84 & t86);
    t116 = (t88 & t96);
    t97 = (~(t17));
    t98 = (~(t116));
    t99 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t99 & t97);
    t100 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t100 & t98);
    t104 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t104 & t97);
    t105 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t105 & t98);
    goto LAB53;

LAB54:    xsi_set_current_line(155, ng0);

LAB57:    xsi_set_current_line(156, ng0);
    t66 = (t0 + 2116);
    t67 = (t66 + 36U);
    t68 = *((char **)t67);
    memset(t89, 0, 8);
    t69 = (t89 + 4);
    t70 = (t68 + 4);
    t111 = *((unsigned int *)t68);
    t112 = (t111 >> 0);
    *((unsigned int *)t89) = t112;
    t113 = *((unsigned int *)t70);
    t114 = (t113 >> 0);
    *((unsigned int *)t69) = t114;
    t115 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t115 & 255U);
    t117 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t117 & 255U);
    xsi_vlogfile_write(1, 0, 0, ng17, 2, t0, (char)118, t89, 8);
    xsi_set_current_line(157, ng0);
    t2 = (t0 + 2116);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t6, 0, 8);
    t7 = (t6 + 4);
    t8 = (t5 + 4);
    t11 = *((unsigned int *)t5);
    t12 = (t11 >> 5);
    *((unsigned int *)t6) = t12;
    t13 = *((unsigned int *)t8);
    t14 = (t13 >> 5);
    *((unsigned int *)t7) = t14;
    t15 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t15 & 7U);
    t16 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t16 & 7U);
    t9 = (t0 + 2116);
    t10 = (t9 + 36U);
    t18 = *((char **)t10);
    memset(t20, 0, 8);
    t19 = (t20 + 4);
    t21 = (t18 + 4);
    t24 = *((unsigned int *)t18);
    t25 = (t24 >> 0);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t21);
    t27 = (t26 >> 0);
    *((unsigned int *)t19) = t27;
    t28 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t28 & 7U);
    t35 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t35 & 7U);
    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t30 = *((char **)t23);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t32 = (t30 + 4);
    t36 = *((unsigned int *)t30);
    t37 = (t36 >> 3);
    *((unsigned int *)t29) = t37;
    t38 = *((unsigned int *)t32);
    t39 = (t38 >> 3);
    *((unsigned int *)t31) = t39;
    t40 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t40 & 3U);
    t47 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t47 & 3U);
    t33 = (t0 + 2208);
    t34 = (t33 + 36U);
    t42 = *((char **)t34);
    memset(t41, 0, 8);
    t43 = (t41 + 4);
    t44 = (t42 + 4);
    t48 = *((unsigned int *)t42);
    t49 = (t48 >> 5);
    *((unsigned int *)t41) = t49;
    t50 = *((unsigned int *)t44);
    t51 = (t50 >> 5);
    *((unsigned int *)t43) = t51;
    t52 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t52 & 7U);
    t59 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t59 & 7U);
    t45 = (t0 + 2208);
    t46 = (t45 + 36U);
    t54 = *((char **)t46);
    memset(t53, 0, 8);
    t55 = (t53 + 4);
    t56 = (t54 + 4);
    t60 = *((unsigned int *)t54);
    t61 = (t60 >> 0);
    *((unsigned int *)t53) = t61;
    t62 = *((unsigned int *)t56);
    t63 = (t62 >> 0);
    *((unsigned int *)t55) = t63;
    t64 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t64 & 7U);
    t71 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t71 & 7U);
    t57 = (t0 + 2208);
    t58 = (t57 + 36U);
    t66 = *((char **)t58);
    memset(t65, 0, 8);
    t67 = (t65 + 4);
    t68 = (t66 + 4);
    t72 = *((unsigned int *)t66);
    t73 = (t72 >> 3);
    *((unsigned int *)t65) = t73;
    t74 = *((unsigned int *)t68);
    t75 = (t74 >> 3);
    *((unsigned int *)t67) = t75;
    t76 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t76 & 3U);
    t83 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t83 & 3U);
    t69 = (t0 + 1840);
    t70 = (t69 + 36U);
    t78 = *((char **)t70);
    xsi_vlogfile_write(1, 0, 0, ng18, 8, t0, (char)118, t6, 3, (char)118, t20, 3, (char)118, t29, 2, (char)118, t41, 3, (char)118, t53, 3, (char)118, t65, 2, (char)119, t78, 32);
    goto LAB56;

LAB60:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB61;

LAB62:    *((unsigned int *)t20) = 1;
    goto LAB65;

LAB64:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB65;

LAB66:    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t30 = *((char **)t23);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t32 = (t30 + 4);
    t50 = *((unsigned int *)t30);
    t51 = (t50 >> 0);
    *((unsigned int *)t29) = t51;
    t52 = *((unsigned int *)t32);
    t59 = (t52 >> 0);
    *((unsigned int *)t31) = t59;
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & 255U);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & 255U);
    t33 = ((char*)((ng15)));
    memset(t41, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t33))
        goto LAB70;

LAB69:    t34 = (t29 + 4);
    t42 = (t33 + 4);
    if (*((unsigned int *)t34) != *((unsigned int *)t42))
        goto LAB70;

LAB71:    memset(t53, 0, 8);
    t43 = (t41 + 4);
    t62 = *((unsigned int *)t43);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t71 = (t64 & t63);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB72;

LAB73:    if (*((unsigned int *)t43) != 0)
        goto LAB74;

LAB75:    t73 = *((unsigned int *)t20);
    t74 = *((unsigned int *)t53);
    t75 = (t73 & t74);
    *((unsigned int *)t65) = t75;
    t45 = (t20 + 4);
    t46 = (t53 + 4);
    t54 = (t65 + 4);
    t76 = *((unsigned int *)t45);
    t83 = *((unsigned int *)t46);
    t84 = (t76 | t83);
    *((unsigned int *)t54) = t84;
    t85 = *((unsigned int *)t54);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB76;

LAB77:
LAB78:    goto LAB68;

LAB70:    *((unsigned int *)t41) = 1;
    goto LAB71;

LAB72:    *((unsigned int *)t53) = 1;
    goto LAB75;

LAB74:    t44 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB75;

LAB76:    t87 = *((unsigned int *)t65);
    t88 = *((unsigned int *)t54);
    *((unsigned int *)t65) = (t87 | t88);
    t55 = (t20 + 4);
    t56 = (t53 + 4);
    t95 = *((unsigned int *)t20);
    t96 = (~(t95));
    t97 = *((unsigned int *)t55);
    t98 = (~(t97));
    t99 = *((unsigned int *)t53);
    t100 = (~(t99));
    t104 = *((unsigned int *)t56);
    t105 = (~(t104));
    t17 = (t96 & t98);
    t116 = (t100 & t105);
    t106 = (~(t17));
    t107 = (~(t116));
    t108 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t108 & t106);
    t109 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t109 & t107);
    t110 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t110 & t106);
    t111 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t111 & t107);
    goto LAB78;

LAB79:    xsi_set_current_line(159, ng0);

LAB82:    xsi_set_current_line(160, ng0);
    t58 = (t0 + 2116);
    t66 = (t58 + 36U);
    t67 = *((char **)t66);
    memset(t77, 0, 8);
    t68 = (t77 + 4);
    t69 = (t67 + 4);
    t118 = *((unsigned int *)t67);
    t119 = (t118 >> 5);
    *((unsigned int *)t77) = t119;
    t120 = *((unsigned int *)t69);
    t121 = (t120 >> 5);
    *((unsigned int *)t68) = t121;
    t122 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t122 & 7U);
    t123 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t123 & 7U);
    t70 = (t0 + 2116);
    t78 = (t70 + 36U);
    t79 = *((char **)t78);
    memset(t89, 0, 8);
    t80 = (t89 + 4);
    t81 = (t79 + 4);
    t124 = *((unsigned int *)t79);
    t125 = (t124 >> 0);
    *((unsigned int *)t89) = t125;
    t126 = *((unsigned int *)t81);
    t127 = (t126 >> 0);
    *((unsigned int *)t80) = t127;
    t128 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t128 & 7U);
    t129 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t129 & 7U);
    t82 = (t0 + 2116);
    t90 = (t82 + 36U);
    t91 = *((char **)t90);
    memset(t130, 0, 8);
    t92 = (t130 + 4);
    t93 = (t91 + 4);
    t131 = *((unsigned int *)t91);
    t132 = (t131 >> 3);
    *((unsigned int *)t130) = t132;
    t133 = *((unsigned int *)t93);
    t134 = (t133 >> 3);
    *((unsigned int *)t92) = t134;
    t135 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t135 & 3U);
    t136 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t136 & 3U);
    t94 = (t0 + 2208);
    t101 = (t94 + 36U);
    t102 = *((char **)t101);
    memset(t137, 0, 8);
    t103 = (t137 + 4);
    t138 = (t102 + 4);
    t139 = *((unsigned int *)t102);
    t140 = (t139 >> 5);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t138);
    t142 = (t141 >> 5);
    *((unsigned int *)t103) = t142;
    t143 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t143 & 7U);
    t144 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t144 & 7U);
    t146 = (t0 + 2208);
    t147 = (t146 + 36U);
    t148 = *((char **)t147);
    memset(t145, 0, 8);
    t149 = (t145 + 4);
    t150 = (t148 + 4);
    t151 = *((unsigned int *)t148);
    t152 = (t151 >> 0);
    *((unsigned int *)t145) = t152;
    t153 = *((unsigned int *)t150);
    t154 = (t153 >> 0);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t155 & 7U);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t156 & 7U);
    t158 = (t0 + 2208);
    t159 = (t158 + 36U);
    t160 = *((char **)t159);
    memset(t157, 0, 8);
    t161 = (t157 + 4);
    t162 = (t160 + 4);
    t163 = *((unsigned int *)t160);
    t164 = (t163 >> 3);
    *((unsigned int *)t157) = t164;
    t165 = *((unsigned int *)t162);
    t166 = (t165 >> 3);
    *((unsigned int *)t161) = t166;
    t167 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t167 & 3U);
    t168 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t168 & 3U);
    t169 = (t0 + 1840);
    t170 = (t169 + 36U);
    t171 = *((char **)t170);
    xsi_vlogfile_write(1, 0, 0, ng19, 8, t0, (char)118, t77, 3, (char)118, t89, 3, (char)118, t130, 2, (char)118, t137, 3, (char)118, t145, 3, (char)118, t157, 2, (char)119, t171, 32);
    goto LAB81;

LAB85:    t10 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t10) = 1;
    goto LAB86;

LAB87:    *((unsigned int *)t20) = 1;
    goto LAB90;

LAB89:    t19 = (t20 + 4);
    *((unsigned int *)t20) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB90;

LAB91:    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t30 = *((char **)t23);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t32 = (t30 + 4);
    t50 = *((unsigned int *)t30);
    t51 = (t50 >> 0);
    *((unsigned int *)t29) = t51;
    t52 = *((unsigned int *)t32);
    t59 = (t52 >> 0);
    *((unsigned int *)t31) = t59;
    t60 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t60 & 255U);
    t61 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t61 & 255U);
    t33 = ((char*)((ng16)));
    memset(t41, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t33))
        goto LAB95;

LAB94:    t34 = (t29 + 4);
    t42 = (t33 + 4);
    if (*((unsigned int *)t34) != *((unsigned int *)t42))
        goto LAB95;

LAB96:    memset(t53, 0, 8);
    t43 = (t41 + 4);
    t62 = *((unsigned int *)t43);
    t63 = (~(t62));
    t64 = *((unsigned int *)t41);
    t71 = (t64 & t63);
    t72 = (t71 & 1U);
    if (t72 != 0)
        goto LAB97;

LAB98:    if (*((unsigned int *)t43) != 0)
        goto LAB99;

LAB100:    t73 = *((unsigned int *)t20);
    t74 = *((unsigned int *)t53);
    t75 = (t73 & t74);
    *((unsigned int *)t65) = t75;
    t45 = (t20 + 4);
    t46 = (t53 + 4);
    t54 = (t65 + 4);
    t76 = *((unsigned int *)t45);
    t83 = *((unsigned int *)t46);
    t84 = (t76 | t83);
    *((unsigned int *)t54) = t84;
    t85 = *((unsigned int *)t54);
    t86 = (t85 != 0);
    if (t86 == 1)
        goto LAB101;

LAB102:
LAB103:    goto LAB93;

LAB95:    *((unsigned int *)t41) = 1;
    goto LAB96;

LAB97:    *((unsigned int *)t53) = 1;
    goto LAB100;

LAB99:    t44 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB100;

LAB101:    t87 = *((unsigned int *)t65);
    t88 = *((unsigned int *)t54);
    *((unsigned int *)t65) = (t87 | t88);
    t55 = (t20 + 4);
    t56 = (t53 + 4);
    t95 = *((unsigned int *)t20);
    t96 = (~(t95));
    t97 = *((unsigned int *)t55);
    t98 = (~(t97));
    t99 = *((unsigned int *)t53);
    t100 = (~(t99));
    t104 = *((unsigned int *)t56);
    t105 = (~(t104));
    t17 = (t96 & t98);
    t116 = (t100 & t105);
    t106 = (~(t17));
    t107 = (~(t116));
    t108 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t108 & t106);
    t109 = *((unsigned int *)t54);
    *((unsigned int *)t54) = (t109 & t107);
    t110 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t110 & t106);
    t111 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t111 & t107);
    goto LAB103;

LAB104:    xsi_set_current_line(162, ng0);

LAB107:    xsi_set_current_line(163, ng0);
    t58 = (t0 + 2116);
    t66 = (t58 + 36U);
    t67 = *((char **)t66);
    memset(t77, 0, 8);
    t68 = (t77 + 4);
    t69 = (t67 + 4);
    t118 = *((unsigned int *)t67);
    t119 = (t118 >> 5);
    *((unsigned int *)t77) = t119;
    t120 = *((unsigned int *)t69);
    t121 = (t120 >> 5);
    *((unsigned int *)t68) = t121;
    t122 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t122 & 7U);
    t123 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t123 & 7U);
    t70 = (t0 + 2116);
    t78 = (t70 + 36U);
    t79 = *((char **)t78);
    memset(t89, 0, 8);
    t80 = (t89 + 4);
    t81 = (t79 + 4);
    t124 = *((unsigned int *)t79);
    t125 = (t124 >> 0);
    *((unsigned int *)t89) = t125;
    t126 = *((unsigned int *)t81);
    t127 = (t126 >> 0);
    *((unsigned int *)t80) = t127;
    t128 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t128 & 7U);
    t129 = *((unsigned int *)t80);
    *((unsigned int *)t80) = (t129 & 7U);
    t82 = (t0 + 2116);
    t90 = (t82 + 36U);
    t91 = *((char **)t90);
    memset(t130, 0, 8);
    t92 = (t130 + 4);
    t93 = (t91 + 4);
    t131 = *((unsigned int *)t91);
    t132 = (t131 >> 3);
    *((unsigned int *)t130) = t132;
    t133 = *((unsigned int *)t93);
    t134 = (t133 >> 3);
    *((unsigned int *)t92) = t134;
    t135 = *((unsigned int *)t130);
    *((unsigned int *)t130) = (t135 & 3U);
    t136 = *((unsigned int *)t92);
    *((unsigned int *)t92) = (t136 & 3U);
    t94 = (t0 + 2208);
    t101 = (t94 + 36U);
    t102 = *((char **)t101);
    memset(t137, 0, 8);
    t103 = (t137 + 4);
    t138 = (t102 + 4);
    t139 = *((unsigned int *)t102);
    t140 = (t139 >> 5);
    *((unsigned int *)t137) = t140;
    t141 = *((unsigned int *)t138);
    t142 = (t141 >> 5);
    *((unsigned int *)t103) = t142;
    t143 = *((unsigned int *)t137);
    *((unsigned int *)t137) = (t143 & 7U);
    t144 = *((unsigned int *)t103);
    *((unsigned int *)t103) = (t144 & 7U);
    t146 = (t0 + 2208);
    t147 = (t146 + 36U);
    t148 = *((char **)t147);
    memset(t145, 0, 8);
    t149 = (t145 + 4);
    t150 = (t148 + 4);
    t151 = *((unsigned int *)t148);
    t152 = (t151 >> 0);
    *((unsigned int *)t145) = t152;
    t153 = *((unsigned int *)t150);
    t154 = (t153 >> 0);
    *((unsigned int *)t149) = t154;
    t155 = *((unsigned int *)t145);
    *((unsigned int *)t145) = (t155 & 7U);
    t156 = *((unsigned int *)t149);
    *((unsigned int *)t149) = (t156 & 7U);
    t158 = (t0 + 2208);
    t159 = (t158 + 36U);
    t160 = *((char **)t159);
    memset(t157, 0, 8);
    t161 = (t157 + 4);
    t162 = (t160 + 4);
    t163 = *((unsigned int *)t160);
    t164 = (t163 >> 3);
    *((unsigned int *)t157) = t164;
    t165 = *((unsigned int *)t162);
    t166 = (t165 >> 3);
    *((unsigned int *)t161) = t166;
    t167 = *((unsigned int *)t157);
    *((unsigned int *)t157) = (t167 & 3U);
    t168 = *((unsigned int *)t161);
    *((unsigned int *)t161) = (t168 & 3U);
    t169 = (t0 + 1840);
    t170 = (t169 + 36U);
    t171 = *((char **)t170);
    xsi_vlogfile_write(1, 0, 0, ng20, 8, t0, (char)118, t77, 3, (char)118, t89, 3, (char)118, t130, 2, (char)118, t137, 3, (char)118, t145, 3, (char)118, t157, 2, (char)119, t171, 32);
    goto LAB106;

LAB110:    *((unsigned int *)t20) = 1;
    goto LAB111;

LAB112:    xsi_set_current_line(168, ng0);

LAB115:    xsi_set_current_line(169, ng0);
    t22 = (t0 + 2116);
    t23 = (t22 + 36U);
    t30 = *((char **)t23);
    memset(t29, 0, 8);
    t31 = (t29 + 4);
    t32 = (t30 + 4);
    t35 = *((unsigned int *)t30);
    t36 = (t35 >> 5);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t32);
    t38 = (t37 >> 5);
    *((unsigned int *)t31) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 7U);
    t40 = *((unsigned int *)t31);
    *((unsigned int *)t31) = (t40 & 7U);
    t33 = (t0 + 2116);
    t34 = (t33 + 36U);
    t42 = *((char **)t34);
    memset(t41, 0, 8);
    t43 = (t41 + 4);
    t44 = (t42 + 4);
    t47 = *((unsigned int *)t42);
    t48 = (t47 >> 0);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t44);
    t50 = (t49 >> 0);
    *((unsigned int *)t43) = t50;
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 7U);
    t52 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t52 & 7U);
    t45 = (t0 + 2116);
    t46 = (t45 + 36U);
    t54 = *((char **)t46);
    memset(t53, 0, 8);
    t55 = (t53 + 4);
    t56 = (t54 + 4);
    t59 = *((unsigned int *)t54);
    t60 = (t59 >> 3);
    *((unsigned int *)t53) = t60;
    t61 = *((unsigned int *)t56);
    t62 = (t61 >> 3);
    *((unsigned int *)t55) = t62;
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 3U);
    t64 = *((unsigned int *)t55);
    *((unsigned int *)t55) = (t64 & 3U);
    t57 = (t0 + 2208);
    t58 = (t57 + 36U);
    t66 = *((char **)t58);
    memset(t65, 0, 8);
    t67 = (t65 + 4);
    t68 = (t66 + 4);
    t71 = *((unsigned int *)t66);
    t72 = (t71 >> 5);
    *((unsigned int *)t65) = t72;
    t73 = *((unsigned int *)t68);
    t74 = (t73 >> 5);
    *((unsigned int *)t67) = t74;
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t75 & 7U);
    t76 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t76 & 7U);
    t69 = (t0 + 2208);
    t70 = (t69 + 36U);
    t78 = *((char **)t70);
    memset(t77, 0, 8);
    t79 = (t77 + 4);
    t80 = (t78 + 4);
    t83 = *((unsigned int *)t78);
    t84 = (t83 >> 0);
    *((unsigned int *)t77) = t84;
    t85 = *((unsigned int *)t80);
    t86 = (t85 >> 0);
    *((unsigned int *)t79) = t86;
    t87 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t87 & 7U);
    t88 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t88 & 7U);
    t81 = (t0 + 2208);
    t82 = (t81 + 36U);
    t90 = *((char **)t82);
    memset(t89, 0, 8);
    t91 = (t89 + 4);
    t92 = (t90 + 4);
    t95 = *((unsigned int *)t90);
    t96 = (t95 >> 3);
    *((unsigned int *)t89) = t96;
    t97 = *((unsigned int *)t92);
    t98 = (t97 >> 3);
    *((unsigned int *)t91) = t98;
    t99 = *((unsigned int *)t89);
    *((unsigned int *)t89) = (t99 & 3U);
    t100 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t100 & 3U);
    t93 = (t0 + 1840);
    t94 = (t93 + 36U);
    t101 = *((char **)t94);
    xsi_vlogfile_write(1, 0, 0, ng22, 8, t0, (char)118, t29, 3, (char)118, t41, 3, (char)118, t53, 2, (char)118, t65, 3, (char)118, t77, 3, (char)118, t89, 2, (char)119, t101, 32);
    goto LAB114;

LAB118:    *((unsigned int *)t6) = 1;
    goto LAB119;

LAB120:    xsi_set_current_line(174, ng0);

LAB123:    xsi_set_current_line(175, ng0);
    t19 = (t0 + 2116);
    t21 = (t19 + 36U);
    t22 = *((char **)t21);
    memset(t20, 0, 8);
    t23 = (t20 + 4);
    t30 = (t22 + 4);
    t16 = *((unsigned int *)t22);
    t24 = (t16 >> 5);
    *((unsigned int *)t20) = t24;
    t25 = *((unsigned int *)t30);
    t26 = (t25 >> 5);
    *((unsigned int *)t23) = t26;
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t27 & 7U);
    t28 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t28 & 7U);
    t31 = (t0 + 2116);
    t32 = (t31 + 36U);
    t33 = *((char **)t32);
    memset(t29, 0, 8);
    t34 = (t29 + 4);
    t42 = (t33 + 4);
    t35 = *((unsigned int *)t33);
    t36 = (t35 >> 0);
    *((unsigned int *)t29) = t36;
    t37 = *((unsigned int *)t42);
    t38 = (t37 >> 0);
    *((unsigned int *)t34) = t38;
    t39 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t39 & 7U);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t40 & 7U);
    t43 = (t0 + 2116);
    t44 = (t43 + 36U);
    t45 = *((char **)t44);
    memset(t41, 0, 8);
    t46 = (t41 + 4);
    t54 = (t45 + 4);
    t47 = *((unsigned int *)t45);
    t48 = (t47 >> 3);
    *((unsigned int *)t41) = t48;
    t49 = *((unsigned int *)t54);
    t50 = (t49 >> 3);
    *((unsigned int *)t46) = t50;
    t51 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t51 & 3U);
    t52 = *((unsigned int *)t46);
    *((unsigned int *)t46) = (t52 & 3U);
    t55 = (t0 + 2208);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    memset(t53, 0, 8);
    t58 = (t53 + 4);
    t66 = (t57 + 4);
    t59 = *((unsigned int *)t57);
    t60 = (t59 >> 5);
    *((unsigned int *)t53) = t60;
    t61 = *((unsigned int *)t66);
    t62 = (t61 >> 5);
    *((unsigned int *)t58) = t62;
    t63 = *((unsigned int *)t53);
    *((unsigned int *)t53) = (t63 & 7U);
    t64 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t64 & 7U);
    t67 = (t0 + 2208);
    t68 = (t67 + 36U);
    t69 = *((char **)t68);
    memset(t65, 0, 8);
    t70 = (t65 + 4);
    t78 = (t69 + 4);
    t71 = *((unsigned int *)t69);
    t72 = (t71 >> 0);
    *((unsigned int *)t65) = t72;
    t73 = *((unsigned int *)t78);
    t74 = (t73 >> 0);
    *((unsigned int *)t70) = t74;
    t75 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t75 & 7U);
    t76 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t76 & 7U);
    t79 = (t0 + 2208);
    t80 = (t79 + 36U);
    t81 = *((char **)t80);
    memset(t77, 0, 8);
    t82 = (t77 + 4);
    t90 = (t81 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (t83 >> 3);
    *((unsigned int *)t77) = t84;
    t85 = *((unsigned int *)t90);
    t86 = (t85 >> 3);
    *((unsigned int *)t82) = t86;
    t87 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t87 & 3U);
    t88 = *((unsigned int *)t82);
    *((unsigned int *)t82) = (t88 & 3U);
    t91 = (t0 + 1840);
    t92 = (t91 + 36U);
    t93 = *((char **)t92);
    xsi_vlogfile_write(1, 0, 0, ng22, 8, t0, (char)118, t20, 3, (char)118, t29, 3, (char)118, t41, 2, (char)118, t53, 3, (char)118, t65, 3, (char)118, t77, 2, (char)119, t93, 32);
    goto LAB122;

}


extern void work_m_00000000004037861106_0115765590_init()
{
	static char *pe[] = {(void *)Initial_74_0,(void *)Always_129_1,(void *)Always_138_2};
	xsi_register_didat("work_m_00000000004037861106_0115765590", "isim/test_traffic_light_controller_isim_beh.exe.sim/work/m_00000000004037861106_0115765590.didat");
	xsi_register_executes(pe);
}
