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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa2/lab2_start/test_alu.v";
static int ng1[] = {0, 0};
static int ng2[] = {34, 0};
static int ng3[] = {36, 0};
static int ng4[] = {38, 0};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {6U, 0U};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {1879048174U, 0U};
static unsigned int ng9[] = {1878523902U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {2415915007U, 0U};
static unsigned int ng12[] = {2415394814U, 0U};
static const char *ng13 = "ERROR: AND:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng14[] = {2U, 0U};
static const char *ng15 = "ERROR: XOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng16[] = {1U, 0U};
static const char *ng17 = "ERROR: OR:  op_code = %b, X = %h, Y = %h, Z = %h";
static unsigned int ng18[] = {3U, 0U};
static const char *ng19 = "ERROR: NOR:  op_code = %b, X = %h, Y = %h, Z = %h";
static const char *ng20 = "ERROR: ADD (wrong number):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static const char *ng21 = "WARNING: ADD (overflow):  op_code = %b, X = %h, Y = %h, Z = %h, overflow = %b";
static unsigned int ng22[] = {7U, 0U};
static unsigned int ng23[] = {8U, 0U};
static unsigned int ng24[] = {9U, 0U};
static unsigned int ng25[] = {10U, 0U};
static const char *ng26 = "ERROR HAPPENED! invalid op code, Z was not zero, op_code = %b, X = %h, Y = %h, Z = %h";



static void Initial_38_0(char *t0)
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

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(38, ng0);

LAB4:    xsi_set_current_line(40, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(41, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(42, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(52, ng0);
    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB5:    t2 = (t0 + 1104);
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
        goto LAB7;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(60, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(62, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB23;

LAB1:    return;
LAB7:    *((unsigned int *)t6) = 1;
    goto LAB9;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(52, ng0);

LAB12:    xsi_set_current_line(53, ng0);
    t28 = (t0 + 1804);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(54, ng0);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB14:    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng6)));
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
        goto LAB16;

LAB15:    if (t18 != 0)
        goto LAB17;

LAB18:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB19;

LAB20:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1104);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 1104);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB5;

LAB16:    *((unsigned int *)t6) = 1;
    goto LAB18;

LAB17:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB18;

LAB19:    xsi_set_current_line(54, ng0);

LAB21:    xsi_set_current_line(55, ng0);
    t28 = (t0 + 1804);
    xsi_process_wait(t28, 10000LL);
    *((char **)t1) = &&LAB22;
    goto LAB1;

LAB22:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_add(t6, 32, t4, 4, t5, 32);
    t7 = (t0 + 1288);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 4);
    goto LAB14;

LAB23:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng11)));
    t3 = (t0 + 1104);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(67, ng0);
    t2 = ((char*)((ng12)));
    t3 = (t0 + 1196);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 1288);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1804);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB24:    xsi_set_current_line(71, ng0);
    xsi_vlog_finish(1);
    goto LAB1;

}

static void Always_77_1(char *t0)
{
    char t14[8];
    char t46[8];
    char t66[8];
    char t71[8];
    char t72[8];
    char t73[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    int t38;
    int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    char *t55;
    char *t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;
    char *t63;
    char *t64;
    char *t65;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    char *t85;
    char *t86;
    char *t87;
    char *t88;
    char *t89;
    char *t90;

LAB0:    t1 = (t0 + 2048U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2244);
    *((int *)t2) = 1;
    t3 = (t0 + 2076);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(77, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 1948);
    xsi_process_wait(t4, 1000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 1288);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);

LAB7:    t5 = ((char*)((ng5)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t5, 4);
    if (t6 == 1)
        goto LAB8;

LAB9:    t2 = ((char*)((ng14)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB10;

LAB11:    t2 = ((char*)((ng16)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB12;

LAB13:    t2 = ((char*)((ng18)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB14;

LAB15:    t2 = ((char*)((ng10)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng6)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng22)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng23)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng24)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng25)));
    t6 = xsi_vlog_unsigned_case_compare(t4, 4, t2, 4);
    if (t6 == 1)
        goto LAB26;

LAB27:
LAB29:
LAB28:    xsi_set_current_line(125, ng0);

LAB115:    xsi_set_current_line(127, ng0);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng5)));
    memset(t14, 0, 8);
    if (*((unsigned int *)t3) != *((unsigned int *)t2))
        goto LAB117;

LAB116:    t5 = (t3 + 4);
    t7 = (t2 + 4);
    if (*((unsigned int *)t5) != *((unsigned int *)t7))
        goto LAB117;

