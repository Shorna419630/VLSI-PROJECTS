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
static const char *ng0 = "/home/ise/cpu/tb_mini_cpu.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_0814787933_1064484548_p_0(char *t0)
{
    int64 t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(28, ng0);

LAB3:    t1 = (5 * 1000LL);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t4);
    t2 = (t0 + 3600);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t5;
    xsi_driver_first_trans_delta(t2, 0U, 1, t1);
    t10 = (t0 + 3600);
    xsi_driver_intertial_reject(t10, t1, t1);

LAB2:    t11 = (t0 + 3392);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_0814787933_1064484548_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned char t7;
    int64 t8;
    unsigned char t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned char t13;
    unsigned char t14;

LAB0:    t1 = (t0 + 3072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(33, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(34, ng0);

LAB6:    t2 = (t0 + 3408);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    t4 = (t0 + 3408);
    *((int *)t4) = 0;
    xsi_set_current_line(35, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB4;
    else
        goto LAB6;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5519);
    t9 = 1;
    if (8U == 8U)
        goto LAB17;

LAB18:    t9 = 0;

LAB19:    if (t9 == 1)
        goto LAB14;

LAB15:    t7 = (unsigned char)0;

LAB16:    if (t7 == 0)
        goto LAB12;

LAB13:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 3664);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);

LAB25:    t2 = (t0 + 3424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB12:    t11 = (t0 + 5527);
    xsi_report(t11, 17U, (unsigned char)2);
    goto LAB13;

LAB14:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t7 = t14;
    goto LAB16;

LAB17:    t10 = 0;

LAB20:    if (t10 < 8U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB18;

LAB22:    t10 = (t10 + 1);
    goto LAB20;

LAB23:    t4 = (t0 + 3424);
    *((int *)t4) = 0;
    xsi_set_current_line(45, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB29:    *((char **)t1) = &&LAB30;
    goto LAB1;

LAB24:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB23;
    else
        goto LAB25;

LAB26:    goto LAB24;

LAB27:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5544);
    t9 = 1;
    if (8U == 8U)
        goto LAB36;

LAB37:    t9 = 0;

LAB38:    if (t9 == 1)
        goto LAB33;

LAB34:    t7 = (unsigned char)0;

LAB35:    if (t7 == 0)
        goto LAB31;

LAB32:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 5567);
    xsi_report(t2, 10U, (unsigned char)0);
    xsi_set_current_line(52, ng0);

LAB44:    t2 = (t0 + 3440);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB45;
    goto LAB1;

LAB28:    goto LAB27;

LAB30:    goto LAB28;

LAB31:    t11 = (t0 + 5552);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB32;

LAB33:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB35;

LAB36:    t10 = 0;

LAB39:    if (t10 < 8U)
        goto LAB40;
    else
        goto LAB38;

LAB40:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB37;

LAB41:    t10 = (t10 + 1);
    goto LAB39;

LAB42:    t4 = (t0 + 3440);
    *((int *)t4) = 0;
    xsi_set_current_line(53, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB48:    *((char **)t1) = &&LAB49;
    goto LAB1;

LAB43:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB42;
    else
        goto LAB44;

LAB45:    goto LAB43;

LAB46:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5577);
    t9 = 1;
    if (8U == 8U)
        goto LAB55;

LAB56:    t9 = 0;

LAB57:    if (t9 == 1)
        goto LAB52;

LAB53:    t7 = (unsigned char)0;

LAB54:    if (t7 == 0)
        goto LAB50;

LAB51:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 5600);
    xsi_report(t2, 10U, (unsigned char)0);
    xsi_set_current_line(60, ng0);

LAB63:    t2 = (t0 + 3456);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB64;
    goto LAB1;

LAB47:    goto LAB46;

LAB49:    goto LAB47;

LAB50:    t11 = (t0 + 5585);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB51;

LAB52:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB54;

LAB55:    t10 = 0;

LAB58:    if (t10 < 8U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB56;

LAB60:    t10 = (t10 + 1);
    goto LAB58;

LAB61:    t4 = (t0 + 3456);
    *((int *)t4) = 0;
    xsi_set_current_line(61, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB67:    *((char **)t1) = &&LAB68;
    goto LAB1;

LAB62:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB61;
    else
        goto LAB63;

LAB64:    goto LAB62;

LAB65:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5610);
    t9 = 1;
    if (8U == 8U)
        goto LAB74;

LAB75:    t9 = 0;

LAB76:    if (t9 == 1)
        goto LAB71;

LAB72:    t7 = (unsigned char)0;

LAB73:    if (t7 == 0)
        goto LAB69;

LAB70:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5636);
    xsi_report(t2, 13U, (unsigned char)0);
    xsi_set_current_line(68, ng0);

LAB82:    t2 = (t0 + 3472);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB83;
    goto LAB1;

LAB66:    goto LAB65;

LAB68:    goto LAB66;

LAB69:    t11 = (t0 + 5618);
    xsi_report(t11, 18U, (unsigned char)2);
    goto LAB70;

LAB71:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB73;

LAB74:    t10 = 0;

LAB77:    if (t10 < 8U)
        goto LAB78;
    else
        goto LAB76;

LAB78:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB75;

LAB79:    t10 = (t10 + 1);
    goto LAB77;

LAB80:    t4 = (t0 + 3472);
    *((int *)t4) = 0;
    xsi_set_current_line(69, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB86:    *((char **)t1) = &&LAB87;
    goto LAB1;

LAB81:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB80;
    else
        goto LAB82;

LAB83:    goto LAB81;

LAB84:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5649);
    t9 = 1;
    if (8U == 8U)
        goto LAB93;

LAB94:    t9 = 0;

LAB95:    if (t9 == 1)
        goto LAB90;

