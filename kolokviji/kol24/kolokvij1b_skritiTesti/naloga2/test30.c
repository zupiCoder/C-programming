
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
    int n = 495;
    char** nizi = calloc(n + 1, sizeof(char*));

    izdelaj(nizi, 0, "E4NemJG6MCTHm9kFVgzJmGa2cXaPLfmJHW4zj2Azuok4YNjYNUxnr7UyGz2x9p");
    nizi[1] = nizi[0];
    nizi[2] = nizi[0];
    nizi[3] = nizi[1];
    nizi[4] = nizi[1];
    izdelaj(nizi, 5, "dOx6LELFsYwOOfh_Iup0BNlpNzqtsFajOMCTqIQu2ho20l");
    nizi[6] = nizi[0];
    nizi[7] = nizi[6];
    izdelaj(nizi, 8, "qYNv4yiE0WE");
    izdelaj(nizi, 9, "oJswKNPooPMooC6VrX6yysdKGA");
    izdelaj(nizi, 10, "3fCf4YZYls2qtvTv5P9AnnoqlMBgT7QZThHgaNHu6jPQgbjeq_KtVlM2");
    izdelaj(nizi, 11, "UsMN35NAfLEEXYYjOm5j3d8FI0vAjI3ZrNgtBT1Rjs7kKarI3ytE3gdhHXXuDFmNO9YF1L0oRderNwvsnk");
    izdelaj(nizi, 12, "zgcNoAoFZTtfdp3ZGq3BUNcwUIs8BJCmOHR8zmJbXxVEK732QvndYRbZEsg07V");
    izdelaj(nizi, 13, "KDwe4zUslU0IypRGR7b3e1QJ1");
    izdelaj(nizi, 14, "8jYwy1hI_e488pRwNT4gR95NlfKI2NY0pzAXl44eFSuf8J_ShpBiZO7lRrkL22vyvtvfhrxrpREbvVsdJ");
    izdelaj(nizi, 15, "zyqGEWwCI9G9JkIFMsTRkJIlEbFZoxZCB4sYfdDBJecfBjXm");
    izdelaj(nizi, 16, "DlA4tP4");
    izdelaj(nizi, 17, "oGUce_tBJQP0ZvjAbZHAK3WC36DtdPsA7E3R9N_BGqUqTVfNK6r");
    izdelaj(nizi, 18, "kvUW7qezKxy_WOKfXAraJ");
    izdelaj(nizi, 19, "eMnU9tV");
    izdelaj(nizi, 20, "gP_V5YTDILVdxlYc7WKOPxD6VwbwSMSkT1GEt9luEnrzomqfuPjni5Xb0wYx1TRjvJ4EEiqHnjDIaFof");
    nizi[21] = nizi[7];
    izdelaj(nizi, 22, "hB0WPaB48YbN6HOVoRBe");
    nizi[23] = nizi[12];
    nizi[24] = nizi[5];
    nizi[25] = nizi[14];
    nizi[26] = nizi[13];
    nizi[27] = nizi[11];
    nizi[28] = nizi[2];
    nizi[29] = nizi[14];
    nizi[30] = nizi[28];
    nizi[31] = nizi[5];
    nizi[32] = nizi[14];
    nizi[33] = nizi[32];
    izdelaj(nizi, 34, "qpSOpIsjnUsDl3zZzJkvPjn6fDOd29QodEqfcw6OOGKWnG7Gh5Eq0r3q3jYFr");
    izdelaj(nizi, 35, "LjTyzkzTJS579GrVUEqaNU97pPSG4YgvhE76yfyiUu8ZovmvvlDV5VWdBwgA8nw0Csur4WubWN1ymmrghQA");
    nizi[36] = nizi[17];
    izdelaj(nizi, 37, "A2TQowhfGv0aQ4zhckUpcNwz1ZSo_lS_amzaTnYmPh6YEgB0RLaxybBczr92v3O3nuViCRfuzPcXXYezDLwMvv1");
    nizi[38] = nizi[36];
    nizi[39] = nizi[4];
    nizi[40] = nizi[29];
    nizi[41] = nizi[39];
    nizi[42] = nizi[25];
    izdelaj(nizi, 43, "K74MIunrhRYdgeXWGcJhYdFYYj_fncGuIXJ9hhugTjZY5h5");
    izdelaj(nizi, 44, "M6ny_penKMe9zOJFkFFHK1L3Ap5GgxqN5F57yntnWjmMvYLV05o9Q8jAkT0XHw5C46kPki7SODA0eE");
    izdelaj(nizi, 45, "cWMs4C6Zd1f2I38ZVEWnG49AwF9icT50_krCUI9rMzjcqrmZufxY_z03e5Eef3xaB3dne9aywWk9FNOj0LMloHM54uq");
    izdelaj(nizi, 46, "552P07V_8xgACXKyN4Oyp9cfY8vpuZkBr20elpWJJONwmuGxwEa22V_EUXz0doKbCsJFnYOQzPPOTk2f3ScRtOc9FQF");
    izdelaj(nizi, 47, "jmVsPtZuqQfl14ZIQW_tJaAXHEo0WeYuIgZVUfme6a36z1pJZs9T8MeBlkucHwxtQsY");
    nizi[48] = nizi[24];
    nizi[49] = nizi[29];
    izdelaj(nizi, 50, "8EQYs1Ag4S26Aa2I8nEwSYnGi");
    nizi[51] = nizi[25];
    nizi[52] = nizi[43];
    nizi[53] = nizi[3];
    nizi[54] = nizi[10];
    nizi[55] = nizi[32];
    izdelaj(nizi, 56, "NuJDC9ckT4J273tsOp8Gl46w5_rth7ATEczCtaFBE0KQGDTiRgeBt1YAUbd");
    nizi[57] = nizi[12];
    nizi[58] = nizi[54];
    izdelaj(nizi, 59, "hVV7YlCGiW");
    nizi[60] = nizi[55];
    nizi[61] = nizi[51];
    izdelaj(nizi, 62, "HsL0tksBooVGEtyqmyhJFQyV5xEnRCrJtHd2KEaKp5H9Hp_5D0");
    nizi[63] = nizi[59];
    izdelaj(nizi, 64, "f8ZHku2Hqce70BqdfwEukpQJen5dOYMkwt159MxjnpFqvbhPChOKf0VhXacACrbl2NV2LtLBl6U_QbUEp93nr9kfkcPta_fUsiB8");
    nizi[65] = nizi[16];
    nizi[66] = nizi[8];
    izdelaj(nizi, 67, "hl1hHEr98HcW57FbcEFfOCDgseVpfWsS2ESx04w3Y9Yn3fcrqBgZDhcVFSbJzvt_CHaeP");
    nizi[68] = nizi[62];
    nizi[69] = nizi[24];
    nizi[70] = nizi[42];
    nizi[71] = nizi[7];
    nizi[72] = nizi[11];
    nizi[73] = nizi[64];
    nizi[74] = nizi[45];
    nizi[75] = nizi[63];
    izdelaj(nizi, 76, "84ktf75zPhJuk3ggBFkFplCiWNQsspY1xNB8EfD7T0BmD");
    izdelaj(nizi, 77, "yTkNQ0Kn6bp55VVInyKa9x8xAz6PeUexpabfJSx96IEb8rqbs");
    nizi[78] = nizi[52];
    nizi[79] = nizi[77];
    izdelaj(nizi, 80, "gVzbIxUmbwhNan7X8AB31cVl_gdfPn2jVpfmhqWHq_LyEkDWXmaNA7iRTMWwmXNab0B_pck0yzzwOLqg1H8YVdB1FXzRDCPixMXb");
    nizi[81] = nizi[71];
    izdelaj(nizi, 82, "I7YZyjtFiKX5izWSXFztOnabeOXStd310xc7zIS2BSj4QaBMVur");
    izdelaj(nizi, 83, "3_e1j0eyev6RZfITrw0FFBVmd3KlW16GijJXiFzKQBQD_lWwM8QYrqJ6OXC6AuCEYFkaZ4r83avbOOG7ppB5vK0jc2BGozAV");
    izdelaj(nizi, 84, "5DoiXYr6DblOXmiyTpWh2NUm8LAd3XpRCgUeDybBS_dJlVUwdt");
    nizi[85] = nizi[36];
    izdelaj(nizi, 86, "iY8R69dBfKzWL8BnbGMiW8P5nG3LZK9Uz_uxeB3enAPB");
    izdelaj(nizi, 87, "4fe8fTxP3U9wJO2Z2ewQEFhm4vmYRUbVVefA0pvZH0zMIGHzl7xZqMXbFHvnhwstjIldmFyfb7Vr_HB2NGWsWZ");
    izdelaj(nizi, 88, "Ng4pt4xwSIhhOKGvvYchn93c7qGps2yC5YeM257h35fM_Eor2VxfABCZO1pO4");
    nizi[89] = nizi[56];
    nizi[90] = nizi[68];
    izdelaj(nizi, 91, "_2L1CC3B0y3WUUflBvnSXiFeIakf3ZK3ndJPVjgxQniqj7GZj4_IMk1QVYp");
    nizi[92] = nizi[25];
    izdelaj(nizi, 93, "7htUA");
    nizi[94] = nizi[51];
    nizi[95] = nizi[42];
    nizi[96] = nizi[84];
    izdelaj(nizi, 97, "rfog1SlVwIZlhzjZOwgRJ22Tx5PQ");
    izdelaj(nizi, 98, "Yl3GZ");
    nizi[99] = nizi[16];
    nizi[100] = nizi[67];
    nizi[101] = nizi[36];
    nizi[102] = nizi[44];
    nizi[103] = nizi[90];
    nizi[104] = nizi[15];
    nizi[105] = nizi[45];
    nizi[106] = nizi[2];
    nizi[107] = nizi[81];
    izdelaj(nizi, 108, "ClYOABCGxDuhfjPLMUV4ftPDLR_gt0OrD3HNSDX");
    izdelaj(nizi, 109, "zXuaPu1bWQS2tb2NuvJJFut0ZN2RTjczOD9Es4yoyY6ynfXBS0VEpLuGmQAGtAD");
    nizi[110] = nizi[1];
    izdelaj(nizi, 111, "i71yBL8xHGbI88bDEdwkmW");
    nizi[112] = nizi[106];
    nizi[113] = nizi[30];
    nizi[114] = nizi[72];
    izdelaj(nizi, 115, "FlTiHQXXX3W5CjBYEGtFl3vrkCbh05SF0Pn9yM7H4mFt8");
    izdelaj(nizi, 116, "dPd7Uz5K7ORt3uK31rK_Jlw1Sl1kVOMng5vSJKp8TusrcKfmMDH3eSeylsy5SmB_R0OJyOGdq");
    nizi[117] = nizi[110];
    izdelaj(nizi, 118, "y6A4GUKqse_WM3vKJsLnyhntnyFHAI_7");
    izdelaj(nizi, 119, "TZ2biXlTLMpYXcp15L4AFBXIt51uPkFVr_DFVpLn8JyqaNCR_Azvm99RG9Y43hQowMN7qYdK4JzCFhJbCLm3fpDzRm");
    nizi[120] = nizi[89];
    nizi[121] = nizi[22];
    nizi[122] = nizi[14];
    nizi[123] = nizi[57];
    izdelaj(nizi, 124, "nCFax1BItoJgD3GUkDZgdKOqWGijQO5xYdOk2T");
    nizi[125] = nizi[6];
    nizi[126] = nizi[11];
    nizi[127] = nizi[0];
    izdelaj(nizi, 128, "l6e93O6y193otmpaO8IZwIBEeLgz3ylC4DgCtf12vLShqmYF6pO");
    izdelaj(nizi, 129, "BuWVXYuTF3kt7Y6WE6kGpNXsFJh8G5AMXAciqovj6vmFFq5lT");
    nizi[130] = nizi[76];
    izdelaj(nizi, 131, "Zu8RO_steah_NA8IYvLCfxUIG8tWK1CFvb2C");
    nizi[132] = nizi[82];
    nizi[133] = nizi[67];
    nizi[134] = nizi[133];
    izdelaj(nizi, 135, "zcAqvFv5bbzrpwpyGjA_F8cK37LzoYnokeyn2YpvtyIx7oC2OcOcPKsvNLcs");
    izdelaj(nizi, 136, "xuXTzSso8MOOFQvVvCKxesLDRVLqAJYWOEFTKsiQiOn5XobYXiI");
    nizi[137] = nizi[27];
    nizi[138] = nizi[16];
    nizi[139] = nizi[13];
    izdelaj(nizi, 140, "LezD4Mvxm");
    izdelaj(nizi, 141, "l1XyNe44yNoo16vLLKzXPp8lZ8RLdFk6DZjyO1PG4ONMxJkwVY3K_Uj9y_Jx0WOx5imxxUcOXP3m_nrR457gV");
    nizi[142] = nizi[59];
    izdelaj(nizi, 143, "gDQQn5");
    izdelaj(nizi, 144, "cgEiSixC3COPT87zk2Ar");
    nizi[145] = nizi[90];
    nizi[146] = nizi[125];
    nizi[147] = nizi[64];
    nizi[148] = nizi[14];
    nizi[149] = nizi[109];
    nizi[150] = nizi[4];
    nizi[151] = nizi[85];
    nizi[152] = nizi[34];
    izdelaj(nizi, 153, "DmIzEareCiO8mzw8eMtLS5qTSGTuV_sfMcKHhSf3A52dwRNoxkaGDoyeirmua1tTtdC8Ax922Jx46GMu");
    nizi[154] = nizi[123];
    nizi[155] = nizi[86];
    izdelaj(nizi, 156, "iXIpcUQp9RUyYNLlqG40G6iuyOvZ1qEE5PZJBQAvIaANmzHul3JI0fEvkvl1hAbM_Svx1Z7634XCuA6H");
    nizi[157] = nizi[18];
    nizi[158] = nizi[43];
    nizi[159] = nizi[97];
    nizi[160] = nizi[26];
    nizi[161] = nizi[106];
    nizi[162] = nizi[110];
    nizi[163] = nizi[11];
    izdelaj(nizi, 164, "cMNWqqqTk18mCez4g7x9Rkokc7GRUnIJT3A19kWPJ48sf_HJB0ELdGqmQGefy9FLsZBeUF");
    izdelaj(nizi, 165, "ttj7knzoxkD9QR9UYxW9ksiDywgXupYUae9aKLYONmkfZXII9f2aglM_ctVS8NXlf");
    izdelaj(nizi, 166, "PZtTueHX2NeGU7gcrGEbDBImS01u");
    izdelaj(nizi, 167, "u3l7va5PBjh1jm3Dbbv7s276E_88j_XW86IM6AkV0x_fno8xzbS9VvTp6p5_TfJHKPM4LMP5jL9uMD4Z9Non");
    izdelaj(nizi, 168, "xLlWpQWulmw97KeZ8J5jrf154qD");
    izdelaj(nizi, 169, "NnwsqQP58cvefFfXOC8E1AREp8yGDVlmzalVQlDQU1rVX6EYlGRZWqDIEc8NxnWpSbqCaaX9UW7JIC8wiTDu9t9");
    izdelaj(nizi, 170, "ZMXkvcGUQniD6lRejZc_3x7BZUqJwIhbe0juvDXRwIhJghJucTCrWjgto8meAadTEKXXQ66OKpIuXbxVXfjzdSvH2x6xB");
    izdelaj(nizi, 171, "LQiJy4o_vqD8yDWBTafIdicU");
    izdelaj(nizi, 172, "NAT8Fgf_Gh7RtEGU_LvfiKbWSE4xC0W0AatZCYoyk5MjfO_e4EkuQCoRTUspIECnMxKp2H104OHe0qrsy0wK5BUZtFIBC5_");
    nizi[173] = nizi[172];
    izdelaj(nizi, 174, "DG9lxLp1i6ZVoSYTlMs2nRN18WHTdOyDJXtJC6cA8hqFhOyHQ8ilwjAxJxX1cMUHYRI4eWCz");
    nizi[175] = nizi[98];
    nizi[176] = nizi[2];
    izdelaj(nizi, 177, "oDmLFYWzVwmBOHhCN4GMXNGzw1V_lg5GIYtRmKf23ycBz31GX6NH4zLRJDFgDT3omLlaVhH");
    nizi[178] = nizi[172];
    izdelaj(nizi, 179, "_i3SA5dM714MY2X0kaJUqh4V");
    izdelaj(nizi, 180, "q8Uk8Lq1Jfzo3vKbDYi4q94wFCkR_6mj91fGTL9_bGzF2nSEXretDqW8SJ1FDLtjZM8g0OJe");
    nizi[181] = nizi[52];
    nizi[182] = nizi[12];
    izdelaj(nizi, 183, "2sBCwxb5bDAU1NMwELkbNwYEjAvjq6x0gDzc8o0HvzFgM_dYnq");
    nizi[184] = nizi[53];
    izdelaj(nizi, 185, "1pwdrM77DAYBwNPJ2v4qKKjhqY65oGq_9HNPPPF8sC7lOcYpNc4CoFwboPQlu9QHXRzoTef0sDUKmorcgAWw6WXcsoZLR8uh");
    nizi[186] = nizi[165];
    nizi[187] = nizi[110];
    nizi[188] = nizi[57];
    nizi[189] = nizi[152];
    izdelaj(nizi, 190, "HqtLuJiL47wP8Jxe9ngPfjOe6FTQbvcLuEXH70rXuVa4RpoUy1Kpklke8Or1bV4zxPr2FNT");
    izdelaj(nizi, 191, "skr9KoWvXMYRGFupAZ7kJEapbDhjGkVjCEzE4gM1bGho6mO2jmwMAAoIblaJgMAkcl");
    izdelaj(nizi, 192, "KWUdmsSix4qfXCurzaUUz2cROS8SkAUsuM_T5lXC9aa3RT1mewWQfQKBm1DUxfJdBAh596BiU5jRqadIDwfUO5vS9GpbvcpZIO7");
    nizi[193] = nizi[73];
    izdelaj(nizi, 194, "HEZUqwQYTYDdn0N4_FrU0ckUPx0G52cgyKPJC4QDd28PU8b2HDlr3YVJt7HAAiWKaoQkE9gygUXBJ_X91Yl1LHoYmrDa_f");
    nizi[195] = nizi[39];
    izdelaj(nizi, 196, "1syXy0gqbtBkJY_N8PDOnH6dvsN");
    nizi[197] = nizi[159];
    izdelaj(nizi, 198, "6GQjZq2pA7eORsvt0d3h1UtbGMATh9E0yy");
    nizi[199] = nizi[17];
    nizi[200] = nizi[150];
    nizi[201] = nizi[22];
    nizi[202] = nizi[76];
    nizi[203] = nizi[192];
    nizi[204] = nizi[39];
    izdelaj(nizi, 205, "D7TYXek9Vh_5l0HtPpQ118i0lx3q_6yE0dDTYvHOXK00TlBq5mEvSxKdRucqDDSraFiQpBVPP6eZ9giOhUw3mN");
    nizi[206] = nizi[53];
    nizi[207] = nizi[142];
    nizi[208] = nizi[79];
    nizi[209] = nizi[28];
    nizi[210] = nizi[104];
    izdelaj(nizi, 211, "TX4es6FlzT22GwPhCnZtTGmXFHbAjIkCnDTyVkK_D0WteyZGzYm93eUgVKX4");
    nizi[212] = nizi[50];
    izdelaj(nizi, 213, "UkzrzgePkY6CoZhzuO");
    izdelaj(nizi, 214, "UierFpCrNS5M");
    izdelaj(nizi, 215, "1wXgIK");
    izdelaj(nizi, 216, "xFa8i7U9SZ_0yhqp3O4giiEsXzF_GBqtJe9j6aSEWd4");
    izdelaj(nizi, 217, "COaGxbjuznbFAUqIjoc3a6hmZtmMMNXTza7Ad08Kd10TSxU0xwbSjwjYC9CBCoZhKPrlre");
    izdelaj(nizi, 218, "UoYM8qbfXlB3lVpgLt0UJASwUQhiDzYyAnnOOYDr30X_ecnyaONE");
    nizi[219] = nizi[10];
    nizi[220] = nizi[158];
    nizi[221] = nizi[172];
    nizi[222] = nizi[126];
    nizi[223] = nizi[47];
    nizi[224] = nizi[83];
    nizi[225] = nizi[167];
    izdelaj(nizi, 226, "m0AWgfeVrcQTE0PaBwX7AmBnYL00DCl4");
    nizi[227] = nizi[138];
    nizi[228] = nizi[164];
    izdelaj(nizi, 229, "gdR4QmOmecfqfYC0f1QJgS3XjKvEi");
    nizi[230] = nizi[16];
    izdelaj(nizi, 231, "dGvxVtsq_4VGtWndK0mEGeZXG1C");
    nizi[232] = nizi[20];
    nizi[233] = nizi[211];
    nizi[234] = nizi[221];
    nizi[235] = nizi[114];
    nizi[236] = nizi[106];
    izdelaj(nizi, 237, "lYpSYJyzVvKQv8mBxZMpY5Epy8t_kEtQa8xcFdy9sCkujffZrtpD2wKBlmEYcKI43fPW_94lJcIfFQ3M6sdHUuOE8F");
    izdelaj(nizi, 238, "8NpcdEZS");
    nizi[239] = nizi[123];
    nizi[240] = nizi[163];
    nizi[241] = nizi[58];
    izdelaj(nizi, 242, "7_1rF_7Ei7R_klDroV7e1kDzFCorjCmcEXxjtWw2ORKdfX6m9zjterVFgSuV2Ckj64ALGmBOv");
    nizi[243] = nizi[95];
    izdelaj(nizi, 244, "f0U5xCY7ESU9ARiSkN4CGtJfMaB76myKTh3U6TZQijURvRwzhGHunZcaYVrURkB31BzGl2b6KDikELoAZNkuIEdm55dbAls8VhT");
    nizi[245] = nizi[101];
    nizi[246] = nizi[2];
    izdelaj(nizi, 247, "aBJadtk0L7ZVmLZeNYXGeLrMcB1UVTbI33U4acFe6ofQS31EOwUcLFA87paw");
    nizi[248] = nizi[64];
    nizi[249] = nizi[56];
    nizi[250] = nizi[45];
    nizi[251] = nizi[174];
    nizi[252] = nizi[242];
    izdelaj(nizi, 253, "zowqiO7Djp2M1qdVUPESRbPF7sImcx1KXtlGJ6Lfllg9NMSwdfYdZOoZzmfeygmUwCas9SFqME0DfD2iUvrnH5xiDN");
    nizi[254] = nizi[65];
    nizi[255] = nizi[8];
    izdelaj(nizi, 256, "IccbKWXEBy2gjGPsXZdwlNPImR1WCEatlXE_lVBhr8o7rqVEb86");
    nizi[257] = nizi[46];
    nizi[258] = nizi[193];
    izdelaj(nizi, 259, "y5Tt7rqfXRSegZX5pzIKPJ8t22dHu");
    nizi[260] = nizi[147];
    izdelaj(nizi, 261, "ZBcbeEeBPKEhQtegAZCoAZCziFMC6p1Y62FUt4KR2S5tA1FyZE_MTKxSYGzAa");
    izdelaj(nizi, 262, "kPLtcnu8ZU5NPrHOIXT9fw2WB94bU0hwQQn_pPL7XdVXUAWyK9E0TfK");
    izdelaj(nizi, 263, "l4iwH5Or8tHv4TlNN4pSvp3OYjDEAgcYfF8h_FXuF94BLrXQyEUSen");
    izdelaj(nizi, 264, "aHGwDJjW6fEmgfYg5Wc");
    nizi[265] = nizi[129];
    nizi[266] = nizi[79];
    nizi[267] = nizi[134];
    izdelaj(nizi, 268, "lwJEmjrRVNeBhsr6_rUEZ0sA8vm_GODlo1XmlpEO63MGv9D9rskk8NuyqCxJMAxGydd");
    nizi[269] = nizi[169];
    izdelaj(nizi, 270, "J1MegatJYUHyoSFPoT4uyX3Wwk");
    nizi[271] = nizi[151];
    nizi[272] = nizi[109];
    nizi[273] = nizi[148];
    nizi[274] = nizi[96];
    nizi[275] = nizi[12];
    izdelaj(nizi, 276, "uqQ3euWtNRc0TqUNzBFIfQ9YNnLGD2fQWQVVimOFg9bmUGz8TKRiYJFbnIvzdhDW");
    izdelaj(nizi, 277, "dwECPgmp0IGxqK4tVc6k0kV3uyt9ewRdhhOAxIQ7jywhkzF8LPspnf7TPpVe7N37ZfZ5xJf2GdGlgbv5D177bYvu17ul98aSO");
    nizi[278] = nizi[58];
    izdelaj(nizi, 279, "pzKDgRfZDLC90rVl9CuFGa86gir7G0hzqcLqVCCFOU869VVWtr34p0pWNyaTlVn15g_9_wNDwsWBNfhgY");
    izdelaj(nizi, 280, "ZZUNN3ZRPM8ZPlybpIzkPmFwuZk17e0f25");
    nizi[281] = nizi[222];
    izdelaj(nizi, 282, "s93ZezYZ");
    izdelaj(nizi, 283, "uq2Zz1qH6VD9oiwhWVd5UmgfTo0m9vzhfXXUTxymsWFmjKgBLRUpmj5ISIFezQdOy_lVlvqMBc_rnOf9R9axXyxi");
    nizi[284] = nizi[88];
    nizi[285] = nizi[183];
    nizi[286] = nizi[188];
    nizi[287] = nizi[179];
    nizi[288] = nizi[118];
    nizi[289] = nizi[92];
    izdelaj(nizi, 290, "9PKV2Ii0hxf6MPbDQU8j_ft7O4orJZN1E0MfVs99KDX8BI6av2HMcrjbH54FXUDnOogrhbtbEybTrRqAsypNR");
    izdelaj(nizi, 291, "Y6BjnLYnKLcqo5");
    nizi[292] = nizi[146];
    nizi[293] = nizi[50];
    nizi[294] = nizi[32];
    nizi[295] = nizi[160];
    izdelaj(nizi, 296, "Lhck_v60zFKUMJkbEPhPRdXXytrXD4Dxe_OhDeCYZLXr52mksxsmHQqOnuYDXX1dS6ZOP");
    nizi[297] = nizi[271];
    nizi[298] = nizi[198];
    izdelaj(nizi, 299, "uGpcSHrRbhZsUOmjB6Ty9FNwO");
    nizi[300] = nizi[63];
    nizi[301] = nizi[64];
    izdelaj(nizi, 302, "RvqMHIVcTHFexs59aOevKDzt9UPGSL");
    nizi[303] = nizi[199];
    nizi[304] = nizi[92];
    nizi[305] = nizi[39];
    nizi[306] = nizi[83];
    nizi[307] = nizi[250];
    nizi[308] = nizi[116];
    izdelaj(nizi, 309, "xZjInRONpfw2lGBudY84iiQVsWPe5PDp6u5nmoGYh1kvDTzX");
    nizi[310] = nizi[22];
    nizi[311] = nizi[126];
    nizi[312] = nizi[265];
    nizi[313] = nizi[311];
    izdelaj(nizi, 314, "K_GeWa4OktES57moizQDloc7cSgcbg56YRFVTQGYpmGMYD87qGe8MUB1hyhxcj_5amL9sJtgCQn");
    nizi[315] = nizi[103];
    izdelaj(nizi, 316, "q7bvweAwczLRvV_1rOQ1nVpV4AlEnhWpWs0aTRQcoLbPzoerfXZ73ja_LLcLHoNccUD6tX1rZXpxkuvvPQUJI");
    izdelaj(nizi, 317, "vllkUrlKz7pG0ulHt2tN_86rQmmlIrsWtzK2bqQMkXN7uVmKLwluT5f47SfgQmaDpJRx2rfhri_DSc9kCrmJpNUPN87G");
    izdelaj(nizi, 318, "t3bSrfBilwj2scVbpwB6JFCPhi3As85GV9qIQphgD_uYzrkw8WDYPesfH_CX_dwGiTQX0eH5uY2r2iks_mXjU0Gd");
    izdelaj(nizi, 319, "gAfTM7DfxcsyZBzOZuOpMUvNYO5KVKYFGbCVx5k_GZ");
    nizi[320] = nizi[229];
    nizi[321] = nizi[27];
    nizi[322] = nizi[274];
    nizi[323] = nizi[59];
    nizi[324] = nizi[127];
    nizi[325] = nizi[295];
    nizi[326] = nizi[243];
    nizi[327] = nizi[35];
    nizi[328] = nizi[282];
    izdelaj(nizi, 329, "n90ioXH");
    nizi[330] = nizi[116];
    nizi[331] = nizi[234];
    nizi[332] = nizi[81];
    izdelaj(nizi, 333, "ac1A_7dDCgYu6qRBDTRQco8Be9qkAznX10f0CUm3QtfP9RiFJP9bp0KPA9lkSfHj2i9qlYcCa9ZMJylzWjhISvTRVKM4i4pyhX");
    nizi[334] = nizi[89];
    izdelaj(nizi, 335, "xcI040NlQdrX63CXTWtKxR8gy9gjcHeizzPfwktlKn0FlEnvsSsCFzsaTBNHpD3ZkVNGof2m80JA7EC902ZeS1Xf469N");
    izdelaj(nizi, 336, "3PTWHSyyRTGIJsqJrzhd1L0TZkr_N0cLRyDOJ1Kc08MC_Gm7PEzfVGGgmmrfwG3sBctDeFaa8C5dZ");
    izdelaj(nizi, 337, "1VL2rtuIuHxr5");
    izdelaj(nizi, 338, "vimFa219YCxxGyflk_FtCSGHMJzjcZtLPRmDQW8FkRa1Awzlxb1M_G3aG79xGSuc7U6YRIHNQbQkN");
    nizi[339] = nizi[61];
    izdelaj(nizi, 340, "3ImQ9");
    nizi[341] = nizi[33];
    nizi[342] = nizi[199];
    nizi[343] = nizi[80];
    izdelaj(nizi, 344, "9bnSe_Ewm72jglhvLznjBmQbdOPT7wEe93hOy");
    nizi[345] = nizi[256];
    izdelaj(nizi, 346, "zyiQcMIsDHbJTl0St0Q2f9xgm2mywHhnwNccYl9Dtmmbu9URCtFPgszBkAOTeJv226VjpM98qRJWOi1");
    izdelaj(nizi, 347, "cJ6oxYT6oSsPuObgAe1ZMoNeAOdKIkYqvtx1KKQ4MoeYM8_GwzuidmlG6yIn9X0");
    nizi[348] = nizi[13];
    izdelaj(nizi, 349, "4WRBV9s0eTgsn6u2UigS59wVrWkwwP_1bb31xmgRuPZEVRCO4kC20Xrgd0yqD");
    nizi[350] = nizi[192];
    izdelaj(nizi, 351, "LuESMCAyMl5CaEtt_WTcE25fUV8EYTc62gpposdKgkkrXuwC1Bg9WGuowqR9AmJyxXYVAqwKVMnYTBrsl");
    nizi[352] = nizi[88];
    izdelaj(nizi, 353, "7GIiaeOurPYAQjoDeSnFoAb");
    nizi[354] = nizi[263];
    nizi[355] = nizi[66];
    nizi[356] = nizi[191];
    nizi[357] = nizi[201];
    nizi[358] = nizi[161];
    izdelaj(nizi, 359, "Ns3AYWAaHz6cZLBK5rOubARE5AZeyCY4g");
    nizi[360] = nizi[37];
    izdelaj(nizi, 361, "sqpscgfw9B");
    nizi[362] = nizi[180];
    nizi[363] = nizi[174];
    nizi[364] = nizi[207];
    nizi[365] = nizi[122];
    nizi[366] = nizi[55];
    nizi[367] = nizi[166];
    nizi[368] = nizi[245];
    izdelaj(nizi, 369, "B9aXQLNnsiH0uUFjAiLP8pb8pP1om7J8SG9xMhKJgLG_dFlspPE6p_ve9fl51pFKky3X4Zoy2439Zm92z3");
    izdelaj(nizi, 370, "grg_kEcCGo9rOKp4q0BxSmO5HiIp_mOO_m_m2lsMLbEw");
    izdelaj(nizi, 371, "F3v3mcVn_aoTiGS3");
    izdelaj(nizi, 372, "NJZU9M5AT391OORP0VV7dPSLtaMfj9ACgxmYfmNImVFnrkJEWtPDxScQ7xurK_feE9Z1YTPqHHFkePbltFL7");
    nizi[373] = nizi[141];
    nizi[374] = nizi[266];
    izdelaj(nizi, 375, "cnpsULlCQVnCBkWGPD_tYNguSWD6iADY4h49T8ZMvYWhlC57wf3rQp8Z_KPOobZU1SxPDmDC1nolNPT6CdUI69mKAqMMeP5px");
    nizi[376] = nizi[316];
    nizi[377] = nizi[86];
    nizi[378] = nizi[300];
    izdelaj(nizi, 379, "HC6Z8QBMo5EPbpU8gZ1o");
    nizi[380] = nizi[272];
    izdelaj(nizi, 381, "hbzMrCQMrN5YE_sYEnX1hNJalPBUquTbzrJtZVTTiI_4_2Q5IgKTXe2zJu71ICDl1BaU9ylKQkR7SGgO3mPMvatNDx2L_m_");
    izdelaj(nizi, 382, "faGWt9hLh");
    izdelaj(nizi, 383, "mrhgnZ70KKQKcGHFeGgo591lhaI9pi5p6oucUYkSjJcMT");
    izdelaj(nizi, 384, "znrp56WxQvced5oAL7WhWD4wBiMA6Sif_c");
    izdelaj(nizi, 385, "imy79riYTgav3Yef6nCmEHMaKwxXkfEDYzEUllt0HhEO");
    izdelaj(nizi, 386, "2GBYUSQqL1StXb5ZdDeS0NgqTa8qSWaCtMva7uz3nvqjSlcRjIaGIub37A0jremEg1qQNBUxv4EdoNSLjidNh46");
    nizi[387] = nizi[340];
    nizi[388] = nizi[313];
    nizi[389] = nizi[337];
    nizi[390] = nizi[267];
    nizi[391] = nizi[138];
    nizi[392] = nizi[125];
    nizi[393] = nizi[243];
    nizi[394] = nizi[354];
    izdelaj(nizi, 395, "rEC31PDV5WwBZUe6F2a");
    izdelaj(nizi, 396, "oS60wKn5CbVH9uCOD8qg08wcYmakzoNZunRfIN_ilq6InI49LZK2UyVZqurTRCjlVM3X96DDTskjsURZCgTVUN78eVS");
    nizi[397] = nizi[77];
    nizi[398] = nizi[195];
    izdelaj(nizi, 399, "Yh");
    nizi[400] = nizi[266];
    nizi[401] = nizi[320];
    nizi[402] = nizi[122];
    izdelaj(nizi, 403, "7E2PyOSex42o5eg_RgfAzY70zfel3WksKNRn4KRt3");
    nizi[404] = nizi[237];
    izdelaj(nizi, 405, "G6HWp1erVc");
    izdelaj(nizi, 406, "NgUZemw_ESymc");
    izdelaj(nizi, 407, "IlRaTI9vE_v2nRhn941iAf2nIbWSORSOwEwb0Ed_A");
    nizi[408] = nizi[184];
    nizi[409] = nizi[276];
    nizi[410] = nizi[242];
    nizi[411] = nizi[380];
    izdelaj(nizi, 412, "ydhKn0GcD5JpfkdCNhg9SYTRG7xUVr6OK4nQP4nnmAmaz2KSqImqM");
    izdelaj(nizi, 413, "AKfqCVc2VDyBtvzxHCmrhauunJJoVy");
    nizi[414] = nizi[339];
    nizi[415] = nizi[119];
    nizi[416] = nizi[108];
    nizi[417] = nizi[343];
    nizi[418] = nizi[58];
    nizi[419] = nizi[37];
    izdelaj(nizi, 420, "L48oR_s3UfJ9rloV4JXWMHqo2tQ");
    izdelaj(nizi, 421, "PCRLWLiEHBLRlzg3xgyAs4pJ");
    izdelaj(nizi, 422, "6koPAWS");
    izdelaj(nizi, 423, "klaHIZqAXEELJbfL3ma_Ct_RZpV2IxeyS8GlzbBkjjP4S0b_");
    nizi[424] = nizi[83];
    nizi[425] = nizi[316];
    nizi[426] = nizi[367];
    izdelaj(nizi, 427, "mnYLbjPzsvZG7BfBx9fOLHThO7vyKSVmNNGAVbEpOVtZvT70fWp3gpqIANkGYV6aY");
    izdelaj(nizi, 428, "EqNfydexXrRFRIRmHdOGR_B1kHupD4xnNSAmUYZ_zDUnG8wdPbg4k1AWMO4DJnYl9hJz0aE3gtr6zGQdaiGTg78mFBFF");
    izdelaj(nizi, 429, "GNZIo64BWy_xIf6IEd3YxYE3YuIsVytkg7faIcY9ujs9NBk8MN1qXRsMMEPjVzRxnvsT5K_D_ZUmwxKOCUTQ6Uq9GTKfCfwAhe");
    izdelaj(nizi, 430, "j62gQHIXgURj5VK1GLQsJT_b_lSGYdK0krGx_N7emH1pIaNupk8R2oSceg2kEQ");
    nizi[431] = nizi[272];
    izdelaj(nizi, 432, "dl1QLq1jfCLjCjYHA5sClrVljR3Aa9FwdIzw6fLhiUS1GrqPT6yrLXhZAU0rzhg");
    izdelaj(nizi, 433, "wTG");
    nizi[434] = nizi[242];
    izdelaj(nizi, 435, "Vt_GipBGCIcbvCHqJO9grefMiX1llUS9EFEpoFYK5lqDuRODyKSa3K1hmBMBCIa");
    nizi[436] = nizi[330];
    nizi[437] = nizi[88];
    nizi[438] = nizi[1];
    nizi[439] = nizi[118];
    nizi[440] = nizi[339];
    izdelaj(nizi, 441, "AxS20hdHnwjKD2aOxVyXmVqHJbAkEFqToGxmd5boDAvTm5a7i2TiHOUcYme49svsNo89j1W1");
    izdelaj(nizi, 442, "WZiWrkdHvDf87UARKCkoRDGBFZM9PRdsOKqQiLf");
    nizi[443] = nizi[402];
    nizi[444] = nizi[386];
    izdelaj(nizi, 445, "mJqNOsBuvUhTd0EvVVYUOzIsyWUyQnfidOIw");
    nizi[446] = nizi[197];
    izdelaj(nizi, 447, "cuvKLUcmWx8wSKOyMqw1yTyHd1FI3P");
    izdelaj(nizi, 448, "42dZXx4h85p3Yx699Hqwm7");
    nizi[449] = nizi[260];
    nizi[450] = nizi[192];
    nizi[451] = nizi[297];
    nizi[452] = nizi[345];
    izdelaj(nizi, 453, "3FISInuvQmU4JmSc9rTU8zx3uP");
    nizi[454] = nizi[310];
    nizi[455] = nizi[253];
    nizi[456] = nizi[253];
    izdelaj(nizi, 457, "9bBYUVwsFQsmXJmF986WDCy_tBfAzLchHr6UmVNi2pZNLv2oKfFodwVOk_KDg7zrIMk1");
    izdelaj(nizi, 458, "kPsRtuZ3PmVwj46L88a13ERReW54tu8ppJrKLqwSvLQhSlOBFRxuUqA1NRzQP_1LEzVEo8tHH_TShEZdzDZpr4rrcsqp0k4C");
    nizi[459] = nizi[265];
    nizi[460] = nizi[81];
    nizi[461] = nizi[168];
    nizi[462] = nizi[120];
    izdelaj(nizi, 463, "kOb3bMsy01VOg7nLOuQH1KpP5Cz3tYZSBncZBpDTb");
    nizi[464] = nizi[122];
    nizi[465] = nizi[235];
    izdelaj(nizi, 466, "YD3VKRnR5MAL82A0TUxxpPfdJ1t9u5rUAStqIWcBWi0ZztOGVG2F");
    nizi[467] = nizi[343];
    izdelaj(nizi, 468, "OQRMjfWo");
    nizi[469] = nizi[62];
    nizi[470] = nizi[229];
    nizi[471] = nizi[215];
    izdelaj(nizi, 472, "3");
    izdelaj(nizi, 473, "mTU1qUk0sDui3V8FlhRMug_tovvvcXrM35XH2SgS1kzK8q9FUv1uvOFNBDC5YljPFerWASnUrX0A2GLrvlQ9t4tK");
    izdelaj(nizi, 474, "HNpyVA7_qLm3o5n_bvL9Z8fxnaqfSVa6Lzwp8N61XJWXPryhqBw2Wg4rZcXQ5s11G");
    nizi[475] = nizi[185];
    nizi[476] = nizi[146];
    nizi[477] = nizi[71];
    nizi[478] = nizi[372];
    izdelaj(nizi, 479, "qw0AA5K0sr917p85Z5MF5DpYMBsIcfdFfDvrMT");
    izdelaj(nizi, 480, "X1yEP8jn_UVx5SH9ZfIkI9");
    izdelaj(nizi, 481, "4hpoziMNo5f1TbRcfu1sqNln2TXSQad8egY7BMLb2h055D_aEyzy0dHsxTXNsWxMRE3zeaSCDpy9Lx27Z_qjktu");
    izdelaj(nizi, 482, "SC4o9qTtCOfHK065LtpKbF3mRP01zOyiU9H9m4wGaEQrR3QDsemd_T4m1YjKi67zGRwITWZfcQDuHh3");
    izdelaj(nizi, 483, "nYG1wPWcSBJRKylLQYBz_i8bN1p");
    nizi[484] = nizi[116];
    izdelaj(nizi, 485, "6pxnKZEPY9gsnLKMwKS24kyNaC4LR1SnSsoij9SgCleT8t4dm63kVOjQct");
    izdelaj(nizi, 486, "vCf80dpdbuJdX96Mqy6_i_uVZJLb5TxnWaxWVazQii3BBrFjgJSkuxVjdT770PEAmcvGp");
    nizi[487] = nizi[52];
    izdelaj(nizi, 488, "KIMxJREOmDEXvFcFnlQmofC8Ek2IRM7us6aCsLikOC_v_EXU8sQiz7Xxnw75bVEULbv_TpfEERH4vRrwkUhNXGu7msLR");
    nizi[489] = nizi[392];
    nizi[490] = nizi[31];
    nizi[491] = nizi[141];
    izdelaj(nizi, 492, "rmlYUlHIIfGsGIu8rKvfeW2IpaUyySQ2Fg02dNAMR4TRw");
    nizi[493] = nizi[334];
    nizi[494] = nizi[404];

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
