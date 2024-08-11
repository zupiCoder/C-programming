
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#include "naloga2.h"

void izdelaj(char** nizi, int indeks, const char* niz) {
    nizi[indeks] = malloc((strlen(niz) + 1) * sizeof(char));
    strcpy(nizi[indeks], niz);
}

int main() {
    int n = 468;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "GaxCYGSzx1EQXyfQLirFnZ2AWUHB_8r9LOBS4aog9d9MT1arjgbNen");
    izdelaj(nizi, 1, "m1eOYuULc2O5oXkWIIXFxWdzRgTwCJuh7XZOUmdzxjQ5aZtK8");
    izdelaj(nizi, 2, "zVeyp3rgwP0j73Ike6hfLzYIRy0u_r74PlYnh7c6");
    izdelaj(nizi, 3, "C7SUGAhoPejTJFBcnQYjqrjtyJ9Jiv56503sUTMo7YC61PxdqcL8FitEAdMmU43xCGs0i9YVD1wr_iUBRxAILwW_y2pwI4km2o");
    nizi[4] = nizi[0];
    izdelaj(nizi, 5, "C5eVcWROpy15sPA9_aksCBXlTnWdpLrOwdxK3RXT");
    izdelaj(nizi, 6, "3KKAP9jdRLTpvDrsgKPmdY35OExKVLrT2mbd_nlZKVlFbVMZUccdcjI9");
    izdelaj(nizi, 7, "lVDOoEMs2xiDKLKPAWPkstXAT");
    izdelaj(nizi, 8, "CN70un7ND_GNkt931I1Fh9LC68ABeyJfFhqVZWhxaUqkrcomvhwsbFkIormIm14eufuHYnBc2LtDqBOhPRXlUJqwlmf");
    izdelaj(nizi, 9, "ZFMJuu8oIXLENrbBPsCSiM3inMcKo");
    izdelaj(nizi, 10, "03kUgsNZk3WGlAXPBWaTVhOXCPE5zwstk1o9JLR0Kb");
    nizi[11] = nizi[10];
    izdelaj(nizi, 12, "tfqtC3VGx1YheLYOrWBk8wcje4Ij3Qya");
    nizi[13] = nizi[8];
    nizi[14] = nizi[4];
    izdelaj(nizi, 15, "k_9q4GKs4T1lyyMFO0OpvJVcFHN8cprZ6EEqNRHgrNawYL0QxetqrKV4tvr1aUxlvIVzrMm3TG5gCCuNcyz3RfrDK");
    nizi[16] = nizi[6];
    nizi[17] = nizi[0];
    nizi[18] = nizi[13];
    nizi[19] = nizi[13];
    nizi[20] = nizi[6];
    izdelaj(nizi, 21, "HQhyf4MIRnuABYFgbCwDhwSlZsHYmil7Mv8vYQ6fevGc");
    izdelaj(nizi, 22, "XantvB0kVSh7zdFLi6ugmi3kEMIAwGWKgJ4DqBb1DBGnv1hC2jcRfjlTILEt0WrULNAmk0GKWycNmXMJyAArl");
    izdelaj(nizi, 23, "wfUiKDpDWn0tLPmfazDXzdafLn7i9e2EitHxon9tW59Tydtpvh1UW5ikPgKvAnDteaq5cFFgOPNkzq36afVaVs6f3RqjRVoCzImG");
    izdelaj(nizi, 24, "Uf8nybBFL7Xgjo_KqLYSUpooxph89sXQM06BjjnsnchGiJIeVYnD");
    izdelaj(nizi, 25, "OI0C8Tx7KwwGZg9f");
    izdelaj(nizi, 26, "mTl78toc6Vl_i0G_6zD4JUGKtq7xhn2HC6GdUyQokO83v99nwrd2sQCwK1hEU");
    nizi[27] = nizi[8];
    nizi[28] = nizi[12];
    nizi[29] = nizi[23];
    nizi[30] = nizi[7];
    izdelaj(nizi, 31, "Y6BjnLYnKLcqo5");
    izdelaj(nizi, 32, "af6PxNepb49sGQG0fmyyCRZId93DbcDSFVfna9C64Ekr0pUOrrgzKan1tsvK50hnyBBqnGQgRlMPXxPvvOobVneS7xJ8sZijPF");
    nizi[33] = nizi[7];
    izdelaj(nizi, 34, "7GmJb_g8");
    nizi[35] = nizi[29];
    nizi[36] = nizi[18];
    izdelaj(nizi, 37, "9VE7KYLztjpSqGUQT");
    nizi[38] = nizi[14];
    izdelaj(nizi, 39, "_v9q5jg9G4ShGmze");
    izdelaj(nizi, 40, "oQPr7BBCPYtCjZw9GouMOrxX86nbz");
    izdelaj(nizi, 41, "Y7hgj4x6Ni1DRIqWqsjncMMAfBKrvTgj8H6nG8gcKDtXylGHuiHTeosjExZEt8t_AJu6TV");
    nizi[42] = nizi[0];
    izdelaj(nizi, 43, "kScXqCYsJ91ftdI_PJxK3EI3WkKPEGTClDNEVdZ84");
    nizi[44] = nizi[12];
    izdelaj(nizi, 45, "Ojtroa5aF_ePkEtj0BNzF8iHV_n2IU3DVX6DSI1r7");
    izdelaj(nizi, 46, "KmNEDvKEDuss180V_3hqiITCUxjZ09FzS4r5lMYQ");
    nizi[47] = nizi[18];
    izdelaj(nizi, 48, "qKvqek1DucO");
    izdelaj(nizi, 49, "pcSP6x6CaVjqmtb_uBPAuSFKE_1ZZFkEBy_Gj");
    izdelaj(nizi, 50, "fS500WqF2uwEbBJD3");
    nizi[51] = nizi[46];
    izdelaj(nizi, 52, "WDW8i8McSS4XiOJKO4KWvo7qJPz7O6hVNCoJkPvE6myTVwOt8");
    izdelaj(nizi, 53, "X4wyvkmK75_hg9XlyqU8ju");
    izdelaj(nizi, 54, "ewoBUwYmfqsZjPWKexj6BHzq3Zoq2uNfHM9tv97XOA1Tb4PVFmttvGZ2JS3WPuVlSvjNX7pQtn3_");
    izdelaj(nizi, 55, "y");
    izdelaj(nizi, 56, "CxhYe_gWMEzbHwAQcthOqD8BQp962j2mX8gpaZSb4xrYooKohk4LgA4pfCT8CFGC8SI");
    izdelaj(nizi, 57, "UWsuo4ITQ3mjI9eC7BGjorK8N4Cf0WU8l4u3M7miNQHZOLIyy8qSQaKYU");
    izdelaj(nizi, 58, "nCFax1BItoJgD3GUkDZgdKOqWGijQO5xYdOk2T");
    izdelaj(nizi, 59, "XIdCZYX5CrgpFtRJBHQNvPqOnQJCHQuKauW_sxMOWAvXGmI9NSX04Gp7HhbEal2Oku_64iMmyPNVcek6_n9MlaZFbqPGcu_4lst");
    izdelaj(nizi, 60, "DUUEEHSGwGulV76bc7biwt7Cp4YwgtFJzX7bAfZD9q0hcop5Ik7zO8GrX49U8by1lr");
    nizi[61] = nizi[25];
    izdelaj(nizi, 62, "yZn");
    nizi[63] = nizi[51];
    izdelaj(nizi, 64, "_IF4l91pTXJw5dsji7Jxrj5xs89fNRJEaFsPFWn42RWCc44s9VRzwogimAqy");
    izdelaj(nizi, 65, "sqDvsezjVs_h6MW9M7WuS9pOuHwmQLjAR_UCMXuT7X77lr_NuCYGjRwrii1nrq5Uma3qZJWhhRa8beR34TshSwS5IH_6uJwbb");
    nizi[66] = nizi[50];
    nizi[67] = nizi[61];
    izdelaj(nizi, 68, "QxFJ");
    nizi[69] = nizi[31];
    izdelaj(nizi, 70, "ZCQC7bRCukQUH30rpgGwBZR8oGrwm");
    izdelaj(nizi, 71, "_HUq6eF5S3Fon5u0Rtd4tZhiC9_HCX5p9OYXLnkp296XbMTCcwF");
    izdelaj(nizi, 72, "QuG4brAJGFsQQdptOksyhyxLTwi8pu3iHbKctrRBehuyNwPqEHZ2KgoKKHYYVcl52lZhHnMcKw1DT8Hp3");
    nizi[73] = nizi[61];
    nizi[74] = nizi[31];
    izdelaj(nizi, 75, "Lenvki3b0L6");
    nizi[76] = nizi[66];
    nizi[77] = nizi[65];
    izdelaj(nizi, 78, "gnu21r1jui4GHCg6u96yWpfFBL5Re5q4tNgWGLB42Xj9eBjdYVBd28qp");
    izdelaj(nizi, 79, "2u0IyJwgtUI0AzMmj1Ke9snN2oxKi");
    izdelaj(nizi, 80, "Cd4gNoZBv0MAfGwGzaqY8MEAXU80Vn7QVJHD991_KJ1V1rJWkjAES_mG8Y");
    izdelaj(nizi, 81, "Tndhb4FMNmKvLlmzqDFx9neKJ_JUjk");
    izdelaj(nizi, 82, "r0VTjc_2BwaE2z7ByJ3nomR5NL4Z6HQYvLMr55_AnZPqZsl9WKz1mmVX6hV");
    nizi[83] = nizi[15];
    izdelaj(nizi, 84, "5Fq5dLfmoVjUqZjZ9F4XYfKCJEw7usg23bhwvWQGYlzL3nHiNY782wTdDu5rJpZce9hG2");
    nizi[85] = nizi[49];
    izdelaj(nizi, 86, "FllpgffW4WZeo_ZKGlnhsj3jxWA8_7OQgx18uZHwY6KEpyz32yuUu7d");
    izdelaj(nizi, 87, "r59UZrsSrcwbCYu5EwjIGvCQZyHzwJ_xQMuH_OpqHgt0");
    nizi[88] = nizi[74];
    izdelaj(nizi, 89, "ShGuBQ4Zy9a06Eyn");
    nizi[90] = nizi[74];
    izdelaj(nizi, 91, "HTcBpaN8RU68JuSB32EynookrKGwyidMC8J9tB");
    nizi[92] = nizi[36];
    izdelaj(nizi, 93, "0DNvyOrpsk_25vMjwNOO");
    nizi[94] = nizi[42];
    izdelaj(nizi, 95, "xN03ZdJEgwFw2Dq4EXBX99wp6ngP");
    izdelaj(nizi, 96, "v7RXkN6b2MdH5Kp2MNBeeQNgmV");
    nizi[97] = nizi[45];
    nizi[98] = nizi[87];
    nizi[99] = nizi[37];
    nizi[100] = nizi[41];
    izdelaj(nizi, 101, "dAy7Gu7KFi01CC8v9S1nNy5qJZmVm9AvcW0WDrruvinND75jo1auZ1VwiKStc3H39li2uRrjALrBb6");
    izdelaj(nizi, 102, "M574DqSjTkeUmSgzDNyehrMq3wBBXJc17jbIb1vFPTchnoiU8LC6OLGoD");
    izdelaj(nizi, 103, "mwCFEWyQ602QdKsFx9zkOqhLFfAcZja7s32c3Y_giqaB0lQlGpFc3mMbAyp3WRuPVpwZVj9_n8zSbJVPUOb9v35V3_bjVdhwLB4V");
    izdelaj(nizi, 104, "gIkT7Zz_gRmGzy");
    izdelaj(nizi, 105, "mICsKPzEargt2vTyBVmWuIe");
    nizi[106] = nizi[33];
    izdelaj(nizi, 107, "_t0WqJ9XwjS5KeMv5V3IGmFnoHQzBL85LtocFnppQREVW2F62LImH8");
    izdelaj(nizi, 108, "exQRNxBV6SN4FHm7xMJkbvOSpi3re0Rj5n5LqGAwFFxIkP8PdfgttIRXHIXzZflitH18yeGh73");
    izdelaj(nizi, 109, "pBGnTcpVumk11Ccd9sbr76fKlzFvBKhqi2qUEFPa67tqIGCq4ZloB69MRLrKO");
    izdelaj(nizi, 110, "qqNBzRypr");
    izdelaj(nizi, 111, "0LXbpvpwcS0wUB60lC7DUTt6jSW0madLBS0FOICDoZkg6yFtKDKwTLNcRBY45Q8hb");
    izdelaj(nizi, 112, "cX_T6djvmzhVsPgNZIPEJxfyBegcrtFOUTXlHnz");
    nizi[113] = nizi[71];
    izdelaj(nizi, 114, "zix5Z28JmULX1iuHUt1uZs4edTAnFkbKTv9EiyVSchouTcVGOvNPK4dYEZSACWB17Uk");
    izdelaj(nizi, 115, "71RYEsKoqzKb");
    nizi[116] = nizi[35];
    izdelaj(nizi, 117, "Z9eXJsdmwR4SLIPHQCKRXXveaMzGrEm8bY4pHnQQVtQuuqp0v");
    izdelaj(nizi, 118, "ukCYyuADOk_666M0F0nAS6OJnp0DibI5hqRJKsWicxUlwoWmwbLH");
    izdelaj(nizi, 119, "X9QjCp8VEbv2gsEcvlY3RQ_rM_wTT89IAh");
    izdelaj(nizi, 120, "80LHNdaCqICgIG0_oBikDs37");
    nizi[121] = nizi[107];
    izdelaj(nizi, 122, "dcO6GGQbh6ZbN7eicnQghT7DhUzc0GGXLO8ROVUpx8s1yVzmkA_2G65M_Z9Y6ZqQOB3QnGXOAjwFQlLlaems8ih8EYSdDgglSbq");
    izdelaj(nizi, 123, "J1T39p_3bFRNUz2Eq4CxywGrm");
    izdelaj(nizi, 124, "qXYRTZGF_FyelaoQpSy");
    nizi[125] = nizi[48];
    nizi[126] = nizi[56];
    izdelaj(nizi, 127, "rVE2nvx21wOByJOnz6Ey750zZPxTaFQsAu444YqiWSKWSO6mRSSFOn2fqw8i19xAFqjQAo2_1");
    nizi[128] = nizi[22];
    izdelaj(nizi, 129, "F8m71kNvznXO3E9aR15zmE39i");
    izdelaj(nizi, 130, "CT1MZ9SqRNkQR");
    izdelaj(nizi, 131, "qopCSdF2jeikBCkdTLj06BqJRYiMVzjVNmYGx8vY76Ehc3Bk7tvTth");
    nizi[132] = nizi[12];
    nizi[133] = nizi[45];
    nizi[134] = nizi[42];
    izdelaj(nizi, 135, "2ZlBOOFSFtvFjtOzAZhXP6Qw19kObIycqQcbrJgntPt6BQsFArzeFKbBHaWIK55h");
    izdelaj(nizi, 136, "JXUzX_sbIEbGhCNED4lpKoIm_Xlvt6iizjOhq1vMiW_gVAAjxJvWh5ILSLMUYP0OY9F0mi4W");
    izdelaj(nizi, 137, "1oBQ9RWRcu7sfuMnAzfSs5OJxX7VrMMLXaV9FKexXP_PvMXhf1jjVpepnd_gdPYWpEtNM");
    izdelaj(nizi, 138, "4SpRmmOQZiXYtQMezedSJb7QOjfFgnMa_vggIsnuEPQSXhIRimoHcv");
    izdelaj(nizi, 139, "VSP3cdbKOi5MLiu4juGkMGGnlejFeFdykO3o59fBkj7VGEnJwrxDsJOoYmXhIb3SMexfrTF3aL8hbods8LxIvhBLn");
    nizi[140] = nizi[12];
    izdelaj(nizi, 141, "OWiHwUnxNsOZ11rLMAVgRGfiDkQ");
    izdelaj(nizi, 142, "iswUJH4u2UuRWH0wacFcZMhmsMuuhpnRcUeqr1pyt_YJJMNbn7mwp_wjLTjRl_fF_2PoeXaUU8p3fAoUdQsRIjBSmsBB9");
    nizi[143] = nizi[46];
    izdelaj(nizi, 144, "9flsApd4iUCTItkMeYO_8Xae1w6NF7ITU59MgaQAjw4yIidXcguMJnsf4g0ugSnkDo4cp0KO8eYvH7JDcx2sV7U7lOGGbpc");
    izdelaj(nizi, 145, "3hPBnV5fekt0AyRWAb_YaC5PvlYH1kNtspFnTCintjdyrPYLhzauTCNcLXuls6cZs4Poyo47OQmnQp7x2SEaOPSMp");
    nizi[146] = nizi[145];
    izdelaj(nizi, 147, "k7KjjMua3yivcQ");
    izdelaj(nizi, 148, "fczWYE5L8LcZmOG_XeQEsQTChLDcpCbcLIhkUkyVBWBYhrulGNtHWGhPAzPUIzRzcta1P3e_Vc7VorNTFtCB1fO");
    izdelaj(nizi, 149, "cjmC7xnKscoM2sCqA6");
    nizi[150] = nizi[112];
    izdelaj(nizi, 151, "HzLhkgIdQlPJxqQGIJ1fNKFEVEs2oCi1as4DR63faY42");
    nizi[152] = nizi[92];
    izdelaj(nizi, 153, "cFbmZgwB5G05qqfIEygvd1vT6HrmWqvnLvUDhqnQALxsAcGEwM4rIgFLal7Bs7jrkYpFFc");
    nizi[154] = nizi[20];
    izdelaj(nizi, 155, "nTxQtN5bjeJNj6wgJkVUtqX4vGwh6EGAl8JECWLU7A2rU7cSgPPdgYeqcZeIcD");
    nizi[156] = nizi[118];
    izdelaj(nizi, 157, "5021b0LrbL5lwgEQvCjW18GTrmAE");
    nizi[158] = nizi[2];
    izdelaj(nizi, 159, "txVG");
    nizi[160] = nizi[124];
    izdelaj(nizi, 161, "PQ");
    izdelaj(nizi, 162, "l6ehuwzC9Dos5N4u2SoAAxJ3MgUCLpSKemY7qIWD6Nh8aU2ev5sekQ97z4HGmHJoKH6_sR7uG6jDOkh0d");
    nizi[163] = nizi[26];
    izdelaj(nizi, 164, "nSPrsUO5Q88zIPZFkyrsu62QRbxZHjGvb1xgdyjf2r8TXqwIj0lC9X4lv92PYdlfRArdicYU2kO1LEJO");
    izdelaj(nizi, 165, "akvlsM5jG6hOJ_2WyL0A2D6fZ5OCp4OfFbjUSPIlqLHBRHTnluoENjSFLuO9shz0k9rJIXQ86sV7ARVXyF2IpMy27k");
    izdelaj(nizi, 166, "kk_orMwkr5atntdlG_3T_KAmwSPM58Hz6TZpa4EEqoeVAXwWpqYB5SLtPdRGXCXKBV8LcaD4twRP66Pc4");
    nizi[167] = nizi[62];
    izdelaj(nizi, 168, "Cfkl58iSdoAhkFV5ENUuAA");
    izdelaj(nizi, 169, "GYHGNOlWh4c_cHWNgjrtWDNeTNZhTv8sB0l9C62VmdtN2vXEeMz3PQamZWzal3TY0rgT7sTtLzcglF_ftmRZKMkv0");
    nizi[170] = nizi[21];
    izdelaj(nizi, 171, "uMmNxrp575oumbBsF8ONTms2ZC9QFc");
    nizi[172] = nizi[56];
    izdelaj(nizi, 173, "GUdglCUEo1PZCwlsJT");
    nizi[174] = nizi[9];
    izdelaj(nizi, 175, "yeqVBHpBCKomnr5qUFBXU3e4VPz6n_Y8ZC6Wg");
    nizi[176] = nizi[39];
    izdelaj(nizi, 177, "_6owd6Ta3yr");
    izdelaj(nizi, 178, "ouzvKIQbuC7X_AARqkON3FDApfDL3YmEQaO2SMOd9WYDcI6FDsUPcdDUeq1kZ7O5_E");
    izdelaj(nizi, 179, "lcCoPAoHoLMFcy0vPJxqSx5Pql87dmV71sXMYFwNxDtULXTP");
    izdelaj(nizi, 180, "upoYpntwX6KPPWoPANGdweDNcKnyuMr9OCZXatiM9t_Hr888BOx6OeZUNL_aGd");
    izdelaj(nizi, 181, "FlInCj1CqQJ3FQvFVgo30qOFgElGA3nQu4J5JcWnavp7vO");
    nizi[182] = nizi[16];
    nizi[183] = nizi[10];
    nizi[184] = nizi[139];
    izdelaj(nizi, 185, "EWl6HuVb8dgNOpYDEwpnQdHYwVhNHI6sHcKGEglOgfsCThTPpxk4VaoLku6m_neGhMzSVsndiGdNb9P3BHZOje51Sybpc");
    izdelaj(nizi, 186, "cqirfEsVnYeCW2PD6");
    nizi[187] = nizi[176];
    izdelaj(nizi, 188, "CU7JkMZZ0I_TEmfbYoLg6kACx0WowAEVQyaCezqiUu5HdgXnSoSPbnLTRV6hKWAGHqQMjJt4ns5iNMqb97CQ");
    nizi[189] = nizi[83];
    izdelaj(nizi, 190, "j1lQSSYZp99B1QlcMLms11MS1CrUEdsO6w");
    izdelaj(nizi, 191, "lpGneK15YEYYgJ5whJvtlo6n5jpEthamvDZlOj_pOpY1Z2QE0Td7F7lVRZGGCo8N8CcpwnQhO8bqsnyGcYwhai");
    izdelaj(nizi, 192, "3XfFY53teSm9Id5apxyjTCl1");
    izdelaj(nizi, 193, "MASVTtpJUido8I44GbOQ01nC5lPmO0FsylA__81_o5tIa3gMCLQeUMpdnxq");
    izdelaj(nizi, 194, "VyMOGRoXMD_rVEYuZrd4WuHO2E6OLqKIEjZ32sBuyS");
    izdelaj(nizi, 195, "vYQiqAd_a7AnKHCvrCmGNiBaeRyxVJQWjewrpucwk_swOE");
    nizi[196] = nizi[93];
    nizi[197] = nizi[146];
    izdelaj(nizi, 198, "2Lhz1AV");
    izdelaj(nizi, 199, "VfQsuWTpAUZQvKPw2yEqlp65XgbZtV1zJbbsv9jO3llsatKFEtzcKPyJkfpz");
    izdelaj(nizi, 200, "FXTEBcxzFDhK1eoZZ5HRH5i55GG2kOzNf7uUwzzEsprKervi4_DPHvt67yLGZj8g2zDPN");
    izdelaj(nizi, 201, "ZZUNN3ZRPM8ZPlybpIzkPmFwuZk17e0f25");
    izdelaj(nizi, 202, "KdzKUM04BiYIGG0iI0vnDBGBsU7HXYVeCEc3XkwXm11DqvjASXoJG");
    izdelaj(nizi, 203, "EyUagdrJa1wXxWWkLf0vQImhckwNTyvc_KZr4mKrY636qPNM3mIX1dlH_cd6sD92wjoI5ztg9C1KgM1VKwaBGiOObgrxw0");
    izdelaj(nizi, 204, "uhg1EV0_2FBoqUug28bvAMErEZaLLfjVdQcUPiHnpL9mUaMZB2_o8z8kpiZMK3YaEqMg");
    izdelaj(nizi, 205, "3MNJoWfRp2xcz7YsKVVWv7PbDWrSNIaClGFTJ2V2BO2knrjcXTV8V5cZYUBjtRoPtxfkq3SN");
    nizi[206] = nizi[113];
    izdelaj(nizi, 207, "ea12D");
    nizi[208] = nizi[130];
    izdelaj(nizi, 209, "zfwupLgAILsyaHDTr7C1ZgII3BTMruOD9I40ZZ354eSRhomhNJCYfanlmWeMH30c");
    izdelaj(nizi, 210, "ialLbf6gYWA7vbSrN7IZ4ItoFtc0wGhfj2JqJeliHPgRkVtXdJBGC3EHdNQ4qSIqcQxbw5bO3_Y7wAylfny");
    nizi[211] = nizi[16];
    nizi[212] = nizi[95];
    nizi[213] = nizi[83];
    nizi[214] = nizi[119];
    nizi[215] = nizi[204];
    izdelaj(nizi, 216, "IlloF5XycXSCfv3pCYdVPxoXLVd1ctVM3D0rrEaoTevN7VAjt1r_NXg0YGDpaLTgMS0GD_GDP");
    izdelaj(nizi, 217, "gxcJzulz0fxzFszXY0bKMXj1OlJY0JVcGioArWjRr_xIS35CrajRgJ7UQlEwUc5aQPbAfysySYCsdK1eT7Q");
    izdelaj(nizi, 218, "KYUh8z10rIRP2l8zVSfL4x4U3c7lEHZ4U9QhUeqbHCkgqOo8_SzR9jpa8P66LNh");
    nizi[219] = nizi[178];
    nizi[220] = nizi[64];
    izdelaj(nizi, 221, "zCYA2FX3E6oqGejPM_H4QmsTfKo9zQbhuEUom1xC4z");
    izdelaj(nizi, 222, "Lh8IW77gj8oqO8KOrDpq7y");
    nizi[223] = nizi[190];
    izdelaj(nizi, 224, "3ZF62VQ23cJkGrG9vF5xHaKbrlU0qSGIMGIBI2ayXy531W97TP9");
    izdelaj(nizi, 225, "q4dq7nYsLXGpj3k6imhPJ1Y8eNYz18F0AKVJdjTpJ3Diy08cWCSOQtzLesj6y");
    nizi[226] = nizi[222];
    izdelaj(nizi, 227, "OQ6X9aztJlPbuT3lI9WSBg8X4jgEfYokRnEvbkpGUw_vyCRvwZsw9yurft5z1wZqpHcfLxPavoTLl7vv");
    izdelaj(nizi, 228, "7GiLZ8");
    izdelaj(nizi, 229, "8CwZUlbOGSWSCs");
    izdelaj(nizi, 230, "iJW3yyBfV");
    izdelaj(nizi, 231, "tGatqJEEiPyiirE6LMCYySelkDmjevsft41pH3OPUbaB1DSc1S2vipXlDSx");
    izdelaj(nizi, 232, "MCopbsMeWrCB1Zv6x9gAkssQkybBue5zCYEtb3B69_p5lHG92");
    izdelaj(nizi, 233, "jY4VgZ5hxyyQGuvaCCEtiJni2eygqTwKlGk6auHMHyez1H41Ve8mtHqlW57GMpT7GoNJl9FVhAxHFIqecAdsiGPIlumYXQVpkg");
    izdelaj(nizi, 234, "FPlY8eXps1InhX0AOszEY3mexPi6rnhkdE2A3GEU7mVMrXlEwh46ElFaLgLOUH1yYJRXaxIJE6WDSOAsM1wKqvZ");
    izdelaj(nizi, 235, "pVNIM1Ukxt_fCY2NLX4CBSF4iEoBr46sOQBQNcA2jghySZ0UNtI7BcDSLS9");
    nizi[236] = nizi[190];
    nizi[237] = nizi[45];
    izdelaj(nizi, 238, "KSBZK61gnWQP_uA9HGyaVeeJZDoBxyU6U");
    izdelaj(nizi, 239, "y9UsFOks3pQGMFMi3LELLkplNdup3QeeFZPZkNM8BcH60qhCsqKQaZSD_P58CgwkrNyLJnYG");
    nizi[240] = nizi[21];
    izdelaj(nizi, 241, "QQEoaLcWWXXl2mjZRavkW1_bOskXyZEPaP2Sg11Oty2k6_yg4MjBrexvGNWMaPaMbi5pggWMMoihtWW");
    izdelaj(nizi, 242, "QuFQzlhCT3D3seCMqzHeZfvBI5Z_DvC6dkUdd2ZF6hEmZW1U59eqmUlxD");
    nizi[243] = nizi[63];
    izdelaj(nizi, 244, "3UwOOzLsdpRRIouWgpT");
    nizi[245] = nizi[210];
    izdelaj(nizi, 246, "gEDza0nInXtNSkK8lyvLi1nxO_Ff2t3lzOi27C9Ypq8FryDiu3mUGMo_WoJOSr0YOSS6vznG4ov0wQ");
    izdelaj(nizi, 247, "sJovfo");
    izdelaj(nizi, 248, "rsyw");
    izdelaj(nizi, 249, "lPqXlwYUXCDC0Nz_YcePNJ4z2UGMdjjBZo1PJoFIdiwrlKaYJOPxZJy_IV9");
    izdelaj(nizi, 250, "H9AgMBnwjJ54wu6mviEvlT3M7alfiXeH1hxnqyjD7uSQM7RiGNdTZ_jnj");
    izdelaj(nizi, 251, "F7UoO4FECPUEvfZ7R79A4p1iU2CXJka6lTT0UqGJ4ln5AP37MVLFWw8sDKkQ4G9rgZYjRE");
    izdelaj(nizi, 252, "94E8NWOlvsrZHtghnPIxAmZSyaSw2cN4ayRTbII3y_");
    izdelaj(nizi, 253, "vhwSuIF1XjTL6YiY8FUV9pHagTple21tjVoPowzxIw3UL__E1BJmZ5jOetBbHPkyudRaOodDJ7");
    izdelaj(nizi, 254, "KYV3U4EZaY1oHhHykhf36m1CD6qxoLjt4ziW3dDlr29u104YVlPX5z7");
    izdelaj(nizi, 255, "ZwbohZMD6pumJElDb_ijRcQgsGEyUCkc1X4Wv9zBIzz7kQjtmMzA0fy2");
    izdelaj(nizi, 256, "gFU5xeviLp1pmSpOWH");
    izdelaj(nizi, 257, "VZIXivvu4v3RrezHkWhu_8J7vzbnmCoP07Ec_1sRvjZtBM2BImJ_qmGDFc86Z5kP43lrDc2_nfHi6iS_5yu70jTa5jqp");
    izdelaj(nizi, 258, "syuDGjoUtOGtEtw_tNGxcvfR_sxpoeNy7L4xbj9yt");
    nizi[259] = nizi[220];
    nizi[260] = nizi[8];
    nizi[261] = nizi[66];
    izdelaj(nizi, 262, "sijO7ZKcHbBrYH3FmVdHR5SaIecYgIUtlZTiMHVqcn7twxoUNu_nGmzs0BgJWceKCd5gCxs8MBj5nh2_XAb2EJHyRsl1_4FA");
    izdelaj(nizi, 263, "IdMe2j3KNkDURHuyYjldr2RxDghcgmvIkS4ZT4P49xaQuB0QdaWU1kK2_M");
    izdelaj(nizi, 264, "rrDeU0CiHCzB6rowkWTn4bq9OzcLle4suNB9B09Xm3wkkhpwZl_aa91CQjDfq7V8yV1o6_q7cIQ0GXp7u3STb3iZ4");
    nizi[265] = nizi[56];
    izdelaj(nizi, 266, "VTJshOKj30CGSgdYnxM44qFpl_ZdzAcC3zmOfp1E0GP5nwRz4bGdTPoQe3GzzGoE_tEF0ta7Q5A6");
    nizi[267] = nizi[94];
    izdelaj(nizi, 268, "QAKSMozHZuc8GgJqeIKgAX71tOfpArYGEXCxWNraoSUqU8Pf5l3VMA9E_GLFvWsBgTcj5O2miAENWJMjvOr43r1_cKKxYTWVIcw");
    nizi[269] = nizi[20];
    izdelaj(nizi, 270, "34xszmgtCiFUOmQFk7wuyDx0fazhNMedtiF1jGWsTOcJthfaN2Di2InnDgs_UNIkfd50BZNyD_0VSm5TqU0aewx");
    izdelaj(nizi, 271, "WWztY1Sz0yHZb7m381C49rGwxiyQfA7tStDeDGj0I8j");
    nizi[272] = nizi[8];
    nizi[273] = nizi[136];
    izdelaj(nizi, 274, "6dgNCxFYw4Ob2bof9twtdzJcbfXSefFkwMPr34dtl9P0iKMd_c5JDO3TCrCky1WYfuc3gc");
    izdelaj(nizi, 275, "6qZk2W1wYkeQaWgEHS");
    nizi[276] = nizi[150];
    nizi[277] = nizi[168];
    nizi[278] = nizi[65];
    izdelaj(nizi, 279, "nRrPGCtp3BZZpidf5wS2NfKSyXXZttXfZChoXne99hp_ctR_gR2UzkMaB8yLU0BYGooMhBuiipTAVleclh0mwfEeIX");
    nizi[280] = nizi[19];
    nizi[281] = nizi[157];
    izdelaj(nizi, 282, "rsg_pV4TuGS5Xxu6ZFRk6UeElc2psRAcbV9pVQu52ct6e0ANl8SSBdhKIwUsZAcri");
    nizi[283] = nizi[196];
    izdelaj(nizi, 284, "4RXPklYurT2KJEI0nLHT3a0Llr0YchvW7j5NhIsZtkHJMs9uZkQsmcfrCimOd8H3zMRgaP2ztxdfkQsRHWV6Chc");
    izdelaj(nizi, 285, "aZiSoP6VDWE");
    izdelaj(nizi, 286, "oFZ3WPTTutRMhh1ePs0SoDDdU90YA5Bd1fDHt2iUpMYs746yPOZhfPqK8Xx4KFYiBt9yM5o5Gw_GQ3eyGQMV");
    izdelaj(nizi, 287, "p9wgXYmoQWxTzfTzBVH9jqaNJDDfDBdPXkRlUzmWZyMVfmt42SxOeaFA8S");
    izdelaj(nizi, 288, "0F9IFcZDVk25eZmuWqsOkM70AR1NH_XleNTWNRG5Hb2M0RbhNysOE5ZnbrRgsvzfz16mwAkzeCpmU2xTSE1ANTjXqn3Vp0");
    izdelaj(nizi, 289, "1Pudd6qUHj1G");
    nizi[290] = nizi[250];
    izdelaj(nizi, 291, "lttY8rMkNIGzyDr1eTIIJml8btLm9L3uKVm54XBN8NfBcF1SVE7bcX2taMUG6_Tp0_Y4UH");
    izdelaj(nizi, 292, "6FBwg6Bzghlbh_vwrhOszixLmwFgket_WHzo02OhxFh");
    nizi[293] = nizi[157];
    nizi[294] = nizi[264];
    nizi[295] = nizi[274];
    izdelaj(nizi, 296, "p4JAvXml9aZf4KI7P6k8cu_fT1bYijpVxJBEKwpO");
    izdelaj(nizi, 297, "1hgvWR9gsrs3RqX88YLNaVKs7P");
    nizi[298] = nizi[171];
    izdelaj(nizi, 299, "DCPaSOKuudANfdV2Rz1Muze7QHiCdwLVAGSgKn");
    nizi[300] = nizi[215];
    izdelaj(nizi, 301, "0zmW");
    izdelaj(nizi, 302, "c5EigvEaqq7m_RVDob");
    izdelaj(nizi, 303, "Qzbw67TxHzlvxGKzIEA3");
    izdelaj(nizi, 304, "icn2TwPIbtOgjYfQI");
    izdelaj(nizi, 305, "wHAGfLq");
    izdelaj(nizi, 306, "a5gT8ZvrRM1e0FKkjNI4WmCn8ty7iwciyiQrpzF6CyzCVWwlyk1Ms8PhzyxstbJUfRdUGikyqjD1thqh1YgSy1sG6kJ");
    nizi[307] = nizi[71];
    izdelaj(nizi, 308, "tmms_bI9Ot4KwEq8gCjudhZFwZMIErSwuDw57bJyK2K0z49T");
    nizi[309] = nizi[77];
    nizi[310] = nizi[221];
    izdelaj(nizi, 311, "YR5irMBoQM8DC98GxgbM2VKXB8G2IpuODBC");
    izdelaj(nizi, 312, "GA2oldF2XKShnnRDanLvKamZln77K");
    izdelaj(nizi, 313, "UTiM5qB1L0KlcYOB37pbaoVasUqyhP7IpawQCUDzihvWHiQ7Q8SQoIG5RjBdfT2bMfJZSRC5BzAXUaztEhMIL");
    izdelaj(nizi, 314, "kXEFED6rhc8nzZ3jARgUtZqtlLuQkBKoIwO70sCFTTupXjm5gULn7vcPHswr1D2H_Q");
    izdelaj(nizi, 315, "nEG");
    nizi[316] = nizi[286];
    nizi[317] = nizi[51];
    izdelaj(nizi, 318, "9y6h_NdB2kSMSWlbLqsKngT_njS2LIzElGZVrIDxLgrzB672kSaQYAqlc8GO8E30dVfX03sf4Ddw4SNY");
    izdelaj(nizi, 319, "D9iwmh7Pc6RXndCSZ1Wqm");
    izdelaj(nizi, 320, "CriZJ6N8vvKs23aR_9rbXLfu9h2QlQe_0x2egT5ofSetgi354LrIaMl5G5GJo9nGBGwn_rVRXnBwJ2iBSlYnVpvQFhQPT");
    izdelaj(nizi, 321, "p4onteUYvX1NSFk9JcQP9IPQsoMBEIHlS77YgoFfrLniG1m_aFHeOu_tFM04d1");
    izdelaj(nizi, 322, "HNxCBI1NQYqPyQUdKEcw_TMH7ZQqrimKEvchnbM8OxGqwUI6EsFv98sZ_Ox661pfhjfot5sIDzPF");
    izdelaj(nizi, 323, "l7b4Kaegz87ohK3cogFMrAEK3q1pPsYgYoEby");
    nizi[324] = nizi[176];
    nizi[325] = nizi[35];
    nizi[326] = nizi[219];
    izdelaj(nizi, 327, "UrygJCz2UnklBOfvMsdQAs3YqZta5hz6lGps0ydpAWvg4258Z1HfBQpc4DQ9CrPOgxRB36EEdXZqRjFEKU48Gm");
    nizi[328] = nizi[47];
    izdelaj(nizi, 329, "gSPPRMfhRqd0Si2NSRZWdmLTBFHACPgzHFvdqnljPRaYOwZzIiRudfxj_b9QqdFtXLc_P");
    izdelaj(nizi, 330, "sdKyrxnp4");
    nizi[331] = nizi[84];
    izdelaj(nizi, 332, "1ilgyaSDoPGHCml2loXocmQpLVRnNQ2vLObbCRg3RfuSkfeItZczwrjmCziSl3YnRchSeqDj62EA");
    izdelaj(nizi, 333, "GaMPG0SdvTfxjaNF_7hBYxkSK20sPGP2ty1YbE6NBtwdqbC2aSp5PVDlPSSJIOxNAsb");
    izdelaj(nizi, 334, "UCXQyPq8ZXR88TzXDHh5osbNNvN_9yf3eaA0hoBlhahiZh_06YxGX8TzsM");
    izdelaj(nizi, 335, "2Cq7p0VJigGi");
    nizi[336] = nizi[220];
    izdelaj(nizi, 337, "6qCf9cc1wk5wqeBKYlevY1_ZEvJgo6eCgHCnhTyxS_5VlyQKEiRVG3Om4BTxmSigaxGUuvRFkt2CZE");
    izdelaj(nizi, 338, "fGeNML4sCy5pZwC");
    izdelaj(nizi, 339, "JwVg7R2mBJraqRFYU6EWc9bvt");
    nizi[340] = nizi[300];
    izdelaj(nizi, 341, "l_ZH9K3Mwn9JXV8t0ZLklJ_bkFanXq0wEB0tlEIPCZ02S23FmGsRZqXotL3ZvIUlYNhHhwwSs4SvGIfCh8gFcrDx4Hn3e44yDPF");
    nizi[342] = nizi[114];
    nizi[343] = nizi[2];
    nizi[344] = nizi[332];
    izdelaj(nizi, 345, "GTs6SqfrnXIt_At9yErdVugcc2FtrvJSXF1n2_zOAiKNv5Za7sNeR8dbPXlsI52LtHpYJxZCz2ahWeDX1");
    nizi[346] = nizi[259];
    izdelaj(nizi, 347, "HNoAcGoBKwmm8UIZeg7f4eoPk4YQchSUZQACi7NcsMaCLyUFNmXGIC1VK7hqfUCOONJqQk5VfVh72x_nW2b4BzV19Dl7FsvcTxR");
    izdelaj(nizi, 348, "U1Vf1GVqyqyAfnFSGBYpSrQRuEV_RZSVQBJq0u5YgJ_dGASZIFiUNIiWcBUzqE9GGzuhXLti4nJoFzM0fyMmKRkuc4ro3rWB0S");
    nizi[349] = nizi[35];
    izdelaj(nizi, 350, "vMZ78NHA6vgDEZ5SiBWNWeiM9pTFLDE2sVmODwos8CtXsJS1RSojt7R4uWSEsvALqJZu2UfpGkZQgXP9XITOSfDX3Ia");
    izdelaj(nizi, 351, "arwmWJt_Z8_SlM_D_tDR5dtXbdCK65mALDIT0rjVxoAjB3QwEQallmnb7jKTugPr");
    izdelaj(nizi, 352, "fqjX1mutHt3jF1nlDeDaoByj84ndY2hT8jzXoIOh");
    izdelaj(nizi, 353, "Gih6hW0rb18le7EU0UUod0tKAx2Wg_nJw0jKT0Y6MNL6R9sfPcXwxdPocIsjFmkbzUEPOI05Uep30it5E");
    izdelaj(nizi, 354, "1QPT0ngP6lKdhEIqLZHJtF5Gnk1n2kG3GxtFcdnA7uRRuWe9s");
    izdelaj(nizi, 355, "atMWfTT7DNmLT0mV5g99s80j_XYC2QTBDHSQXezrUtyOMAAlfSnGNrZ_ut1");
    nizi[356] = nizi[251];
    izdelaj(nizi, 357, "fukLuqLX1w0bxXEC0kK_u25utR9VFo7Ma56qpqnGbwrc_So1KK1mc0AtGzZBDkNw53unaiWb_znYK6b6EGNJBy8kUOOGZ5FEqNsF");
    izdelaj(nizi, 358, "iGY7wmDbOEQAV0FxMsb8g4UCdrwU");
    izdelaj(nizi, 359, "pPMBEC8KeRMUJ01BY4lO65ieCCekept8SL2ZzA6BafrDBE2hBvHWxWTb2C");
    nizi[360] = nizi[104];
    izdelaj(nizi, 361, "LfBbK7XbwVve6D3PNFKy_OCqDQFCB7gXQ0_9AYA7psmulnRMt_pNMMfHmJ8AgvnMTMiwC7tGTaT3wP9O6DuyUaBxWbQpfN");
    izdelaj(nizi, 362, "QdHqNmnT2KL0dY2sTp9yIEnOqKDcNSA7d6py8xyMtQhPDEyV2QhGU8uMyybqpeGxTzA_AUbblFb");
    izdelaj(nizi, 363, "FrFhxpoKBCKh1jz7rYP5RZsxPamcteF_HzlytBlIz24i7IkGbXIBXstmuQRIDFFTsgcs_HAavFgmC1");
    izdelaj(nizi, 364, "VWlrRQJDU9wpOxgYCDZZ5aX9IMJ8HILlKXbWsnOcI4DbzDP7gNqG0WKg9aCVSoKUpB7QZn7ZBVZ2FQ1jzzGgkP");
    nizi[365] = nizi[162];
    izdelaj(nizi, 366, "KXYwAKMJwyfTPjZy29o109iMlIdirb_7FofhXwG1P4Uuif");
    nizi[367] = nizi[90];
    nizi[368] = nizi[335];
    izdelaj(nizi, 369, "XA6EyUtresek6wPXpqk45b7vStUOYaHBKuB410COJpuLdJ0GKwVwKPVXo1GXtZBp4rkmtQWPrZhEmGlkfnsZWUDow59SRb4SjQ");
    izdelaj(nizi, 370, "oUmRW4tvvp7jqRG5fHRf9JtOT60");
    nizi[371] = nizi[7];
    izdelaj(nizi, 372, "dEfHMqErC");
    izdelaj(nizi, 373, "lwJEmjrRVNeBhsr6_rUEZ0sA8vm_GODlo1XmlpEO63MGv9D9rskk8NuyqCxJMAxGydd");
    izdelaj(nizi, 374, "1RZQNIO5TMsT73qy7EQmsYyZBBq");
    nizi[375] = nizi[287];
    izdelaj(nizi, 376, "yJbzw3dIJn8gzuRxWvuoq4aWnvK06mEDQHs5QPoTu8ataQmCcRj4qSpq64JISgTUb0LICi2v9guAJsUEzrz0G");
    izdelaj(nizi, 377, "Ry9Eu5hI5Q_TD3POAdAOtRNvuM8SMqZSbnW42Fi9WUFlBWUORJVZAvNmbLPUVoeK5BZpFvkY");
    izdelaj(nizi, 378, "ZXBt0NPXrdICV5");
    izdelaj(nizi, 379, "zjIVhTqC1oOJsAbDVRCzawMwaz36HOjur6mbRGk4AN");
    nizi[380] = nizi[306];
    izdelaj(nizi, 381, "KroLPShDRlbn4NV2g42AIfhcNSxihSDal3CBS2kIr");
    izdelaj(nizi, 382, "K0yD_x7285gdWT2D");
    izdelaj(nizi, 383, "XZ1JWSWx8g7xScGBjxfj5vCl");
    nizi[384] = nizi[175];
    izdelaj(nizi, 385, "MKp6DowWgBDjbEOwYi8qZ5MbgP4OA");
    nizi[386] = nizi[278];
    nizi[387] = nizi[383];
    nizi[388] = nizi[374];
    izdelaj(nizi, 389, "e_1bLDAiIgJws3F5qQNhmolPAnyXOXsg3O_ea2p3cckBgAMROtl5AiQvds9sjmIrfV3DV");
    izdelaj(nizi, 390, "v46VQJ0EGPoXHXzsqsWdQTXvz_dh0dHeXbhcmWlIlqnIjR5v");
    izdelaj(nizi, 391, "2S1w7T_seX0dpnFzBdlFXfu2DZhbhUXR0Z1Ktk0qUgRmk_k6Y2fvNxyEqGIMaQWlhp7FobZ7LBWo2wJkLNzk9nnf0qrQem");
    izdelaj(nizi, 392, "E5ZZFnSP1dYpz_QfEbazHeomddPi1CnkSQ2rGs5vXBjQUC3qB_e8lJXVaGSkz3xP_WAz4hJ5AVzKoBKCTCYEiM97vPCi");
    izdelaj(nizi, 393, "hBAkJOHovpwLHhga1EvLRxP8SIz_R31wLlNFPwTfy2dXC0IbuMPV8pz52Mf5cuWW5M");
    izdelaj(nizi, 394, "ZK5zUMmrBA5AFiSA1bUn0");
    nizi[395] = nizi[158];
    izdelaj(nizi, 396, "a9d5zJtbdc9AzoQsSOtU4Teyezi4qA4ClLkx1YE7Ir2cQvoFc6VC4kr47BpYWgfnclrZeBjGvcrcL_kR9q_qBdnwsrC0");
    izdelaj(nizi, 397, "l6e93O6y193otmpaO8IZwIBEeLgz3ylC4DgCtf12vLShqmYF6pO");
    nizi[398] = nizi[68];
    izdelaj(nizi, 399, "GFHKMf65LKd6X4PhV3AASE2TJ_K7dsJ59bxgFH_");
    izdelaj(nizi, 400, "JOP2DPRdb8LuEQQceQBcEti4ai6JznZ");
    izdelaj(nizi, 401, "LFF0jKPM4z");
    izdelaj(nizi, 402, "Cp82pDHQJr6xZZXyiEHwp_IGq93ZdryB");
    izdelaj(nizi, 403, "BO7KKymjBsppOPC9Mvhfzx4iGI5wMXxchcjvx6Jl5H0wQiHUxkdbOV1gvtC");
    nizi[404] = nizi[348];
    nizi[405] = nizi[193];
    izdelaj(nizi, 406, "nTvIvW14Fp0rLbxed1Ge3cEWYfBHh_xYQo2efHTr4jCQUvqRrWmXVXQeoy0bcLHpTrmmnK5PagPxkNa8VZ3JPZKRupEZMGwV1");
    nizi[407] = nizi[231];
    nizi[408] = nizi[6];
    nizi[409] = nizi[83];
    nizi[410] = nizi[274];
    izdelaj(nizi, 411, "iQpsSeI4QP9PlhA0YPuzDSOJ1Eecfd8SNs1dUwOgMEX1Sx");
    izdelaj(nizi, 412, "vyl2PpKdYLOzWRjiPJL41CMHncC9et42__kAt");
    nizi[413] = nizi[279];
    nizi[414] = nizi[288];
    nizi[415] = nizi[95];
    izdelaj(nizi, 416, "n8FKZ8wDHD0XwCRNjnxpkwjU1qnx_HT4mEv4Wu73q");
    izdelaj(nizi, 417, "v5RisH2xFEyt1oVPRiqZpsiXXP9UJsipkWq0IsmlDaPGd33RtaGNTwyZMKwMY9hNAd7yJBCG4qniU_Vs10EPNAsxb1");
    izdelaj(nizi, 418, "sxUVoUKBVcJ1eLnZAm0fTGU69tqyI073RGsX2kxDrwlT6CRQ8pBLYUDcJ3wgBG");
    nizi[419] = nizi[169];
    izdelaj(nizi, 420, "GEE54DUbgvW1ZYqRFstCSIGUZWRBSkhyjUhWVIo8Pm1MTZ4cTLC6nbBXEc00");
    nizi[421] = nizi[223];
    nizi[422] = nizi[39];
    nizi[423] = nizi[126];
    nizi[424] = nizi[335];
    nizi[425] = nizi[373];
    izdelaj(nizi, 426, "KrjbUyid22rj1Rv1XwZJr");
    nizi[427] = nizi[419];
    izdelaj(nizi, 428, "Wke2vG2rxvzmxNmOxwQCkG0wbS9IL3N2QXo4VdcoNsnX4K52xVkIJm34fJVkLI00nSWC4BGPusrfn");
    izdelaj(nizi, 429, "pIWEq4ubd1rphFP4OmAtxnLjyGBOOjMaMwROFksMORLgWpO71I6EWX_PyYS6nImtse1iSVuZQj5");
    izdelaj(nizi, 430, "TYOUIxYM2gDEBJla44kyKB6odDUBi5QV08facTRfkuLfuYvcq2YjzG1UWcVyHVTe9iO37YXJezy5l2ySqC3WKZC");
    izdelaj(nizi, 431, "RBR8UIGJSYZREdNwg21umBK_LX4AGZB4V1OFNVIIudZj3vMVMCMfSQhE8yHOATt6S8");
    izdelaj(nizi, 432, "FF8MHWhhXRtRXiWa");
    nizi[433] = nizi[0];
    nizi[434] = nizi[352];
    izdelaj(nizi, 435, "klrJAfIXlsjFdBRuONG8HOj");
    izdelaj(nizi, 436, "svGQoxOmviNY3Ieg6Ft9Yu1UzjhwcK8OzYFkSBnFXVRXQnVYe5YGiqCpfS_8a");
    izdelaj(nizi, 437, "tm7btshBKUTCEzepRi8fqYHDgciZEp6mEZ6PAz6TmL99ILmksbntr2kQyyYyQ7GxEuUer8c5scvxIdA8tMy3LosXk");
    izdelaj(nizi, 438, "cep0hKWp8_9zzkRyFCAlqOTJjM4Rw5nFAgNmcSoTJBD");
    nizi[439] = nizi[98];
    izdelaj(nizi, 440, "iB1yIeQEGNZouy_Sb4n1688OLZHW1lB7AfGNzkHlaZ8KmXm5MFnAQVXCE0zkkbBxojMuvEUiHzrKSkJ");
    nizi[441] = nizi[41];
    izdelaj(nizi, 442, "zhjzN7oF");
    nizi[443] = nizi[256];
    izdelaj(nizi, 444, "31noBYgF40nj5JhYtxd6_ThC72pwgdFAITjKOrmbxqLtXDEv");
    izdelaj(nizi, 445, "iY8R69dBfKzWL8BnbGMiW8P5nG3LZK9Uz_uxeB3enAPB");
    izdelaj(nizi, 446, "amGFHeqEy3mbAqu3JwWZLjOGHfrt61V");
    izdelaj(nizi, 447, "pxCpHj52APk9aaK7F8hwtTQiv3ZY_DNXRn11lDrk7pRP5xwOrj3WKRdxLr3S2ytGrHCvA");
    nizi[448] = nizi[155];
    izdelaj(nizi, 449, "wy0S5T6785grjywHbeSb0Kt0b2XRkUp3hSmAq49MUpcYl3ep");
    izdelaj(nizi, 450, "MJloIDr65N9fvt0G5wY92S1YLggMEUIwDJoqf8p9cKq4R2bxUTD8TIS");
    nizi[451] = nizi[147];
    izdelaj(nizi, 452, "NJo2Ak7dDHa");
    nizi[453] = nizi[367];
    izdelaj(nizi, 454, "uEHnuJMnLlSd7DiV7u67P_KBbFe5g6DAZy8yiVfa01DfB9IKeTpEU6_rMMxGWuB7JORiaH8E3lIaqXuTxU");
    izdelaj(nizi, 455, "u3l7va5PBjh1jm3Dbbv7s276E_88j_XW86IM6AkV0x_fno8xzbS9VvTp6p5_TfJHKPM4LMP5jL9uMD4Z9Non");
    izdelaj(nizi, 456, "snm52LkjIIHYcPp1UyAzcKAFrZzf_c9fsQ6ThL_7UDauBXWQzD3t2MKFArZ3MJSQCMd9Yf3Ln6uhqHkkot8ZNXwkVCKw_L");
    nizi[457] = nizi[224];
    izdelaj(nizi, 458, "2rs5rfJ70OwAw6_ZkqhccrtnZwiBpYJ9dLa9kDh17L7Gv8rhG0i6kTIfqn3gBqqv0nvq3dfdVRy");
    izdelaj(nizi, 459, "DG9lxLp1i6ZVoSYTlMs2nRN18WHTdOyDJXtJC6cA8hqFhOyHQ8ilwjAxJxX1cMUHYRI4eWCz");
    izdelaj(nizi, 460, "sGC");
    izdelaj(nizi, 461, "LV_fRwcr1sP0_IRvDCPZQNIGiKSwL2HXcDe0UOgGboUMW6Q__ePLXLFZECRIxliQndHLWsDyTPFBYBUhPk7NERoK1g0EP");
    izdelaj(nizi, 462, "ntZm7ZKS24kMo8BhMo7_1FnIGU8XCpZvRNv8iXzODv");
    izdelaj(nizi, 463, "cOS7GYlm_PCKIO5");
    nizi[464] = nizi[420];
    izdelaj(nizi, 465, "mwm7xjkrm74XZydCoM1fQJrS385EH8Mz5AZ0cOOtHUjPP7CJXtOzBYyeqmN2EkgkSQrFZznBD8N5k2k3SNO0RsSMdMr1mq3NGGt");
    nizi[466] = nizi[180];
    nizi[467] = nizi[142];

    char** niziKopija = malloc((n + 1) * sizeof(char*));
    memcpy(niziKopija, nizi, (n + 1) * sizeof(char*));

    razbohoti(nizi);

    for (int i = 0; i < n; i++) {
        printf("%d", nizi[i] == niziKopija[i]);
    }
    printf("\n");

    for (int i = 0; i < n; i++) {
        printf("<%s>\n", nizi[i]);
        free(nizi[i]);
    }

    free(nizi);
    free(niziKopija);

    printf("-----\n");

    return 0;
}
