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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/Alu8bit/al.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_16439767405979520975_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989832805790689_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_16439989833707593767_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);


static void work_a_2609806276_1181938964_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7877);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 5504);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast(t13);

LAB2:    t18 = (t0 + 5344);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 5504);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}

static void work_a_2609806276_1181938964_p_1(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB3;

LAB4:
LAB7:    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t17 = (t0 + 5568);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 8U);
    xsi_driver_first_trans_fast(t17);

LAB2:    t23 = (t0 + 5360);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t1 = (t0 + 7728U);
    t7 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t5, t6, t1);
    t8 = (t5 + 12U);
    t9 = *((unsigned int *)t8);
    t10 = (1U * t9);
    t11 = (8U != t10);
    if (t11 == 1)
        goto LAB5;

LAB6:    t12 = (t0 + 5568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB5:    xsi_size_not_matching(8U, t10, 0);
    goto LAB6;

LAB8:    goto LAB2;

}

static void work_a_2609806276_1181938964_p_2(char *t0)
{
    char t27[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    char *t13;
    int t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    int t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t28;
    unsigned int t29;
    unsigned char t30;

LAB0:    t1 = (t0 + 4280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7880);
    t5 = xsi_mem_cmp(t2, t3, 3U);
    if (t5 == 1)
        goto LAB5;

LAB12:    t6 = (t0 + 7883);
    t8 = xsi_mem_cmp(t6, t3, 3U);
    if (t8 == 1)
        goto LAB6;

LAB13:    t9 = (t0 + 7886);
    t11 = xsi_mem_cmp(t9, t3, 3U);
    if (t11 == 1)
        goto LAB7;

LAB14:    t12 = (t0 + 7889);
    t14 = xsi_mem_cmp(t12, t3, 3U);
    if (t14 == 1)
        goto LAB8;

LAB15:    t15 = (t0 + 7892);
    t17 = xsi_mem_cmp(t15, t3, 3U);
    if (t17 == 1)
        goto LAB9;

LAB16:    t18 = (t0 + 7895);
    t20 = xsi_mem_cmp(t18, t3, 3U);
    if (t20 == 1)
        goto LAB10;

LAB17:
LAB11:    xsi_set_current_line(44, ng0);
    t2 = xsi_get_transient_memory(8U);
    memset(t2, 0, 8U);
    t3 = t2;
    memset(t3, (unsigned char)2, 8U);
    t4 = (t0 + 5632);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 8U);
    xsi_driver_first_trans_fast(t4);

LAB4:    xsi_set_current_line(43, ng0);

LAB29:    t2 = (t0 + 5376);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB30;

LAB1:    return;
LAB5:    xsi_set_current_line(44, ng0);
    t21 = (t0 + 2312U);
    t22 = *((char **)t21);
    t21 = (t0 + 5632);
    t23 = (t21 + 56U);
    t24 = *((char **)t23);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    memcpy(t26, t22, 8U);
    xsi_driver_first_trans_fast(t21);
    goto LAB4;

LAB6:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2312U);
    t3 = *((char **)t2);
    t2 = (t0 + 5632);
    t4 = (t2 + 56U);
    t6 = *((char **)t4);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 8U);
    xsi_driver_first_trans_fast(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7712U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 7728U);
    t7 = ieee_p_2592010699_sub_16439989832805790689_503743352(IEEE_P_2592010699, t27, t3, t2, t6, t4);
    t9 = (t27 + 12U);
    t28 = *((unsigned int *)t9);
    t29 = (1U * t28);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB19;

LAB20:    t10 = (t0 + 5632);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB8:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7712U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 7728U);
    t7 = ieee_p_2592010699_sub_16439767405979520975_503743352(IEEE_P_2592010699, t27, t3, t2, t6, t4);
    t9 = (t27 + 12U);
    t28 = *((unsigned int *)t9);
    t29 = (1U * t28);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB21;

