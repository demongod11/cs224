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
    work_m_00000000004231341692_1478632937_init();
    work_m_00000000000343416524_0421197421_init();
    work_m_00000000002789766555_2725559894_init();
    work_m_00000000002112246354_0295930199_init();
    work_m_00000000001820799927_4120148092_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000001820799927_4120148092");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