LAB118:    t8 = (t14 + 4);
    t15 = *((unsigned int *)t8);
    t16 = (~(t15));
    t17 = *((unsigned int *)t14);
    t21 = (t17 & t16);
    t22 = (t21 != 0);
    if (t22 > 0)
        goto LAB119;

LAB120:
LAB121:
LAB30:    goto LAB2;

LAB8:    xsi_set_current_line(80, ng0);

LAB31:    xsi_set_current_line(82, ng0);
    t7 = (t0 + 600U);
    t8 = *((char **)t7);
    t7 = (t0 + 1104);
    t9 = (t7 + 36U);
    t10 = *((char **)t9);
    t11 = (t0 + 1196);
    t12 = (t11 + 36U);
    t13 = *((char **)t12);
    t15 = *((unsigned int *)t10);
    t16 = *((unsigned int *)t13);
    t17 = (t15 & t16);
    *((unsigned int *)t14) = t17;
    t18 = (t10 + 4);
    t19 = (t13 + 4);
    t20 = (t14 + 4);
    t21 = *((unsigned int *)t18);
    t22 = *((unsigned int *)t19);
    t23 = (t21 | t22);
    *((unsigned int *)t20) = t23;
    t24 = *((unsigned int *)t20);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB32;

LAB33:
LAB34:    memset(t46, 0, 8);
    if (*((unsigned int *)t8) != *((unsigned int *)t14))
        goto LAB36;

LAB35:    t47 = (t8 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB36;

LAB37:    t49 = (t46 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (~(t50));
    t52 = *((unsigned int *)t46);
    t53 = (t52 & t51);
    t54 = (t53 != 0);
    if (t54 > 0)
        goto LAB38;

LAB39:
LAB40:    goto LAB30;

LAB10:    xsi_set_current_line(88, ng0);

LAB42:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 ^ t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB43;

LAB44:
LAB45:    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB47;

LAB46:    t19 = (t5 + 4);
    t20 = (t14 + 4);
    if (*((unsigned int *)t19) != *((unsigned int *)t20))
        goto LAB47;

LAB48:    t28 = (t46 + 4);
    t30 = *((unsigned int *)t28);
    t31 = (~(t30));
    t32 = *((unsigned int *)t46);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB49;

LAB50:
LAB51:    goto LAB30;

LAB12:    xsi_set_current_line(94, ng0);

LAB53:    xsi_set_current_line(95, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t14 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB54;

LAB55:
LAB56:    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB58;

LAB57:    t28 = (t5 + 4);
    t29 = (t14 + 4);
    if (*((unsigned int *)t28) != *((unsigned int *)t29))
        goto LAB58;

LAB59:    t47 = (t46 + 4);
    t42 = *((unsigned int *)t47);
    t43 = (~(t42));
    t44 = *((unsigned int *)t46);
    t45 = (t44 & t43);
    t50 = (t45 != 0);
    if (t50 > 0)
        goto LAB60;

LAB61:
LAB62:    goto LAB30;

LAB14:    xsi_set_current_line(100, ng0);

LAB64:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t15 = *((unsigned int *)t8);
    t16 = *((unsigned int *)t11);
    t17 = (t15 | t16);
    *((unsigned int *)t46) = t17;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t18 = (t46 + 4);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    *((unsigned int *)t18) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 != 0);
    if (t25 == 1)
        goto LAB65;

LAB66:
LAB67:    memset(t14, 0, 8);
    t28 = (t14 + 4);
    t29 = (t46 + 4);
    t42 = *((unsigned int *)t46);
    t43 = (~(t42));
    *((unsigned int *)t14) = t43;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB69;

LAB68:    t52 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t52 & 4294967295U);
    t53 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t53 & 4294967295U);
    memset(t66, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB71;

LAB70:    t47 = (t5 + 4);
    t48 = (t14 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB71;

LAB72:    t49 = (t66 + 4);
    t54 = *((unsigned int *)t49);
    t67 = (~(t54));
    t68 = *((unsigned int *)t66);
    t69 = (t68 & t67);
    t70 = (t69 != 0);
    if (t70 > 0)
        goto LAB73;

LAB74:
LAB75:    goto LAB30;

LAB16:    xsi_set_current_line(106, ng0);

LAB77:    xsi_set_current_line(107, ng0);
    t3 = (t0 + 600U);
    t5 = *((char **)t3);
    t3 = (t0 + 1104);
    t7 = (t3 + 36U);
    t8 = *((char **)t7);
    t9 = (t0 + 1196);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t11, 32);
    memset(t46, 0, 8);
    if (*((unsigned int *)t5) != *((unsigned int *)t14))
        goto LAB79;

LAB78:    t12 = (t5 + 4);
    t13 = (t14 + 4);
    if (*((unsigned int *)t12) != *((unsigned int *)t13))
        goto LAB79;

LAB80:    memset(t66, 0, 8);
    t18 = (t46 + 4);
    t15 = *((unsigned int *)t18);
    t16 = (~(t15));
    t17 = *((unsigned int *)t46);
    t21 = (t17 & t16);
    t22 = (t21 & 1U);
    if (t22 != 0)
        goto LAB81;

LAB82:    if (*((unsigned int *)t18) != 0)
        goto LAB83;

LAB84:    t20 = (t66 + 4);
    t23 = *((unsigned int *)t66);
    t24 = *((unsigned int *)t20);
    t25 = (t23 || t24);
    if (t25 > 0)
        goto LAB85;

LAB86:    memcpy(t73, t66, 8);

LAB87:    t61 = (t73 + 4);
    t78 = *((unsigned int *)t61);
    t79 = (~(t78));
    t80 = *((unsigned int *)t73);
    t81 = (t80 & t79);
    t82 = (t81 != 0);
    if (t82 > 0)
        goto LAB98;

LAB99:
LAB100:    xsi_set_current_line(111, ng0);
    t2 = (t0 + 784U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng7)));
    memset(t14, 0, 8);
    t5 = (t3 + 4);
    t7 = (t2 + 4);
    t15 = *((unsigned int *)t3);
    t16 = *((unsigned int *)t2);
    t17 = (t15 ^ t16);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 ^ t22);
    t24 = (t17 | t23);
    t25 = *((unsigned int *)t5);
    t26 = *((unsigned int *)t7);
    t27 = (t25 | t26);
    t30 = (~(t27));
    t31 = (t24 & t30);
    if (t31 != 0)
        goto LAB105;

