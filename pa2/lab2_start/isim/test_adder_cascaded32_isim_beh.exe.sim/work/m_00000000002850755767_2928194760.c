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
static const char *ng0 = "//vmware-host/Shared Folders/shared_with_vm/141git/cs141/pa2/lab2_start/test_adder_cascaded32.v";
static int ng1[] = {0, 0};
static int ng2[] = {32, 0};
static int ng3[] = {31, 0};
static int ng4[] = {1, 0};
static const char *ng5 = "%b + %b is %b with carryover %b";
static unsigned int ng6[] = {1U, 0U, 0U, 0U};
static unsigned int ng7[] = {10U, 0U, 0U, 0U};
static const char *ng8 = "Error: %d + %d is %d with carryover %d";
static int ng9[] = {1, 0, 0, 0};
static const char *ng10 = "Completed.";



static void Initial_44_0(char *t0)
{
    char t4[8];
    char t17[8];
    char t18[8];
    char t19[8];
    char t39[16];
    char t40[16];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t23;
    char *t24;
    unsigned int t25;
    int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    int t33;
    unsigned int t34;
    unsigned int t35;
    int t36;
    int t37;
    char *t38;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;

LAB0:    t1 = (t0 + 1628U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(44, ng0);

LAB4:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    t5 = (t0 + 1012);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    memset(t4, 0, 8);
    t3 = (t4 + 4);
    t5 = (t2 + 4);
    memcpy(t4, t2, 8);
    t10 = *((unsigned int *)t4);
    t12 = (~(t10));
    t13 = *((unsigned int *)t3);
    t14 = (t12 | t13);
    *((unsigned int *)t4) = t14;
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t16 & 4294967295U);
    t6 = (t0 + 920);
    t7 = (t0 + 920);
    t8 = (t7 + 44U);
    t9 = *((char **)t8);
    t20 = ((char*)((ng3)));
    t21 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t17, t18, t19, ((int*)(t9)), 2, t20, 32, 1, t21, 32, 1);
    t22 = (t17 + 4);
    t23 = *((unsigned int *)t22);
    t11 = (!(t23));
    t24 = (t18 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (!(t25));
    t27 = (t11 && t26);
    t28 = (t19 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    t5 = (t0 + 1012);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng3)));
    t9 = ((char*)((ng1)));
    xsi_vlog_convert_partindices(t4, t17, t18, ((int*)(t7)), 2, t8, 32, 1, t9, 32, 1);
    t20 = (t4 + 4);
    t10 = *((unsigned int *)t20);
    t11 = (!(t10));
    t21 = (t17 + 4);
    t12 = *((unsigned int *)t21);
    t26 = (!(t12));
    t27 = (t11 && t26);
    t22 = (t18 + 4);
    t13 = *((unsigned int *)t22);
    t30 = (!(t13));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB12;

LAB13:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 1012);
    t5 = (t0 + 1012);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng1)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 100000LL);
    *((char **)t1) = &&LAB16;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB9;

LAB10:    t32 = *((unsigned int *)t19);
    t33 = (t32 + 0);
    t34 = *((unsigned int *)t17);
    t35 = *((unsigned int *)t18);
    t36 = (t34 - t35);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t6, t4, t33, *((unsigned int *)t18), t37);
    goto LAB11;

LAB12:    t14 = *((unsigned int *)t18);
    t33 = (t14 + 0);
    t15 = *((unsigned int *)t4);
    t16 = *((unsigned int *)t17);
    t36 = (t15 - t16);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t3, t2, t33, *((unsigned int *)t17), t37);
    goto LAB13;

LAB14:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB15;

LAB16:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t12 = (t10 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 4294967295U);
    t8 = (t0 + 1012);
    t9 = (t8 + 36U);
    t20 = *((char **)t9);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t25 = (t23 >> 0);
    *((unsigned int *)t17) = t25;
    t29 = *((unsigned int *)t22);
    t32 = (t29 >> 0);
    *((unsigned int *)t21) = t32;
    t34 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 4294967295U);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 600U);
    t38 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng5, 5, t0, (char)118, t4, 32, (char)118, t17, 32, (char)118, t28, 32, (char)118, t38, 1);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 33);

LAB17:    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    xsi_vlog_unsigned_not_equal(t39, 33, t5, 33, t6, 33);
    t7 = (t39 + 4);
    t10 = *((unsigned int *)t7);
    t12 = (~(t10));
    t13 = *((unsigned int *)t39);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB18;

LAB19:    xsi_set_current_line(74, ng0);
    xsi_vlogfile_write(1, 0, 0, ng10, 1, t0);
    goto LAB1;

LAB18:    xsi_set_current_line(59, ng0);

LAB20:    xsi_set_current_line(61, ng0);
    xsi_set_current_line(61, ng0);
    t8 = ((char*)((ng6)));
    t9 = (t0 + 920);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 33);

