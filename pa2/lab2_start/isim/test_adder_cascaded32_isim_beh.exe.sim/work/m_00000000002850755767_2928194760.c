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
static const char *ng0 = "//vmware-host/Shared Folders/shared_folder/cs141/pa2/lab2_start/test_adder_cascaded32.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static int ng3[] = {31, 0};
static const char *ng4 = "%b + %b is %b with carryover %b";
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {10U, 0U};
static const char *ng7 = "Error: %d + %d is %d with carryover %d";
static const char *ng8 = "Completed.";



static void Initial_44_0(char *t0)
{
    char t4[8];
    char t17[8];
    char t35[8];
    char t36[8];
    char t53[8];
    char t79[8];
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
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    char *t54;
    char *t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    char *t80;

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
LAB5:    xsi_set_current_line(49, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 920);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(50, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1012);
    t5 = (t0 + 1012);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 920);
    t5 = (t0 + 920);
    t6 = (t5 + 44U);
    t7 = *((char **)t6);
    t8 = ((char*)((ng3)));
    xsi_vlog_generic_convert_bit_index(t4, t7, 2, t8, 32, 1);
    t9 = (t4 + 4);
    t10 = *((unsigned int *)t9);
    t11 = (!(t10));
    if (t11 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1528);
    xsi_process_wait(t2, 10000LL);
    *((char **)t1) = &&LAB10;
    goto LAB1;

LAB6:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB7;

LAB8:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t4), 1);
    goto LAB9;

LAB10:    xsi_set_current_line(54, ng0);
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
    t18 = *((char **)t9);
    memset(t17, 0, 8);
    t19 = (t17 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4294967295U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967295U);
    t27 = (t0 + 692U);
    t28 = *((char **)t27);
    t27 = (t0 + 600U);
    t29 = *((char **)t27);
    xsi_vlogfile_write(1, 0, 0, ng4, 5, t0, (char)118, t4, 32, (char)118, t17, 32, (char)118, t28, 32, (char)118, t29, 1);
    xsi_set_current_line(59, ng0);
    xsi_set_current_line(59, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 1012);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);

LAB11:    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t10 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB13;

LAB12:    if (t24 != 0)
        goto LAB14;

LAB15:    t18 = (t4 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(73, ng0);
    xsi_vlogfile_write(1, 0, 0, ng8, 1, t0);
    goto LAB1;

LAB13:    *((unsigned int *)t4) = 1;
    goto LAB15;

LAB14:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(59, ng0);

LAB18:    xsi_set_current_line(60, ng0);
    xsi_set_current_line(60, ng0);
    t19 = ((char*)((ng5)));
    t20 = (t0 + 920);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 32);

LAB19:    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng6)));
    memset(t4, 0, 8);
    t7 = (t5 + 4);
    t8 = (t6 + 4);
    t10 = *((unsigned int *)t5);
    t12 = *((unsigned int *)t6);
    t13 = (t10 ^ t12);
    t14 = *((unsigned int *)t7);
    t15 = *((unsigned int *)t8);
    t16 = (t14 ^ t15);
    t21 = (t13 | t16);
    t22 = *((unsigned int *)t7);
    t23 = *((unsigned int *)t8);
    t24 = (t22 | t23);
    t25 = (~(t24));
    t26 = (t21 & t25);
    if (t26 != 0)
        goto LAB21;

LAB20:    if (t24 != 0)
        goto LAB22;

LAB23:    t18 = (t4 + 4);
    t30 = *((unsigned int *)t18);
    t31 = (~(t30));
    t32 = *((unsigned int *)t4);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB24;

LAB25:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1012);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 1012);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB11;

LAB21:    *((unsigned int *)t4) = 1;
    goto LAB23;

LAB22:    t9 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB23;

LAB24:    xsi_set_current_line(60, ng0);

