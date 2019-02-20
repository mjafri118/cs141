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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003447599623_0232958653_init();
    work_m_00000000002109772112_1430200026_init();
    work_m_00000000004070936383_1857947156_init();
    work_m_00000000003287384631_2341572814_init();
    work_m_00000000002865343876_2117293305_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000002865343876_2117293305");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