LAB21:    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng7)));
    xsi_vlog_unsigned_not_equal(t39, 33, t5, 33, t6, 33);
    t7 = (t39 + 4);
    t10 = *((unsigned int *)t7);
    t12 = (~(t10));
    t13 = *((unsigned int *)t39);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB22;

LAB23:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    xsi_vlog_unsigned_add(t39, 33, t5, 33, t6, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t39, 0, 0, 33);
    goto LAB17;

LAB22:    xsi_set_current_line(61, ng0);

LAB24:    xsi_set_current_line(62, ng0);
    t8 = (t0 + 1528);
    xsi_process_wait(t8, 100000LL);
    *((char **)t1) = &&LAB25;
    goto LAB1;

LAB25:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = (t0 + 1012);
    t7 = (t6 + 36U);
    t8 = *((char **)t7);
    xsi_vlog_unsigned_add(t39, 33, t5, 33, t8, 33);
    t9 = (t0 + 692U);
    t20 = *((char **)t9);
    xsi_vlog_unsigned_not_equal(t40, 33, t39, 33, t20, 32);
    t9 = (t40 + 4);
    t10 = *((unsigned int *)t9);
    t12 = (~(t10));
    t13 = *((unsigned int *)t40);
    t14 = (t13 & t12);
    t15 = (t14 != 0);
    if (t15 > 0)
        goto LAB26;

LAB27:
LAB28:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng9)));
    xsi_vlog_unsigned_add(t39, 33, t5, 33, t6, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t39, 0, 0, 33);
    goto LAB21;

LAB26:    xsi_set_current_line(63, ng0);

LAB29:    xsi_set_current_line(64, ng0);
    t21 = (t0 + 600U);
    t22 = *((char **)t21);
    t21 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t24 = (t22 + 4);
    t28 = (t21 + 4);
    t16 = *((unsigned int *)t22);
    t23 = *((unsigned int *)t21);
    t25 = (t16 ^ t23);
    t29 = *((unsigned int *)t24);
    t32 = *((unsigned int *)t28);
    t34 = (t29 ^ t32);
    t35 = (t25 | t34);
    t41 = *((unsigned int *)t24);
    t42 = *((unsigned int *)t28);
    t43 = (t41 | t42);
    t44 = (~(t43));
    t45 = (t35 & t44);
    if (t45 != 0)
        goto LAB31;

LAB30:    if (t43 != 0)
        goto LAB32;

LAB33:    t46 = (t4 + 4);
    t47 = *((unsigned int *)t46);
    t48 = (~(t47));
    t49 = *((unsigned int *)t4);
    t50 = (t49 & t48);
    t51 = (t50 != 0);
    if (t51 > 0)
        goto LAB34;

LAB35:
LAB36:    goto LAB28;

LAB31:    *((unsigned int *)t4) = 1;
    goto LAB33;

LAB32:    t38 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t38) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(64, ng0);

LAB37:    xsi_set_current_line(65, ng0);
    t52 = (t0 + 1104);
    t53 = (t52 + 36U);
    t54 = *((char **)t53);
    t55 = ((char*)((ng4)));
    memset(t17, 0, 8);
    xsi_vlog_signed_add(t17, 32, t54, 32, t55, 32);
    t56 = (t0 + 1104);
    xsi_vlogvar_assign_value(t56, t17, 0, 0, 32);
    xsi_set_current_line(66, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    memset(t4, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t10 = *((unsigned int *)t5);
    t12 = (t10 >> 0);
    *((unsigned int *)t4) = t12;
    t13 = *((unsigned int *)t7);
    t14 = (t13 >> 0);
    *((unsigned int *)t6) = t14;
    t15 = *((unsigned int *)t4);
    *((unsigned int *)t4) = (t15 & 4294967295U);
    t16 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t16 & 4294967295U);
    t8 = (t0 + 1012);
    t9 = (t8 + 36U);
    t20 = *((char **)t9);
    memset(t17, 0, 8);
    t21 = (t17 + 4);
    t22 = (t20 + 4);
    t23 = *((unsigned int *)t20);
    t25 = (t23 >> 0);
    *((unsigned int *)t17) = t25;
    t29 = *((unsigned int *)t22);
    t32 = (t29 >> 0);
    *((unsigned int *)t21) = t32;
    t34 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t34 & 4294967295U);
    t35 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t35 & 4294967295U);
    t24 = (t0 + 692U);
    t28 = *((char **)t24);
    t24 = (t0 + 600U);
    t38 = *((char **)t24);
    xsi_vlogfile_write(1, 0, 0, ng8, 5, t0, (char)118, t4, 32, (char)118, t17, 32, (char)118, t28, 32, (char)118, t38, 1);
    goto LAB36;

}


extern void work_m_00000000002850755767_2928194760_init()
{
	static char *pe[] = {(void *)Initial_44_0};
	xsi_register_didat("work_m_00000000002850755767_2928194760", "isim/test_adder_cascaded32_isim_beh.exe.sim/work/m_00000000002850755767_2928194760.didat");
	xsi_register_executes(pe);
}