LAB102:    if (t27 != 0)
        goto LAB104;

LAB103:    *((unsigned int *)t14) = 1;

LAB105:    t9 = (t14 + 4);
    t32 = *((unsigned int *)t9);
    t33 = (~(t32));
    t34 = *((unsigned int *)t14);
    t35 = (t34 & t33);
    t36 = (t35 != 0);
    if (t36 > 0)
        goto LAB106;

LAB107:
LAB108:    goto LAB30;

LAB18:    xsi_set_current_line(115, ng0);

LAB110:    goto LAB30;

LAB20:    xsi_set_current_line(117, ng0);

LAB111:    goto LAB30;

LAB22:    xsi_set_current_line(119, ng0);

LAB112:    goto LAB30;

LAB24:    xsi_set_current_line(121, ng0);

LAB113:    goto LAB30;

LAB26:    xsi_set_current_line(123, ng0);

LAB114:    goto LAB30;

LAB32:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t20);
    *((unsigned int *)t14) = (t26 | t27);
    t28 = (t10 + 4);
    t29 = (t13 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t28);
    t33 = (~(t32));
    t34 = *((unsigned int *)t13);
    t35 = (~(t34));
    t36 = *((unsigned int *)t29);
    t37 = (~(t36));
    t38 = (t31 & t33);
    t39 = (t35 & t37);
    t40 = (~(t38));
    t41 = (~(t39));
    t42 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t42 & t40);
    t43 = *((unsigned int *)t20);
    *((unsigned int *)t20) = (t43 & t41);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t40);
    t45 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t45 & t41);
    goto LAB34;

LAB36:    *((unsigned int *)t46) = 1;
    goto LAB37;

LAB38:    xsi_set_current_line(82, ng0);

LAB41:    xsi_set_current_line(83, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng13, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB40;

LAB43:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    goto LAB45;

LAB47:    *((unsigned int *)t46) = 1;
    goto LAB48;

LAB49:    xsi_set_current_line(89, ng0);

LAB52:    xsi_set_current_line(90, ng0);
    t29 = (t0 + 1288);
    t47 = (t29 + 36U);
    t48 = *((char **)t47);
    t49 = (t0 + 1104);
    t55 = (t49 + 36U);
    t56 = *((char **)t55);
    t57 = (t0 + 1196);
    t58 = (t57 + 36U);
    t59 = *((char **)t58);
    t60 = (t0 + 600U);
    t61 = *((char **)t60);
    xsi_vlogfile_write(1, 0, 0, ng15, 5, t0, (char)118, t48, 4, (char)118, t56, 32, (char)118, t59, 32, (char)118, t61, 32);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB51;

LAB54:    t26 = *((unsigned int *)t14);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t14) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB56;