LAB22:    t10 = (t0 + 5632);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB9:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7712U);
    t4 = (t0 + 1192U);
    t6 = *((char **)t4);
    t4 = (t0 + 7728U);
    t7 = ieee_p_2592010699_sub_16439989833707593767_503743352(IEEE_P_2592010699, t27, t3, t2, t6, t4);
    t9 = (t27 + 12U);
    t28 = *((unsigned int *)t9);
    t29 = (1U * t28);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB23;

LAB24:    t10 = (t0 + 5632);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    t15 = (t13 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t7, 8U);
    xsi_driver_first_trans_fast(t10);
    goto LAB4;

LAB10:    xsi_set_current_line(44, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t2 = (t0 + 7712U);
    t4 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t27, t3, t2);
    t6 = (t27 + 12U);
    t28 = *((unsigned int *)t6);
    t29 = (1U * t28);
    t30 = (8U != t29);
    if (t30 == 1)
        goto LAB25;

LAB26:    t7 = (t0 + 5632);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    t12 = (t10 + 56U);
    t13 = *((char **)t12);
    memcpy(t13, t4, 8U);
    xsi_driver_first_trans_fast(t7);
    goto LAB4;

LAB18:;
LAB19:    xsi_size_not_matching(8U, t29, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(8U, t29, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(8U, t29, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(8U, t29, 0);
    goto LAB26;

LAB27:    t3 = (t0 + 5376);
    *((int *)t3) = 0;
    goto LAB2;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

}

static void work_a_2609806276_1181938964_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 5696);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 8U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5392);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2609806276_1181938964_p_4(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t5;
    unsigned int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned char t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7898);
    t5 = 1;
    if (3U == 3U)
        goto LAB8;

LAB9:    t5 = 0;

LAB10:    if (t5 == 1)
        goto LAB5;

LAB6:    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t9 = (t0 + 7901);
    t12 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t12 = 0;

LAB16:    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t23 = (t0 + 5760);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t23);

LAB2:    t28 = (t0 + 5408);
    *((int *)t28) = 1;

LAB1:    return;
LAB3:    t16 = (t0 + 2472U);
    t17 = *((char **)t16);
    t18 = *((unsigned char *)t17);
    t16 = (t0 + 5760);
    t19 = (t16 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((unsigned char *)t22) = t18;
    xsi_driver_first_trans_fast_port(t16);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t6 = 0;

LAB11:    if (t6 < 3U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t7 = (t3 + t6);
    t8 = (t2 + t6);
    if (*((unsigned char *)t7) != *((unsigned char *)t8))
        goto LAB9;

LAB13:    t6 = (t6 + 1);
    goto LAB11;

LAB14:    t13 = 0;

LAB17:    if (t13 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t14 = (t10 + t13);
    t15 = (t9 + t13);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB15;

LAB19:    t13 = (t13 + 1);
    goto LAB17;

LAB21:    goto LAB2;

}

static void work_a_2609806276_1181938964_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;

LAB0:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7904);
    t4 = 1;
    if (8U == 8U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:
LAB11:    t13 = (t0 + 5824);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((unsigned char *)t17) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t13);

LAB2:    t18 = (t0 + 5424);
    *((int *)t18) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 5824);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

LAB5:    t5 = 0;

LAB8:    if (t5 < 8U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB12:    goto LAB2;

}


extern void work_a_2609806276_1181938964_init()
{
	static char *pe[] = {(void *)work_a_2609806276_1181938964_p_0,(void *)work_a_2609806276_1181938964_p_1,(void *)work_a_2609806276_1181938964_p_2,(void *)work_a_2609806276_1181938964_p_3,(void *)work_a_2609806276_1181938964_p_4,(void *)work_a_2609806276_1181938964_p_5};
	xsi_register_didat("work_a_2609806276_1181938964", "isim/tb_alu8_isim_beh.exe.sim/work/a_2609806276_1181938964.didat");
	xsi_register_executes(pe);
}