LAB26:    xsi_set_current_line(61, ng0);
    t19 = (t0 + 1528);
    xsi_process_wait(t19, 100000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB27:    xsi_set_current_line(62, ng0);
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
    t18 = *((char **)t9);
    memset(t17, 0, 8);
    t19 = (t17 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4294967295U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967295U);
    memset(t35, 0, 8);
    xsi_vlog_unsigned_add(t35, 32, t4, 32, t17, 32);
    t27 = (t0 + 692U);
    t28 = *((char **)t27);
    memset(t36, 0, 8);
    t27 = (t35 + 4);
    t29 = (t28 + 4);
    t30 = *((unsigned int *)t35);
    t31 = *((unsigned int *)t28);
    t32 = (t30 ^ t31);
    t33 = *((unsigned int *)t27);
    t34 = *((unsigned int *)t29);
    t37 = (t33 ^ t34);
    t38 = (t32 | t37);
    t39 = *((unsigned int *)t27);
    t40 = *((unsigned int *)t29);
    t41 = (t39 | t40);
    t42 = (~(t41));
    t43 = (t38 & t42);
    if (t43 != 0)
        goto LAB29;

LAB28:    if (t41 != 0)
        goto LAB30;

LAB31:    t45 = (t36 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (~(t46));
    t48 = *((unsigned int *)t36);
    t49 = (t48 & t47);
    t50 = (t49 != 0);
    if (t50 > 0)
        goto LAB32;

LAB33:
LAB34:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 920);
    t3 = (t2 + 36U);
    t5 = *((char **)t3);
    t6 = ((char*)((ng2)));
    memset(t4, 0, 8);
    xsi_vlog_unsigned_add(t4, 32, t5, 32, t6, 32);
    t7 = (t0 + 920);
    xsi_vlogvar_assign_value(t7, t4, 0, 0, 32);
    goto LAB19;

LAB29:    *((unsigned int *)t36) = 1;
    goto LAB31;

LAB30:    t44 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t44) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(62, ng0);

LAB35:    xsi_set_current_line(63, ng0);
    t51 = (t0 + 600U);
    t52 = *((char **)t51);
    t51 = ((char*)((ng2)));
    memset(t53, 0, 8);
    t54 = (t52 + 4);
    t55 = (t51 + 4);
    t56 = *((unsigned int *)t52);
    t57 = *((unsigned int *)t51);
    t58 = (t56 ^ t57);
    t59 = *((unsigned int *)t54);
    t60 = *((unsigned int *)t55);
    t61 = (t59 ^ t60);
    t62 = (t58 | t61);
    t63 = *((unsigned int *)t54);
    t64 = *((unsigned int *)t55);
    t65 = (t63 | t64);
    t66 = (~(t65));
    t67 = (t62 & t66);
    if (t67 != 0)
        goto LAB37;

LAB36:    if (t65 != 0)
        goto LAB38;

LAB39:    t69 = (t53 + 4);
    t70 = *((unsigned int *)t69);
    t71 = (~(t70));
    t72 = *((unsigned int *)t53);
    t73 = (t72 & t71);
    t74 = (t73 != 0);
    if (t74 > 0)
        goto LAB40;

LAB41:
LAB42:    goto LAB34;

LAB37:    *((unsigned int *)t53) = 1;
    goto LAB39;

LAB38:    t68 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t68) = 1;
    goto LAB39;

LAB40:    xsi_set_current_line(63, ng0);

LAB43:    xsi_set_current_line(64, ng0);
    t75 = (t0 + 1104);
    t76 = (t75 + 36U);
    t77 = *((char **)t76);
    t78 = ((char*)((ng2)));
    memset(t79, 0, 8);
    xsi_vlog_signed_add(t79, 32, t77, 32, t78, 32);
    t80 = (t0 + 1104);
    xsi_vlogvar_assign_value(t80, t79, 0, 0, 32);
    xsi_set_current_line(65, ng0);
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
    t18 = *((char **)t9);
    memset(t17, 0, 8);
    t19 = (t17 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t25 & 4294967295U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 4294967295U);
    t27 = (t0 + 692U);
    t28 = *((char **)t27);
    t27 = (t0 + 600U);
    t29 = *((char **)t27);
    xsi_vlogfile_write(1, 0, 0, ng7, 5, t0, (char)118, t4, 32, (char)118, t17, 32, (char)118, t28, 32, (char)118, t29, 1);
    goto LAB42;

}


extern void work_m_00000000002850755767_2928194760_init()
{
	static char *pe[] = {(void *)Initial_44_0};
	xsi_register_didat("work_m_00000000002850755767_2928194760", "isim/test_adder_cascaded32_isim_beh.exe.sim/work/m_00000000002850755767_2928194760.didat");
	xsi_register_executes(pe);
}
