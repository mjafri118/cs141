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
    work_m_00000000000950705035_1933345437_init();
    work_m_00000000000950705035_0232670800_init();
    work_m_00000000000950705035_0162757535_init();
    work_m_00000000000950705035_3935712131_init();
    work_m_00000000003447599623_0232958653_init();
    work_m_00000000002109772112_1430200026_init();
    work_m_00000000004070936383_1857947156_init();
    work_m_00000000003287384631_2341572814_init();
    work_m_00000000002865343876_2117293305_init();
    work_m_00000000001117478319_2349834685_init();
    work_m_00000000001357578004_3787525498_init();
    work_m_00000000000678303198_2991613086_init();
    work_m_00000000002307665855_0359839574_init();
    work_m_00000000001028106896_1847782055_init();
    work_m_00000000001357578004_1039680071_init();
    work_m_00000000000678303198_0520263349_init();
    work_m_00000000002307665855_1526153041_init();
    work_m_00000000001028106896_3461673138_init();
    work_m_00000000001384008462_2725559894_init();
    work_m_00000000000414502205_2429141254_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000414502205_2429141254");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