LAB58:    *((unsigned int *)t46) = 1;
    goto LAB59;

LAB60:    xsi_set_current_line(95, ng0);

LAB63:    xsi_set_current_line(96, ng0);
    t48 = (t0 + 1288);
    t49 = (t48 + 36U);
    t55 = *((char **)t49);
    t56 = (t0 + 1104);
    t57 = (t56 + 36U);
    t58 = *((char **)t57);
    t59 = (t0 + 1196);
    t60 = (t59 + 36U);
    t61 = *((char **)t60);
    t62 = (t0 + 600U);
    t63 = *((char **)t62);
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)118, t55, 4, (char)118, t58, 32, (char)118, t61, 32, (char)118, t63, 32);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB62;

LAB65:    t26 = *((unsigned int *)t46);
    t27 = *((unsigned int *)t18);
    *((unsigned int *)t46) = (t26 | t27);
    t19 = (t8 + 4);
    t20 = (t11 + 4);
    t30 = *((unsigned int *)t19);
    t31 = (~(t30));
    t32 = *((unsigned int *)t8);
    t38 = (t32 & t31);
    t33 = *((unsigned int *)t20);
    t34 = (~(t33));
    t35 = *((unsigned int *)t11);
    t39 = (t35 & t34);
    t36 = (~(t38));
    t37 = (~(t39));
    t40 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t40 & t36);
    t41 = *((unsigned int *)t18);
    *((unsigned int *)t18) = (t41 & t37);
    goto LAB67;

LAB69:    t44 = *((unsigned int *)t14);
    t45 = *((unsigned int *)t29);
    *((unsigned int *)t14) = (t44 | t45);
    t50 = *((unsigned int *)t28);
    t51 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t50 | t51);
    goto LAB68;

LAB71:    *((unsigned int *)t66) = 1;
    goto LAB72;

LAB73:    xsi_set_current_line(101, ng0);

LAB76:    xsi_set_current_line(102, ng0);
    t55 = (t0 + 1288);
    t56 = (t55 + 36U);
    t57 = *((char **)t56);
    t58 = (t0 + 1104);
    t59 = (t58 + 36U);
    t60 = *((char **)t59);
    t61 = (t0 + 1196);
    t62 = (t61 + 36U);
    t63 = *((char **)t62);
    t64 = (t0 + 600U);
    t65 = *((char **)t64);
    xsi_vlogfile_write(1, 0, 0, ng19, 5, t0, (char)118, t57, 4, (char)118, t60, 32, (char)118, t63, 32, (char)118, t65, 32);
    xsi_set_current_line(103, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB75;

LAB79:    *((unsigned int *)t46) = 1;
    goto LAB80;

LAB81:    *((unsigned int *)t66) = 1;
    goto LAB84;

LAB83:    t19 = (t66 + 4);
    *((unsigned int *)t66) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB84;

LAB85:    t28 = (t0 + 784U);
    t29 = *((char **)t28);
    t28 = ((char*)((ng7)));
    memset(t71, 0, 8);
    if (*((unsigned int *)t29) != *((unsigned int *)t28))
        goto LAB89;

LAB88:    t47 = (t29 + 4);
    t48 = (t28 + 4);
    if (*((unsigned int *)t47) != *((unsigned int *)t48))
        goto LAB89;

LAB90:    memset(t72, 0, 8);
    t49 = (t71 + 4);
    t26 = *((unsigned int *)t49);
    t27 = (~(t26));
    t30 = *((unsigned int *)t71);
    t31 = (t30 & t27);
    t32 = (t31 & 1U);
    if (t32 != 0)
        goto LAB91;

LAB92:    if (*((unsigned int *)t49) != 0)
        goto LAB93;

LAB94:    t33 = *((unsigned int *)t66);
    t34 = *((unsigned int *)t72);
    t35 = (t33 & t34);
    *((unsigned int *)t73) = t35;
    t56 = (t66 + 4);
    t57 = (t72 + 4);
    t58 = (t73 + 4);
    t36 = *((unsigned int *)t56);
    t37 = *((unsigned int *)t57);
    t40 = (t36 | t37);
    *((unsigned int *)t58) = t40;
    t41 = *((unsigned int *)t58);
    t42 = (t41 != 0);
    if (t42 == 1)
        goto LAB95;

LAB96:
LAB97:    goto LAB87;

LAB89:    *((unsigned int *)t71) = 1;
    goto LAB90;

LAB91:    *((unsigned int *)t72) = 1;
    goto LAB94;

LAB93:    t55 = (t72 + 4);
    *((unsigned int *)t72) = 1;
    *((unsigned int *)t55) = 1;
    goto LAB94;

LAB95:    t43 = *((unsigned int *)t73);
    t44 = *((unsigned int *)t58);
    *((unsigned int *)t73) = (t43 | t44);
    t59 = (t66 + 4);
    t60 = (t72 + 4);
    t45 = *((unsigned int *)t66);
    t50 = (~(t45));
    t51 = *((unsigned int *)t59);
    t52 = (~(t51));
    t53 = *((unsigned int *)t72);
    t54 = (~(t53));
    t67 = *((unsigned int *)t60);
    t68 = (~(t67));
    t38 = (t50 & t52);
    t39 = (t54 & t68);
    t69 = (~(t38));
    t70 = (~(t39));
    t74 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t74 & t69);
    t75 = *((unsigned int *)t58);
    *((unsigned int *)t58) = (t75 & t70);
    t76 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t76 & t69);
    t77 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t77 & t70);
    goto LAB97;

