/***************************************************************/
/*                                                             */
/*      PROJECT NAME :  mouce1                                 */
/*      FILE         :  vector_table.c                         */
/*      DESCRIPTION  :  Vector Table                           */
/*      CPU SERIES   :  SH-2                                   */
/*      CPU TYPE     :  SH7125                                 */
/*                                                             */
/*      This file is generated by e2 studio.                   */
/*                                                             */
/***************************************************************/                                 


#include "vect.h"

#pragma section VECTTBL

void *RESET_Vectors[] = {
//;<<VECTOR DATA START (POWER ON RESET)>>
//;0 Power On Reset PC
    (void*) PowerON_Reset,                                                                                                                
//;<<VECTOR DATA END (POWER ON RESET)>>
// 1 Power On Reset SP
    __secend("S"),
//;<<VECTOR DATA START (MANUAL RESET)>>
//;2 Manual Reset PC
    (void*) Manual_Reset_PC,                                                                                                                 
//;<<VECTOR DATA END (MANUAL RESET)>>
// 3 Manual Reset SP
    __secend("S")

};

#pragma section INTTBL

void *INT_Vectors[] = {
// 4 Illegal code
    (void*) INT_Illegal_code,
// 5 Reserved
    (void*) Dummy,
// 6 Illegal slot
    (void*) INT_Illegal_slot,
// 7 Reserved
    (void*) Dummy,
// 8 Reserved
    (void*) Dummy,
// 9 CPU Address error
    (void*) INT_CPU_Address,
// 10 Reserved
    (void*) Dummy,
// 11 NMI
    (void*) INT_NMI,
// 12 User breakpoint trap
    (void*) INT_User_Break,
// 13 Reserved
    (void*) Dummy,
// 14 H-UDI
    (void*) Dummy,
// 15 Reserved
    (void*) Dummy,
// 16 Reserved
    (void*) Dummy,
// 17 Reserved
    (void*) Dummy,
// 18 Reserved
    (void*) Dummy,
// 19 Reserved
    (void*) Dummy,
// 20 Reserved
    (void*) Dummy,
// 21 Reserved
    (void*) Dummy,
// 22 Reserved
    (void*) Dummy,
// 23 Reserved
    (void*) Dummy,
// 24 Reserved
    (void*) Dummy,
// 25 Reserved
    (void*) Dummy,
// 26 Reserved
    (void*) Dummy,
// 27 Reserved
    (void*) Dummy,
// 28 Reserved
    (void*) Dummy,
// 29 Reserved
    (void*) Dummy,
// 30 Reserved
    (void*) Dummy,
// 31 Reserved
    (void*) Dummy,
// 32 TRAPA (User Vecter)
    (void*) INT_TRAPA32,
// 33 TRAPA (User Vecter)
    (void*) INT_TRAPA33,
// 34 TRAPA (User Vecter)
    (void*) INT_TRAPA34,
// 35 TRAPA (User Vecter)
    (void*) INT_TRAPA35,
// 36 TRAPA (User Vecter)
    (void*) INT_TRAPA36,
// 37 TRAPA (User Vecter)
    (void*) INT_TRAPA37,
// 38 TRAPA (User Vecter)
    (void*) INT_TRAPA38,
// 39 TRAPA (User Vecter)
    (void*) INT_TRAPA39,
// 40 TRAPA (User Vecter)
    (void*) INT_TRAPA40,
// 41 TRAPA (User Vecter)
    (void*) INT_TRAPA41,
// 42 TRAPA (User Vecter)
    (void*) INT_TRAPA42,
// 43 TRAPA (User Vecter)
    (void*) INT_TRAPA43,
// 44 TRAPA (User Vecter)
    (void*) INT_TRAPA44,
// 45 TRAPA (User Vecter)
    (void*) INT_TRAPA45,
// 46 TRAPA (User Vecter)
    (void*) INT_TRAPA46,
// 47 TRAPA (User Vecter)
    (void*) INT_TRAPA47,
// 48 TRAPA (User Vecter)
    (void*) INT_TRAPA48,
// 49 TRAPA (User Vecter)
    (void*) INT_TRAPA49,
// 50 TRAPA (User Vecter)
    (void*) INT_TRAPA50,
// 51 TRAPA (User Vecter)
    (void*) INT_TRAPA51,
// 52 TRAPA (User Vecter)
    (void*) INT_TRAPA52,
// 53 TRAPA (User Vecter)
    (void*) INT_TRAPA53,
// 54 TRAPA (User Vecter)
    (void*) INT_TRAPA54,
// 55 TRAPA (User Vecter)
    (void*) INT_TRAPA55,
// 56 TRAPA (User Vecter)
    (void*) INT_TRAPA56,
// 57 TRAPA (User Vecter)
    (void*) INT_TRAPA57,
// 58 TRAPA (User Vecter)
    (void*) INT_TRAPA58,
// 59 TRAPA (User Vecter)
    (void*) INT_TRAPA59,
// 60 TRAPA (User Vecter)
    (void*) INT_TRAPA60,
// 61 TRAPA (User Vecter)
    (void*) INT_TRAPA61,
// 62 TRAPA (User Vecter)
    (void*) INT_TRAPA62,
// 63 TRAPA (User Vecter)
    (void*) INT_TRAPA63,
// 64 Interrupt IRQ0
    (void*) INT_IRQ0,
// 65 Interrupt IRQ1
    (void*) INT_IRQ1,
// 66 Interrupt IRQ2
    (void*) INT_IRQ2,
// 67 Interrupt IRQ3
    (void*) INT_IRQ3,
// 68 Reserved
    (void*) Dummy,
// 69 Reserved
    (void*) Dummy,
// 70 Reserved
    (void*) Dummy,
// 71 Reserved
    (void*) Dummy,
// 72 Reserved
    (void*) Dummy,
// 73 Reserved
    (void*) Dummy,
// 74 Reserved
    (void*) Dummy,
// 75 Reserved
    (void*) Dummy,
// 76 Reserved
    (void*) Dummy,
// 77 Reserved
    (void*) Dummy,
// 78 Reserved
    (void*) Dummy,
// 79 Reserved
    (void*) Dummy,
// 80 Reserved
    (void*) Dummy,
// 81 Reserved
    (void*) Dummy,
// 82 Reserved
    (void*) Dummy,
// 83 Reserved
    (void*) Dummy,
// 84 Reserved
    (void*) Dummy,
// 85 Reserved
    (void*) Dummy,
// 86 Reserved
    (void*) Dummy,
// 87 Reserved
    (void*) Dummy,
// 88 MTU2_0 TGIA0
    (void*) INT_MTU2_0_TGIA0,
// 89 MTU2_0 TGIB0
    (void*) INT_MTU2_0_TGIB0,
// 90 MTU2_0 TGIC0
    (void*) INT_MTU2_0_TGIC0,
// 91 MTU2_0 TGID0
    (void*) INT_MTU2_0_TGID0,
// 92 MTU2_0 TCIV0
    (void*) INT_MTU2_0_TCIV0,
// 93 MTU2_0 TGIE0
    (void*) INT_MTU2_0_TGIE0,
// 94 MTU2_0 TGIF0
    (void*) INT_MTU2_0_TGIF0,
// 95 Reserved
    (void*) Dummy,
// 96 MTU2_1 TGIA1
    (void*) INT_MTU2_1_TGIA1,
// 97 MTU2_1 TGIB1
    (void*) INT_MTU2_1_TGIB1,
// 98 Reserved
    (void*) Dummy,
// 99 Reserved
    (void*) Dummy,
// 100 MTU2_1 TCIV1
    (void*) INT_MTU2_1_TCIV1,
// 101 MTU2_1 TCIU1
    (void*) INT_MTU2_1_TCIU1,
// 102 Reserved
    (void*) Dummy,
// 103 Reserved
    (void*) Dummy,
// 104 MTU2_2 TGIA2
    (void*) INT_MTU2_2_TGIA2,
// 105 MTU2_2 TGIB2
    (void*) INT_MTU2_2_TGIB2,
// 106 Reserved
    (void*) Dummy,
// 107 Reserved
    (void*) Dummy,
// 108 MTU2_2 TCIV2
    (void*) INT_MTU2_2_TCIV2,
// 109 MTU2_2 TCIU2
    (void*) INT_MTU2_2_TCIU2,
// 110 Reserved
    (void*) Dummy,
// 111 Reserved
    (void*) Dummy,
// 112 MTU2_3 TGIA3
    (void*) INT_MTU2_3_TGIA3,
// 113 MTU2_3 TGIB3
    (void*) INT_MTU2_3_TGIB3,
// 114 MTU2_3 TGIC3
    (void*) INT_MTU2_3_TGIC3,
// 115 MTU2_3 TGID3
    (void*) INT_MTU2_3_TGID3,
// 116 MTU2_3 TCIV3
    (void*) INT_MTU2_3_TCIV3,
// 117 Reserved
    (void*) Dummy,
// 118 Reserved
    (void*) Dummy,
// 119 Reserved
    (void*) Dummy,
// 120 MTU2_4 TGIA4
    (void*) INT_MTU2_4_TGIA4,
// 121 MTU2_4 TGIB4
    (void*) INT_MTU2_4_TGIB4,
// 122 MTU2_4 TGIC4
    (void*) INT_MTU2_4_TGIC4,
// 123 MTU2_4 TGID4
    (void*) INT_MTU2_4_TGID4,
// 124 MTU2_4 TCIV4
    (void*) INT_MTU2_4_TCIV4,
// 125 Reserved
    (void*) Dummy,
// 126 Reserved
    (void*) Dummy,
// 127 Reserved
    (void*) Dummy,
// 128 MTU2_5 TGIU5
    (void*) INT_MTU2_5_TGIU5,
// 129 MTU2_5 TGIV5
    (void*) INT_MTU2_5_TGIV5,
// 130 MTU2_5 TGIW5
    (void*) INT_MTU2_5_TGIW5,
// 131 Reserved
    (void*) Dummy,
// 132 POE OEI1
    (void*) INT_POE_OEI1,
// 133 POE OEI3
    (void*) INT_POE_OEI3,
// 134 Reserved
    (void*) Dummy,
// 135 Reserved
    (void*) Dummy,
// 136 Reserved
    (void*) Dummy,
// 137 Reserved
    (void*) Dummy,
// 138 Reserved
    (void*) Dummy,
// 139 Reserved
    (void*) Dummy,
// 140 Reserved
    (void*) Dummy,
// 141 Reserved
    (void*) Dummy,
// 142 Reserved
    (void*) Dummy,
// 143 Reserved
    (void*) Dummy,
// 144 Reserved
    (void*) Dummy,
// 145 Reserved
    (void*) Dummy,
// 146 Reserved
    (void*) Dummy,
// 147 Reserved
    (void*) Dummy,
// 148 Reserved
    (void*) Dummy,
// 149 Reserved
    (void*) Dummy,
// 150 Reserved
    (void*) Dummy,
// 151 Reserved
    (void*) Dummy,
// 152 Reserved
    (void*) Dummy,
// 153 Reserved
    (void*) Dummy,
// 154 Reserved
    (void*) Dummy,
// 155 Reserved
    (void*) Dummy,
// 156 Reserved
    (void*) Dummy,
// 157 Reserved
    (void*) Dummy,
// 158 Reserved
    (void*) Dummy,
// 159 Reserved
    (void*) Dummy,
// 160 Reserved
    (void*) Dummy,
// 161 Reserved
    (void*) Dummy,
// 162 Reserved
    (void*) Dummy,
// 163 Reserved
    (void*) Dummy,
// 164 Reserved
    (void*) Dummy,
// 165 Reserved
    (void*) Dummy,
// 166 Reserved
    (void*) Dummy,
// 167 Reserved
    (void*) Dummy,
// 168 Reserved
    (void*) Dummy,
// 169 Reserved
    (void*) Dummy,
// 170 Reserved
    (void*) Dummy,
// 171 Reserved
    (void*) Dummy,
// 172 Reserved
    (void*) Dummy,
// 173 Reserved
    (void*) Dummy,
// 174 Reserved
    (void*) Dummy,
// 175 Reserved
    (void*) Dummy,
// 176 Reserved
    (void*) Dummy,
// 177 Reserved
    (void*) Dummy,
// 178 Reserved
    (void*) Dummy,
// 179 Reserved
    (void*) Dummy,
// 180 Reserved
    (void*) Dummy,
// 181 Reserved
    (void*) Dummy,
// 182 Reserved
    (void*) Dummy,
// 183 Reserved
    (void*) Dummy,
// 184 CMT0 CMI0
    (void*) INT_CMT0_CMI0,
// 185 Reserved
    (void*) Dummy,
// 186 Reserved
    (void*) Dummy,
// 187 Reserved
    (void*) Dummy,
// 188 CMT1 CMI1
    (void*) INT_CMT1_CMI1,
// 189 Reserved
    (void*) Dummy,
// 190 Reserved
    (void*) Dummy,
// 191 Reserved
    (void*) Dummy,
// 192 Reserved
    (void*) Dummy,
// 193 Reserved
    (void*) Dummy,
// 194 Reserved
    (void*) Dummy,
// 195 Reserved
    (void*) Dummy,
// 196 WDT ITI
    (void*) INT_WDT_ITI,
// 197 Reserved
    (void*) Dummy,
// 198 Reserved
    (void*) Dummy,
// 199 Reserved
    (void*) Dummy,
// 200 AD0 ADI0
    (void*) INT_AD0_ADI0,
// 201 AD1 ADI1
    (void*) INT_AD1_ADI1,
// 202 Reserved
    (void*) Dummy,
// 203 Reserved
    (void*) Dummy,
// 204 Reserved
    (void*) Dummy,
// 205 Reserved
    (void*) Dummy,
// 206 Reserved
    (void*) Dummy,
// 207 Reserved
    (void*) Dummy,
// 208 Reserved
    (void*) Dummy,
// 209 Reserved
    (void*) Dummy,
// 210 Reserved
    (void*) Dummy,
// 211 Reserved
    (void*) Dummy,
// 212 Reserved
    (void*) Dummy,
// 213 Reserved
    (void*) Dummy,
// 214 Reserved
    (void*) Dummy,
// 215 Reserved
    (void*) Dummy,
// 216 SCI0 ERI0
    (void*) INT_SCI0_ERI0,
// 217 SCI0 RXI0
    (void*) INT_SCI0_RXI0,
// 218 SCI0 TXI0
    (void*) INT_SCI0_TXI0,
// 219 SCI0 TEI0
    (void*) INT_SCI0_TEI0,
// 220 SCI1 ERI1
    (void*) INT_SCI1_ERI1,
// 221 SCI1 RXI1
    (void*) INT_SCI1_RXI1,
// 222 SCI1 TXI1
    (void*) INT_SCI1_TXI1,
// 223 SCI1 TEI1
    (void*) INT_SCI1_TEI1,
// 224 SCI2 ERI2
    (void*) INT_SCI2_ERI2,
// 225 SCI2 RXI2
    (void*) INT_SCI2_RXI2,
// 226 SCI2 TXI2
    (void*) INT_SCI2_TXI2,
// 227 SCI2 TEI2
    (void*) INT_SCI2_TEI2,
// 228 Reserved
    (void*) Dummy,
// 229 Reserved
    (void*) Dummy,
// 230 Reserved
    (void*) Dummy,
// 231 Reserved
    (void*) Dummy,
// 232 Reserved
    (void*) Dummy,
// 233 Reserved
    (void*) Dummy,
// 234 Reserved
    (void*) Dummy,
// 235 Reserved
    (void*) Dummy,
// 236 Reserved
    (void*) Dummy,
// 237 Reserved
    (void*) Dummy,
// 238 Reserved
    (void*) Dummy,
// 239 Reserved
    (void*) Dummy,
// 240 Reserved
    (void*) Dummy,
// 241 Reserved
    (void*) Dummy,
// 242 Reserved
    (void*) Dummy,
// 243 Reserved
    (void*) Dummy,
// 244 Reserved
    (void*) Dummy,
// 245 Reserved
    (void*) Dummy,
// 246 Reserved
    (void*) Dummy,
// 247 Reserved
    (void*) Dummy,
// 248 Reserved
    (void*) Dummy,
// 249 Reserved
    (void*) Dummy,
// 250 Reserved
    (void*) Dummy,
// 251 Reserved
    (void*) Dummy,
// 252 Reserved
    (void*) Dummy,
// 253 Reserved
    (void*) Dummy,
// 254 Reserved
    (void*) Dummy,
// 255 Reserved
    (void*) Dummy
};