LAB91:    t7 = (unsigned char)0;

LAB92:    if (t7 == 0)
        goto LAB88;

LAB89:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 5672);
    xsi_report(t2, 10U, (unsigned char)0);
    xsi_set_current_line(76, ng0);

LAB101:    t2 = (t0 + 3488);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB102;
    goto LAB1;

LAB85:    goto LAB84;

LAB87:    goto LAB85;

LAB88:    t11 = (t0 + 5657);
    xsi_report(t11, 15U, (unsigned char)2);
    goto LAB89;

LAB90:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB92;

LAB93:    t10 = 0;

LAB96:    if (t10 < 8U)
        goto LAB97;
    else
        goto LAB95;

LAB97:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB94;

LAB98:    t10 = (t10 + 1);
    goto LAB96;

LAB99:    t4 = (t0 + 3488);
    *((int *)t4) = 0;
    xsi_set_current_line(77, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB105:    *((char **)t1) = &&LAB106;
    goto LAB1;

LAB100:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB99;
    else
        goto LAB101;

LAB102:    goto LAB100;

LAB103:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5682);
    t9 = 1;
    if (8U == 8U)
        goto LAB112;

LAB113:    t9 = 0;

LAB114:    if (t9 == 1)
        goto LAB109;

LAB110:    t7 = (unsigned char)0;

LAB111:    if (t7 == 0)
        goto LAB107;

LAB108:    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5704);
    xsi_report(t2, 9U, (unsigned char)0);
    xsi_set_current_line(84, ng0);

LAB120:    t2 = (t0 + 3504);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB121;
    goto LAB1;

LAB104:    goto LAB103;

LAB106:    goto LAB104;

LAB107:    t11 = (t0 + 5690);
    xsi_report(t11, 14U, (unsigned char)2);
    goto LAB108;

LAB109:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB111;

LAB112:    t10 = 0;

LAB115:    if (t10 < 8U)
        goto LAB116;
    else
        goto LAB114;

LAB116:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB113;

LAB117:    t10 = (t10 + 1);
    goto LAB115;

LAB118:    t4 = (t0 + 3504);
    *((int *)t4) = 0;
    xsi_set_current_line(85, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB124:    *((char **)t1) = &&LAB125;
    goto LAB1;

LAB119:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB118;
    else
        goto LAB120;

LAB121:    goto LAB119;

LAB122:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5713);
    t9 = 1;
    if (8U == 8U)
        goto LAB131;

LAB132:    t9 = 0;

LAB133:    if (t9 == 1)
        goto LAB128;

LAB129:    t7 = (unsigned char)0;

LAB130:    if (t7 == 0)
        goto LAB126;

LAB127:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5742);
    xsi_report(t2, 21U, (unsigned char)0);
    xsi_set_current_line(92, ng0);

LAB139:    t2 = (t0 + 3520);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB140;
    goto LAB1;

LAB123:    goto LAB122;

LAB125:    goto LAB123;

LAB126:    t11 = (t0 + 5721);
    xsi_report(t11, 21U, (unsigned char)2);
    goto LAB127;

LAB128:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)3);
    t7 = t14;
    goto LAB130;

LAB131:    t10 = 0;

LAB134:    if (t10 < 8U)
        goto LAB135;
    else
        goto LAB133;

LAB135:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB132;

LAB136:    t10 = (t10 + 1);
    goto LAB134;

LAB137:    t4 = (t0 + 3520);
    *((int *)t4) = 0;
    xsi_set_current_line(93, ng0);
    t8 = (1 * 1000LL);
    t2 = (t0 + 2880);
    xsi_process_wait(t2, t8);

LAB143:    *((char **)t1) = &&LAB144;
    goto LAB1;

LAB138:    t3 = (t0 + 992U);
    t7 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t3, 0U, 0U);
    if (t7 == 1)
        goto LAB137;
    else
        goto LAB139;

LAB140:    goto LAB138;

LAB141:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 5763);
    t9 = 1;
    if (8U == 8U)
        goto LAB150;

LAB151:    t9 = 0;

LAB152:    if (t9 == 1)
        goto LAB147;

LAB148:    t7 = (unsigned char)0;

LAB149:    if (t7 == 0)
        goto LAB145;

LAB146:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 5800);
    xsi_report(t2, 29U, (unsigned char)0);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 5829);
    xsi_report(t2, 37U, (unsigned char)0);
    xsi_set_current_line(102, ng0);

LAB158:    *((char **)t1) = &&LAB159;
    goto LAB1;

LAB142:    goto LAB141;

LAB144:    goto LAB142;

LAB145:    t11 = (t0 + 5771);
    xsi_report(t11, 29U, (unsigned char)2);
    goto LAB146;

LAB147:    t11 = (t0 + 1672U);
    t12 = *((char **)t11);
    t13 = *((unsigned char *)t12);
    t14 = (t13 == (unsigned char)2);
    t7 = t14;
    goto LAB149;

LAB150:    t10 = 0;

LAB153:    if (t10 < 8U)
        goto LAB154;
    else
        goto LAB152;

LAB154:    t5 = (t3 + t10);
    t6 = (t2 + t10);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB151;

LAB155:    t10 = (t10 + 1);
    goto LAB153;

LAB156:    goto LAB2;

LAB157:    goto LAB156;

LAB159:    goto LAB157;

}


extern void work_a_0814787933_1064484548_init()
{
	static char *pe[] = {(void *)work_a_0814787933_1064484548_p_0,(void *)work_a_0814787933_1064484548_p_1};
	xsi_register_didat("work_a_0814787933_1064484548", "isim/tb_mini_cpu_isim_beh.exe.sim/work/a_0814787933_1064484548.didat");
	xsi_register_executes(pe);
}