LAB98:    xsi_set_current_line(107, ng0);

LAB101:    xsi_set_current_line(108, ng0);
    t62 = (t0 + 1288);
    t63 = (t62 + 36U);
    t64 = *((char **)t63);
    t65 = (t0 + 1104);
    t83 = (t65 + 36U);
    t84 = *((char **)t83);
    t85 = (t0 + 1196);
    t86 = (t85 + 36U);
    t87 = *((char **)t86);
    t88 = (t0 + 600U);
    t89 = *((char **)t88);
    t88 = (t0 + 784U);
    t90 = *((char **)t88);
    xsi_vlogfile_write(1, 0, 0, ng20, 6, t0, (char)118, t64, 4, (char)118, t84, 32, (char)118, t87, 32, (char)118, t89, 32, (char)118, t90, 1);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1380);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t7 = ((char*)((ng7)));
    memset(t14, 0, 8);
    xsi_vlog_signed_add(t14, 32, t5, 32, t7, 32);
    t8 = (t0 + 1380);
    xsi_vlogvar_assign_value(t8, t14, 0, 0, 32);
    goto LAB100;

LAB104:    t8 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB105;

LAB106:    xsi_set_current_line(111, ng0);

LAB109:    xsi_set_current_line(112, ng0);
    t10 = (t0 + 1288);
    t11 = (t10 + 36U);
    t12 = *((char **)t11);
    t13 = (t0 + 1104);
    t18 = (t13 + 36U);
    t19 = *((char **)t18);
    t20 = (t0 + 1196);
    t28 = (t20 + 36U);
    t29 = *((char **)t28);
    t47 = (t0 + 600U);
    t48 = *((char **)t47);
    t47 = (t0 + 784U);
    t49 = *((char **)t47);
    xsi_vlogfile_write(1, 0, 0, ng21, 6, t0, (char)118, t12, 4, (char)118, t19, 32, (char)118, t29, 32, (char)118, t48, 32, (char)118, t49, 1);
    goto LAB108;

LAB117:    *((unsigned int *)t14) = 1;
    goto LAB118;

LAB119:    xsi_set_current_line(127, ng0);

LAB122:    xsi_set_current_line(128, ng0);
    t9 = (t0 + 1288);
    t10 = (t9 + 36U);
    t11 = *((char **)t10);
    t12 = (t0 + 1104);
    t13 = (t12 + 36U);
    t18 = *((char **)t13);
    t19 = (t0 + 1196);
    t20 = (t19 + 36U);
    t28 = *((char **)t20);
    t29 = (t0 + 600U);
    t47 = *((char **)t29);
    xsi_vlogfile_write(1, 0, 0, ng26, 5, t0, (char)118, t11, 4, (char)118, t18, 32, (char)118, t28, 32, (char)118, t47, 32);
    goto LAB121;

}


extern void work_m_00000000000414502205_2429141254_init()
{
	static char *pe[] = {(void *)Initial_38_0,(void *)Always_77_1};
	xsi_register_didat("work_m_00000000000414502205_2429141254", "isim/test_alu_isim_beh.exe.sim/work/m_00000000000414502205_2429141254.didat");
	xsi_register_executes(pe);
}
