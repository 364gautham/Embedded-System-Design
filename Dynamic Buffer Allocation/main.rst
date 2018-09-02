                              1 ;--------------------------------------------------------
                              2 ; File Created by SDCC : FreeWare ANSI-C Compiler
                              3 ; Version 2.6.0 #4309 (Jul 28 2006)
                              4 ; This file generated Mon Oct 23 16:46:20 2017
                              5 ;--------------------------------------------------------
                              6 	.module main
                              7 	.optsdcc -mmcs51 --model-large
                              8 	
                              9 ;--------------------------------------------------------
                             10 ; Public variables in this module
                             11 ;--------------------------------------------------------
                             12 	.globl _main
                             13 	.globl __sdcc_external_startup
                             14 	.globl _TF1
                             15 	.globl _TR1
                             16 	.globl _TF0
                             17 	.globl _TR0
                             18 	.globl _IE1
                             19 	.globl _IT1
                             20 	.globl _IE0
                             21 	.globl _IT0
                             22 	.globl _SM0
                             23 	.globl _SM1
                             24 	.globl _SM2
                             25 	.globl _REN
                             26 	.globl _TB8
                             27 	.globl _RB8
                             28 	.globl _TI
                             29 	.globl _RI
                             30 	.globl _CY
                             31 	.globl _AC
                             32 	.globl _F0
                             33 	.globl _RS1
                             34 	.globl _RS0
                             35 	.globl _OV
                             36 	.globl _F1
                             37 	.globl _P
                             38 	.globl _RD
                             39 	.globl _WR
                             40 	.globl _T1
                             41 	.globl _T0
                             42 	.globl _INT1
                             43 	.globl _INT0
                             44 	.globl _TXD0
                             45 	.globl _TXD
                             46 	.globl _RXD0
                             47 	.globl _RXD
                             48 	.globl _P3_7
                             49 	.globl _P3_6
                             50 	.globl _P3_5
                             51 	.globl _P3_4
                             52 	.globl _P3_3
                             53 	.globl _P3_2
                             54 	.globl _P3_1
                             55 	.globl _P3_0
                             56 	.globl _P2_7
                             57 	.globl _P2_6
                             58 	.globl _P2_5
                             59 	.globl _P2_4
                             60 	.globl _P2_3
                             61 	.globl _P2_2
                             62 	.globl _P2_1
                             63 	.globl _P2_0
                             64 	.globl _P1_7
                             65 	.globl _P1_6
                             66 	.globl _P1_5
                             67 	.globl _P1_4
                             68 	.globl _P1_3
                             69 	.globl _P1_2
                             70 	.globl _P1_1
                             71 	.globl _P1_0
                             72 	.globl _P0_7
                             73 	.globl _P0_6
                             74 	.globl _P0_5
                             75 	.globl _P0_4
                             76 	.globl _P0_3
                             77 	.globl _P0_2
                             78 	.globl _P0_1
                             79 	.globl _P0_0
                             80 	.globl _PS
                             81 	.globl _PT1
                             82 	.globl _PX1
                             83 	.globl _PT0
                             84 	.globl _PX0
                             85 	.globl _EA
                             86 	.globl _ES
                             87 	.globl _ET1
                             88 	.globl _EX1
                             89 	.globl _ET0
                             90 	.globl _EX0
                             91 	.globl _BREG_F7
                             92 	.globl _BREG_F6
                             93 	.globl _BREG_F5
                             94 	.globl _BREG_F4
                             95 	.globl _BREG_F3
                             96 	.globl _BREG_F2
                             97 	.globl _BREG_F1
                             98 	.globl _BREG_F0
                             99 	.globl _P5_7
                            100 	.globl _P5_6
                            101 	.globl _P5_5
                            102 	.globl _P5_4
                            103 	.globl _P5_3
                            104 	.globl _P5_2
                            105 	.globl _P5_1
                            106 	.globl _P5_0
                            107 	.globl _P4_7
                            108 	.globl _P4_6
                            109 	.globl _P4_5
                            110 	.globl _P4_4
                            111 	.globl _P4_3
                            112 	.globl _P4_2
                            113 	.globl _P4_1
                            114 	.globl _P4_0
                            115 	.globl _PX0L
                            116 	.globl _PT0L
                            117 	.globl _PX1L
                            118 	.globl _PT1L
                            119 	.globl _PLS
                            120 	.globl _PT2L
                            121 	.globl _PPCL
                            122 	.globl _EC
                            123 	.globl _CCF0
                            124 	.globl _CCF1
                            125 	.globl _CCF2
                            126 	.globl _CCF3
                            127 	.globl _CCF4
                            128 	.globl _CR
                            129 	.globl _CF
                            130 	.globl _TF2
                            131 	.globl _EXF2
                            132 	.globl _RCLK
                            133 	.globl _TCLK
                            134 	.globl _EXEN2
                            135 	.globl _TR2
                            136 	.globl _C_T2
                            137 	.globl _CP_RL2
                            138 	.globl _T2CON_7
                            139 	.globl _T2CON_6
                            140 	.globl _T2CON_5
                            141 	.globl _T2CON_4
                            142 	.globl _T2CON_3
                            143 	.globl _T2CON_2
                            144 	.globl _T2CON_1
                            145 	.globl _T2CON_0
                            146 	.globl _PT2
                            147 	.globl _ET2
                            148 	.globl _TMOD
                            149 	.globl _TL1
                            150 	.globl _TL0
                            151 	.globl _TH1
                            152 	.globl _TH0
                            153 	.globl _TCON
                            154 	.globl _SP
                            155 	.globl _SCON
                            156 	.globl _SBUF0
                            157 	.globl _SBUF
                            158 	.globl _PSW
                            159 	.globl _PCON
                            160 	.globl _P3
                            161 	.globl _P2
                            162 	.globl _P1
                            163 	.globl _P0
                            164 	.globl _IP
                            165 	.globl _IE
                            166 	.globl _DP0L
                            167 	.globl _DPL
                            168 	.globl _DP0H
                            169 	.globl _DPH
                            170 	.globl _B
                            171 	.globl _ACC
                            172 	.globl _EECON
                            173 	.globl _KBF
                            174 	.globl _KBE
                            175 	.globl _KBLS
                            176 	.globl _BRL
                            177 	.globl _BDRCON
                            178 	.globl _T2MOD
                            179 	.globl _SPDAT
                            180 	.globl _SPSTA
                            181 	.globl _SPCON
                            182 	.globl _SADEN
                            183 	.globl _SADDR
                            184 	.globl _WDTPRG
                            185 	.globl _WDTRST
                            186 	.globl _P5
                            187 	.globl _P4
                            188 	.globl _IPH1
                            189 	.globl _IPL1
                            190 	.globl _IPH0
                            191 	.globl _IPL0
                            192 	.globl _IEN1
                            193 	.globl _IEN0
                            194 	.globl _CMOD
                            195 	.globl _CL
                            196 	.globl _CH
                            197 	.globl _CCON
                            198 	.globl _CCAPM4
                            199 	.globl _CCAPM3
                            200 	.globl _CCAPM2
                            201 	.globl _CCAPM1
                            202 	.globl _CCAPM0
                            203 	.globl _CCAP4L
                            204 	.globl _CCAP3L
                            205 	.globl _CCAP2L
                            206 	.globl _CCAP1L
                            207 	.globl _CCAP0L
                            208 	.globl _CCAP4H
                            209 	.globl _CCAP3H
                            210 	.globl _CCAP2H
                            211 	.globl _CCAP1H
                            212 	.globl _CCAP0H
                            213 	.globl _CKCKON1
                            214 	.globl _CKCKON0
                            215 	.globl _CKRL
                            216 	.globl _AUXR1
                            217 	.globl _AUXR
                            218 	.globl _TH2
                            219 	.globl _TL2
                            220 	.globl _RCAP2H
                            221 	.globl _RCAP2L
                            222 	.globl _T2CON
                            223 	.globl _heap
                            224 	.globl _serialinit
                            225 	.globl _putstr
                            226 	.globl _putchar
                            227 	.globl _getchar
                            228 	.globl _gets
                            229 	.globl _atoi
                            230 ;--------------------------------------------------------
                            231 ; special function registers
                            232 ;--------------------------------------------------------
                            233 	.area RSEG    (DATA)
                    00C8    234 _T2CON	=	0x00c8
                    00CA    235 _RCAP2L	=	0x00ca
                    00CB    236 _RCAP2H	=	0x00cb
                    00CC    237 _TL2	=	0x00cc
                    00CD    238 _TH2	=	0x00cd
                    008E    239 _AUXR	=	0x008e
                    00A2    240 _AUXR1	=	0x00a2
                    0097    241 _CKRL	=	0x0097
                    008F    242 _CKCKON0	=	0x008f
                    008F    243 _CKCKON1	=	0x008f
                    00FA    244 _CCAP0H	=	0x00fa
                    00FB    245 _CCAP1H	=	0x00fb
                    00FC    246 _CCAP2H	=	0x00fc
                    00FD    247 _CCAP3H	=	0x00fd
                    00FE    248 _CCAP4H	=	0x00fe
                    00EA    249 _CCAP0L	=	0x00ea
                    00EB    250 _CCAP1L	=	0x00eb
                    00EC    251 _CCAP2L	=	0x00ec
                    00ED    252 _CCAP3L	=	0x00ed
                    00EE    253 _CCAP4L	=	0x00ee
                    00DA    254 _CCAPM0	=	0x00da
                    00DB    255 _CCAPM1	=	0x00db
                    00DC    256 _CCAPM2	=	0x00dc
                    00DD    257 _CCAPM3	=	0x00dd
                    00DE    258 _CCAPM4	=	0x00de
                    00D8    259 _CCON	=	0x00d8
                    00F9    260 _CH	=	0x00f9
                    00E9    261 _CL	=	0x00e9
                    00D9    262 _CMOD	=	0x00d9
                    00A8    263 _IEN0	=	0x00a8
                    00B1    264 _IEN1	=	0x00b1
                    00B8    265 _IPL0	=	0x00b8
                    00B7    266 _IPH0	=	0x00b7
                    00B2    267 _IPL1	=	0x00b2
                    00B3    268 _IPH1	=	0x00b3
                    00C0    269 _P4	=	0x00c0
                    00D8    270 _P5	=	0x00d8
                    00A6    271 _WDTRST	=	0x00a6
                    00A7    272 _WDTPRG	=	0x00a7
                    00A9    273 _SADDR	=	0x00a9
                    00B9    274 _SADEN	=	0x00b9
                    00C3    275 _SPCON	=	0x00c3
                    00C4    276 _SPSTA	=	0x00c4
                    00C5    277 _SPDAT	=	0x00c5
                    00C9    278 _T2MOD	=	0x00c9
                    009B    279 _BDRCON	=	0x009b
                    009A    280 _BRL	=	0x009a
                    009C    281 _KBLS	=	0x009c
                    009D    282 _KBE	=	0x009d
                    009E    283 _KBF	=	0x009e
                    00D2    284 _EECON	=	0x00d2
                    00E0    285 _ACC	=	0x00e0
                    00F0    286 _B	=	0x00f0
                    0083    287 _DPH	=	0x0083
                    0083    288 _DP0H	=	0x0083
                    0082    289 _DPL	=	0x0082
                    0082    290 _DP0L	=	0x0082
                    00A8    291 _IE	=	0x00a8
                    00B8    292 _IP	=	0x00b8
                    0080    293 _P0	=	0x0080
                    0090    294 _P1	=	0x0090
                    00A0    295 _P2	=	0x00a0
                    00B0    296 _P3	=	0x00b0
                    0087    297 _PCON	=	0x0087
                    00D0    298 _PSW	=	0x00d0
                    0099    299 _SBUF	=	0x0099
                    0099    300 _SBUF0	=	0x0099
                    0098    301 _SCON	=	0x0098
                    0081    302 _SP	=	0x0081
                    0088    303 _TCON	=	0x0088
                    008C    304 _TH0	=	0x008c
                    008D    305 _TH1	=	0x008d
                    008A    306 _TL0	=	0x008a
                    008B    307 _TL1	=	0x008b
                    0089    308 _TMOD	=	0x0089
                            309 ;--------------------------------------------------------
                            310 ; special function bits
                            311 ;--------------------------------------------------------
                            312 	.area RSEG    (DATA)
                    00AD    313 _ET2	=	0x00ad
                    00BD    314 _PT2	=	0x00bd
                    00C8    315 _T2CON_0	=	0x00c8
                    00C9    316 _T2CON_1	=	0x00c9
                    00CA    317 _T2CON_2	=	0x00ca
                    00CB    318 _T2CON_3	=	0x00cb
                    00CC    319 _T2CON_4	=	0x00cc
                    00CD    320 _T2CON_5	=	0x00cd
                    00CE    321 _T2CON_6	=	0x00ce
                    00CF    322 _T2CON_7	=	0x00cf
                    00C8    323 _CP_RL2	=	0x00c8
                    00C9    324 _C_T2	=	0x00c9
                    00CA    325 _TR2	=	0x00ca
                    00CB    326 _EXEN2	=	0x00cb
                    00CC    327 _TCLK	=	0x00cc
                    00CD    328 _RCLK	=	0x00cd
                    00CE    329 _EXF2	=	0x00ce
                    00CF    330 _TF2	=	0x00cf
                    00DF    331 _CF	=	0x00df
                    00DE    332 _CR	=	0x00de
                    00DC    333 _CCF4	=	0x00dc
                    00DB    334 _CCF3	=	0x00db
                    00DA    335 _CCF2	=	0x00da
                    00D9    336 _CCF1	=	0x00d9
                    00D8    337 _CCF0	=	0x00d8
                    00AE    338 _EC	=	0x00ae
                    00BE    339 _PPCL	=	0x00be
                    00BD    340 _PT2L	=	0x00bd
                    00BC    341 _PLS	=	0x00bc
                    00BB    342 _PT1L	=	0x00bb
                    00BA    343 _PX1L	=	0x00ba
                    00B9    344 _PT0L	=	0x00b9
                    00B8    345 _PX0L	=	0x00b8
                    00C0    346 _P4_0	=	0x00c0
                    00C1    347 _P4_1	=	0x00c1
                    00C2    348 _P4_2	=	0x00c2
                    00C3    349 _P4_3	=	0x00c3
                    00C4    350 _P4_4	=	0x00c4
                    00C5    351 _P4_5	=	0x00c5
                    00C6    352 _P4_6	=	0x00c6
                    00C7    353 _P4_7	=	0x00c7
                    00D8    354 _P5_0	=	0x00d8
                    00D9    355 _P5_1	=	0x00d9
                    00DA    356 _P5_2	=	0x00da
                    00DB    357 _P5_3	=	0x00db
                    00DC    358 _P5_4	=	0x00dc
                    00DD    359 _P5_5	=	0x00dd
                    00DE    360 _P5_6	=	0x00de
                    00DF    361 _P5_7	=	0x00df
                    00F0    362 _BREG_F0	=	0x00f0
                    00F1    363 _BREG_F1	=	0x00f1
                    00F2    364 _BREG_F2	=	0x00f2
                    00F3    365 _BREG_F3	=	0x00f3
                    00F4    366 _BREG_F4	=	0x00f4
                    00F5    367 _BREG_F5	=	0x00f5
                    00F6    368 _BREG_F6	=	0x00f6
                    00F7    369 _BREG_F7	=	0x00f7
                    00A8    370 _EX0	=	0x00a8
                    00A9    371 _ET0	=	0x00a9
                    00AA    372 _EX1	=	0x00aa
                    00AB    373 _ET1	=	0x00ab
                    00AC    374 _ES	=	0x00ac
                    00AF    375 _EA	=	0x00af
                    00B8    376 _PX0	=	0x00b8
                    00B9    377 _PT0	=	0x00b9
                    00BA    378 _PX1	=	0x00ba
                    00BB    379 _PT1	=	0x00bb
                    00BC    380 _PS	=	0x00bc
                    0080    381 _P0_0	=	0x0080
                    0081    382 _P0_1	=	0x0081
                    0082    383 _P0_2	=	0x0082
                    0083    384 _P0_3	=	0x0083
                    0084    385 _P0_4	=	0x0084
                    0085    386 _P0_5	=	0x0085
                    0086    387 _P0_6	=	0x0086
                    0087    388 _P0_7	=	0x0087
                    0090    389 _P1_0	=	0x0090
                    0091    390 _P1_1	=	0x0091
                    0092    391 _P1_2	=	0x0092
                    0093    392 _P1_3	=	0x0093
                    0094    393 _P1_4	=	0x0094
                    0095    394 _P1_5	=	0x0095
                    0096    395 _P1_6	=	0x0096
                    0097    396 _P1_7	=	0x0097
                    00A0    397 _P2_0	=	0x00a0
                    00A1    398 _P2_1	=	0x00a1
                    00A2    399 _P2_2	=	0x00a2
                    00A3    400 _P2_3	=	0x00a3
                    00A4    401 _P2_4	=	0x00a4
                    00A5    402 _P2_5	=	0x00a5
                    00A6    403 _P2_6	=	0x00a6
                    00A7    404 _P2_7	=	0x00a7
                    00B0    405 _P3_0	=	0x00b0
                    00B1    406 _P3_1	=	0x00b1
                    00B2    407 _P3_2	=	0x00b2
                    00B3    408 _P3_3	=	0x00b3
                    00B4    409 _P3_4	=	0x00b4
                    00B5    410 _P3_5	=	0x00b5
                    00B6    411 _P3_6	=	0x00b6
                    00B7    412 _P3_7	=	0x00b7
                    00B0    413 _RXD	=	0x00b0
                    00B0    414 _RXD0	=	0x00b0
                    00B1    415 _TXD	=	0x00b1
                    00B1    416 _TXD0	=	0x00b1
                    00B2    417 _INT0	=	0x00b2
                    00B3    418 _INT1	=	0x00b3
                    00B4    419 _T0	=	0x00b4
                    00B5    420 _T1	=	0x00b5
                    00B6    421 _WR	=	0x00b6
                    00B7    422 _RD	=	0x00b7
                    00D0    423 _P	=	0x00d0
                    00D1    424 _F1	=	0x00d1
                    00D2    425 _OV	=	0x00d2
                    00D3    426 _RS0	=	0x00d3
                    00D4    427 _RS1	=	0x00d4
                    00D5    428 _F0	=	0x00d5
                    00D6    429 _AC	=	0x00d6
                    00D7    430 _CY	=	0x00d7
                    0098    431 _RI	=	0x0098
                    0099    432 _TI	=	0x0099
                    009A    433 _RB8	=	0x009a
                    009B    434 _TB8	=	0x009b
                    009C    435 _REN	=	0x009c
                    009D    436 _SM2	=	0x009d
                    009E    437 _SM1	=	0x009e
                    009F    438 _SM0	=	0x009f
                    0088    439 _IT0	=	0x0088
                    0089    440 _IE0	=	0x0089
                    008A    441 _IT1	=	0x008a
                    008B    442 _IE1	=	0x008b
                    008C    443 _TR0	=	0x008c
                    008D    444 _TF0	=	0x008d
                    008E    445 _TR1	=	0x008e
                    008F    446 _TF1	=	0x008f
                            447 ;--------------------------------------------------------
                            448 ; overlayable register banks
                            449 ;--------------------------------------------------------
                            450 	.area REG_BANK_0	(REL,OVR,DATA)
   0000                     451 	.ds 8
                            452 ;--------------------------------------------------------
                            453 ; internal ram data
                            454 ;--------------------------------------------------------
                            455 	.area DSEG    (DATA)
   0021                     456 _main_sloc0_1_0:
   0021                     457 	.ds 2
   0023                     458 _main_sloc1_1_0:
   0023                     459 	.ds 2
   0025                     460 _main_sloc2_1_0:
   0025                     461 	.ds 2
   0027                     462 _main_sloc3_1_0:
   0027                     463 	.ds 2
   0029                     464 _main_sloc4_1_0:
   0029                     465 	.ds 2
   002B                     466 _main_sloc5_1_0:
   002B                     467 	.ds 2
   002D                     468 _main_sloc6_1_0:
   002D                     469 	.ds 2
   002F                     470 _main_sloc7_1_0:
   002F                     471 	.ds 2
   0031                     472 _main_sloc8_1_0:
   0031                     473 	.ds 1
   0032                     474 _main_sloc9_1_0:
   0032                     475 	.ds 2
   0034                     476 _main_sloc10_1_0:
   0034                     477 	.ds 2
   0036                     478 _main_sloc11_1_0:
   0036                     479 	.ds 2
   0038                     480 _main_sloc13_1_0:
   0038                     481 	.ds 2
   003A                     482 _main_sloc14_1_0:
   003A                     483 	.ds 2
   003C                     484 _atoi_sloc0_1_0:
   003C                     485 	.ds 2
                            486 ;--------------------------------------------------------
                            487 ; overlayable items in internal ram 
                            488 ;--------------------------------------------------------
                            489 	.area OSEG    (OVR,DATA)
                            490 ;--------------------------------------------------------
                            491 ; Stack segment in internal ram 
                            492 ;--------------------------------------------------------
                            493 	.area	SSEG	(DATA)
   0046                     494 __start__stack:
   0046                     495 	.ds	1
                            496 
                            497 ;--------------------------------------------------------
                            498 ; indirectly addressable internal ram data
                            499 ;--------------------------------------------------------
                            500 	.area ISEG    (DATA)
                            501 ;--------------------------------------------------------
                            502 ; bit data
                            503 ;--------------------------------------------------------
                            504 	.area BSEG    (BIT)
                            505 ;--------------------------------------------------------
                            506 ; paged external ram data
                            507 ;--------------------------------------------------------
                            508 	.area PSEG    (PAG,XDATA)
                            509 ;--------------------------------------------------------
                            510 ; external ram data
                            511 ;--------------------------------------------------------
                            512 	.area XSEG    (XDATA)
   0000                     513 _heap::
   0000                     514 	.ds 3000
   0BB8                     515 _main_ptra_1_1:
   0BB8                     516 	.ds 2
   0BBA                     517 _main_ptrb_1_1:
   0BBA                     518 	.ds 2
   0BBC                     519 _main_buffer_1_1:
   0BBC                     520 	.ds 200
   0C84                     521 _main_countnum_1_1:
   0C84                     522 	.ds 2
   0C86                     523 _main_countch_1_1:
   0C86                     524 	.ds 2
   0C88                     525 _main_count_1_1:
   0C88                     526 	.ds 2
   0C8A                     527 _main_score_1_1:
   0C8A                     528 	.ds 2
   0C8C                     529 _main_h_1_1:
   0C8C                     530 	.ds 2
   0C8E                     531 _main_t_1_1:
   0C8E                     532 	.ds 2
   0C90                     533 _main_str_1_1:
   0C90                     534 	.ds 6
   0C96                     535 _main_arr_1_1:
   0C96                     536 	.ds 200
   0D5E                     537 _main_buffersize_1_1:
   0D5E                     538 	.ds 200
   0E26                     539 _putstr_s_1_1:
   0E26                     540 	.ds 3
   0E29                     541 _putchar_c_1_1:
   0E29                     542 	.ds 1
   0E2A                     543 _gets_str_1_1:
   0E2A                     544 	.ds 3
   0E2D                     545 _gets_s_1_1:
   0E2D                     546 	.ds 3
   0E30                     547 _gets_count_1_1:
   0E30                     548 	.ds 2
   0E32                     549 _atoi_s_1_1:
   0E32                     550 	.ds 3
                            551 ;--------------------------------------------------------
                            552 ; external initialized ram data
                            553 ;--------------------------------------------------------
                            554 	.area XISEG   (XDATA)
                            555 	.area HOME    (CODE)
                            556 	.area GSINIT0 (CODE)
                            557 	.area GSINIT1 (CODE)
                            558 	.area GSINIT2 (CODE)
                            559 	.area GSINIT3 (CODE)
                            560 	.area GSINIT4 (CODE)
                            561 	.area GSINIT5 (CODE)
                            562 	.area GSINIT  (CODE)
                            563 	.area GSFINAL (CODE)
                            564 	.area CSEG    (CODE)
                            565 ;--------------------------------------------------------
                            566 ; interrupt vector 
                            567 ;--------------------------------------------------------
                            568 	.area HOME    (CODE)
   0000                     569 __interrupt_vect:
   0000 02 00 03            570 	ljmp	__sdcc_gsinit_startup
                            571 ;--------------------------------------------------------
                            572 ; global & static initialisations
                            573 ;--------------------------------------------------------
                            574 	.area HOME    (CODE)
                            575 	.area GSINIT  (CODE)
                            576 	.area GSFINAL (CODE)
                            577 	.area GSINIT  (CODE)
                            578 	.globl __sdcc_gsinit_startup
                            579 	.globl __sdcc_program_startup
                            580 	.globl __start__stack
                            581 	.globl __mcs51_genXINIT
                            582 	.globl __mcs51_genXRAMCLEAR
                            583 	.globl __mcs51_genRAMCLEAR
                            584 	.area GSFINAL (CODE)
   0062 02 00 65            585 	ljmp	__sdcc_program_startup
                            586 ;--------------------------------------------------------
                            587 ; Home
                            588 ;--------------------------------------------------------
                            589 	.area HOME    (CODE)
                            590 	.area CSEG    (CODE)
   0065                     591 __sdcc_program_startup:
   0065 12 00 71            592 	lcall	_main
                            593 ;	return from main will lock up
   0068 80 FE               594 	sjmp .
                            595 ;--------------------------------------------------------
                            596 ; code
                            597 ;--------------------------------------------------------
                            598 	.area CSEG    (CODE)
                            599 ;------------------------------------------------------------
                            600 ;Allocation info for local variables in function '_sdcc_external_startup'
                            601 ;------------------------------------------------------------
                            602 ;------------------------------------------------------------
                            603 ;	main.c:26: _sdcc_external_startup()
                            604 ;	-----------------------------------------
                            605 ;	 function _sdcc_external_startup
                            606 ;	-----------------------------------------
   006A                     607 __sdcc_external_startup:
                    0002    608 	ar2 = 0x02
                    0003    609 	ar3 = 0x03
                    0004    610 	ar4 = 0x04
                    0005    611 	ar5 = 0x05
                    0006    612 	ar6 = 0x06
                    0007    613 	ar7 = 0x07
                    0000    614 	ar0 = 0x00
                    0001    615 	ar1 = 0x01
                            616 ;	main.c:28: AUXR |= 0X0C ;
                            617 ;	genOr
   006A 43 8E 0C            618 	orl	_AUXR,#0x0C
                            619 ;	main.c:29: return 0;
                            620 ;	genRet
                            621 ;	Peephole 182.b	used 16 bit load of dptr
   006D 90 00 00            622 	mov	dptr,#0x0000
                            623 ;	Peephole 300	removed redundant label 00101$
   0070 22                  624 	ret
                            625 ;------------------------------------------------------------
                            626 ;Allocation info for local variables in function 'main'
                            627 ;------------------------------------------------------------
                            628 ;sloc0                     Allocated with name '_main_sloc0_1_0'
                            629 ;sloc1                     Allocated with name '_main_sloc1_1_0'
                            630 ;sloc2                     Allocated with name '_main_sloc2_1_0'
                            631 ;sloc3                     Allocated with name '_main_sloc3_1_0'
                            632 ;sloc4                     Allocated with name '_main_sloc4_1_0'
                            633 ;sloc5                     Allocated with name '_main_sloc5_1_0'
                            634 ;sloc6                     Allocated with name '_main_sloc6_1_0'
                            635 ;sloc7                     Allocated with name '_main_sloc7_1_0'
                            636 ;sloc8                     Allocated with name '_main_sloc8_1_0'
                            637 ;sloc9                     Allocated with name '_main_sloc9_1_0'
                            638 ;sloc10                    Allocated with name '_main_sloc10_1_0'
                            639 ;sloc11                    Allocated with name '_main_sloc11_1_0'
                            640 ;sloc12                    Allocated with name '_main_sloc12_1_0'
                            641 ;sloc13                    Allocated with name '_main_sloc13_1_0'
                            642 ;sloc14                    Allocated with name '_main_sloc14_1_0'
                            643 ;ptr                       Allocated with name '_main_ptr_1_1'
                            644 ;ptr1                      Allocated with name '_main_ptr1_1_1'
                            645 ;ptra                      Allocated with name '_main_ptra_1_1'
                            646 ;ptrb                      Allocated with name '_main_ptrb_1_1'
                            647 ;ptr5                      Allocated with name '_main_ptr5_1_1'
                            648 ;val                       Allocated with name '_main_val_1_1'
                            649 ;valw                      Allocated with name '_main_valw_1_1'
                            650 ;buffer                    Allocated with name '_main_buffer_1_1'
                            651 ;a                         Allocated with name '_main_a_1_1'
                            652 ;num                       Allocated with name '_main_num_1_1'
                            653 ;num3                      Allocated with name '_main_num3_1_1'
                            654 ;countnum                  Allocated with name '_main_countnum_1_1'
                            655 ;countch                   Allocated with name '_main_countch_1_1'
                            656 ;count                     Allocated with name '_main_count_1_1'
                            657 ;county                    Allocated with name '_main_county_1_1'
                            658 ;score                     Allocated with name '_main_score_1_1'
                            659 ;h                         Allocated with name '_main_h_1_1'
                            660 ;s                         Allocated with name '_main_s_1_1'
                            661 ;value                     Allocated with name '_main_value_1_1'
                            662 ;value1                    Allocated with name '_main_value1_1_1'
                            663 ;t                         Allocated with name '_main_t_1_1'
                            664 ;j                         Allocated with name '_main_j_1_1'
                            665 ;g                         Allocated with name '_main_g_1_1'
                            666 ;w                         Allocated with name '_main_w_1_1'
                            667 ;vv                        Allocated with name '_main_vv_1_1'
                            668 ;r                         Allocated with name '_main_r_1_1'
                            669 ;c                         Allocated with name '_main_c_1_1'
                            670 ;e                         Allocated with name '_main_e_1_1'
                            671 ;p                         Allocated with name '_main_p_1_1'
                            672 ;vv1                       Allocated with name '_main_vv1_1_1'
                            673 ;gg                        Allocated with name '_main_gg_1_1'
                            674 ;q                         Allocated with name '_main_q_1_1'
                            675 ;aa                        Allocated with name '_main_aa_1_1'
                            676 ;y                         Allocated with name '_main_y_1_1'
                            677 ;i                         Allocated with name '_main_i_1_1'
                            678 ;u                         Allocated with name '_main_u_1_1'
                            679 ;m                         Allocated with name '_main_m_1_1'
                            680 ;str                       Allocated with name '_main_str_1_1'
                            681 ;arr                       Allocated with name '_main_arr_1_1'
                            682 ;buffersize                Allocated with name '_main_buffersize_1_1'
                            683 ;------------------------------------------------------------
                            684 ;	main.c:31: void main()
                            685 ;	-----------------------------------------
                            686 ;	 function main
                            687 ;	-----------------------------------------
   0071                     688 _main:
                            689 ;	main.c:47: uint16_t num,num3,countnum = 0, countch =0,count = 0,county =0,score = 0  ,h = 0 ,s ,value,value1, t=0, j, g=0, w=0, vv ,r=0,c=0,e=0,p=0,vv1,gg;
                            690 ;	genAssign
   0071 90 0C 84            691 	mov	dptr,#_main_countnum_1_1
   0074 E4                  692 	clr	a
   0075 F0                  693 	movx	@dptr,a
   0076 A3                  694 	inc	dptr
   0077 F0                  695 	movx	@dptr,a
                            696 ;	genAssign
   0078 90 0C 86            697 	mov	dptr,#_main_countch_1_1
   007B E4                  698 	clr	a
   007C F0                  699 	movx	@dptr,a
   007D A3                  700 	inc	dptr
   007E F0                  701 	movx	@dptr,a
                            702 ;	genAssign
   007F 90 0C 88            703 	mov	dptr,#_main_count_1_1
   0082 E4                  704 	clr	a
   0083 F0                  705 	movx	@dptr,a
   0084 A3                  706 	inc	dptr
   0085 F0                  707 	movx	@dptr,a
                            708 ;	main.c:53: init_dynamic_memory((MEMHEADER xdata *)heap, HEAP_SIZE);
                            709 ;	genAssign
   0086 90 0E 40            710 	mov	dptr,#_init_dynamic_memory_PARM_2
   0089 74 B8               711 	mov	a,#0xB8
   008B F0                  712 	movx	@dptr,a
   008C A3                  713 	inc	dptr
   008D 74 0B               714 	mov	a,#0x0B
   008F F0                  715 	movx	@dptr,a
                            716 ;	genCall
                            717 ;	Peephole 182.a	used 16 bit load of DPTR
   0090 90 00 00            718 	mov	dptr,#_heap
   0093 12 15 62            719 	lcall	_init_dynamic_memory
                            720 ;	main.c:54: serialinit();
                            721 ;	genCall
   0096 12 11 C6            722 	lcall	_serialinit
                            723 ;	main.c:57: again :  putstr(" Enter buffer size between 32 and 2800( enter multiple of 16)\n\r ");          /* input size of buffer to be created in heap*/
   0099                     724 00101$:
                            725 ;	genCall
                            726 ;	Peephole 182.a	used 16 bit load of DPTR
   0099 90 1E 94            727 	mov	dptr,#__str_0
   009C 75 F0 80            728 	mov	b,#0x80
   009F 12 11 D9            729 	lcall	_putstr
                            730 ;	main.c:58: gets(str);                                                                                       /*get the input string */
                            731 ;	genCall
                            732 ;	Peephole 182.a	used 16 bit load of DPTR
   00A2 90 0C 90            733 	mov	dptr,#_main_str_1_1
   00A5 75 F0 00            734 	mov	b,#0x00
   00A8 12 12 53            735 	lcall	_gets
                            736 ;	main.c:60: if( str[0] == '0' && str[1] == '\0' )
                            737 ;	genPointerGet
                            738 ;	genFarPointerGet
   00AB 90 0C 90            739 	mov	dptr,#_main_str_1_1
   00AE E0                  740 	movx	a,@dptr
   00AF FA                  741 	mov	r2,a
                            742 ;	genCmpEq
                            743 ;	gencjneshort
                            744 ;	Peephole 112.b	changed ljmp to sjmp
                            745 ;	Peephole 198.b	optimized misc jump sequence
   00B0 BA 30 1C            746 	cjne	r2,#0x30,00227$
                            747 ;	Peephole 200.b	removed redundant sjmp
                            748 ;	Peephole 300	removed redundant label 00297$
                            749 ;	Peephole 300	removed redundant label 00298$
                            750 ;	genPointerGet
                            751 ;	genFarPointerGet
   00B3 90 0C 91            752 	mov	dptr,#(_main_str_1_1 + 0x0001)
   00B6 E0                  753 	movx	a,@dptr
                            754 ;	genIfxJump
                            755 ;	Peephole 108.b	removed ljmp by inverse jump logic
   00B7 70 16               756 	jnz	00227$
                            757 ;	Peephole 300	removed redundant label 00299$
                            758 ;	main.c:62: printf_tiny("enter proper number as specified\n\r");                                      /* to check for invalid input*/
                            759 ;	genIpush
   00B9 74 D5               760 	mov	a,#__str_1
   00BB C0 E0               761 	push	acc
   00BD 74 1E               762 	mov	a,#(__str_1 >> 8)
   00BF C0 E0               763 	push	acc
                            764 ;	genCall
   00C1 12 17 38            765 	lcall	_printf_tiny
   00C4 15 81               766 	dec	sp
   00C6 15 81               767 	dec	sp
                            768 ;	main.c:63: str[0]= '\0';
                            769 ;	genPointerSet
                            770 ;     genFarPointerSet
   00C8 90 0C 90            771 	mov	dptr,#_main_str_1_1
                            772 ;	Peephole 181	changed mov to clr
   00CB E4                  773 	clr	a
   00CC F0                  774 	movx	@dptr,a
                            775 ;	main.c:64: goto again;
                            776 ;	main.c:68: while( str[w] != '\0')                                                                             /* to check for invalid input*/
                            777 ;	Peephole 112.b	changed ljmp to sjmp
   00CD 80 CA               778 	sjmp	00101$
   00CF                     779 00227$:
                            780 ;	genAssign
   00CF 7A 00               781 	mov	r2,#0x00
   00D1 7B 00               782 	mov	r3,#0x00
                            783 ;	genAssign
   00D3 7C 00               784 	mov	r4,#0x00
   00D5 7D 00               785 	mov	r5,#0x00
   00D7                     786 00108$:
                            787 ;	genPlus
                            788 ;	Peephole 236.g	used r4 instead of ar4
   00D7 EC                  789 	mov	a,r4
   00D8 24 90               790 	add	a,#_main_str_1_1
   00DA F5 82               791 	mov	dpl,a
                            792 ;	Peephole 236.g	used r5 instead of ar5
   00DC ED                  793 	mov	a,r5
   00DD 34 0C               794 	addc	a,#(_main_str_1_1 >> 8)
   00DF F5 83               795 	mov	dph,a
                            796 ;	genPointerGet
                            797 ;	genFarPointerGet
   00E1 E0                  798 	movx	a,@dptr
                            799 ;	genCmpEq
                            800 ;	gencjneshort
                            801 ;	Peephole 112.b	changed ljmp to sjmp
   00E2 FE                  802 	mov	r6,a
                            803 ;	Peephole 115.b	jump optimization
   00E3 60 16               804 	jz	00110$
                            805 ;	Peephole 300	removed redundant label 00300$
                            806 ;	main.c:70: if( 0x29 < str[w] && str[w] < 0x3a )
                            807 ;	genCmpLt
                            808 ;	genCmp
                            809 ;	genIfxJump
                            810 ;	Peephole 108.a	removed ljmp by inverse jump logic
                            811 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   00E5 EE                  812 	mov	a,r6
   00E6 24 D6               813 	add	a,#0xff - 0x29
   00E8 50 0A               814 	jnc	00106$
                            815 ;	Peephole 300	removed redundant label 00301$
                            816 ;	genCmpLt
                            817 ;	genCmp
   00EA BE 3A 00            818 	cjne	r6,#0x3A,00302$
   00ED                     819 00302$:
                            820 ;	genIfxJump
                            821 ;	Peephole 108.a	removed ljmp by inverse jump logic
   00ED 50 05               822 	jnc	00106$
                            823 ;	Peephole 300	removed redundant label 00303$
                            824 ;	main.c:72: county++;
                            825 ;	genPlus
                            826 ;     genPlusIncr
   00EF 0A                  827 	inc	r2
   00F0 BA 00 01            828 	cjne	r2,#0x00,00304$
   00F3 0B                  829 	inc	r3
   00F4                     830 00304$:
   00F4                     831 00106$:
                            832 ;	main.c:74: w++;
                            833 ;	genPlus
                            834 ;     genPlusIncr
   00F4 0C                  835 	inc	r4
                            836 ;	Peephole 112.b	changed ljmp to sjmp
                            837 ;	Peephole 243	avoided branch to sjmp
   00F5 BC 00 DF            838 	cjne	r4,#0x00,00108$
   00F8 0D                  839 	inc	r5
                            840 ;	Peephole 300	removed redundant label 00305$
   00F9 80 DC               841 	sjmp	00108$
   00FB                     842 00110$:
                            843 ;	main.c:76: if( w != county)
                            844 ;	genCmpEq
                            845 ;	gencjneshort
   00FB EC                  846 	mov	a,r4
   00FC B5 02 06            847 	cjne	a,ar2,00306$
   00FF ED                  848 	mov	a,r5
   0100 B5 03 02            849 	cjne	a,ar3,00306$
                            850 ;	Peephole 112.b	changed ljmp to sjmp
   0103 80 17               851 	sjmp	00112$
   0105                     852 00306$:
                            853 ;	main.c:78: printf_tiny("enter a number as specified\n\r");
                            854 ;	genIpush
   0105 74 F8               855 	mov	a,#__str_2
   0107 C0 E0               856 	push	acc
   0109 74 1E               857 	mov	a,#(__str_2 >> 8)
   010B C0 E0               858 	push	acc
                            859 ;	genCall
   010D 12 17 38            860 	lcall	_printf_tiny
   0110 15 81               861 	dec	sp
   0112 15 81               862 	dec	sp
                            863 ;	main.c:79: str[0]= '\0';
                            864 ;	genPointerSet
                            865 ;     genFarPointerSet
   0114 90 0C 90            866 	mov	dptr,#_main_str_1_1
                            867 ;	Peephole 181	changed mov to clr
   0117 E4                  868 	clr	a
   0118 F0                  869 	movx	@dptr,a
                            870 ;	main.c:80: goto again ;
   0119 02 00 99            871 	ljmp	00101$
   011C                     872 00112$:
                            873 ;	main.c:86: num = atoi(str);
                            874 ;	genCall
                            875 ;	Peephole 182.a	used 16 bit load of DPTR
   011C 90 0C 90            876 	mov	dptr,#_main_str_1_1
   011F 75 F0 00            877 	mov	b,#0x00
   0122 12 13 67            878 	lcall	_atoi
   0125 AA 82               879 	mov	r2,dpl
   0127 AB 83               880 	mov	r3,dph
                            881 ;	main.c:87: if ((num%16) != 0)                                                                              /* to check for invalid input*/
                            882 ;	genAnd
   0129 74 0F               883 	mov	a,#0x0F
   012B 5A                  884 	anl	a,r2
   012C FC                  885 	mov	r4,a
   012D 7D 00               886 	mov	r5,#0x00
                            887 ;	genCmpEq
                            888 ;	gencjneshort
   012F BC 00 05            889 	cjne	r4,#0x00,00307$
   0132 BD 00 02            890 	cjne	r5,#0x00,00307$
                            891 ;	Peephole 112.b	changed ljmp to sjmp
   0135 80 12               892 	sjmp	00114$
   0137                     893 00307$:
                            894 ;	main.c:89: printf_tiny("enter proper size which is multiple of 16\n\r");
                            895 ;	genIpush
   0137 74 16               896 	mov	a,#__str_3
   0139 C0 E0               897 	push	acc
   013B 74 1F               898 	mov	a,#(__str_3 >> 8)
   013D C0 E0               899 	push	acc
                            900 ;	genCall
   013F 12 17 38            901 	lcall	_printf_tiny
   0142 15 81               902 	dec	sp
   0144 15 81               903 	dec	sp
                            904 ;	main.c:90: goto again;
   0146 02 00 99            905 	ljmp	00101$
   0149                     906 00114$:
                            907 ;	main.c:92: if ( num < 32 )
                            908 ;	genAssign
   0149 8A 04               909 	mov	ar4,r2
   014B 8B 05               910 	mov	ar5,r3
                            911 ;	genCmpLt
                            912 ;	genCmp
   014D C3                  913 	clr	c
   014E EC                  914 	mov	a,r4
   014F 94 20               915 	subb	a,#0x20
   0151 ED                  916 	mov	a,r5
   0152 94 00               917 	subb	a,#0x00
                            918 ;	genIfxJump
                            919 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0154 50 12               920 	jnc	00122$
                            921 ;	Peephole 300	removed redundant label 00308$
                            922 ;	main.c:94: printf_tiny("enter proper size \n\r");
                            923 ;	genIpush
   0156 74 42               924 	mov	a,#__str_4
   0158 C0 E0               925 	push	acc
   015A 74 1F               926 	mov	a,#(__str_4 >> 8)
   015C C0 E0               927 	push	acc
                            928 ;	genCall
   015E 12 17 38            929 	lcall	_printf_tiny
   0161 15 81               930 	dec	sp
   0163 15 81               931 	dec	sp
                            932 ;	main.c:95: goto again;
   0165 02 00 99            933 	ljmp	00101$
                            934 ;	main.c:99: do                                                                                            /* buffer allocation when heap space is available*/
   0168                     935 00122$:
                            936 ;	main.c:101: if ((buffer[0] = malloc((unsigned int)(num))) == 0)
                            937 ;	genCall
   0168 8A 82               938 	mov	dpl,r2
   016A 8B 83               939 	mov	dph,r3
   016C C0 02               940 	push	ar2
   016E C0 03               941 	push	ar3
   0170 12 15 E3            942 	lcall	_malloc
   0173 AC 82               943 	mov	r4,dpl
   0175 AD 83               944 	mov	r5,dph
   0177 D0 03               945 	pop	ar3
   0179 D0 02               946 	pop	ar2
                            947 ;	genPointerSet
                            948 ;     genFarPointerSet
   017B 90 0B BC            949 	mov	dptr,#_main_buffer_1_1
   017E EC                  950 	mov	a,r4
   017F F0                  951 	movx	@dptr,a
   0180 A3                  952 	inc	dptr
   0181 ED                  953 	mov	a,r5
   0182 F0                  954 	movx	@dptr,a
                            955 ;	genIfx
   0183 EC                  956 	mov	a,r4
   0184 4D                  957 	orl	a,r5
                            958 ;	genIfxJump
                            959 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0185 70 11               960 	jnz	00118$
                            961 ;	Peephole 300	removed redundant label 00309$
                            962 ;	main.c:102: putstr("malloc buffer[0] failed\n\r");
                            963 ;	genCall
                            964 ;	Peephole 182.a	used 16 bit load of DPTR
   0187 90 1F 57            965 	mov	dptr,#__str_5
   018A 75 F0 80            966 	mov	b,#0x80
   018D C0 02               967 	push	ar2
   018F C0 03               968 	push	ar3
   0191 12 11 D9            969 	lcall	_putstr
   0194 D0 03               970 	pop	ar3
   0196 D0 02               971 	pop	ar2
   0198                     972 00118$:
                            973 ;	main.c:103: if ((buffer[1] = malloc((unsigned int)(num))) == 0)
                            974 ;	genCall
   0198 8A 82               975 	mov	dpl,r2
   019A 8B 83               976 	mov	dph,r3
   019C C0 02               977 	push	ar2
   019E C0 03               978 	push	ar3
   01A0 12 15 E3            979 	lcall	_malloc
   01A3 AC 82               980 	mov	r4,dpl
   01A5 AD 83               981 	mov	r5,dph
   01A7 D0 03               982 	pop	ar3
   01A9 D0 02               983 	pop	ar2
                            984 ;	genPointerSet
                            985 ;     genFarPointerSet
   01AB 90 0B BE            986 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   01AE EC                  987 	mov	a,r4
   01AF F0                  988 	movx	@dptr,a
   01B0 A3                  989 	inc	dptr
   01B1 ED                  990 	mov	a,r5
   01B2 F0                  991 	movx	@dptr,a
                            992 ;	genIfx
   01B3 EC                  993 	mov	a,r4
   01B4 4D                  994 	orl	a,r5
                            995 ;	genIfxJump
                            996 ;	Peephole 108.b	removed ljmp by inverse jump logic
   01B5 70 28               997 	jnz	00123$
                            998 ;	Peephole 300	removed redundant label 00310$
                            999 ;	main.c:105: putstr("malloc buffer[1] failed\n\r");
                           1000 ;	genCall
                           1001 ;	Peephole 182.a	used 16 bit load of DPTR
   01B7 90 1F 71           1002 	mov	dptr,#__str_6
   01BA 75 F0 80           1003 	mov	b,#0x80
   01BD 12 11 D9           1004 	lcall	_putstr
                           1005 ;	main.c:106: free (buffer[0]);                                                                /* free buffer 0 if buffer 1 is not allocated*/
                           1006 ;	genPointerGet
                           1007 ;	genFarPointerGet
   01C0 90 0B BC           1008 	mov	dptr,#_main_buffer_1_1
   01C3 E0                 1009 	movx	a,@dptr
   01C4 FC                 1010 	mov	r4,a
   01C5 A3                 1011 	inc	dptr
   01C6 E0                 1012 	movx	a,@dptr
   01C7 FD                 1013 	mov	r5,a
                           1014 ;	genCast
   01C8 7E 00              1015 	mov	r6,#0x0
                           1016 ;	genCall
   01CA 8C 82              1017 	mov	dpl,r4
   01CC 8D 83              1018 	mov	dph,r5
   01CE 8E F0              1019 	mov	b,r6
   01D0 12 15 0F           1020 	lcall	_free
                           1021 ;	main.c:107: putstr("enter smaller buffer size\n\r");
                           1022 ;	genCall
                           1023 ;	Peephole 182.a	used 16 bit load of DPTR
   01D3 90 1F 8B           1024 	mov	dptr,#__str_7
   01D6 75 F0 80           1025 	mov	b,#0x80
   01D9 12 11 D9           1026 	lcall	_putstr
                           1027 ;	main.c:108: goto again ;
   01DC 02 00 99           1028 	ljmp	00101$
   01DF                    1029 00123$:
                           1030 ;	main.c:112: }while ( (buffer[0] == 0) || (buffer[1] == 0) );
                           1031 ;	genPointerGet
                           1032 ;	genFarPointerGet
   01DF 90 0B BC           1033 	mov	dptr,#_main_buffer_1_1
   01E2 E0                 1034 	movx	a,@dptr
   01E3 FC                 1035 	mov	r4,a
   01E4 A3                 1036 	inc	dptr
   01E5 E0                 1037 	movx	a,@dptr
                           1038 ;	genIfx
   01E6 FD                 1039 	mov	r5,a
                           1040 ;	Peephole 135	removed redundant mov
   01E7 4C                 1041 	orl	a,r4
                           1042 ;	genIfxJump
   01E8 70 03              1043 	jnz	00311$
   01EA 02 01 68           1044 	ljmp	00122$
   01ED                    1045 00311$:
                           1046 ;	genPointerGet
                           1047 ;	genFarPointerGet
   01ED 90 0B BE           1048 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   01F0 E0                 1049 	movx	a,@dptr
   01F1 FC                 1050 	mov	r4,a
   01F2 A3                 1051 	inc	dptr
   01F3 E0                 1052 	movx	a,@dptr
                           1053 ;	genIfx
   01F4 FD                 1054 	mov	r5,a
                           1055 ;	Peephole 135	removed redundant mov
   01F5 4C                 1056 	orl	a,r4
                           1057 ;	genIfxJump
   01F6 70 03              1058 	jnz	00312$
   01F8 02 01 68           1059 	ljmp	00122$
   01FB                    1060 00312$:
                           1061 ;	main.c:116: ptra = buffer[0];
                           1062 ;	genPointerGet
                           1063 ;	genFarPointerGet
   01FB 90 0B BC           1064 	mov	dptr,#_main_buffer_1_1
   01FE E0                 1065 	movx	a,@dptr
   01FF F5 3A              1066 	mov	_main_sloc14_1_0,a
   0201 A3                 1067 	inc	dptr
   0202 E0                 1068 	movx	a,@dptr
   0203 F5 3B              1069 	mov	(_main_sloc14_1_0 + 1),a
                           1070 ;	main.c:117: ptrb = buffer[1];
                           1071 ;	genPointerGet
                           1072 ;	genFarPointerGet
   0205 90 0B BE           1073 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   0208 E0                 1074 	movx	a,@dptr
   0209 F5 38              1075 	mov	_main_sloc13_1_0,a
   020B A3                 1076 	inc	dptr
   020C E0                 1077 	movx	a,@dptr
   020D F5 39              1078 	mov	(_main_sloc13_1_0 + 1),a
                           1079 ;	main.c:120: value = num + (uint16_t)buffer[0];
                           1080 ;	genAssign
   020F A8 3A              1081 	mov	r0,_main_sloc14_1_0
   0211 A9 3B              1082 	mov	r1,(_main_sloc14_1_0 + 1)
                           1083 ;	genCast
                           1084 ;	genPlus
                           1085 ;	Peephole 236.g	used r0 instead of ar0
   0213 E8                 1086 	mov	a,r0
                           1087 ;	Peephole 236.a	used r2 instead of ar2
   0214 2A                 1088 	add	a,r2
   0215 F5 21              1089 	mov	_main_sloc0_1_0,a
                           1090 ;	Peephole 236.g	used r1 instead of ar1
   0217 E9                 1091 	mov	a,r1
                           1092 ;	Peephole 236.b	used r3 instead of ar3
   0218 3B                 1093 	addc	a,r3
   0219 F5 22              1094 	mov	(_main_sloc0_1_0 + 1),a
                           1095 ;	main.c:121: value1 = num + (uint16_t)buffer[1];
                           1096 ;	genAssign
   021B A8 38              1097 	mov	r0,_main_sloc13_1_0
   021D A9 39              1098 	mov	r1,(_main_sloc13_1_0 + 1)
                           1099 ;	genCast
                           1100 ;	genPlus
                           1101 ;	Peephole 236.g	used r0 instead of ar0
   021F E8                 1102 	mov	a,r0
                           1103 ;	Peephole 236.a	used r2 instead of ar2
   0220 2A                 1104 	add	a,r2
   0221 F8                 1105 	mov	r0,a
                           1106 ;	Peephole 236.g	used r1 instead of ar1
   0222 E9                 1107 	mov	a,r1
                           1108 ;	Peephole 236.b	used r3 instead of ar3
   0223 3B                 1109 	addc	a,r3
   0224 F9                 1110 	mov	r1,a
                           1111 ;	main.c:124: putstr(" malloc passed , buffer allocation is successful \n\r");
                           1112 ;	genCall
                           1113 ;	Peephole 182.a	used 16 bit load of DPTR
   0225 90 1F A7           1114 	mov	dptr,#__str_8
   0228 75 F0 80           1115 	mov	b,#0x80
   022B C0 02              1116 	push	ar2
   022D C0 03              1117 	push	ar3
   022F C0 00              1118 	push	ar0
   0231 C0 01              1119 	push	ar1
   0233 12 11 D9           1120 	lcall	_putstr
   0236 D0 01              1121 	pop	ar1
   0238 D0 00              1122 	pop	ar0
   023A D0 03              1123 	pop	ar3
   023C D0 02              1124 	pop	ar2
                           1125 ;	main.c:127: while( 1 )
                           1126 ;	genAssign
   023E 8A 23              1127 	mov	_main_sloc1_1_0,r2
   0240 8B 24              1128 	mov	(_main_sloc1_1_0 + 1),r3
                           1129 ;	genAssign
   0242 8A 25              1130 	mov	_main_sloc2_1_0,r2
   0244 8B 26              1131 	mov	(_main_sloc2_1_0 + 1),r3
                           1132 ;	genAssign
   0246 85 3A 27           1133 	mov	_main_sloc3_1_0,_main_sloc14_1_0
   0249 85 3B 28           1134 	mov	(_main_sloc3_1_0 + 1),(_main_sloc14_1_0 + 1)
                           1135 ;	genAssign
   024C 85 38 29           1136 	mov	_main_sloc4_1_0,_main_sloc13_1_0
   024F 85 39 2A           1137 	mov	(_main_sloc4_1_0 + 1),(_main_sloc13_1_0 + 1)
                           1138 ;	genAssign
   0252 8A 2B              1139 	mov	_main_sloc5_1_0,r2
   0254 8B 2C              1140 	mov	(_main_sloc5_1_0 + 1),r3
                           1141 ;	genAssign
   0256 8A 2D              1142 	mov	_main_sloc6_1_0,r2
   0258 8B 2E              1143 	mov	(_main_sloc6_1_0 + 1),r3
                           1144 ;	genAssign
   025A 75 2F 01           1145 	mov	_main_sloc7_1_0,#0x01
   025D E4                 1146 	clr	a
   025E F5 30              1147 	mov	(_main_sloc7_1_0 + 1),a
   0260                    1148 00217$:
                           1149 ;	main.c:132: DEBUGPORT(10);
                           1150 ;	genIpush
   0260 C0 00              1151 	push	ar0
   0262 C0 01              1152 	push	ar1
                           1153 ;	genAssign
                           1154 ;	Peephole 182.b	used 16 bit load of dptr
   0264 90 FF FF           1155 	mov	dptr,#0xFFFF
                           1156 ;	genPointerSet
                           1157 ;     genFarPointerSet
   0267 74 0A              1158 	mov	a,#0x0A
   0269 F0                 1159 	movx	@dptr,a
                           1160 ;	main.c:133: here : putstr (" enter a character\n\r") ;                                 /* enter a  user character for various options and for storing char's*/
                           1161 ;	genCall
                           1162 ;	Peephole 182.a	used 16 bit load of DPTR
   026A 90 1F DB           1163 	mov	dptr,#__str_9
   026D 75 F0 80           1164 	mov	b,#0x80
   0270 C0 02              1165 	push	ar2
   0272 C0 03              1166 	push	ar3
   0274 C0 00              1167 	push	ar0
   0276 C0 01              1168 	push	ar1
   0278 12 11 D9           1169 	lcall	_putstr
   027B D0 01              1170 	pop	ar1
   027D D0 00              1171 	pop	ar0
   027F D0 03              1172 	pop	ar3
   0281 D0 02              1173 	pop	ar2
                           1174 ;	main.c:134: a = getchar();
                           1175 ;	genCall
   0283 C0 02              1176 	push	ar2
   0285 C0 03              1177 	push	ar3
   0287 C0 00              1178 	push	ar0
   0289 C0 01              1179 	push	ar1
   028B 12 12 47           1180 	lcall	_getchar
   028E 85 82 31           1181 	mov	_main_sloc8_1_0,dpl
   0291 D0 01              1182 	pop	ar1
   0293 D0 00              1183 	pop	ar0
   0295 D0 03              1184 	pop	ar3
   0297 D0 02              1185 	pop	ar2
                           1186 ;	main.c:135: count++;
                           1187 ;	genAssign
   0299 90 0C 88           1188 	mov	dptr,#_main_count_1_1
   029C E0                 1189 	movx	a,@dptr
   029D F8                 1190 	mov	r0,a
   029E A3                 1191 	inc	dptr
   029F E0                 1192 	movx	a,@dptr
   02A0 F9                 1193 	mov	r1,a
                           1194 ;	genPlus
   02A1 90 0C 88           1195 	mov	dptr,#_main_count_1_1
                           1196 ;     genPlusIncr
   02A4 74 01              1197 	mov	a,#0x01
                           1198 ;	Peephole 236.a	used r0 instead of ar0
   02A6 28                 1199 	add	a,r0
   02A7 F0                 1200 	movx	@dptr,a
                           1201 ;	Peephole 181	changed mov to clr
   02A8 E4                 1202 	clr	a
                           1203 ;	Peephole 236.b	used r1 instead of ar1
   02A9 39                 1204 	addc	a,r1
   02AA A3                 1205 	inc	dptr
   02AB F0                 1206 	movx	@dptr,a
                           1207 ;	main.c:136: putchar(a);
                           1208 ;	genCall
   02AC 85 31 82           1209 	mov	dpl,_main_sloc8_1_0
   02AF C0 02              1210 	push	ar2
   02B1 C0 03              1211 	push	ar3
   02B3 C0 00              1212 	push	ar0
   02B5 C0 01              1213 	push	ar1
   02B7 12 12 2F           1214 	lcall	_putchar
   02BA D0 01              1215 	pop	ar1
   02BC D0 00              1216 	pop	ar0
   02BE D0 03              1217 	pop	ar3
   02C0 D0 02              1218 	pop	ar2
                           1219 ;	main.c:137: printf_tiny("\n\r");
                           1220 ;	genIpush
   02C2 C0 02              1221 	push	ar2
   02C4 C0 03              1222 	push	ar3
   02C6 C0 00              1223 	push	ar0
   02C8 C0 01              1224 	push	ar1
   02CA 74 F0              1225 	mov	a,#__str_10
   02CC C0 E0              1226 	push	acc
   02CE 74 1F              1227 	mov	a,#(__str_10 >> 8)
   02D0 C0 E0              1228 	push	acc
                           1229 ;	genCall
   02D2 12 17 38           1230 	lcall	_printf_tiny
   02D5 15 81              1231 	dec	sp
   02D7 15 81              1232 	dec	sp
   02D9 D0 01              1233 	pop	ar1
   02DB D0 00              1234 	pop	ar0
   02DD D0 03              1235 	pop	ar3
   02DF D0 02              1236 	pop	ar2
                           1237 ;	main.c:140: if ( a <= 0x39 && a >= 0x30)                                                /* if character input is a int number */
                           1238 ;	genCmpGt
                           1239 ;	genCmp
   02E1 C3                 1240 	clr	c
                           1241 ;	Peephole 159	avoided xrl during execution
   02E2 74 B9              1242 	mov	a,#(0x39 ^ 0x80)
   02E4 85 31 F0           1243 	mov	b,_main_sloc8_1_0
   02E7 63 F0 80           1244 	xrl	b,#0x80
   02EA 95 F0              1245 	subb	a,b
                           1246 ;	genIpop
                           1247 ;	genIfx
                           1248 ;	genIfxJump
                           1249 ;	Peephole 108.b	removed ljmp by inverse jump logic
                           1250 ;	Peephole 129.c	optimized condition
   02EC D0 01              1251 	pop	ar1
   02EE D0 00              1252 	pop	ar0
                           1253 ;	genCmpLt
                           1254 ;	genCmp
   02F0 40 48              1255 	jc	00129$
                           1256 ;	Peephole 300	removed redundant label 00313$
                           1257 ;	Peephole 256.a	removed redundant clr c
   02F2 E5 31              1258 	mov	a,_main_sloc8_1_0
   02F4 64 80              1259 	xrl	a,#0x80
   02F6 94 B0              1260 	subb	a,#0xb0
                           1261 ;	genIfxJump
                           1262 ;	Peephole 112.b	changed ljmp to sjmp
                           1263 ;	Peephole 160.a	removed sjmp by inverse jump logic
   02F8 40 40              1264 	jc	00129$
                           1265 ;	Peephole 300	removed redundant label 00314$
                           1266 ;	main.c:142: if(num > countnum)
                           1267 ;	genAssign
   02FA 90 0C 84           1268 	mov	dptr,#_main_countnum_1_1
   02FD E0                 1269 	movx	a,@dptr
   02FE FC                 1270 	mov	r4,a
   02FF A3                 1271 	inc	dptr
   0300 E0                 1272 	movx	a,@dptr
   0301 FD                 1273 	mov	r5,a
                           1274 ;	genCmpGt
                           1275 ;	genCmp
   0302 C3                 1276 	clr	c
   0303 EC                 1277 	mov	a,r4
   0304 95 23              1278 	subb	a,_main_sloc1_1_0
   0306 ED                 1279 	mov	a,r5
   0307 95 24              1280 	subb	a,(_main_sloc1_1_0 + 1)
                           1281 ;	genIfxJump
                           1282 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0309 50 2F              1283 	jnc	00129$
                           1284 ;	Peephole 300	removed redundant label 00315$
                           1285 ;	main.c:144: *(buffer[1]) = a;
                           1286 ;	genIpush
   030B C0 00              1287 	push	ar0
   030D C0 01              1288 	push	ar1
                           1289 ;	genPointerGet
                           1290 ;	genFarPointerGet
   030F 90 0B BE           1291 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   0312 E0                 1292 	movx	a,@dptr
   0313 F8                 1293 	mov	r0,a
   0314 A3                 1294 	inc	dptr
   0315 E0                 1295 	movx	a,@dptr
   0316 F9                 1296 	mov	r1,a
                           1297 ;	genPointerSet
                           1298 ;     genFarPointerSet
   0317 88 82              1299 	mov	dpl,r0
   0319 89 83              1300 	mov	dph,r1
   031B E5 31              1301 	mov	a,_main_sloc8_1_0
   031D F0                 1302 	movx	@dptr,a
                           1303 ;	main.c:145: buffer[1]++;
                           1304 ;	genPlus
                           1305 ;     genPlusIncr
   031E 08                 1306 	inc	r0
   031F B8 00 01           1307 	cjne	r0,#0x00,00316$
   0322 09                 1308 	inc	r1
   0323                    1309 00316$:
                           1310 ;	genPointerSet
                           1311 ;     genFarPointerSet
   0323 90 0B BE           1312 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   0326 E8                 1313 	mov	a,r0
   0327 F0                 1314 	movx	@dptr,a
   0328 A3                 1315 	inc	dptr
   0329 E9                 1316 	mov	a,r1
   032A F0                 1317 	movx	@dptr,a
                           1318 ;	main.c:146: countnum ++ ;
                           1319 ;	genPlus
   032B 90 0C 84           1320 	mov	dptr,#_main_countnum_1_1
                           1321 ;     genPlusIncr
   032E 74 01              1322 	mov	a,#0x01
                           1323 ;	Peephole 236.a	used r4 instead of ar4
   0330 2C                 1324 	add	a,r4
   0331 F0                 1325 	movx	@dptr,a
                           1326 ;	Peephole 181	changed mov to clr
   0332 E4                 1327 	clr	a
                           1328 ;	Peephole 236.b	used r5 instead of ar5
   0333 3D                 1329 	addc	a,r5
   0334 A3                 1330 	inc	dptr
   0335 F0                 1331 	movx	@dptr,a
                           1332 ;	main.c:418: goto again;
                           1333 ;	genIpop
   0336 D0 01              1334 	pop	ar1
   0338 D0 00              1335 	pop	ar0
                           1336 ;	main.c:146: countnum ++ ;
   033A                    1337 00129$:
                           1338 ;	main.c:150: if ( a >= 0x41 && a <= 0x5a )                                                   /* if character input is a  alphabet */
                           1339 ;	genCmpLt
                           1340 ;	genCmp
   033A C3                 1341 	clr	c
   033B E5 31              1342 	mov	a,_main_sloc8_1_0
   033D 64 80              1343 	xrl	a,#0x80
   033F 94 C1              1344 	subb	a,#0xc1
                           1345 ;	genIfxJump
                           1346 ;	Peephole 112.b	changed ljmp to sjmp
                           1347 ;	Peephole 160.a	removed sjmp by inverse jump logic
                           1348 ;	genCmpGt
                           1349 ;	genCmp
   0341 40 4C              1350 	jc	00134$
                           1351 ;	Peephole 300	removed redundant label 00317$
                           1352 ;	Peephole 256.a	removed redundant clr c
                           1353 ;	Peephole 159	avoided xrl during execution
   0343 74 DA              1354 	mov	a,#(0x5A ^ 0x80)
   0345 85 31 F0           1355 	mov	b,_main_sloc8_1_0
   0348 63 F0 80           1356 	xrl	b,#0x80
   034B 95 F0              1357 	subb	a,b
                           1358 ;	genIfxJump
                           1359 ;	Peephole 112.b	changed ljmp to sjmp
                           1360 ;	Peephole 160.a	removed sjmp by inverse jump logic
   034D 40 40              1361 	jc	00134$
                           1362 ;	Peephole 300	removed redundant label 00318$
                           1363 ;	main.c:152: if(num > countch)
                           1364 ;	genAssign
   034F 90 0C 86           1365 	mov	dptr,#_main_countch_1_1
   0352 E0                 1366 	movx	a,@dptr
   0353 FC                 1367 	mov	r4,a
   0354 A3                 1368 	inc	dptr
   0355 E0                 1369 	movx	a,@dptr
   0356 FD                 1370 	mov	r5,a
                           1371 ;	genCmpGt
                           1372 ;	genCmp
   0357 C3                 1373 	clr	c
   0358 EC                 1374 	mov	a,r4
   0359 95 25              1375 	subb	a,_main_sloc2_1_0
   035B ED                 1376 	mov	a,r5
   035C 95 26              1377 	subb	a,(_main_sloc2_1_0 + 1)
                           1378 ;	genIfxJump
                           1379 ;	Peephole 108.a	removed ljmp by inverse jump logic
   035E 50 2F              1380 	jnc	00134$
                           1381 ;	Peephole 300	removed redundant label 00319$
                           1382 ;	main.c:154: *(buffer[0]) = a ;
                           1383 ;	genIpush
   0360 C0 00              1384 	push	ar0
   0362 C0 01              1385 	push	ar1
                           1386 ;	genPointerGet
                           1387 ;	genFarPointerGet
   0364 90 0B BC           1388 	mov	dptr,#_main_buffer_1_1
   0367 E0                 1389 	movx	a,@dptr
   0368 F8                 1390 	mov	r0,a
   0369 A3                 1391 	inc	dptr
   036A E0                 1392 	movx	a,@dptr
   036B F9                 1393 	mov	r1,a
                           1394 ;	genPointerSet
                           1395 ;     genFarPointerSet
   036C 88 82              1396 	mov	dpl,r0
   036E 89 83              1397 	mov	dph,r1
   0370 E5 31              1398 	mov	a,_main_sloc8_1_0
   0372 F0                 1399 	movx	@dptr,a
                           1400 ;	main.c:155: buffer[0]++;
                           1401 ;	genPlus
                           1402 ;     genPlusIncr
   0373 08                 1403 	inc	r0
   0374 B8 00 01           1404 	cjne	r0,#0x00,00320$
   0377 09                 1405 	inc	r1
   0378                    1406 00320$:
                           1407 ;	genPointerSet
                           1408 ;     genFarPointerSet
   0378 90 0B BC           1409 	mov	dptr,#_main_buffer_1_1
   037B E8                 1410 	mov	a,r0
   037C F0                 1411 	movx	@dptr,a
   037D A3                 1412 	inc	dptr
   037E E9                 1413 	mov	a,r1
   037F F0                 1414 	movx	@dptr,a
                           1415 ;	main.c:156: countch ++;
                           1416 ;	genPlus
   0380 90 0C 86           1417 	mov	dptr,#_main_countch_1_1
                           1418 ;     genPlusIncr
   0383 74 01              1419 	mov	a,#0x01
                           1420 ;	Peephole 236.a	used r4 instead of ar4
   0385 2C                 1421 	add	a,r4
   0386 F0                 1422 	movx	@dptr,a
                           1423 ;	Peephole 181	changed mov to clr
   0387 E4                 1424 	clr	a
                           1425 ;	Peephole 236.b	used r5 instead of ar5
   0388 3D                 1426 	addc	a,r5
   0389 A3                 1427 	inc	dptr
   038A F0                 1428 	movx	@dptr,a
                           1429 ;	main.c:418: goto again;
                           1430 ;	genIpop
   038B D0 01              1431 	pop	ar1
   038D D0 00              1432 	pop	ar0
                           1433 ;	main.c:156: countch ++;
   038F                    1434 00134$:
                           1435 ;	main.c:160: if (a == 0x2b || a == 0x2d)                                             /* if character input is plus or minus */
                           1436 ;	genCmpEq
                           1437 ;	gencjne
                           1438 ;	gencjneshort
   038F E5 31              1439 	mov	a,_main_sloc8_1_0
   0391 B4 2B 04           1440 	cjne	a,#0x2B,00321$
   0394 74 01              1441 	mov	a,#0x01
   0396 80 01              1442 	sjmp	00322$
   0398                    1443 00321$:
   0398 E4                 1444 	clr	a
   0399                    1445 00322$:
                           1446 ;	genIfx
   0399 FC                 1447 	mov	r4,a
                           1448 ;	Peephole 105	removed redundant mov
                           1449 ;	genIfxJump
                           1450 ;	Peephole 108.b	removed ljmp by inverse jump logic
   039A 70 0A              1451 	jnz	00161$
                           1452 ;	Peephole 300	removed redundant label 00323$
                           1453 ;	genCmpEq
                           1454 ;	gencjneshort
   039C E5 31              1455 	mov	a,_main_sloc8_1_0
   039E B4 2D 02           1456 	cjne	a,#0x2D,00324$
   03A1 80 03              1457 	sjmp	00325$
   03A3                    1458 00324$:
   03A3 02 06 FD           1459 	ljmp	00162$
   03A6                    1460 00325$:
   03A6                    1461 00161$:
                           1462 ;	main.c:164: if(a == '+')
                           1463 ;	genIfx
   03A6 EC                 1464 	mov	a,r4
                           1465 ;	genIfxJump
   03A7 70 03              1466 	jnz	00326$
   03A9 02 05 D9           1467 	ljmp	00154$
   03AC                    1468 00326$:
                           1469 ;	main.c:166: again1 : putstr("enter a buffer size between 20 and 400 bytes");                       /* create new buffer size and number */
   03AC                    1470 00136$:
                           1471 ;	genIpush
   03AC C0 00              1472 	push	ar0
   03AE C0 01              1473 	push	ar1
                           1474 ;	genCall
                           1475 ;	Peephole 182.a	used 16 bit load of DPTR
   03B0 90 1F F3           1476 	mov	dptr,#__str_11
   03B3 75 F0 80           1477 	mov	b,#0x80
   03B6 C0 02              1478 	push	ar2
   03B8 C0 03              1479 	push	ar3
   03BA C0 00              1480 	push	ar0
   03BC C0 01              1481 	push	ar1
   03BE 12 11 D9           1482 	lcall	_putstr
   03C1 D0 01              1483 	pop	ar1
   03C3 D0 00              1484 	pop	ar0
   03C5 D0 03              1485 	pop	ar3
   03C7 D0 02              1486 	pop	ar2
                           1487 ;	main.c:167: gets(str);
                           1488 ;	genCall
                           1489 ;	Peephole 182.a	used 16 bit load of DPTR
   03C9 90 0C 90           1490 	mov	dptr,#_main_str_1_1
   03CC 75 F0 00           1491 	mov	b,#0x00
   03CF C0 02              1492 	push	ar2
   03D1 C0 03              1493 	push	ar3
   03D3 C0 00              1494 	push	ar0
   03D5 C0 01              1495 	push	ar1
   03D7 12 12 53           1496 	lcall	_gets
   03DA D0 01              1497 	pop	ar1
   03DC D0 00              1498 	pop	ar0
   03DE D0 03              1499 	pop	ar3
   03E0 D0 02              1500 	pop	ar2
                           1501 ;	main.c:168: num3 = atoi(str);
                           1502 ;	genCall
                           1503 ;	Peephole 182.a	used 16 bit load of DPTR
   03E2 90 0C 90           1504 	mov	dptr,#_main_str_1_1
   03E5 75 F0 00           1505 	mov	b,#0x00
   03E8 C0 02              1506 	push	ar2
   03EA C0 03              1507 	push	ar3
   03EC C0 00              1508 	push	ar0
   03EE C0 01              1509 	push	ar1
   03F0 12 13 67           1510 	lcall	_atoi
   03F3 AC 82              1511 	mov	r4,dpl
   03F5 AD 83              1512 	mov	r5,dph
   03F7 D0 01              1513 	pop	ar1
   03F9 D0 00              1514 	pop	ar0
   03FB D0 03              1515 	pop	ar3
   03FD D0 02              1516 	pop	ar2
                           1517 ;	main.c:171: if( str[0] == '0' && str[1] == '\0' )
                           1518 ;	genPointerGet
                           1519 ;	genFarPointerGet
   03FF 90 0C 90           1520 	mov	dptr,#_main_str_1_1
   0402 E0                 1521 	movx	a,@dptr
   0403 F8                 1522 	mov	r0,a
                           1523 ;	genCmpEq
                           1524 ;	gencjne
                           1525 ;	gencjneshort
                           1526 ;	Peephole 241.d	optimized compare
   0404 E4                 1527 	clr	a
   0405 B8 30 01           1528 	cjne	r0,#0x30,00327$
   0408 04                 1529 	inc	a
   0409                    1530 00327$:
                           1531 ;	Peephole 300	removed redundant label 00328$
                           1532 ;	genIpop
   0409 D0 01              1533 	pop	ar1
   040B D0 00              1534 	pop	ar0
                           1535 ;	genIfx
                           1536 ;	genIfxJump
                           1537 ;	Peephole 108.c	removed ljmp by inverse jump logic
   040D 60 28              1538 	jz	00249$
                           1539 ;	Peephole 300	removed redundant label 00329$
                           1540 ;	genPointerGet
                           1541 ;	genFarPointerGet
   040F 90 0C 91           1542 	mov	dptr,#(_main_str_1_1 + 0x0001)
   0412 E0                 1543 	movx	a,@dptr
                           1544 ;	genIfxJump
                           1545 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0413 70 22              1546 	jnz	00249$
                           1547 ;	Peephole 300	removed redundant label 00330$
                           1548 ;	main.c:173: printf_tiny("enter proper number as specified\n\r");
                           1549 ;	genIpush
   0415 C0 02              1550 	push	ar2
   0417 C0 03              1551 	push	ar3
   0419 C0 00              1552 	push	ar0
   041B C0 01              1553 	push	ar1
   041D 74 D5              1554 	mov	a,#__str_1
   041F C0 E0              1555 	push	acc
   0421 74 1E              1556 	mov	a,#(__str_1 >> 8)
   0423 C0 E0              1557 	push	acc
                           1558 ;	genCall
   0425 12 17 38           1559 	lcall	_printf_tiny
   0428 15 81              1560 	dec	sp
   042A 15 81              1561 	dec	sp
   042C D0 01              1562 	pop	ar1
   042E D0 00              1563 	pop	ar0
   0430 D0 03              1564 	pop	ar3
   0432 D0 02              1565 	pop	ar2
                           1566 ;	main.c:174: goto again1;
   0434 02 03 AC           1567 	ljmp	00136$
                           1568 ;	main.c:177: while( str[w] != '\0')
   0437                    1569 00249$:
                           1570 ;	genAssign
                           1571 ;	genAssign
   0437 E4                 1572 	clr	a
   0438 F5 34              1573 	mov	_main_sloc10_1_0,a
   043A F5 35              1574 	mov	(_main_sloc10_1_0 + 1),a
                           1575 ;	Peephole 3.d	removed redundant clr
   043C F5 36              1576 	mov	_main_sloc11_1_0,a
   043E F5 37              1577 	mov	(_main_sloc11_1_0 + 1),a
   0440                    1578 00143$:
                           1579 ;	genPlus
   0440 E5 36              1580 	mov	a,_main_sloc11_1_0
   0442 24 90              1581 	add	a,#_main_str_1_1
   0444 F5 82              1582 	mov	dpl,a
   0446 E5 37              1583 	mov	a,(_main_sloc11_1_0 + 1)
   0448 34 0C              1584 	addc	a,#(_main_str_1_1 >> 8)
   044A F5 83              1585 	mov	dph,a
                           1586 ;	genPointerGet
                           1587 ;	genFarPointerGet
   044C E0                 1588 	movx	a,@dptr
                           1589 ;	genCmpEq
                           1590 ;	gencjneshort
                           1591 ;	Peephole 112.b	changed ljmp to sjmp
   044D FE                 1592 	mov	r6,a
                           1593 ;	Peephole 115.b	jump optimization
   044E 60 1C              1594 	jz	00145$
                           1595 ;	Peephole 300	removed redundant label 00331$
                           1596 ;	main.c:179: if( 0x29 < str[w] && str[w] < 0x3a )
                           1597 ;	genCmpLt
                           1598 ;	genCmp
                           1599 ;	genIfxJump
                           1600 ;	Peephole 108.a	removed ljmp by inverse jump logic
                           1601 ;	Peephole 132.b	optimized genCmpGt by inverse logic (acc differs)
   0450 EE                 1602 	mov	a,r6
   0451 24 D6              1603 	add	a,#0xff - 0x29
   0453 50 0D              1604 	jnc	00141$
                           1605 ;	Peephole 300	removed redundant label 00332$
                           1606 ;	genCmpLt
                           1607 ;	genCmp
   0455 BE 3A 00           1608 	cjne	r6,#0x3A,00333$
   0458                    1609 00333$:
                           1610 ;	genIfxJump
                           1611 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0458 50 08              1612 	jnc	00141$
                           1613 ;	Peephole 300	removed redundant label 00334$
                           1614 ;	main.c:181: county++;
                           1615 ;	genPlus
                           1616 ;     genPlusIncr
   045A 05 34              1617 	inc	_main_sloc10_1_0
   045C E4                 1618 	clr	a
   045D B5 34 02           1619 	cjne	a,_main_sloc10_1_0,00335$
   0460 05 35              1620 	inc	(_main_sloc10_1_0 + 1)
   0462                    1621 00335$:
   0462                    1622 00141$:
                           1623 ;	main.c:184: w++;
                           1624 ;	genPlus
                           1625 ;     genPlusIncr
   0462 05 36              1626 	inc	_main_sloc11_1_0
   0464 E4                 1627 	clr	a
                           1628 ;	Peephole 112.b	changed ljmp to sjmp
                           1629 ;	Peephole 243	avoided branch to sjmp
   0465 B5 36 D8           1630 	cjne	a,_main_sloc11_1_0,00143$
   0468 05 37              1631 	inc	(_main_sloc11_1_0 + 1)
                           1632 ;	Peephole 300	removed redundant label 00336$
   046A 80 D4              1633 	sjmp	00143$
   046C                    1634 00145$:
                           1635 ;	main.c:186: if( w != county)
                           1636 ;	genCmpEq
                           1637 ;	gencjneshort
   046C E5 36              1638 	mov	a,_main_sloc11_1_0
   046E B5 34 07           1639 	cjne	a,_main_sloc10_1_0,00337$
   0471 E5 37              1640 	mov	a,(_main_sloc11_1_0 + 1)
   0473 B5 35 02           1641 	cjne	a,(_main_sloc10_1_0 + 1),00337$
                           1642 ;	Peephole 112.b	changed ljmp to sjmp
   0476 80 22              1643 	sjmp	00147$
   0478                    1644 00337$:
                           1645 ;	main.c:188: printf_tiny("enter a number as specified\n\r");
                           1646 ;	genIpush
   0478 C0 02              1647 	push	ar2
   047A C0 03              1648 	push	ar3
   047C C0 00              1649 	push	ar0
   047E C0 01              1650 	push	ar1
   0480 74 F8              1651 	mov	a,#__str_2
   0482 C0 E0              1652 	push	acc
   0484 74 1E              1653 	mov	a,#(__str_2 >> 8)
   0486 C0 E0              1654 	push	acc
                           1655 ;	genCall
   0488 12 17 38           1656 	lcall	_printf_tiny
   048B 15 81              1657 	dec	sp
   048D 15 81              1658 	dec	sp
   048F D0 01              1659 	pop	ar1
   0491 D0 00              1660 	pop	ar0
   0493 D0 03              1661 	pop	ar3
   0495 D0 02              1662 	pop	ar2
                           1663 ;	main.c:189: goto again1 ;
   0497 02 03 AC           1664 	ljmp	00136$
   049A                    1665 00147$:
                           1666 ;	main.c:194: if ((num3 < 20) || (num3 > 400))                                                                              /* to check for invalid input*/
                           1667 ;	genIpush
   049A C0 00              1668 	push	ar0
   049C C0 01              1669 	push	ar1
                           1670 ;	genAssign
   049E 8C 00              1671 	mov	ar0,r4
   04A0 8D 01              1672 	mov	ar1,r5
                           1673 ;	genCmpLt
                           1674 ;	genCmp
   04A2 C3                 1675 	clr	c
   04A3 E8                 1676 	mov	a,r0
   04A4 94 14              1677 	subb	a,#0x14
   04A6 E9                 1678 	mov	a,r1
   04A7 94 00              1679 	subb	a,#0x00
                           1680 ;	genIpop
                           1681 ;	genIfx
                           1682 ;	genIfxJump
                           1683 ;	Peephole 108.b	removed ljmp by inverse jump logic
                           1684 ;	Peephole 129.c	optimized condition
   04A9 D0 01              1685 	pop	ar1
   04AB D0 00              1686 	pop	ar0
   04AD 40 17              1687 	jc	00148$
                           1688 ;	Peephole 300	removed redundant label 00338$
                           1689 ;	genIpush
   04AF C0 00              1690 	push	ar0
   04B1 C0 01              1691 	push	ar1
                           1692 ;	genAssign
   04B3 8C 00              1693 	mov	ar0,r4
   04B5 8D 01              1694 	mov	ar1,r5
                           1695 ;	genCmpGt
                           1696 ;	genCmp
   04B7 C3                 1697 	clr	c
   04B8 74 90              1698 	mov	a,#0x90
   04BA 98                 1699 	subb	a,r0
   04BB 74 01              1700 	mov	a,#0x01
   04BD 99                 1701 	subb	a,r1
   04BE E4                 1702 	clr	a
   04BF 33                 1703 	rlc	a
                           1704 ;	genIpop
   04C0 D0 01              1705 	pop	ar1
   04C2 D0 00              1706 	pop	ar0
                           1707 ;	genIfx
                           1708 ;	genIfxJump
                           1709 ;	Peephole 108.c	removed ljmp by inverse jump logic
   04C4 60 22              1710 	jz	00149$
                           1711 ;	Peephole 300	removed redundant label 00339$
   04C6                    1712 00148$:
                           1713 ;	main.c:196: printf_tiny("enter proper size \n\r");
                           1714 ;	genIpush
   04C6 C0 02              1715 	push	ar2
   04C8 C0 03              1716 	push	ar3
   04CA C0 00              1717 	push	ar0
   04CC C0 01              1718 	push	ar1
   04CE 74 42              1719 	mov	a,#__str_4
   04D0 C0 E0              1720 	push	acc
   04D2 74 1F              1721 	mov	a,#(__str_4 >> 8)
   04D4 C0 E0              1722 	push	acc
                           1723 ;	genCall
   04D6 12 17 38           1724 	lcall	_printf_tiny
   04D9 15 81              1725 	dec	sp
   04DB 15 81              1726 	dec	sp
   04DD D0 01              1727 	pop	ar1
   04DF D0 00              1728 	pop	ar0
   04E1 D0 03              1729 	pop	ar3
   04E3 D0 02              1730 	pop	ar2
                           1731 ;	main.c:197: goto again1;
   04E5 02 03 AC           1732 	ljmp	00136$
   04E8                    1733 00149$:
                           1734 ;	main.c:199: if (( buffer[++i] = malloc((unsigned int)(num3))) == 0)
                           1735 ;	genIpush
   04E8 C0 00              1736 	push	ar0
   04EA C0 01              1737 	push	ar1
                           1738 ;	genPlus
                           1739 ;     genPlusIncr
   04EC 05 2F              1740 	inc	_main_sloc7_1_0
   04EE E4                 1741 	clr	a
   04EF B5 2F 02           1742 	cjne	a,_main_sloc7_1_0,00340$
   04F2 05 30              1743 	inc	(_main_sloc7_1_0 + 1)
   04F4                    1744 00340$:
                           1745 ;	genLeftShift
                           1746 ;	genLeftShiftLiteral
                           1747 ;	genlshTwo
                           1748 ;	Peephole 252	optimized left shift
   04F4 E5 2F              1749 	mov	a,_main_sloc7_1_0
   04F6 25 E0              1750 	add	a,acc
   04F8 FE                 1751 	mov	r6,a
   04F9 E5 30              1752 	mov	a,(_main_sloc7_1_0 + 1)
   04FB 33                 1753 	rlc	a
   04FC FF                 1754 	mov	r7,a
                           1755 ;	genPlus
                           1756 ;	Peephole 236.g	used r6 instead of ar6
   04FD EE                 1757 	mov	a,r6
   04FE 24 BC              1758 	add	a,#_main_buffer_1_1
   0500 F5 34              1759 	mov	_main_sloc10_1_0,a
                           1760 ;	Peephole 236.g	used r7 instead of ar7
   0502 EF                 1761 	mov	a,r7
   0503 34 0B              1762 	addc	a,#(_main_buffer_1_1 >> 8)
   0505 F5 35              1763 	mov	(_main_sloc10_1_0 + 1),a
                           1764 ;	genCall
   0507 8C 82              1765 	mov	dpl,r4
   0509 8D 83              1766 	mov	dph,r5
   050B C0 02              1767 	push	ar2
   050D C0 03              1768 	push	ar3
   050F C0 04              1769 	push	ar4
   0511 C0 05              1770 	push	ar5
   0513 C0 06              1771 	push	ar6
   0515 C0 07              1772 	push	ar7
   0517 12 15 E3           1773 	lcall	_malloc
   051A A8 82              1774 	mov	r0,dpl
   051C A9 83              1775 	mov	r1,dph
   051E D0 07              1776 	pop	ar7
   0520 D0 06              1777 	pop	ar6
   0522 D0 05              1778 	pop	ar5
   0524 D0 04              1779 	pop	ar4
   0526 D0 03              1780 	pop	ar3
   0528 D0 02              1781 	pop	ar2
                           1782 ;	genPointerSet
                           1783 ;     genFarPointerSet
   052A 85 34 82           1784 	mov	dpl,_main_sloc10_1_0
   052D 85 35 83           1785 	mov	dph,(_main_sloc10_1_0 + 1)
   0530 E8                 1786 	mov	a,r0
   0531 F0                 1787 	movx	@dptr,a
   0532 A3                 1788 	inc	dptr
   0533 E9                 1789 	mov	a,r1
   0534 F0                 1790 	movx	@dptr,a
                           1791 ;	genIfx
   0535 E8                 1792 	mov	a,r0
   0536 49                 1793 	orl	a,r1
                           1794 ;	genIpop
   0537 D0 01              1795 	pop	ar1
   0539 D0 00              1796 	pop	ar0
                           1797 ;	genIfxJump
                           1798 ;	Peephole 108.b	removed ljmp by inverse jump logic
   053B 70 58              1799 	jnz	00152$
                           1800 ;	Peephole 300	removed redundant label 00341$
                           1801 ;	main.c:201: putstr(" malloc buffer  failed\n\r");
                           1802 ;	genCall
                           1803 ;	Peephole 182.a	used 16 bit load of DPTR
   053D 90 20 20           1804 	mov	dptr,#__str_12
   0540 75 F0 80           1805 	mov	b,#0x80
   0543 C0 02              1806 	push	ar2
   0545 C0 03              1807 	push	ar3
   0547 C0 04              1808 	push	ar4
   0549 C0 05              1809 	push	ar5
   054B C0 06              1810 	push	ar6
   054D C0 07              1811 	push	ar7
   054F C0 00              1812 	push	ar0
   0551 C0 01              1813 	push	ar1
   0553 12 11 D9           1814 	lcall	_putstr
   0556 D0 01              1815 	pop	ar1
   0558 D0 00              1816 	pop	ar0
   055A D0 07              1817 	pop	ar7
   055C D0 06              1818 	pop	ar6
   055E D0 05              1819 	pop	ar5
   0560 D0 04              1820 	pop	ar4
   0562 D0 03              1821 	pop	ar3
   0564 D0 02              1822 	pop	ar2
                           1823 ;	main.c:202: printf_tiny("you should enter small buffer size \n\r");
                           1824 ;	genIpush
   0566 C0 02              1825 	push	ar2
   0568 C0 03              1826 	push	ar3
   056A C0 04              1827 	push	ar4
   056C C0 05              1828 	push	ar5
   056E C0 06              1829 	push	ar6
   0570 C0 07              1830 	push	ar7
   0572 C0 00              1831 	push	ar0
   0574 C0 01              1832 	push	ar1
   0576 74 39              1833 	mov	a,#__str_13
   0578 C0 E0              1834 	push	acc
   057A 74 20              1835 	mov	a,#(__str_13 >> 8)
   057C C0 E0              1836 	push	acc
                           1837 ;	genCall
   057E 12 17 38           1838 	lcall	_printf_tiny
   0581 15 81              1839 	dec	sp
   0583 15 81              1840 	dec	sp
   0585 D0 01              1841 	pop	ar1
   0587 D0 00              1842 	pop	ar0
   0589 D0 07              1843 	pop	ar7
   058B D0 06              1844 	pop	ar6
   058D D0 05              1845 	pop	ar5
   058F D0 04              1846 	pop	ar4
   0591 D0 03              1847 	pop	ar3
   0593 D0 02              1848 	pop	ar2
   0595                    1849 00152$:
                           1850 ;	main.c:206: printf_tiny("buffer is allocated and number is  : %d \n\r", i);
                           1851 ;	genIpush
   0595 C0 02              1852 	push	ar2
   0597 C0 03              1853 	push	ar3
   0599 C0 04              1854 	push	ar4
   059B C0 05              1855 	push	ar5
   059D C0 06              1856 	push	ar6
   059F C0 07              1857 	push	ar7
   05A1 C0 00              1858 	push	ar0
   05A3 C0 01              1859 	push	ar1
   05A5 C0 2F              1860 	push	_main_sloc7_1_0
   05A7 C0 30              1861 	push	(_main_sloc7_1_0 + 1)
                           1862 ;	genIpush
   05A9 74 5F              1863 	mov	a,#__str_14
   05AB C0 E0              1864 	push	acc
   05AD 74 20              1865 	mov	a,#(__str_14 >> 8)
   05AF C0 E0              1866 	push	acc
                           1867 ;	genCall
   05B1 12 17 38           1868 	lcall	_printf_tiny
   05B4 E5 81              1869 	mov	a,sp
   05B6 24 FC              1870 	add	a,#0xfc
   05B8 F5 81              1871 	mov	sp,a
   05BA D0 01              1872 	pop	ar1
   05BC D0 00              1873 	pop	ar0
   05BE D0 07              1874 	pop	ar7
   05C0 D0 06              1875 	pop	ar6
   05C2 D0 05              1876 	pop	ar5
   05C4 D0 04              1877 	pop	ar4
   05C6 D0 03              1878 	pop	ar3
   05C8 D0 02              1879 	pop	ar2
                           1880 ;	main.c:207: buffersize[i]=num3;
                           1881 ;	genPlus
                           1882 ;	Peephole 236.g	used r6 instead of ar6
   05CA EE                 1883 	mov	a,r6
   05CB 24 5E              1884 	add	a,#_main_buffersize_1_1
   05CD F5 82              1885 	mov	dpl,a
                           1886 ;	Peephole 236.g	used r7 instead of ar7
   05CF EF                 1887 	mov	a,r7
   05D0 34 0D              1888 	addc	a,#(_main_buffersize_1_1 >> 8)
   05D2 F5 83              1889 	mov	dph,a
                           1890 ;	genPointerSet
                           1891 ;     genFarPointerSet
   05D4 EC                 1892 	mov	a,r4
   05D5 F0                 1893 	movx	@dptr,a
   05D6 A3                 1894 	inc	dptr
   05D7 ED                 1895 	mov	a,r5
   05D8 F0                 1896 	movx	@dptr,a
   05D9                    1897 00154$:
                           1898 ;	main.c:212: if(a == '-')                                                            /* to delete any new buffer other than 0 and 1 created */
                           1899 ;	genCmpEq
                           1900 ;	gencjneshort
   05D9 E5 31              1901 	mov	a,_main_sloc8_1_0
   05DB B4 2D 02           1902 	cjne	a,#0x2D,00342$
   05DE 80 03              1903 	sjmp	00343$
   05E0                    1904 00342$:
   05E0 02 06 FD           1905 	ljmp	00162$
   05E3                    1906 00343$:
                           1907 ;	main.c:215: putstr("enter a buffer number to delete");
                           1908 ;	genIpush
   05E3 C0 00              1909 	push	ar0
   05E5 C0 01              1910 	push	ar1
                           1911 ;	genCall
                           1912 ;	Peephole 182.a	used 16 bit load of DPTR
   05E7 90 20 8A           1913 	mov	dptr,#__str_15
   05EA 75 F0 80           1914 	mov	b,#0x80
   05ED C0 02              1915 	push	ar2
   05EF C0 03              1916 	push	ar3
   05F1 C0 00              1917 	push	ar0
   05F3 C0 01              1918 	push	ar1
   05F5 12 11 D9           1919 	lcall	_putstr
   05F8 D0 01              1920 	pop	ar1
   05FA D0 00              1921 	pop	ar0
   05FC D0 03              1922 	pop	ar3
   05FE D0 02              1923 	pop	ar2
                           1924 ;	main.c:216: gets(str);
                           1925 ;	genCall
                           1926 ;	Peephole 182.a	used 16 bit load of DPTR
   0600 90 0C 90           1927 	mov	dptr,#_main_str_1_1
   0603 75 F0 00           1928 	mov	b,#0x00
   0606 C0 02              1929 	push	ar2
   0608 C0 03              1930 	push	ar3
   060A C0 00              1931 	push	ar0
   060C C0 01              1932 	push	ar1
   060E 12 12 53           1933 	lcall	_gets
   0611 D0 01              1934 	pop	ar1
   0613 D0 00              1935 	pop	ar0
   0615 D0 03              1936 	pop	ar3
   0617 D0 02              1937 	pop	ar2
                           1938 ;	main.c:217: j = atoi(str);
                           1939 ;	genCall
                           1940 ;	Peephole 182.a	used 16 bit load of DPTR
   0619 90 0C 90           1941 	mov	dptr,#_main_str_1_1
   061C 75 F0 00           1942 	mov	b,#0x00
   061F C0 02              1943 	push	ar2
   0621 C0 03              1944 	push	ar3
   0623 C0 00              1945 	push	ar0
   0625 C0 01              1946 	push	ar1
   0627 12 13 67           1947 	lcall	_atoi
   062A AC 82              1948 	mov	r4,dpl
   062C AD 83              1949 	mov	r5,dph
   062E D0 01              1950 	pop	ar1
   0630 D0 00              1951 	pop	ar0
   0632 D0 03              1952 	pop	ar3
   0634 D0 02              1953 	pop	ar2
                           1954 ;	main.c:219: if((1<j) && (j<=i))
                           1955 ;	genAssign
   0636 8C 00              1956 	mov	ar0,r4
   0638 8D 01              1957 	mov	ar1,r5
                           1958 ;	genCmpLt
                           1959 ;	genCmp
   063A C3                 1960 	clr	c
   063B 74 01              1961 	mov	a,#0x01
   063D 98                 1962 	subb	a,r0
                           1963 ;	Peephole 181	changed mov to clr
   063E E4                 1964 	clr	a
   063F 99                 1965 	subb	a,r1
                           1966 ;	genIpop
                           1967 ;	genIfx
                           1968 ;	genIfxJump
                           1969 ;	Peephole 129.c	optimized condition
   0640 D0 01              1970 	pop	ar1
   0642 D0 00              1971 	pop	ar0
   0644 40 03              1972 	jc	00344$
   0646 02 06 E4           1973 	ljmp	00156$
   0649                    1974 00344$:
                           1975 ;	genIpush
   0649 C0 00              1976 	push	ar0
   064B C0 01              1977 	push	ar1
                           1978 ;	genAssign
   064D 8C 00              1979 	mov	ar0,r4
   064F 8D 01              1980 	mov	ar1,r5
                           1981 ;	genCmpGt
                           1982 ;	genCmp
   0651 C3                 1983 	clr	c
   0652 E5 2F              1984 	mov	a,_main_sloc7_1_0
   0654 98                 1985 	subb	a,r0
   0655 E5 30              1986 	mov	a,(_main_sloc7_1_0 + 1)
   0657 99                 1987 	subb	a,r1
   0658 E4                 1988 	clr	a
   0659 33                 1989 	rlc	a
                           1990 ;	genIpop
   065A D0 01              1991 	pop	ar1
   065C D0 00              1992 	pop	ar0
                           1993 ;	genIfx
                           1994 ;	genIfxJump
   065E 60 03              1995 	jz	00345$
   0660 02 06 E4           1996 	ljmp	00156$
   0663                    1997 00345$:
                           1998 ;	main.c:222: free(buffer[j]);
                           1999 ;	genIpush
   0663 C0 00              2000 	push	ar0
   0665 C0 01              2001 	push	ar1
                           2002 ;	genLeftShift
                           2003 ;	genLeftShiftLiteral
                           2004 ;	genlshTwo
   0667 8C 34              2005 	mov	_main_sloc10_1_0,r4
   0669 ED                 2006 	mov	a,r5
   066A C5 34              2007 	xch	a,_main_sloc10_1_0
   066C 25 E0              2008 	add	a,acc
   066E C5 34              2009 	xch	a,_main_sloc10_1_0
   0670 33                 2010 	rlc	a
   0671 F5 35              2011 	mov	(_main_sloc10_1_0 + 1),a
                           2012 ;	genPlus
   0673 E5 34              2013 	mov	a,_main_sloc10_1_0
   0675 24 BC              2014 	add	a,#_main_buffer_1_1
   0677 F5 82              2015 	mov	dpl,a
   0679 E5 35              2016 	mov	a,(_main_sloc10_1_0 + 1)
   067B 34 0B              2017 	addc	a,#(_main_buffer_1_1 >> 8)
   067D F5 83              2018 	mov	dph,a
                           2019 ;	genPointerGet
                           2020 ;	genFarPointerGet
   067F E0                 2021 	movx	a,@dptr
   0680 F8                 2022 	mov	r0,a
   0681 A3                 2023 	inc	dptr
   0682 E0                 2024 	movx	a,@dptr
   0683 F9                 2025 	mov	r1,a
                           2026 ;	genCast
   0684 7E 00              2027 	mov	r6,#0x0
                           2028 ;	genCall
   0686 88 82              2029 	mov	dpl,r0
   0688 89 83              2030 	mov	dph,r1
   068A 8E F0              2031 	mov	b,r6
   068C C0 02              2032 	push	ar2
   068E C0 03              2033 	push	ar3
   0690 C0 04              2034 	push	ar4
   0692 C0 05              2035 	push	ar5
   0694 C0 00              2036 	push	ar0
   0696 C0 01              2037 	push	ar1
   0698 12 15 0F           2038 	lcall	_free
   069B D0 01              2039 	pop	ar1
   069D D0 00              2040 	pop	ar0
   069F D0 05              2041 	pop	ar5
   06A1 D0 04              2042 	pop	ar4
   06A3 D0 03              2043 	pop	ar3
   06A5 D0 02              2044 	pop	ar2
                           2045 ;	main.c:223: printf_tiny("buffer%d is deleted",j);
                           2046 ;	genIpush
   06A7 C0 02              2047 	push	ar2
   06A9 C0 03              2048 	push	ar3
   06AB C0 00              2049 	push	ar0
   06AD C0 01              2050 	push	ar1
   06AF C0 04              2051 	push	ar4
   06B1 C0 05              2052 	push	ar5
                           2053 ;	genIpush
   06B3 74 AA              2054 	mov	a,#__str_16
   06B5 C0 E0              2055 	push	acc
   06B7 74 20              2056 	mov	a,#(__str_16 >> 8)
   06B9 C0 E0              2057 	push	acc
                           2058 ;	genCall
   06BB 12 17 38           2059 	lcall	_printf_tiny
   06BE E5 81              2060 	mov	a,sp
   06C0 24 FC              2061 	add	a,#0xfc
   06C2 F5 81              2062 	mov	sp,a
   06C4 D0 01              2063 	pop	ar1
   06C6 D0 00              2064 	pop	ar0
   06C8 D0 03              2065 	pop	ar3
   06CA D0 02              2066 	pop	ar2
                           2067 ;	main.c:224: arr[j] = 1;
                           2068 ;	genPlus
   06CC E5 34              2069 	mov	a,_main_sloc10_1_0
   06CE 24 96              2070 	add	a,#_main_arr_1_1
   06D0 F5 82              2071 	mov	dpl,a
   06D2 E5 35              2072 	mov	a,(_main_sloc10_1_0 + 1)
   06D4 34 0C              2073 	addc	a,#(_main_arr_1_1 >> 8)
   06D6 F5 83              2074 	mov	dph,a
                           2075 ;	genPointerSet
                           2076 ;     genFarPointerSet
   06D8 74 01              2077 	mov	a,#0x01
   06DA F0                 2078 	movx	@dptr,a
   06DB A3                 2079 	inc	dptr
                           2080 ;	Peephole 181	changed mov to clr
   06DC E4                 2081 	clr	a
   06DD F0                 2082 	movx	@dptr,a
                           2083 ;	genIpop
   06DE D0 01              2084 	pop	ar1
   06E0 D0 00              2085 	pop	ar0
                           2086 ;	Peephole 112.b	changed ljmp to sjmp
   06E2 80 19              2087 	sjmp	00162$
   06E4                    2088 00156$:
                           2089 ;	main.c:229: putstr("invalid buffer number ,no deletion occured ");
                           2090 ;	genCall
                           2091 ;	Peephole 182.a	used 16 bit load of DPTR
   06E4 90 20 BE           2092 	mov	dptr,#__str_17
   06E7 75 F0 80           2093 	mov	b,#0x80
   06EA C0 02              2094 	push	ar2
   06EC C0 03              2095 	push	ar3
   06EE C0 00              2096 	push	ar0
   06F0 C0 01              2097 	push	ar1
   06F2 12 11 D9           2098 	lcall	_putstr
   06F5 D0 01              2099 	pop	ar1
   06F7 D0 00              2100 	pop	ar0
   06F9 D0 03              2101 	pop	ar3
   06FB D0 02              2102 	pop	ar2
   06FD                    2103 00162$:
                           2104 ;	main.c:240: if (a == '?' )                                                                      /* if character input is a '?' */
                           2105 ;	genCmpEq
                           2106 ;	gencjneshort
   06FD E5 31              2107 	mov	a,_main_sloc8_1_0
   06FF B4 3F 02           2108 	cjne	a,#0x3F,00346$
   0702 80 03              2109 	sjmp	00347$
   0704                    2110 00346$:
   0704 02 0D AC           2111 	ljmp	00182$
   0707                    2112 00347$:
                           2113 ;	main.c:244: printf_tiny("\n\r we have heap report for buffers\n\r");
                           2114 ;	genIpush
   0707 C0 02              2115 	push	ar2
   0709 C0 03              2116 	push	ar3
   070B C0 00              2117 	push	ar0
   070D C0 01              2118 	push	ar1
   070F 74 EA              2119 	mov	a,#__str_18
   0711 C0 E0              2120 	push	acc
   0713 74 20              2121 	mov	a,#(__str_18 >> 8)
   0715 C0 E0              2122 	push	acc
                           2123 ;	genCall
   0717 12 17 38           2124 	lcall	_printf_tiny
   071A 15 81              2125 	dec	sp
   071C 15 81              2126 	dec	sp
   071E D0 01              2127 	pop	ar1
   0720 D0 00              2128 	pop	ar0
   0722 D0 03              2129 	pop	ar3
   0724 D0 02              2130 	pop	ar2
                           2131 ;	main.c:245: printf_tiny("Number of characters received since last '?' : %d \n\r",count);
                           2132 ;	genIpush
   0726 C0 02              2133 	push	ar2
   0728 C0 03              2134 	push	ar3
   072A C0 00              2135 	push	ar0
   072C C0 01              2136 	push	ar1
   072E 90 0C 88           2137 	mov	dptr,#_main_count_1_1
   0731 E0                 2138 	movx	a,@dptr
   0732 C0 E0              2139 	push	acc
   0734 A3                 2140 	inc	dptr
   0735 E0                 2141 	movx	a,@dptr
   0736 C0 E0              2142 	push	acc
                           2143 ;	genIpush
   0738 74 0F              2144 	mov	a,#__str_19
   073A C0 E0              2145 	push	acc
   073C 74 21              2146 	mov	a,#(__str_19 >> 8)
   073E C0 E0              2147 	push	acc
                           2148 ;	genCall
   0740 12 17 38           2149 	lcall	_printf_tiny
   0743 E5 81              2150 	mov	a,sp
   0745 24 FC              2151 	add	a,#0xfc
   0747 F5 81              2152 	mov	sp,a
   0749 D0 01              2153 	pop	ar1
   074B D0 00              2154 	pop	ar0
   074D D0 03              2155 	pop	ar3
   074F D0 02              2156 	pop	ar2
                           2157 ;	main.c:246: printf_tiny("###############################################################################################\n\r");
                           2158 ;	genIpush
   0751 C0 02              2159 	push	ar2
   0753 C0 03              2160 	push	ar3
   0755 C0 00              2161 	push	ar0
   0757 C0 01              2162 	push	ar1
   0759 74 44              2163 	mov	a,#__str_20
   075B C0 E0              2164 	push	acc
   075D 74 21              2165 	mov	a,#(__str_20 >> 8)
   075F C0 E0              2166 	push	acc
                           2167 ;	genCall
   0761 12 17 38           2168 	lcall	_printf_tiny
   0764 15 81              2169 	dec	sp
   0766 15 81              2170 	dec	sp
   0768 D0 01              2171 	pop	ar1
   076A D0 00              2172 	pop	ar0
   076C D0 03              2173 	pop	ar3
   076E D0 02              2174 	pop	ar2
                           2175 ;	main.c:247: printf_tiny("  -------------Report for Buffer0---------------------- \n\r");
                           2176 ;	genIpush
   0770 C0 02              2177 	push	ar2
   0772 C0 03              2178 	push	ar3
   0774 C0 00              2179 	push	ar0
   0776 C0 01              2180 	push	ar1
   0778 74 A6              2181 	mov	a,#__str_21
   077A C0 E0              2182 	push	acc
   077C 74 21              2183 	mov	a,#(__str_21 >> 8)
   077E C0 E0              2184 	push	acc
                           2185 ;	genCall
   0780 12 17 38           2186 	lcall	_printf_tiny
   0783 15 81              2187 	dec	sp
   0785 15 81              2188 	dec	sp
   0787 D0 01              2189 	pop	ar1
   0789 D0 00              2190 	pop	ar0
   078B D0 03              2191 	pop	ar3
   078D D0 02              2192 	pop	ar2
                           2193 ;	main.c:248: printf_small("buffer start address : %d \n\r ",(uint16_t)ptr);
                           2194 ;	genCast
   078F AE 27              2195 	mov	r6,_main_sloc3_1_0
   0791 AF 28              2196 	mov	r7,(_main_sloc3_1_0 + 1)
                           2197 ;	genIpush
   0793 C0 02              2198 	push	ar2
   0795 C0 03              2199 	push	ar3
   0797 C0 00              2200 	push	ar0
   0799 C0 01              2201 	push	ar1
   079B C0 06              2202 	push	ar6
   079D C0 07              2203 	push	ar7
                           2204 ;	genIpush
   079F 74 E1              2205 	mov	a,#__str_22
   07A1 C0 E0              2206 	push	acc
   07A3 74 21              2207 	mov	a,#(__str_22 >> 8)
   07A5 C0 E0              2208 	push	acc
   07A7 74 80              2209 	mov	a,#0x80
   07A9 C0 E0              2210 	push	acc
                           2211 ;	genCall
   07AB 12 18 60           2212 	lcall	_printf_small
   07AE E5 81              2213 	mov	a,sp
   07B0 24 FB              2214 	add	a,#0xfb
   07B2 F5 81              2215 	mov	sp,a
   07B4 D0 01              2216 	pop	ar1
   07B6 D0 00              2217 	pop	ar0
   07B8 D0 03              2218 	pop	ar3
   07BA D0 02              2219 	pop	ar2
                           2220 ;	main.c:249: printf_small("buffer end address : %d \n\r",value);
                           2221 ;	genIpush
   07BC C0 02              2222 	push	ar2
   07BE C0 03              2223 	push	ar3
   07C0 C0 00              2224 	push	ar0
   07C2 C0 01              2225 	push	ar1
   07C4 C0 21              2226 	push	_main_sloc0_1_0
   07C6 C0 22              2227 	push	(_main_sloc0_1_0 + 1)
                           2228 ;	genIpush
   07C8 74 FF              2229 	mov	a,#__str_23
   07CA C0 E0              2230 	push	acc
   07CC 74 21              2231 	mov	a,#(__str_23 >> 8)
   07CE C0 E0              2232 	push	acc
   07D0 74 80              2233 	mov	a,#0x80
   07D2 C0 E0              2234 	push	acc
                           2235 ;	genCall
   07D4 12 18 60           2236 	lcall	_printf_small
   07D7 E5 81              2237 	mov	a,sp
   07D9 24 FB              2238 	add	a,#0xfb
   07DB F5 81              2239 	mov	sp,a
   07DD D0 01              2240 	pop	ar1
   07DF D0 00              2241 	pop	ar0
   07E1 D0 03              2242 	pop	ar3
   07E3 D0 02              2243 	pop	ar2
                           2244 ;	main.c:250: printf_tiny("total buffer size  : %d \n\r", num);
                           2245 ;	genIpush
   07E5 C0 02              2246 	push	ar2
   07E7 C0 03              2247 	push	ar3
   07E9 C0 00              2248 	push	ar0
   07EB C0 01              2249 	push	ar1
   07ED C0 02              2250 	push	ar2
   07EF C0 03              2251 	push	ar3
                           2252 ;	genIpush
   07F1 74 1A              2253 	mov	a,#__str_24
   07F3 C0 E0              2254 	push	acc
   07F5 74 22              2255 	mov	a,#(__str_24 >> 8)
   07F7 C0 E0              2256 	push	acc
                           2257 ;	genCall
   07F9 12 17 38           2258 	lcall	_printf_tiny
   07FC E5 81              2259 	mov	a,sp
   07FE 24 FC              2260 	add	a,#0xfc
   0800 F5 81              2261 	mov	sp,a
   0802 D0 01              2262 	pop	ar1
   0804 D0 00              2263 	pop	ar0
   0806 D0 03              2264 	pop	ar3
   0808 D0 02              2265 	pop	ar2
                           2266 ;	main.c:251: printf_tiny(" number of characters : %d \n\r",countch);
                           2267 ;	genAssign
   080A 90 0C 86           2268 	mov	dptr,#_main_countch_1_1
   080D E0                 2269 	movx	a,@dptr
   080E FE                 2270 	mov	r6,a
   080F A3                 2271 	inc	dptr
   0810 E0                 2272 	movx	a,@dptr
   0811 FF                 2273 	mov	r7,a
                           2274 ;	genIpush
   0812 C0 02              2275 	push	ar2
   0814 C0 03              2276 	push	ar3
   0816 C0 06              2277 	push	ar6
   0818 C0 07              2278 	push	ar7
   081A C0 00              2279 	push	ar0
   081C C0 01              2280 	push	ar1
   081E C0 06              2281 	push	ar6
   0820 C0 07              2282 	push	ar7
                           2283 ;	genIpush
   0822 74 35              2284 	mov	a,#__str_25
   0824 C0 E0              2285 	push	acc
   0826 74 22              2286 	mov	a,#(__str_25 >> 8)
   0828 C0 E0              2287 	push	acc
                           2288 ;	genCall
   082A 12 17 38           2289 	lcall	_printf_tiny
   082D E5 81              2290 	mov	a,sp
   082F 24 FC              2291 	add	a,#0xfc
   0831 F5 81              2292 	mov	sp,a
   0833 D0 01              2293 	pop	ar1
   0835 D0 00              2294 	pop	ar0
   0837 D0 07              2295 	pop	ar7
   0839 D0 06              2296 	pop	ar6
   083B D0 03              2297 	pop	ar3
   083D D0 02              2298 	pop	ar2
                           2299 ;	main.c:252: printf_tiny(" number of free spaces : %d \n\r", (num-countch));
                           2300 ;	genIpush
                           2301 ;	genMinus
   083F EA                 2302 	mov	a,r2
   0840 C3                 2303 	clr	c
                           2304 ;	Peephole 236.l	used r6 instead of ar6
   0841 9E                 2305 	subb	a,r6
   0842 FC                 2306 	mov	r4,a
   0843 EB                 2307 	mov	a,r3
                           2308 ;	Peephole 236.l	used r7 instead of ar7
   0844 9F                 2309 	subb	a,r7
   0845 FD                 2310 	mov	r5,a
                           2311 ;	genIpush
   0846 C0 02              2312 	push	ar2
   0848 C0 03              2313 	push	ar3
   084A C0 06              2314 	push	ar6
   084C C0 07              2315 	push	ar7
   084E C0 00              2316 	push	ar0
   0850 C0 01              2317 	push	ar1
   0852 C0 04              2318 	push	ar4
   0854 C0 05              2319 	push	ar5
                           2320 ;	genIpush
   0856 74 53              2321 	mov	a,#__str_26
   0858 C0 E0              2322 	push	acc
   085A 74 22              2323 	mov	a,#(__str_26 >> 8)
   085C C0 E0              2324 	push	acc
                           2325 ;	genCall
   085E 12 17 38           2326 	lcall	_printf_tiny
   0861 E5 81              2327 	mov	a,sp
   0863 24 FC              2328 	add	a,#0xfc
   0865 F5 81              2329 	mov	sp,a
   0867 D0 01              2330 	pop	ar1
   0869 D0 00              2331 	pop	ar0
   086B D0 07              2332 	pop	ar7
   086D D0 06              2333 	pop	ar6
   086F D0 03              2334 	pop	ar3
   0871 D0 02              2335 	pop	ar2
                           2336 ;	main.c:253: printf_tiny("############################################################################################\n\r");
                           2337 ;	genIpush
   0873 C0 02              2338 	push	ar2
   0875 C0 03              2339 	push	ar3
   0877 C0 06              2340 	push	ar6
   0879 C0 07              2341 	push	ar7
   087B C0 00              2342 	push	ar0
   087D C0 01              2343 	push	ar1
   087F 74 72              2344 	mov	a,#__str_27
   0881 C0 E0              2345 	push	acc
   0883 74 22              2346 	mov	a,#(__str_27 >> 8)
   0885 C0 E0              2347 	push	acc
                           2348 ;	genCall
   0887 12 17 38           2349 	lcall	_printf_tiny
   088A 15 81              2350 	dec	sp
   088C 15 81              2351 	dec	sp
   088E D0 01              2352 	pop	ar1
   0890 D0 00              2353 	pop	ar0
   0892 D0 07              2354 	pop	ar7
   0894 D0 06              2355 	pop	ar6
   0896 D0 03              2356 	pop	ar3
   0898 D0 02              2357 	pop	ar2
                           2358 ;	main.c:254: printf_tiny("------------------Report for Buffer1------------------\n\r");
                           2359 ;	genIpush
   089A C0 02              2360 	push	ar2
   089C C0 03              2361 	push	ar3
   089E C0 06              2362 	push	ar6
   08A0 C0 07              2363 	push	ar7
   08A2 C0 00              2364 	push	ar0
   08A4 C0 01              2365 	push	ar1
   08A6 74 D1              2366 	mov	a,#__str_28
   08A8 C0 E0              2367 	push	acc
   08AA 74 22              2368 	mov	a,#(__str_28 >> 8)
   08AC C0 E0              2369 	push	acc
                           2370 ;	genCall
   08AE 12 17 38           2371 	lcall	_printf_tiny
   08B1 15 81              2372 	dec	sp
   08B3 15 81              2373 	dec	sp
   08B5 D0 01              2374 	pop	ar1
   08B7 D0 00              2375 	pop	ar0
   08B9 D0 07              2376 	pop	ar7
   08BB D0 06              2377 	pop	ar6
   08BD D0 03              2378 	pop	ar3
   08BF D0 02              2379 	pop	ar2
                           2380 ;	main.c:255: printf_small("buffer start address : %d \n\r ",(uint16_t)ptr1);
                           2381 ;	genCast
   08C1 AC 29              2382 	mov	r4,_main_sloc4_1_0
   08C3 AD 2A              2383 	mov	r5,(_main_sloc4_1_0 + 1)
                           2384 ;	genIpush
   08C5 C0 02              2385 	push	ar2
   08C7 C0 03              2386 	push	ar3
   08C9 C0 06              2387 	push	ar6
   08CB C0 07              2388 	push	ar7
   08CD C0 00              2389 	push	ar0
   08CF C0 01              2390 	push	ar1
   08D1 C0 04              2391 	push	ar4
   08D3 C0 05              2392 	push	ar5
                           2393 ;	genIpush
   08D5 74 E1              2394 	mov	a,#__str_22
   08D7 C0 E0              2395 	push	acc
   08D9 74 21              2396 	mov	a,#(__str_22 >> 8)
   08DB C0 E0              2397 	push	acc
   08DD 74 80              2398 	mov	a,#0x80
   08DF C0 E0              2399 	push	acc
                           2400 ;	genCall
   08E1 12 18 60           2401 	lcall	_printf_small
   08E4 E5 81              2402 	mov	a,sp
   08E6 24 FB              2403 	add	a,#0xfb
   08E8 F5 81              2404 	mov	sp,a
   08EA D0 01              2405 	pop	ar1
   08EC D0 00              2406 	pop	ar0
   08EE D0 07              2407 	pop	ar7
   08F0 D0 06              2408 	pop	ar6
   08F2 D0 03              2409 	pop	ar3
   08F4 D0 02              2410 	pop	ar2
                           2411 ;	main.c:256: printf_small("buffer end address : %d \n\r",value1);
                           2412 ;	genIpush
   08F6 C0 02              2413 	push	ar2
   08F8 C0 03              2414 	push	ar3
   08FA C0 06              2415 	push	ar6
   08FC C0 07              2416 	push	ar7
   08FE C0 00              2417 	push	ar0
   0900 C0 01              2418 	push	ar1
   0902 C0 00              2419 	push	ar0
   0904 C0 01              2420 	push	ar1
                           2421 ;	genIpush
   0906 74 FF              2422 	mov	a,#__str_23
   0908 C0 E0              2423 	push	acc
   090A 74 21              2424 	mov	a,#(__str_23 >> 8)
   090C C0 E0              2425 	push	acc
   090E 74 80              2426 	mov	a,#0x80
   0910 C0 E0              2427 	push	acc
                           2428 ;	genCall
   0912 12 18 60           2429 	lcall	_printf_small
   0915 E5 81              2430 	mov	a,sp
   0917 24 FB              2431 	add	a,#0xfb
   0919 F5 81              2432 	mov	sp,a
   091B D0 01              2433 	pop	ar1
   091D D0 00              2434 	pop	ar0
   091F D0 07              2435 	pop	ar7
   0921 D0 06              2436 	pop	ar6
   0923 D0 03              2437 	pop	ar3
   0925 D0 02              2438 	pop	ar2
                           2439 ;	main.c:257: printf_tiny("total buffer size  : %d \n\r", num);
                           2440 ;	genIpush
   0927 C0 02              2441 	push	ar2
   0929 C0 03              2442 	push	ar3
   092B C0 06              2443 	push	ar6
   092D C0 07              2444 	push	ar7
   092F C0 00              2445 	push	ar0
   0931 C0 01              2446 	push	ar1
   0933 C0 02              2447 	push	ar2
   0935 C0 03              2448 	push	ar3
                           2449 ;	genIpush
   0937 74 1A              2450 	mov	a,#__str_24
   0939 C0 E0              2451 	push	acc
   093B 74 22              2452 	mov	a,#(__str_24 >> 8)
   093D C0 E0              2453 	push	acc
                           2454 ;	genCall
   093F 12 17 38           2455 	lcall	_printf_tiny
   0942 E5 81              2456 	mov	a,sp
   0944 24 FC              2457 	add	a,#0xfc
   0946 F5 81              2458 	mov	sp,a
   0948 D0 01              2459 	pop	ar1
   094A D0 00              2460 	pop	ar0
   094C D0 07              2461 	pop	ar7
   094E D0 06              2462 	pop	ar6
   0950 D0 03              2463 	pop	ar3
   0952 D0 02              2464 	pop	ar2
                           2465 ;	main.c:258: printf_tiny(" number of characters : %d \n\r",countnum);
                           2466 ;	genAssign
   0954 90 0C 84           2467 	mov	dptr,#_main_countnum_1_1
   0957 E0                 2468 	movx	a,@dptr
   0958 FC                 2469 	mov	r4,a
   0959 A3                 2470 	inc	dptr
   095A E0                 2471 	movx	a,@dptr
   095B FD                 2472 	mov	r5,a
                           2473 ;	genIpush
   095C C0 02              2474 	push	ar2
   095E C0 03              2475 	push	ar3
   0960 C0 04              2476 	push	ar4
   0962 C0 05              2477 	push	ar5
   0964 C0 06              2478 	push	ar6
   0966 C0 07              2479 	push	ar7
   0968 C0 00              2480 	push	ar0
   096A C0 01              2481 	push	ar1
   096C C0 04              2482 	push	ar4
   096E C0 05              2483 	push	ar5
                           2484 ;	genIpush
   0970 74 35              2485 	mov	a,#__str_25
   0972 C0 E0              2486 	push	acc
   0974 74 22              2487 	mov	a,#(__str_25 >> 8)
   0976 C0 E0              2488 	push	acc
                           2489 ;	genCall
   0978 12 17 38           2490 	lcall	_printf_tiny
   097B E5 81              2491 	mov	a,sp
   097D 24 FC              2492 	add	a,#0xfc
   097F F5 81              2493 	mov	sp,a
   0981 D0 01              2494 	pop	ar1
   0983 D0 00              2495 	pop	ar0
   0985 D0 07              2496 	pop	ar7
   0987 D0 06              2497 	pop	ar6
   0989 D0 05              2498 	pop	ar5
   098B D0 04              2499 	pop	ar4
   098D D0 03              2500 	pop	ar3
   098F D0 02              2501 	pop	ar2
                           2502 ;	main.c:259: printf_tiny(" number of free spaces : %d \n\r", (num-countnum));
                           2503 ;	genMinus
   0991 EA                 2504 	mov	a,r2
   0992 C3                 2505 	clr	c
                           2506 ;	Peephole 236.l	used r4 instead of ar4
   0993 9C                 2507 	subb	a,r4
   0994 FC                 2508 	mov	r4,a
   0995 EB                 2509 	mov	a,r3
                           2510 ;	Peephole 236.l	used r5 instead of ar5
   0996 9D                 2511 	subb	a,r5
   0997 FD                 2512 	mov	r5,a
                           2513 ;	genIpush
   0998 C0 02              2514 	push	ar2
   099A C0 03              2515 	push	ar3
   099C C0 06              2516 	push	ar6
   099E C0 07              2517 	push	ar7
   09A0 C0 00              2518 	push	ar0
   09A2 C0 01              2519 	push	ar1
   09A4 C0 04              2520 	push	ar4
   09A6 C0 05              2521 	push	ar5
                           2522 ;	genIpush
   09A8 74 53              2523 	mov	a,#__str_26
   09AA C0 E0              2524 	push	acc
   09AC 74 22              2525 	mov	a,#(__str_26 >> 8)
   09AE C0 E0              2526 	push	acc
                           2527 ;	genCall
   09B0 12 17 38           2528 	lcall	_printf_tiny
   09B3 E5 81              2529 	mov	a,sp
   09B5 24 FC              2530 	add	a,#0xfc
   09B7 F5 81              2531 	mov	sp,a
   09B9 D0 01              2532 	pop	ar1
   09BB D0 00              2533 	pop	ar0
   09BD D0 07              2534 	pop	ar7
   09BF D0 06              2535 	pop	ar6
   09C1 D0 03              2536 	pop	ar3
   09C3 D0 02              2537 	pop	ar2
                           2538 ;	main.c:260: printf_tiny("##############################################################################################\n\r");
                           2539 ;	genIpush
   09C5 C0 02              2540 	push	ar2
   09C7 C0 03              2541 	push	ar3
   09C9 C0 06              2542 	push	ar6
   09CB C0 07              2543 	push	ar7
   09CD C0 00              2544 	push	ar0
   09CF C0 01              2545 	push	ar1
   09D1 74 0A              2546 	mov	a,#__str_29
   09D3 C0 E0              2547 	push	acc
   09D5 74 23              2548 	mov	a,#(__str_29 >> 8)
   09D7 C0 E0              2549 	push	acc
                           2550 ;	genCall
   09D9 12 17 38           2551 	lcall	_printf_tiny
   09DC 15 81              2552 	dec	sp
   09DE 15 81              2553 	dec	sp
   09E0 D0 01              2554 	pop	ar1
   09E2 D0 00              2555 	pop	ar0
   09E4 D0 07              2556 	pop	ar7
   09E6 D0 06              2557 	pop	ar6
   09E8 D0 03              2558 	pop	ar3
   09EA D0 02              2559 	pop	ar2
                           2560 ;	main.c:261: printf_tiny("characters in buffer[0]\n\r");
                           2561 ;	genIpush
   09EC C0 02              2562 	push	ar2
   09EE C0 03              2563 	push	ar3
   09F0 C0 06              2564 	push	ar6
   09F2 C0 07              2565 	push	ar7
   09F4 C0 00              2566 	push	ar0
   09F6 C0 01              2567 	push	ar1
   09F8 74 6B              2568 	mov	a,#__str_30
   09FA C0 E0              2569 	push	acc
   09FC 74 23              2570 	mov	a,#(__str_30 >> 8)
   09FE C0 E0              2571 	push	acc
                           2572 ;	genCall
   0A00 12 17 38           2573 	lcall	_printf_tiny
   0A03 15 81              2574 	dec	sp
   0A05 15 81              2575 	dec	sp
   0A07 D0 01              2576 	pop	ar1
   0A09 D0 00              2577 	pop	ar0
   0A0B D0 07              2578 	pop	ar7
   0A0D D0 06              2579 	pop	ar6
   0A0F D0 03              2580 	pop	ar3
   0A11 D0 02              2581 	pop	ar2
                           2582 ;	main.c:263: score =0;
                           2583 ;	genAssign
   0A13 90 0C 8A           2584 	mov	dptr,#_main_score_1_1
   0A16 E4                 2585 	clr	a
   0A17 F0                 2586 	movx	@dptr,a
   0A18 A3                 2587 	inc	dptr
   0A19 F0                 2588 	movx	@dptr,a
                           2589 ;	main.c:418: goto again;
                           2590 ;	genIpop
                           2591 ;	main.c:266: while(t < countch)                                                                         /* to print out buffer contents */
                           2592 ;	genAssign
                           2593 ;	genAssign
   0A1A 7C 00              2594 	mov	r4,#0x00
   0A1C 7D 00              2595 	mov	r5,#0x00
                           2596 ;	genAssign
   0A1E 85 3A 34           2597 	mov	_main_sloc10_1_0,_main_sloc14_1_0
   0A21 85 3B 35           2598 	mov	(_main_sloc10_1_0 + 1),(_main_sloc14_1_0 + 1)
   0A24                    2599 00166$:
                           2600 ;	genCmpLt
                           2601 ;	genCmp
   0A24 C3                 2602 	clr	c
   0A25 EC                 2603 	mov	a,r4
   0A26 9E                 2604 	subb	a,r6
   0A27 ED                 2605 	mov	a,r5
   0A28 9F                 2606 	subb	a,r7
                           2607 ;	genIfxJump
   0A29 40 03              2608 	jc	00348$
   0A2B 02 0A E6           2609 	ljmp	00168$
   0A2E                    2610 00348$:
                           2611 ;	main.c:268: printf_small("%c",*ptra);
                           2612 ;	genIpush
   0A2E C0 00              2613 	push	ar0
   0A30 C0 01              2614 	push	ar1
                           2615 ;	genPointerGet
                           2616 ;	genFarPointerGet
   0A32 85 34 82           2617 	mov	dpl,_main_sloc10_1_0
   0A35 85 35 83           2618 	mov	dph,(_main_sloc10_1_0 + 1)
   0A38 E0                 2619 	movx	a,@dptr
   0A39 F8                 2620 	mov	r0,a
   0A3A A3                 2621 	inc	dptr
   0A3B 85 82 34           2622 	mov	_main_sloc10_1_0,dpl
   0A3E 85 83 35           2623 	mov	(_main_sloc10_1_0 + 1),dph
                           2624 ;	genCast
   0A41 79 00              2625 	mov	r1,#0x00
                           2626 ;	genIpush
   0A43 C0 02              2627 	push	ar2
   0A45 C0 03              2628 	push	ar3
   0A47 C0 04              2629 	push	ar4
   0A49 C0 05              2630 	push	ar5
   0A4B C0 06              2631 	push	ar6
   0A4D C0 07              2632 	push	ar7
   0A4F C0 00              2633 	push	ar0
   0A51 C0 01              2634 	push	ar1
   0A53 C0 00              2635 	push	ar0
   0A55 C0 01              2636 	push	ar1
                           2637 ;	genIpush
   0A57 74 85              2638 	mov	a,#__str_31
   0A59 C0 E0              2639 	push	acc
   0A5B 74 23              2640 	mov	a,#(__str_31 >> 8)
   0A5D C0 E0              2641 	push	acc
   0A5F 74 80              2642 	mov	a,#0x80
   0A61 C0 E0              2643 	push	acc
                           2644 ;	genCall
   0A63 12 18 60           2645 	lcall	_printf_small
   0A66 E5 81              2646 	mov	a,sp
   0A68 24 FB              2647 	add	a,#0xfb
   0A6A F5 81              2648 	mov	sp,a
   0A6C D0 01              2649 	pop	ar1
   0A6E D0 00              2650 	pop	ar0
   0A70 D0 07              2651 	pop	ar7
   0A72 D0 06              2652 	pop	ar6
   0A74 D0 05              2653 	pop	ar5
   0A76 D0 04              2654 	pop	ar4
   0A78 D0 03              2655 	pop	ar3
   0A7A D0 02              2656 	pop	ar2
                           2657 ;	main.c:270: score++;
                           2658 ;	genAssign
   0A7C 90 0C 8A           2659 	mov	dptr,#_main_score_1_1
   0A7F E0                 2660 	movx	a,@dptr
   0A80 F8                 2661 	mov	r0,a
   0A81 A3                 2662 	inc	dptr
   0A82 E0                 2663 	movx	a,@dptr
   0A83 F9                 2664 	mov	r1,a
                           2665 ;	genPlus
   0A84 90 0C 8A           2666 	mov	dptr,#_main_score_1_1
                           2667 ;     genPlusIncr
   0A87 74 01              2668 	mov	a,#0x01
                           2669 ;	Peephole 236.a	used r0 instead of ar0
   0A89 28                 2670 	add	a,r0
   0A8A F0                 2671 	movx	@dptr,a
                           2672 ;	Peephole 181	changed mov to clr
   0A8B E4                 2673 	clr	a
                           2674 ;	Peephole 236.b	used r1 instead of ar1
   0A8C 39                 2675 	addc	a,r1
   0A8D A3                 2676 	inc	dptr
   0A8E F0                 2677 	movx	@dptr,a
                           2678 ;	main.c:271: t++;
                           2679 ;	genPlus
                           2680 ;     genPlusIncr
   0A8F 0C                 2681 	inc	r4
   0A90 BC 00 01           2682 	cjne	r4,#0x00,00349$
   0A93 0D                 2683 	inc	r5
   0A94                    2684 00349$:
                           2685 ;	main.c:272: ptra++;
                           2686 ;	main.c:273: if (score == 64)
                           2687 ;	genAssign
   0A94 90 0C 8A           2688 	mov	dptr,#_main_score_1_1
   0A97 E0                 2689 	movx	a,@dptr
   0A98 F8                 2690 	mov	r0,a
   0A99 A3                 2691 	inc	dptr
   0A9A E0                 2692 	movx	a,@dptr
   0A9B F9                 2693 	mov	r1,a
                           2694 ;	genCmpEq
                           2695 ;	gencjne
                           2696 ;	gencjneshort
                           2697 ;	Peephole 241.c	optimized compare
   0A9C E4                 2698 	clr	a
   0A9D B8 40 04           2699 	cjne	r0,#0x40,00350$
   0AA0 B9 00 01           2700 	cjne	r1,#0x00,00350$
   0AA3 04                 2701 	inc	a
   0AA4                    2702 00350$:
                           2703 ;	Peephole 300	removed redundant label 00351$
                           2704 ;	genIpop
   0AA4 D0 01              2705 	pop	ar1
   0AA6 D0 00              2706 	pop	ar0
                           2707 ;	genIfx
                           2708 ;	genIfxJump
   0AA8 70 03              2709 	jnz	00352$
   0AAA 02 0A 24           2710 	ljmp	00166$
   0AAD                    2711 00352$:
                           2712 ;	main.c:275: printf_tiny("\n\r");
                           2713 ;	genIpush
   0AAD C0 02              2714 	push	ar2
   0AAF C0 03              2715 	push	ar3
   0AB1 C0 04              2716 	push	ar4
   0AB3 C0 05              2717 	push	ar5
   0AB5 C0 06              2718 	push	ar6
   0AB7 C0 07              2719 	push	ar7
   0AB9 C0 00              2720 	push	ar0
   0ABB C0 01              2721 	push	ar1
   0ABD 74 F0              2722 	mov	a,#__str_10
   0ABF C0 E0              2723 	push	acc
   0AC1 74 1F              2724 	mov	a,#(__str_10 >> 8)
   0AC3 C0 E0              2725 	push	acc
                           2726 ;	genCall
   0AC5 12 17 38           2727 	lcall	_printf_tiny
   0AC8 15 81              2728 	dec	sp
   0ACA 15 81              2729 	dec	sp
   0ACC D0 01              2730 	pop	ar1
   0ACE D0 00              2731 	pop	ar0
   0AD0 D0 07              2732 	pop	ar7
   0AD2 D0 06              2733 	pop	ar6
   0AD4 D0 05              2734 	pop	ar5
   0AD6 D0 04              2735 	pop	ar4
   0AD8 D0 03              2736 	pop	ar3
   0ADA D0 02              2737 	pop	ar2
                           2738 ;	main.c:276: score = 0;
                           2739 ;	genAssign
   0ADC 90 0C 8A           2740 	mov	dptr,#_main_score_1_1
   0ADF E4                 2741 	clr	a
   0AE0 F0                 2742 	movx	@dptr,a
   0AE1 A3                 2743 	inc	dptr
   0AE2 F0                 2744 	movx	@dptr,a
   0AE3 02 0A 24           2745 	ljmp	00166$
   0AE6                    2746 00168$:
                           2747 ;	main.c:280: countch =0 ;
                           2748 ;	genAssign
   0AE6 90 0C 86           2749 	mov	dptr,#_main_countch_1_1
   0AE9 E4                 2750 	clr	a
   0AEA F0                 2751 	movx	@dptr,a
   0AEB A3                 2752 	inc	dptr
   0AEC F0                 2753 	movx	@dptr,a
                           2754 ;	main.c:281: score = 0;
                           2755 ;	genAssign
   0AED 90 0C 8A           2756 	mov	dptr,#_main_score_1_1
   0AF0 E4                 2757 	clr	a
   0AF1 F0                 2758 	movx	@dptr,a
   0AF2 A3                 2759 	inc	dptr
   0AF3 F0                 2760 	movx	@dptr,a
                           2761 ;	main.c:283: printf_tiny("\n\r");
                           2762 ;	genIpush
   0AF4 C0 02              2763 	push	ar2
   0AF6 C0 03              2764 	push	ar3
   0AF8 C0 00              2765 	push	ar0
   0AFA C0 01              2766 	push	ar1
   0AFC 74 F0              2767 	mov	a,#__str_10
   0AFE C0 E0              2768 	push	acc
   0B00 74 1F              2769 	mov	a,#(__str_10 >> 8)
   0B02 C0 E0              2770 	push	acc
                           2771 ;	genCall
   0B04 12 17 38           2772 	lcall	_printf_tiny
   0B07 15 81              2773 	dec	sp
   0B09 15 81              2774 	dec	sp
   0B0B D0 01              2775 	pop	ar1
   0B0D D0 00              2776 	pop	ar0
   0B0F D0 03              2777 	pop	ar3
   0B11 D0 02              2778 	pop	ar2
                           2779 ;	main.c:284: printf_tiny("characters in buffer[1]\n\r");
                           2780 ;	genIpush
   0B13 C0 02              2781 	push	ar2
   0B15 C0 03              2782 	push	ar3
   0B17 C0 00              2783 	push	ar0
   0B19 C0 01              2784 	push	ar1
   0B1B 74 88              2785 	mov	a,#__str_32
   0B1D C0 E0              2786 	push	acc
   0B1F 74 23              2787 	mov	a,#(__str_32 >> 8)
   0B21 C0 E0              2788 	push	acc
                           2789 ;	genCall
   0B23 12 17 38           2790 	lcall	_printf_tiny
   0B26 15 81              2791 	dec	sp
   0B28 15 81              2792 	dec	sp
   0B2A D0 01              2793 	pop	ar1
   0B2C D0 00              2794 	pop	ar0
   0B2E D0 03              2795 	pop	ar3
   0B30 D0 02              2796 	pop	ar2
                           2797 ;	main.c:285: while(t < countnum)
                           2798 ;	genAssign
   0B32 90 0C 84           2799 	mov	dptr,#_main_countnum_1_1
   0B35 E0                 2800 	movx	a,@dptr
   0B36 FE                 2801 	mov	r6,a
   0B37 A3                 2802 	inc	dptr
   0B38 E0                 2803 	movx	a,@dptr
   0B39 FF                 2804 	mov	r7,a
                           2805 ;	genAssign
   0B3A 7C 00              2806 	mov	r4,#0x00
   0B3C 7D 00              2807 	mov	r5,#0x00
                           2808 ;	genAssign
   0B3E 85 38 34           2809 	mov	_main_sloc10_1_0,_main_sloc13_1_0
   0B41 85 39 35           2810 	mov	(_main_sloc10_1_0 + 1),(_main_sloc13_1_0 + 1)
   0B44                    2811 00171$:
                           2812 ;	genCmpLt
                           2813 ;	genCmp
   0B44 C3                 2814 	clr	c
   0B45 EC                 2815 	mov	a,r4
   0B46 9E                 2816 	subb	a,r6
   0B47 ED                 2817 	mov	a,r5
   0B48 9F                 2818 	subb	a,r7
                           2819 ;	genIfxJump
   0B49 40 03              2820 	jc	00353$
   0B4B 02 0C 06           2821 	ljmp	00173$
   0B4E                    2822 00353$:
                           2823 ;	main.c:287: printf_small("%c",*ptrb);
                           2824 ;	genIpush
   0B4E C0 00              2825 	push	ar0
   0B50 C0 01              2826 	push	ar1
                           2827 ;	genPointerGet
                           2828 ;	genFarPointerGet
   0B52 85 34 82           2829 	mov	dpl,_main_sloc10_1_0
   0B55 85 35 83           2830 	mov	dph,(_main_sloc10_1_0 + 1)
   0B58 E0                 2831 	movx	a,@dptr
   0B59 F8                 2832 	mov	r0,a
   0B5A A3                 2833 	inc	dptr
   0B5B 85 82 34           2834 	mov	_main_sloc10_1_0,dpl
   0B5E 85 83 35           2835 	mov	(_main_sloc10_1_0 + 1),dph
                           2836 ;	genCast
   0B61 79 00              2837 	mov	r1,#0x00
                           2838 ;	genIpush
   0B63 C0 02              2839 	push	ar2
   0B65 C0 03              2840 	push	ar3
   0B67 C0 04              2841 	push	ar4
   0B69 C0 05              2842 	push	ar5
   0B6B C0 06              2843 	push	ar6
   0B6D C0 07              2844 	push	ar7
   0B6F C0 00              2845 	push	ar0
   0B71 C0 01              2846 	push	ar1
   0B73 C0 00              2847 	push	ar0
   0B75 C0 01              2848 	push	ar1
                           2849 ;	genIpush
   0B77 74 85              2850 	mov	a,#__str_31
   0B79 C0 E0              2851 	push	acc
   0B7B 74 23              2852 	mov	a,#(__str_31 >> 8)
   0B7D C0 E0              2853 	push	acc
   0B7F 74 80              2854 	mov	a,#0x80
   0B81 C0 E0              2855 	push	acc
                           2856 ;	genCall
   0B83 12 18 60           2857 	lcall	_printf_small
   0B86 E5 81              2858 	mov	a,sp
   0B88 24 FB              2859 	add	a,#0xfb
   0B8A F5 81              2860 	mov	sp,a
   0B8C D0 01              2861 	pop	ar1
   0B8E D0 00              2862 	pop	ar0
   0B90 D0 07              2863 	pop	ar7
   0B92 D0 06              2864 	pop	ar6
   0B94 D0 05              2865 	pop	ar5
   0B96 D0 04              2866 	pop	ar4
   0B98 D0 03              2867 	pop	ar3
   0B9A D0 02              2868 	pop	ar2
                           2869 ;	main.c:289: score++;
                           2870 ;	genAssign
   0B9C 90 0C 8A           2871 	mov	dptr,#_main_score_1_1
   0B9F E0                 2872 	movx	a,@dptr
   0BA0 F8                 2873 	mov	r0,a
   0BA1 A3                 2874 	inc	dptr
   0BA2 E0                 2875 	movx	a,@dptr
   0BA3 F9                 2876 	mov	r1,a
                           2877 ;	genPlus
   0BA4 90 0C 8A           2878 	mov	dptr,#_main_score_1_1
                           2879 ;     genPlusIncr
   0BA7 74 01              2880 	mov	a,#0x01
                           2881 ;	Peephole 236.a	used r0 instead of ar0
   0BA9 28                 2882 	add	a,r0
   0BAA F0                 2883 	movx	@dptr,a
                           2884 ;	Peephole 181	changed mov to clr
   0BAB E4                 2885 	clr	a
                           2886 ;	Peephole 236.b	used r1 instead of ar1
   0BAC 39                 2887 	addc	a,r1
   0BAD A3                 2888 	inc	dptr
   0BAE F0                 2889 	movx	@dptr,a
                           2890 ;	main.c:290: t++;
                           2891 ;	genPlus
                           2892 ;     genPlusIncr
   0BAF 0C                 2893 	inc	r4
   0BB0 BC 00 01           2894 	cjne	r4,#0x00,00354$
   0BB3 0D                 2895 	inc	r5
   0BB4                    2896 00354$:
                           2897 ;	main.c:291: ptrb++;
                           2898 ;	main.c:292: if (score == 64)
                           2899 ;	genAssign
   0BB4 90 0C 8A           2900 	mov	dptr,#_main_score_1_1
   0BB7 E0                 2901 	movx	a,@dptr
   0BB8 F8                 2902 	mov	r0,a
   0BB9 A3                 2903 	inc	dptr
   0BBA E0                 2904 	movx	a,@dptr
   0BBB F9                 2905 	mov	r1,a
                           2906 ;	genCmpEq
                           2907 ;	gencjne
                           2908 ;	gencjneshort
                           2909 ;	Peephole 241.c	optimized compare
   0BBC E4                 2910 	clr	a
   0BBD B8 40 04           2911 	cjne	r0,#0x40,00355$
   0BC0 B9 00 01           2912 	cjne	r1,#0x00,00355$
   0BC3 04                 2913 	inc	a
   0BC4                    2914 00355$:
                           2915 ;	Peephole 300	removed redundant label 00356$
                           2916 ;	genIpop
   0BC4 D0 01              2917 	pop	ar1
   0BC6 D0 00              2918 	pop	ar0
                           2919 ;	genIfx
                           2920 ;	genIfxJump
   0BC8 70 03              2921 	jnz	00357$
   0BCA 02 0B 44           2922 	ljmp	00171$
   0BCD                    2923 00357$:
                           2924 ;	main.c:294: printf_tiny("\n\r");
                           2925 ;	genIpush
   0BCD C0 02              2926 	push	ar2
   0BCF C0 03              2927 	push	ar3
   0BD1 C0 04              2928 	push	ar4
   0BD3 C0 05              2929 	push	ar5
   0BD5 C0 06              2930 	push	ar6
   0BD7 C0 07              2931 	push	ar7
   0BD9 C0 00              2932 	push	ar0
   0BDB C0 01              2933 	push	ar1
   0BDD 74 F0              2934 	mov	a,#__str_10
   0BDF C0 E0              2935 	push	acc
   0BE1 74 1F              2936 	mov	a,#(__str_10 >> 8)
   0BE3 C0 E0              2937 	push	acc
                           2938 ;	genCall
   0BE5 12 17 38           2939 	lcall	_printf_tiny
   0BE8 15 81              2940 	dec	sp
   0BEA 15 81              2941 	dec	sp
   0BEC D0 01              2942 	pop	ar1
   0BEE D0 00              2943 	pop	ar0
   0BF0 D0 07              2944 	pop	ar7
   0BF2 D0 06              2945 	pop	ar6
   0BF4 D0 05              2946 	pop	ar5
   0BF6 D0 04              2947 	pop	ar4
   0BF8 D0 03              2948 	pop	ar3
   0BFA D0 02              2949 	pop	ar2
                           2950 ;	main.c:295: score = 0;
                           2951 ;	genAssign
   0BFC 90 0C 8A           2952 	mov	dptr,#_main_score_1_1
   0BFF E4                 2953 	clr	a
   0C00 F0                 2954 	movx	@dptr,a
   0C01 A3                 2955 	inc	dptr
   0C02 F0                 2956 	movx	@dptr,a
   0C03 02 0B 44           2957 	ljmp	00171$
   0C06                    2958 00173$:
                           2959 ;	main.c:298: for (m = 2 ; m <=i ; m++)
                           2960 ;	genAssign
   0C06 AE 2F              2961 	mov	r6,_main_sloc7_1_0
   0C08 AF 30              2962 	mov	r7,(_main_sloc7_1_0 + 1)
                           2963 ;	genAssign
   0C0A 75 36 02           2964 	mov	_main_sloc11_1_0,#0x02
   0C0D E4                 2965 	clr	a
   0C0E F5 37              2966 	mov	(_main_sloc11_1_0 + 1),a
   0C10                    2967 00177$:
                           2968 ;	genCmpGt
                           2969 ;	genCmp
   0C10 C3                 2970 	clr	c
   0C11 EE                 2971 	mov	a,r6
   0C12 95 36              2972 	subb	a,_main_sloc11_1_0
   0C14 EF                 2973 	mov	a,r7
   0C15 95 37              2974 	subb	a,(_main_sloc11_1_0 + 1)
                           2975 ;	genIfxJump
   0C17 50 03              2976 	jnc	00358$
   0C19 02 0D 6B           2977 	ljmp	00180$
   0C1C                    2978 00358$:
                           2979 ;	main.c:300: if((arr[m]) == 1){break;}
                           2980 ;	genIpush
   0C1C C0 00              2981 	push	ar0
   0C1E C0 01              2982 	push	ar1
                           2983 ;	genLeftShift
                           2984 ;	genLeftShiftLiteral
                           2985 ;	genlshTwo
   0C20 85 36 34           2986 	mov	_main_sloc10_1_0,_main_sloc11_1_0
   0C23 E5 37              2987 	mov	a,(_main_sloc11_1_0 + 1)
   0C25 C5 34              2988 	xch	a,_main_sloc10_1_0
   0C27 25 E0              2989 	add	a,acc
   0C29 C5 34              2990 	xch	a,_main_sloc10_1_0
   0C2B 33                 2991 	rlc	a
   0C2C F5 35              2992 	mov	(_main_sloc10_1_0 + 1),a
                           2993 ;	genPlus
   0C2E E5 34              2994 	mov	a,_main_sloc10_1_0
   0C30 24 96              2995 	add	a,#_main_arr_1_1
   0C32 F5 82              2996 	mov	dpl,a
   0C34 E5 35              2997 	mov	a,(_main_sloc10_1_0 + 1)
   0C36 34 0C              2998 	addc	a,#(_main_arr_1_1 >> 8)
   0C38 F5 83              2999 	mov	dph,a
                           3000 ;	genPointerGet
                           3001 ;	genFarPointerGet
   0C3A E0                 3002 	movx	a,@dptr
   0C3B F8                 3003 	mov	r0,a
   0C3C A3                 3004 	inc	dptr
   0C3D E0                 3005 	movx	a,@dptr
   0C3E F9                 3006 	mov	r1,a
                           3007 ;	genCmpEq
                           3008 ;	gencjne
                           3009 ;	gencjneshort
                           3010 ;	Peephole 241.c	optimized compare
   0C3F E4                 3011 	clr	a
   0C40 B8 01 04           3012 	cjne	r0,#0x01,00359$
   0C43 B9 00 01           3013 	cjne	r1,#0x00,00359$
   0C46 04                 3014 	inc	a
   0C47                    3015 00359$:
                           3016 ;	Peephole 300	removed redundant label 00360$
                           3017 ;	genIpop
   0C47 D0 01              3018 	pop	ar1
   0C49 D0 00              3019 	pop	ar0
                           3020 ;	genIfx
                           3021 ;	genIfxJump
   0C4B 60 03              3022 	jz	00361$
   0C4D 02 0D 6B           3023 	ljmp	00180$
   0C50                    3024 00361$:
                           3025 ;	main.c:302: printf_tiny("------------------Report for other buffer %d-----------------\n\r",m);
                           3026 ;	genIpush
   0C50 C0 00              3027 	push	ar0
   0C52 C0 01              3028 	push	ar1
                           3029 ;	genIpush
   0C54 C0 02              3030 	push	ar2
   0C56 C0 03              3031 	push	ar3
   0C58 C0 06              3032 	push	ar6
   0C5A C0 07              3033 	push	ar7
   0C5C C0 00              3034 	push	ar0
   0C5E C0 01              3035 	push	ar1
   0C60 C0 36              3036 	push	_main_sloc11_1_0
   0C62 C0 37              3037 	push	(_main_sloc11_1_0 + 1)
                           3038 ;	genIpush
   0C64 74 A2              3039 	mov	a,#__str_33
   0C66 C0 E0              3040 	push	acc
   0C68 74 23              3041 	mov	a,#(__str_33 >> 8)
   0C6A C0 E0              3042 	push	acc
                           3043 ;	genCall
   0C6C 12 17 38           3044 	lcall	_printf_tiny
   0C6F E5 81              3045 	mov	a,sp
   0C71 24 FC              3046 	add	a,#0xfc
   0C73 F5 81              3047 	mov	sp,a
   0C75 D0 01              3048 	pop	ar1
   0C77 D0 00              3049 	pop	ar0
   0C79 D0 07              3050 	pop	ar7
   0C7B D0 06              3051 	pop	ar6
   0C7D D0 03              3052 	pop	ar3
   0C7F D0 02              3053 	pop	ar2
                           3054 ;	main.c:303: printf_small("buffer start address : %d \n\r ",(uint16_t)buffer[m]);
                           3055 ;	genPlus
   0C81 E5 34              3056 	mov	a,_main_sloc10_1_0
   0C83 24 BC              3057 	add	a,#_main_buffer_1_1
   0C85 F8                 3058 	mov	r0,a
   0C86 E5 35              3059 	mov	a,(_main_sloc10_1_0 + 1)
   0C88 34 0B              3060 	addc	a,#(_main_buffer_1_1 >> 8)
   0C8A F9                 3061 	mov	r1,a
                           3062 ;	genPointerGet
                           3063 ;	genFarPointerGet
   0C8B 88 82              3064 	mov	dpl,r0
   0C8D 89 83              3065 	mov	dph,r1
   0C8F E0                 3066 	movx	a,@dptr
   0C90 FC                 3067 	mov	r4,a
   0C91 A3                 3068 	inc	dptr
   0C92 E0                 3069 	movx	a,@dptr
   0C93 FD                 3070 	mov	r5,a
                           3071 ;	genCast
                           3072 ;	genIpush
   0C94 C0 02              3073 	push	ar2
   0C96 C0 03              3074 	push	ar3
   0C98 C0 06              3075 	push	ar6
   0C9A C0 07              3076 	push	ar7
   0C9C C0 00              3077 	push	ar0
   0C9E C0 01              3078 	push	ar1
   0CA0 C0 04              3079 	push	ar4
   0CA2 C0 05              3080 	push	ar5
                           3081 ;	genIpush
   0CA4 74 E1              3082 	mov	a,#__str_22
   0CA6 C0 E0              3083 	push	acc
   0CA8 74 21              3084 	mov	a,#(__str_22 >> 8)
   0CAA C0 E0              3085 	push	acc
   0CAC 74 80              3086 	mov	a,#0x80
   0CAE C0 E0              3087 	push	acc
                           3088 ;	genCall
   0CB0 12 18 60           3089 	lcall	_printf_small
   0CB3 E5 81              3090 	mov	a,sp
   0CB5 24 FB              3091 	add	a,#0xfb
   0CB7 F5 81              3092 	mov	sp,a
   0CB9 D0 01              3093 	pop	ar1
   0CBB D0 00              3094 	pop	ar0
   0CBD D0 07              3095 	pop	ar7
   0CBF D0 06              3096 	pop	ar6
   0CC1 D0 03              3097 	pop	ar3
   0CC3 D0 02              3098 	pop	ar2
                           3099 ;	main.c:304: printf_small("buffer end address : %d \n\r",((uint16_t)buffer[m]+buffersize[m]) );
                           3100 ;	genPointerGet
                           3101 ;	genFarPointerGet
   0CC5 88 82              3102 	mov	dpl,r0
   0CC7 89 83              3103 	mov	dph,r1
   0CC9 E0                 3104 	movx	a,@dptr
   0CCA F8                 3105 	mov	r0,a
   0CCB A3                 3106 	inc	dptr
   0CCC E0                 3107 	movx	a,@dptr
   0CCD F9                 3108 	mov	r1,a
                           3109 ;	genCast
   0CCE 88 32              3110 	mov	_main_sloc9_1_0,r0
   0CD0 89 33              3111 	mov	(_main_sloc9_1_0 + 1),r1
                           3112 ;	genPlus
   0CD2 E5 34              3113 	mov	a,_main_sloc10_1_0
   0CD4 24 5E              3114 	add	a,#_main_buffersize_1_1
   0CD6 FC                 3115 	mov	r4,a
   0CD7 E5 35              3116 	mov	a,(_main_sloc10_1_0 + 1)
   0CD9 34 0D              3117 	addc	a,#(_main_buffersize_1_1 >> 8)
   0CDB FD                 3118 	mov	r5,a
                           3119 ;	genPointerGet
                           3120 ;	genFarPointerGet
   0CDC 8C 82              3121 	mov	dpl,r4
   0CDE 8D 83              3122 	mov	dph,r5
   0CE0 E0                 3123 	movx	a,@dptr
   0CE1 F8                 3124 	mov	r0,a
   0CE2 A3                 3125 	inc	dptr
   0CE3 E0                 3126 	movx	a,@dptr
   0CE4 F9                 3127 	mov	r1,a
                           3128 ;	genPlus
                           3129 ;	Peephole 236.g	used r0 instead of ar0
   0CE5 E8                 3130 	mov	a,r0
   0CE6 25 32              3131 	add	a,_main_sloc9_1_0
   0CE8 F8                 3132 	mov	r0,a
                           3133 ;	Peephole 236.g	used r1 instead of ar1
   0CE9 E9                 3134 	mov	a,r1
   0CEA 35 33              3135 	addc	a,(_main_sloc9_1_0 + 1)
   0CEC F9                 3136 	mov	r1,a
                           3137 ;	genIpush
   0CED C0 02              3138 	push	ar2
   0CEF C0 03              3139 	push	ar3
   0CF1 C0 04              3140 	push	ar4
   0CF3 C0 05              3141 	push	ar5
   0CF5 C0 06              3142 	push	ar6
   0CF7 C0 07              3143 	push	ar7
   0CF9 C0 00              3144 	push	ar0
   0CFB C0 01              3145 	push	ar1
   0CFD C0 00              3146 	push	ar0
   0CFF C0 01              3147 	push	ar1
                           3148 ;	genIpush
   0D01 74 FF              3149 	mov	a,#__str_23
   0D03 C0 E0              3150 	push	acc
   0D05 74 21              3151 	mov	a,#(__str_23 >> 8)
   0D07 C0 E0              3152 	push	acc
   0D09 74 80              3153 	mov	a,#0x80
   0D0B C0 E0              3154 	push	acc
                           3155 ;	genCall
   0D0D 12 18 60           3156 	lcall	_printf_small
   0D10 E5 81              3157 	mov	a,sp
   0D12 24 FB              3158 	add	a,#0xfb
   0D14 F5 81              3159 	mov	sp,a
   0D16 D0 01              3160 	pop	ar1
   0D18 D0 00              3161 	pop	ar0
   0D1A D0 07              3162 	pop	ar7
   0D1C D0 06              3163 	pop	ar6
   0D1E D0 05              3164 	pop	ar5
   0D20 D0 04              3165 	pop	ar4
   0D22 D0 03              3166 	pop	ar3
   0D24 D0 02              3167 	pop	ar2
                           3168 ;	main.c:305: printf_tiny("total buffer size  : %d \n\r", buffersize[m]);
                           3169 ;	genPointerGet
                           3170 ;	genFarPointerGet
   0D26 8C 82              3171 	mov	dpl,r4
   0D28 8D 83              3172 	mov	dph,r5
   0D2A E0                 3173 	movx	a,@dptr
   0D2B FC                 3174 	mov	r4,a
   0D2C A3                 3175 	inc	dptr
   0D2D E0                 3176 	movx	a,@dptr
   0D2E FD                 3177 	mov	r5,a
                           3178 ;	genIpush
   0D2F C0 02              3179 	push	ar2
   0D31 C0 03              3180 	push	ar3
   0D33 C0 06              3181 	push	ar6
   0D35 C0 07              3182 	push	ar7
   0D37 C0 00              3183 	push	ar0
   0D39 C0 01              3184 	push	ar1
   0D3B C0 04              3185 	push	ar4
   0D3D C0 05              3186 	push	ar5
                           3187 ;	genIpush
   0D3F 74 1A              3188 	mov	a,#__str_24
   0D41 C0 E0              3189 	push	acc
   0D43 74 22              3190 	mov	a,#(__str_24 >> 8)
   0D45 C0 E0              3191 	push	acc
                           3192 ;	genCall
   0D47 12 17 38           3193 	lcall	_printf_tiny
   0D4A E5 81              3194 	mov	a,sp
   0D4C 24 FC              3195 	add	a,#0xfc
   0D4E F5 81              3196 	mov	sp,a
   0D50 D0 01              3197 	pop	ar1
   0D52 D0 00              3198 	pop	ar0
   0D54 D0 07              3199 	pop	ar7
   0D56 D0 06              3200 	pop	ar6
   0D58 D0 03              3201 	pop	ar3
   0D5A D0 02              3202 	pop	ar2
                           3203 ;	main.c:298: for (m = 2 ; m <=i ; m++)
                           3204 ;	genPlus
                           3205 ;     genPlusIncr
   0D5C 05 36              3206 	inc	_main_sloc11_1_0
   0D5E E4                 3207 	clr	a
   0D5F B5 36 02           3208 	cjne	a,_main_sloc11_1_0,00362$
   0D62 05 37              3209 	inc	(_main_sloc11_1_0 + 1)
   0D64                    3210 00362$:
                           3211 ;	genIpop
   0D64 D0 01              3212 	pop	ar1
   0D66 D0 00              3213 	pop	ar0
   0D68 02 0C 10           3214 	ljmp	00177$
   0D6B                    3215 00180$:
                           3216 ;	main.c:311: countnum = 0;
                           3217 ;	genAssign
   0D6B 90 0C 84           3218 	mov	dptr,#_main_countnum_1_1
   0D6E E4                 3219 	clr	a
   0D6F F0                 3220 	movx	@dptr,a
   0D70 A3                 3221 	inc	dptr
   0D71 F0                 3222 	movx	@dptr,a
                           3223 ;	main.c:312: count = 0;
                           3224 ;	genAssign
   0D72 90 0C 88           3225 	mov	dptr,#_main_count_1_1
   0D75 E4                 3226 	clr	a
   0D76 F0                 3227 	movx	@dptr,a
   0D77 A3                 3228 	inc	dptr
   0D78 F0                 3229 	movx	@dptr,a
                           3230 ;	main.c:313: printf_tiny("\n\r");
                           3231 ;	genIpush
   0D79 C0 02              3232 	push	ar2
   0D7B C0 03              3233 	push	ar3
   0D7D C0 00              3234 	push	ar0
   0D7F C0 01              3235 	push	ar1
   0D81 74 F0              3236 	mov	a,#__str_10
   0D83 C0 E0              3237 	push	acc
   0D85 74 1F              3238 	mov	a,#(__str_10 >> 8)
   0D87 C0 E0              3239 	push	acc
                           3240 ;	genCall
   0D89 12 17 38           3241 	lcall	_printf_tiny
   0D8C 15 81              3242 	dec	sp
   0D8E 15 81              3243 	dec	sp
   0D90 D0 01              3244 	pop	ar1
   0D92 D0 00              3245 	pop	ar0
   0D94 D0 03              3246 	pop	ar3
   0D96 D0 02              3247 	pop	ar2
                           3248 ;	main.c:314: buffer[0] = ptr ;
                           3249 ;	genPointerSet
                           3250 ;     genFarPointerSet
   0D98 90 0B BC           3251 	mov	dptr,#_main_buffer_1_1
   0D9B E5 3A              3252 	mov	a,_main_sloc14_1_0
   0D9D F0                 3253 	movx	@dptr,a
   0D9E A3                 3254 	inc	dptr
   0D9F E5 3B              3255 	mov	a,(_main_sloc14_1_0 + 1)
   0DA1 F0                 3256 	movx	@dptr,a
                           3257 ;	main.c:315: buffer[1] = ptr1 ;
                           3258 ;	genPointerSet
                           3259 ;     genFarPointerSet
   0DA2 90 0B BE           3260 	mov	dptr,#(_main_buffer_1_1 + 0x0002)
   0DA5 E5 38              3261 	mov	a,_main_sloc13_1_0
   0DA7 F0                 3262 	movx	@dptr,a
   0DA8 A3                 3263 	inc	dptr
   0DA9 E5 39              3264 	mov	a,(_main_sloc13_1_0 + 1)
   0DAB F0                 3265 	movx	@dptr,a
   0DAC                    3266 00182$:
                           3267 ;	main.c:320: if ( a == 0x3d )                                                                            /* if character input is a = : show contents of buffer in  hex */
                           3268 ;	genCmpEq
                           3269 ;	gencjneshort
   0DAC E5 31              3270 	mov	a,_main_sloc8_1_0
   0DAE B4 3D 02           3271 	cjne	a,#0x3D,00363$
   0DB1 80 03              3272 	sjmp	00364$
   0DB3                    3273 00363$:
   0DB3 02 11 2E           3274 	ljmp	00206$
   0DB6                    3275 00364$:
                           3276 ;	main.c:322: ptra = ptr;
                           3277 ;	genAssign
   0DB6 90 0B B8           3278 	mov	dptr,#_main_ptra_1_1
   0DB9 E5 3A              3279 	mov	a,_main_sloc14_1_0
   0DBB F0                 3280 	movx	@dptr,a
   0DBC A3                 3281 	inc	dptr
   0DBD E5 3B              3282 	mov	a,(_main_sloc14_1_0 + 1)
   0DBF F0                 3283 	movx	@dptr,a
                           3284 ;	main.c:324: vv = num - countch ;
                           3285 ;	genAssign
   0DC0 90 0C 86           3286 	mov	dptr,#_main_countch_1_1
   0DC3 E0                 3287 	movx	a,@dptr
   0DC4 FC                 3288 	mov	r4,a
   0DC5 A3                 3289 	inc	dptr
   0DC6 E0                 3290 	movx	a,@dptr
   0DC7 FD                 3291 	mov	r5,a
                           3292 ;	genMinus
   0DC8 EA                 3293 	mov	a,r2
   0DC9 C3                 3294 	clr	c
                           3295 ;	Peephole 236.l	used r4 instead of ar4
   0DCA 9C                 3296 	subb	a,r4
   0DCB FC                 3297 	mov	r4,a
   0DCC EB                 3298 	mov	a,r3
                           3299 ;	Peephole 236.l	used r5 instead of ar5
   0DCD 9D                 3300 	subb	a,r5
   0DCE FD                 3301 	mov	r5,a
                           3302 ;	main.c:326: while(vv > 0)
                           3303 ;	genAssign
   0DCF AE 3A              3304 	mov	r6,_main_sloc14_1_0
   0DD1 AF 3B              3305 	mov	r7,(_main_sloc14_1_0 + 1)
                           3306 ;	genAssign
   0DD3 8A 36              3307 	mov	_main_sloc11_1_0,r2
   0DD5 8B 37              3308 	mov	(_main_sloc11_1_0 + 1),r3
                           3309 ;	genAssign
   0DD7                    3310 00183$:
                           3311 ;	genIfx
   0DD7 EC                 3312 	mov	a,r4
   0DD8 4D                 3313 	orl	a,r5
                           3314 ;	genIfxJump
                           3315 ;	Peephole 108.c	removed ljmp by inverse jump logic
   0DD9 60 1C              3316 	jz	00185$
                           3317 ;	Peephole 300	removed redundant label 00365$
                           3318 ;	main.c:328: *(ptra+r) = 0 ;
                           3319 ;	genPlus
   0DDB E5 36              3320 	mov	a,_main_sloc11_1_0
                           3321 ;	Peephole 236.a	used r6 instead of ar6
   0DDD 2E                 3322 	add	a,r6
   0DDE F5 82              3323 	mov	dpl,a
   0DE0 E5 37              3324 	mov	a,(_main_sloc11_1_0 + 1)
                           3325 ;	Peephole 236.b	used r7 instead of ar7
   0DE2 3F                 3326 	addc	a,r7
   0DE3 F5 83              3327 	mov	dph,a
                           3328 ;	genPointerSet
                           3329 ;     genFarPointerSet
                           3330 ;	Peephole 181	changed mov to clr
   0DE5 E4                 3331 	clr	a
   0DE6 F0                 3332 	movx	@dptr,a
                           3333 ;	main.c:329: r--;
                           3334 ;	genMinus
                           3335 ;	genMinusDec
   0DE7 15 36              3336 	dec	_main_sloc11_1_0
   0DE9 74 FF              3337 	mov	a,#0xff
   0DEB B5 36 02           3338 	cjne	a,_main_sloc11_1_0,00366$
   0DEE 15 37              3339 	dec	(_main_sloc11_1_0 + 1)
   0DF0                    3340 00366$:
                           3341 ;	main.c:330: vv--;
                           3342 ;	genMinus
                           3343 ;	genMinusDec
                           3344 ;	tail decrement optimized (range 5)
   0DF0 1C                 3345 	dec	r4
   0DF1 BC FF E3           3346 	cjne	r4,#0xff,00183$
   0DF4 1D                 3347 	dec	r5
                           3348 ;	Peephole 112.b	changed ljmp to sjmp
   0DF5 80 E0              3349 	sjmp	00183$
   0DF7                    3350 00185$:
                           3351 ;	main.c:332: if(countch == 0)
                           3352 ;	genAssign
   0DF7 90 0C 86           3353 	mov	dptr,#_main_countch_1_1
   0DFA E0                 3354 	movx	a,@dptr
   0DFB FC                 3355 	mov	r4,a
   0DFC A3                 3356 	inc	dptr
   0DFD E0                 3357 	movx	a,@dptr
                           3358 ;	genIfx
   0DFE FD                 3359 	mov	r5,a
                           3360 ;	Peephole 135	removed redundant mov
   0DFF 4C                 3361 	orl	a,r4
                           3362 ;	genIfxJump
                           3363 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0E00 70 0E              3364 	jnz	00187$
                           3365 ;	Peephole 300	removed redundant label 00367$
                           3366 ;	main.c:334: *ptra = 0;
                           3367 ;	genAssign
   0E02 90 0B B8           3368 	mov	dptr,#_main_ptra_1_1
   0E05 E0                 3369 	movx	a,@dptr
   0E06 FC                 3370 	mov	r4,a
   0E07 A3                 3371 	inc	dptr
   0E08 E0                 3372 	movx	a,@dptr
   0E09 FD                 3373 	mov	r5,a
                           3374 ;	genPointerSet
                           3375 ;     genFarPointerSet
   0E0A 8C 82              3376 	mov	dpl,r4
   0E0C 8D 83              3377 	mov	dph,r5
                           3378 ;	Peephole 181	changed mov to clr
   0E0E E4                 3379 	clr	a
   0E0F F0                 3380 	movx	@dptr,a
   0E10                    3381 00187$:
                           3382 ;	main.c:338: h=0;
                           3383 ;	genAssign
   0E10 90 0C 8C           3384 	mov	dptr,#_main_h_1_1
   0E13 E4                 3385 	clr	a
   0E14 F0                 3386 	movx	@dptr,a
   0E15 A3                 3387 	inc	dptr
   0E16 F0                 3388 	movx	@dptr,a
                           3389 ;	main.c:339: t = 0;
                           3390 ;	genAssign
   0E17 90 0C 8E           3391 	mov	dptr,#_main_t_1_1
   0E1A E4                 3392 	clr	a
   0E1B F0                 3393 	movx	@dptr,a
   0E1C A3                 3394 	inc	dptr
   0E1D F0                 3395 	movx	@dptr,a
                           3396 ;	main.c:340: ptra = ptr;
                           3397 ;	genAssign
   0E1E 90 0B B8           3398 	mov	dptr,#_main_ptra_1_1
   0E21 E5 3A              3399 	mov	a,_main_sloc14_1_0
   0E23 F0                 3400 	movx	@dptr,a
   0E24 A3                 3401 	inc	dptr
   0E25 E5 3B              3402 	mov	a,(_main_sloc14_1_0 + 1)
   0E27 F0                 3403 	movx	@dptr,a
                           3404 ;	main.c:342: printf_tiny("values are in hex\n\r");
                           3405 ;	genIpush
   0E28 C0 02              3406 	push	ar2
   0E2A C0 03              3407 	push	ar3
   0E2C C0 00              3408 	push	ar0
   0E2E C0 01              3409 	push	ar1
   0E30 74 E2              3410 	mov	a,#__str_34
   0E32 C0 E0              3411 	push	acc
   0E34 74 23              3412 	mov	a,#(__str_34 >> 8)
   0E36 C0 E0              3413 	push	acc
                           3414 ;	genCall
   0E38 12 17 38           3415 	lcall	_printf_tiny
   0E3B 15 81              3416 	dec	sp
   0E3D 15 81              3417 	dec	sp
   0E3F D0 01              3418 	pop	ar1
   0E41 D0 00              3419 	pop	ar0
   0E43 D0 03              3420 	pop	ar3
   0E45 D0 02              3421 	pop	ar2
                           3422 ;	main.c:343: while( t < num )
   0E47                    3423 00191$:
                           3424 ;	genAssign
   0E47 90 0C 8E           3425 	mov	dptr,#_main_t_1_1
   0E4A E0                 3426 	movx	a,@dptr
   0E4B FC                 3427 	mov	r4,a
   0E4C A3                 3428 	inc	dptr
   0E4D E0                 3429 	movx	a,@dptr
   0E4E FD                 3430 	mov	r5,a
                           3431 ;	genCmpLt
                           3432 ;	genCmp
   0E4F C3                 3433 	clr	c
   0E50 EC                 3434 	mov	a,r4
   0E51 95 2B              3435 	subb	a,_main_sloc5_1_0
   0E53 ED                 3436 	mov	a,r5
   0E54 95 2C              3437 	subb	a,(_main_sloc5_1_0 + 1)
                           3438 ;	genIfxJump
   0E56 40 03              3439 	jc	00368$
   0E58 02 0F 53           3440 	ljmp	00193$
   0E5B                    3441 00368$:
                           3442 ;	main.c:347: printf_small("0x%x:", (uint16_t)ptra);
                           3443 ;	genIpush
   0E5B C0 00              3444 	push	ar0
   0E5D C0 01              3445 	push	ar1
                           3446 ;	genAssign
   0E5F 90 0B B8           3447 	mov	dptr,#_main_ptra_1_1
   0E62 E0                 3448 	movx	a,@dptr
   0E63 FE                 3449 	mov	r6,a
   0E64 A3                 3450 	inc	dptr
   0E65 E0                 3451 	movx	a,@dptr
   0E66 FF                 3452 	mov	r7,a
                           3453 ;	genCast
   0E67 8E 00              3454 	mov	ar0,r6
   0E69 8F 01              3455 	mov	ar1,r7
                           3456 ;	genIpush
   0E6B C0 02              3457 	push	ar2
   0E6D C0 03              3458 	push	ar3
   0E6F C0 04              3459 	push	ar4
   0E71 C0 05              3460 	push	ar5
   0E73 C0 06              3461 	push	ar6
   0E75 C0 07              3462 	push	ar7
   0E77 C0 00              3463 	push	ar0
   0E79 C0 01              3464 	push	ar1
   0E7B C0 00              3465 	push	ar0
   0E7D C0 01              3466 	push	ar1
                           3467 ;	genIpush
   0E7F 74 F6              3468 	mov	a,#__str_35
   0E81 C0 E0              3469 	push	acc
   0E83 74 23              3470 	mov	a,#(__str_35 >> 8)
   0E85 C0 E0              3471 	push	acc
   0E87 74 80              3472 	mov	a,#0x80
   0E89 C0 E0              3473 	push	acc
                           3474 ;	genCall
   0E8B 12 18 60           3475 	lcall	_printf_small
   0E8E E5 81              3476 	mov	a,sp
   0E90 24 FB              3477 	add	a,#0xfb
   0E92 F5 81              3478 	mov	sp,a
   0E94 D0 01              3479 	pop	ar1
   0E96 D0 00              3480 	pop	ar0
   0E98 D0 07              3481 	pop	ar7
   0E9A D0 06              3482 	pop	ar6
   0E9C D0 05              3483 	pop	ar5
   0E9E D0 04              3484 	pop	ar4
   0EA0 D0 03              3485 	pop	ar3
   0EA2 D0 02              3486 	pop	ar2
                           3487 ;	main.c:418: goto again;
                           3488 ;	genIpop
   0EA4 D0 01              3489 	pop	ar1
   0EA6 D0 00              3490 	pop	ar0
                           3491 ;	main.c:348: while(h < 16)
                           3492 ;	genAssign
   0EA8 90 0C 8C           3493 	mov	dptr,#_main_h_1_1
   0EAB E0                 3494 	movx	a,@dptr
   0EAC F5 36              3495 	mov	_main_sloc11_1_0,a
   0EAE A3                 3496 	inc	dptr
   0EAF E0                 3497 	movx	a,@dptr
   0EB0 F5 37              3498 	mov	(_main_sloc11_1_0 + 1),a
                           3499 ;	genAssign
                           3500 ;	genAssign
   0EB2                    3501 00188$:
                           3502 ;	genCmpLt
                           3503 ;	genCmp
   0EB2 C3                 3504 	clr	c
   0EB3 E5 36              3505 	mov	a,_main_sloc11_1_0
   0EB5 94 10              3506 	subb	a,#0x10
   0EB7 E5 37              3507 	mov	a,(_main_sloc11_1_0 + 1)
   0EB9 94 00              3508 	subb	a,#0x00
                           3509 ;	genIfxJump
                           3510 ;	Peephole 108.a	removed ljmp by inverse jump logic
   0EBB 50 5D              3511 	jnc	00292$
                           3512 ;	Peephole 300	removed redundant label 00369$
                           3513 ;	main.c:350: printf_small("%x ",(uint16_t)*ptra);
                           3514 ;	genIpush
   0EBD C0 00              3515 	push	ar0
   0EBF C0 01              3516 	push	ar1
                           3517 ;	genPointerGet
                           3518 ;	genFarPointerGet
   0EC1 8E 82              3519 	mov	dpl,r6
   0EC3 8F 83              3520 	mov	dph,r7
   0EC5 E0                 3521 	movx	a,@dptr
   0EC6 F8                 3522 	mov	r0,a
   0EC7 A3                 3523 	inc	dptr
   0EC8 AE 82              3524 	mov	r6,dpl
   0ECA AF 83              3525 	mov	r7,dph
                           3526 ;	genCast
   0ECC 79 00              3527 	mov	r1,#0x00
                           3528 ;	genIpush
   0ECE C0 02              3529 	push	ar2
   0ED0 C0 03              3530 	push	ar3
   0ED2 C0 04              3531 	push	ar4
   0ED4 C0 05              3532 	push	ar5
   0ED6 C0 06              3533 	push	ar6
   0ED8 C0 07              3534 	push	ar7
   0EDA C0 00              3535 	push	ar0
   0EDC C0 01              3536 	push	ar1
   0EDE C0 00              3537 	push	ar0
   0EE0 C0 01              3538 	push	ar1
                           3539 ;	genIpush
   0EE2 74 FC              3540 	mov	a,#__str_36
   0EE4 C0 E0              3541 	push	acc
   0EE6 74 23              3542 	mov	a,#(__str_36 >> 8)
   0EE8 C0 E0              3543 	push	acc
   0EEA 74 80              3544 	mov	a,#0x80
   0EEC C0 E0              3545 	push	acc
                           3546 ;	genCall
   0EEE 12 18 60           3547 	lcall	_printf_small
   0EF1 E5 81              3548 	mov	a,sp
   0EF3 24 FB              3549 	add	a,#0xfb
   0EF5 F5 81              3550 	mov	sp,a
   0EF7 D0 01              3551 	pop	ar1
   0EF9 D0 00              3552 	pop	ar0
   0EFB D0 07              3553 	pop	ar7
   0EFD D0 06              3554 	pop	ar6
   0EFF D0 05              3555 	pop	ar5
   0F01 D0 04              3556 	pop	ar4
   0F03 D0 03              3557 	pop	ar3
   0F05 D0 02              3558 	pop	ar2
                           3559 ;	main.c:351: h++;
                           3560 ;	genPlus
                           3561 ;     genPlusIncr
   0F07 05 36              3562 	inc	_main_sloc11_1_0
   0F09 E4                 3563 	clr	a
   0F0A B5 36 02           3564 	cjne	a,_main_sloc11_1_0,00370$
   0F0D 05 37              3565 	inc	(_main_sloc11_1_0 + 1)
   0F0F                    3566 00370$:
                           3567 ;	main.c:352: t++;
                           3568 ;	genPlus
                           3569 ;     genPlusIncr
   0F0F 0C                 3570 	inc	r4
   0F10 BC 00 01           3571 	cjne	r4,#0x00,00371$
   0F13 0D                 3572 	inc	r5
   0F14                    3573 00371$:
                           3574 ;	main.c:353: ptra++;
                           3575 ;	genIpop
   0F14 D0 01              3576 	pop	ar1
   0F16 D0 00              3577 	pop	ar0
                           3578 ;	Peephole 112.b	changed ljmp to sjmp
   0F18 80 98              3579 	sjmp	00188$
   0F1A                    3580 00292$:
                           3581 ;	genAssign
   0F1A 90 0C 8E           3582 	mov	dptr,#_main_t_1_1
   0F1D EC                 3583 	mov	a,r4
   0F1E F0                 3584 	movx	@dptr,a
   0F1F A3                 3585 	inc	dptr
   0F20 ED                 3586 	mov	a,r5
   0F21 F0                 3587 	movx	@dptr,a
                           3588 ;	genAssign
   0F22 90 0B B8           3589 	mov	dptr,#_main_ptra_1_1
   0F25 EE                 3590 	mov	a,r6
   0F26 F0                 3591 	movx	@dptr,a
   0F27 A3                 3592 	inc	dptr
   0F28 EF                 3593 	mov	a,r7
   0F29 F0                 3594 	movx	@dptr,a
                           3595 ;	main.c:355: printf_tiny("\n\r");
                           3596 ;	genIpush
   0F2A C0 02              3597 	push	ar2
   0F2C C0 03              3598 	push	ar3
   0F2E C0 00              3599 	push	ar0
   0F30 C0 01              3600 	push	ar1
   0F32 74 F0              3601 	mov	a,#__str_10
   0F34 C0 E0              3602 	push	acc
   0F36 74 1F              3603 	mov	a,#(__str_10 >> 8)
   0F38 C0 E0              3604 	push	acc
                           3605 ;	genCall
   0F3A 12 17 38           3606 	lcall	_printf_tiny
   0F3D 15 81              3607 	dec	sp
   0F3F 15 81              3608 	dec	sp
   0F41 D0 01              3609 	pop	ar1
   0F43 D0 00              3610 	pop	ar0
   0F45 D0 03              3611 	pop	ar3
   0F47 D0 02              3612 	pop	ar2
                           3613 ;	main.c:357: h = 0;
                           3614 ;	genAssign
   0F49 90 0C 8C           3615 	mov	dptr,#_main_h_1_1
   0F4C E4                 3616 	clr	a
   0F4D F0                 3617 	movx	@dptr,a
   0F4E A3                 3618 	inc	dptr
   0F4F F0                 3619 	movx	@dptr,a
   0F50 02 0E 47           3620 	ljmp	00191$
   0F53                    3621 00193$:
                           3622 ;	main.c:361: printf_tiny("\n\r");
                           3623 ;	genIpush
   0F53 C0 02              3624 	push	ar2
   0F55 C0 03              3625 	push	ar3
   0F57 C0 00              3626 	push	ar0
   0F59 C0 01              3627 	push	ar1
   0F5B 74 F0              3628 	mov	a,#__str_10
   0F5D C0 E0              3629 	push	acc
   0F5F 74 1F              3630 	mov	a,#(__str_10 >> 8)
   0F61 C0 E0              3631 	push	acc
                           3632 ;	genCall
   0F63 12 17 38           3633 	lcall	_printf_tiny
   0F66 15 81              3634 	dec	sp
   0F68 15 81              3635 	dec	sp
   0F6A D0 01              3636 	pop	ar1
   0F6C D0 00              3637 	pop	ar0
   0F6E D0 03              3638 	pop	ar3
   0F70 D0 02              3639 	pop	ar2
                           3640 ;	main.c:362: ptrb = ptr1;
                           3641 ;	genAssign
   0F72 90 0B BA           3642 	mov	dptr,#_main_ptrb_1_1
   0F75 E5 38              3643 	mov	a,_main_sloc13_1_0
   0F77 F0                 3644 	movx	@dptr,a
   0F78 A3                 3645 	inc	dptr
   0F79 E5 39              3646 	mov	a,(_main_sloc13_1_0 + 1)
   0F7B F0                 3647 	movx	@dptr,a
                           3648 ;	main.c:363: vv1 = num - countnum ;
                           3649 ;	genAssign
   0F7C 90 0C 84           3650 	mov	dptr,#_main_countnum_1_1
   0F7F E0                 3651 	movx	a,@dptr
   0F80 FC                 3652 	mov	r4,a
   0F81 A3                 3653 	inc	dptr
   0F82 E0                 3654 	movx	a,@dptr
   0F83 FD                 3655 	mov	r5,a
                           3656 ;	genMinus
   0F84 EA                 3657 	mov	a,r2
   0F85 C3                 3658 	clr	c
                           3659 ;	Peephole 236.l	used r4 instead of ar4
   0F86 9C                 3660 	subb	a,r4
   0F87 FC                 3661 	mov	r4,a
   0F88 EB                 3662 	mov	a,r3
                           3663 ;	Peephole 236.l	used r5 instead of ar5
   0F89 9D                 3664 	subb	a,r5
   0F8A FD                 3665 	mov	r5,a
                           3666 ;	main.c:365: while(vv1 > 0)
                           3667 ;	genAssign
   0F8B AE 38              3668 	mov	r6,_main_sloc13_1_0
   0F8D AF 39              3669 	mov	r7,(_main_sloc13_1_0 + 1)
                           3670 ;	genAssign
   0F8F 8A 36              3671 	mov	_main_sloc11_1_0,r2
   0F91 8B 37              3672 	mov	(_main_sloc11_1_0 + 1),r3
                           3673 ;	genAssign
   0F93                    3674 00194$:
                           3675 ;	genIfx
   0F93 EC                 3676 	mov	a,r4
   0F94 4D                 3677 	orl	a,r5
                           3678 ;	genIfxJump
                           3679 ;	Peephole 108.c	removed ljmp by inverse jump logic
   0F95 60 1C              3680 	jz	00196$
                           3681 ;	Peephole 300	removed redundant label 00372$
                           3682 ;	main.c:367: *(ptrb+r) = 0 ;
                           3683 ;	genPlus
   0F97 E5 36              3684 	mov	a,_main_sloc11_1_0
                           3685 ;	Peephole 236.a	used r6 instead of ar6
   0F99 2E                 3686 	add	a,r6
   0F9A F5 82              3687 	mov	dpl,a
   0F9C E5 37              3688 	mov	a,(_main_sloc11_1_0 + 1)
                           3689 ;	Peephole 236.b	used r7 instead of ar7
   0F9E 3F                 3690 	addc	a,r7
   0F9F F5 83              3691 	mov	dph,a
                           3692 ;	genPointerSet
                           3693 ;     genFarPointerSet
                           3694 ;	Peephole 181	changed mov to clr
   0FA1 E4                 3695 	clr	a
   0FA2 F0                 3696 	movx	@dptr,a
                           3697 ;	main.c:368: r--;
                           3698 ;	genMinus
                           3699 ;	genMinusDec
   0FA3 15 36              3700 	dec	_main_sloc11_1_0
   0FA5 74 FF              3701 	mov	a,#0xff
   0FA7 B5 36 02           3702 	cjne	a,_main_sloc11_1_0,00373$
   0FAA 15 37              3703 	dec	(_main_sloc11_1_0 + 1)
   0FAC                    3704 00373$:
                           3705 ;	main.c:369: vv1--;
                           3706 ;	genMinus
                           3707 ;	genMinusDec
                           3708 ;	tail decrement optimized (range 5)
   0FAC 1C                 3709 	dec	r4
   0FAD BC FF E3           3710 	cjne	r4,#0xff,00194$
   0FB0 1D                 3711 	dec	r5
                           3712 ;	Peephole 112.b	changed ljmp to sjmp
   0FB1 80 E0              3713 	sjmp	00194$
   0FB3                    3714 00196$:
                           3715 ;	main.c:371: if(countnum == 0)
                           3716 ;	genAssign
   0FB3 90 0C 84           3717 	mov	dptr,#_main_countnum_1_1
   0FB6 E0                 3718 	movx	a,@dptr
   0FB7 FC                 3719 	mov	r4,a
   0FB8 A3                 3720 	inc	dptr
   0FB9 E0                 3721 	movx	a,@dptr
                           3722 ;	genIfx
   0FBA FD                 3723 	mov	r5,a
                           3724 ;	Peephole 135	removed redundant mov
   0FBB 4C                 3725 	orl	a,r4
                           3726 ;	genIfxJump
                           3727 ;	Peephole 108.b	removed ljmp by inverse jump logic
   0FBC 70 0E              3728 	jnz	00198$
                           3729 ;	Peephole 300	removed redundant label 00374$
                           3730 ;	main.c:373: *ptrb = 0;
                           3731 ;	genAssign
   0FBE 90 0B BA           3732 	mov	dptr,#_main_ptrb_1_1
   0FC1 E0                 3733 	movx	a,@dptr
   0FC2 FC                 3734 	mov	r4,a
   0FC3 A3                 3735 	inc	dptr
   0FC4 E0                 3736 	movx	a,@dptr
   0FC5 FD                 3737 	mov	r5,a
                           3738 ;	genPointerSet
                           3739 ;     genFarPointerSet
   0FC6 8C 82              3740 	mov	dpl,r4
   0FC8 8D 83              3741 	mov	dph,r5
                           3742 ;	Peephole 181	changed mov to clr
   0FCA E4                 3743 	clr	a
   0FCB F0                 3744 	movx	@dptr,a
   0FCC                    3745 00198$:
                           3746 ;	main.c:375: t = 0;
                           3747 ;	genAssign
   0FCC 90 0C 8E           3748 	mov	dptr,#_main_t_1_1
   0FCF E4                 3749 	clr	a
   0FD0 F0                 3750 	movx	@dptr,a
   0FD1 A3                 3751 	inc	dptr
   0FD2 F0                 3752 	movx	@dptr,a
                           3753 ;	main.c:376: h=0;
                           3754 ;	genAssign
   0FD3 90 0C 8C           3755 	mov	dptr,#_main_h_1_1
   0FD6 E4                 3756 	clr	a
   0FD7 F0                 3757 	movx	@dptr,a
   0FD8 A3                 3758 	inc	dptr
   0FD9 F0                 3759 	movx	@dptr,a
                           3760 ;	main.c:377: ptrb = ptr1;
                           3761 ;	genAssign
   0FDA 90 0B BA           3762 	mov	dptr,#_main_ptrb_1_1
   0FDD E5 38              3763 	mov	a,_main_sloc13_1_0
   0FDF F0                 3764 	movx	@dptr,a
   0FE0 A3                 3765 	inc	dptr
   0FE1 E5 39              3766 	mov	a,(_main_sloc13_1_0 + 1)
   0FE3 F0                 3767 	movx	@dptr,a
                           3768 ;	main.c:378: printf_tiny("values are in hex\n\r");
                           3769 ;	genIpush
   0FE4 C0 02              3770 	push	ar2
   0FE6 C0 03              3771 	push	ar3
   0FE8 C0 00              3772 	push	ar0
   0FEA C0 01              3773 	push	ar1
   0FEC 74 E2              3774 	mov	a,#__str_34
   0FEE C0 E0              3775 	push	acc
   0FF0 74 23              3776 	mov	a,#(__str_34 >> 8)
   0FF2 C0 E0              3777 	push	acc
                           3778 ;	genCall
   0FF4 12 17 38           3779 	lcall	_printf_tiny
   0FF7 15 81              3780 	dec	sp
   0FF9 15 81              3781 	dec	sp
   0FFB D0 01              3782 	pop	ar1
   0FFD D0 00              3783 	pop	ar0
   0FFF D0 03              3784 	pop	ar3
   1001 D0 02              3785 	pop	ar2
                           3786 ;	main.c:379: while(t < num )
   1003                    3787 00202$:
                           3788 ;	genAssign
   1003 90 0C 8E           3789 	mov	dptr,#_main_t_1_1
   1006 E0                 3790 	movx	a,@dptr
   1007 FC                 3791 	mov	r4,a
   1008 A3                 3792 	inc	dptr
   1009 E0                 3793 	movx	a,@dptr
   100A FD                 3794 	mov	r5,a
                           3795 ;	genCmpLt
                           3796 ;	genCmp
   100B C3                 3797 	clr	c
   100C EC                 3798 	mov	a,r4
   100D 95 2D              3799 	subb	a,_main_sloc6_1_0
   100F ED                 3800 	mov	a,r5
   1010 95 2E              3801 	subb	a,(_main_sloc6_1_0 + 1)
                           3802 ;	genIfxJump
   1012 40 03              3803 	jc	00375$
   1014 02 11 0F           3804 	ljmp	00204$
   1017                    3805 00375$:
                           3806 ;	main.c:383: printf_small("0x%x: ",(uint16_t)ptrb);
                           3807 ;	genIpush
   1017 C0 00              3808 	push	ar0
   1019 C0 01              3809 	push	ar1
                           3810 ;	genAssign
   101B 90 0B BA           3811 	mov	dptr,#_main_ptrb_1_1
   101E E0                 3812 	movx	a,@dptr
   101F FE                 3813 	mov	r6,a
   1020 A3                 3814 	inc	dptr
   1021 E0                 3815 	movx	a,@dptr
   1022 FF                 3816 	mov	r7,a
                           3817 ;	genCast
   1023 8E 00              3818 	mov	ar0,r6
   1025 8F 01              3819 	mov	ar1,r7
                           3820 ;	genIpush
   1027 C0 02              3821 	push	ar2
   1029 C0 03              3822 	push	ar3
   102B C0 04              3823 	push	ar4
   102D C0 05              3824 	push	ar5
   102F C0 06              3825 	push	ar6
   1031 C0 07              3826 	push	ar7
   1033 C0 00              3827 	push	ar0
   1035 C0 01              3828 	push	ar1
   1037 C0 00              3829 	push	ar0
   1039 C0 01              3830 	push	ar1
                           3831 ;	genIpush
   103B 74 00              3832 	mov	a,#__str_37
   103D C0 E0              3833 	push	acc
   103F 74 24              3834 	mov	a,#(__str_37 >> 8)
   1041 C0 E0              3835 	push	acc
   1043 74 80              3836 	mov	a,#0x80
   1045 C0 E0              3837 	push	acc
                           3838 ;	genCall
   1047 12 18 60           3839 	lcall	_printf_small
   104A E5 81              3840 	mov	a,sp
   104C 24 FB              3841 	add	a,#0xfb
   104E F5 81              3842 	mov	sp,a
   1050 D0 01              3843 	pop	ar1
   1052 D0 00              3844 	pop	ar0
   1054 D0 07              3845 	pop	ar7
   1056 D0 06              3846 	pop	ar6
   1058 D0 05              3847 	pop	ar5
   105A D0 04              3848 	pop	ar4
   105C D0 03              3849 	pop	ar3
   105E D0 02              3850 	pop	ar2
                           3851 ;	main.c:418: goto again;
                           3852 ;	genIpop
   1060 D0 01              3853 	pop	ar1
   1062 D0 00              3854 	pop	ar0
                           3855 ;	main.c:384: while(h < 16)
                           3856 ;	genAssign
   1064 90 0C 8C           3857 	mov	dptr,#_main_h_1_1
   1067 E0                 3858 	movx	a,@dptr
   1068 F5 36              3859 	mov	_main_sloc11_1_0,a
   106A A3                 3860 	inc	dptr
   106B E0                 3861 	movx	a,@dptr
   106C F5 37              3862 	mov	(_main_sloc11_1_0 + 1),a
                           3863 ;	genAssign
                           3864 ;	genAssign
   106E                    3865 00199$:
                           3866 ;	genCmpLt
                           3867 ;	genCmp
   106E C3                 3868 	clr	c
   106F E5 36              3869 	mov	a,_main_sloc11_1_0
   1071 94 10              3870 	subb	a,#0x10
   1073 E5 37              3871 	mov	a,(_main_sloc11_1_0 + 1)
   1075 94 00              3872 	subb	a,#0x00
                           3873 ;	genIfxJump
                           3874 ;	Peephole 108.a	removed ljmp by inverse jump logic
   1077 50 5D              3875 	jnc	00294$
                           3876 ;	Peephole 300	removed redundant label 00376$
                           3877 ;	main.c:386: printf_small("%x  ",*ptrb);
                           3878 ;	genIpush
   1079 C0 00              3879 	push	ar0
   107B C0 01              3880 	push	ar1
                           3881 ;	genPointerGet
                           3882 ;	genFarPointerGet
   107D 8E 82              3883 	mov	dpl,r6
   107F 8F 83              3884 	mov	dph,r7
   1081 E0                 3885 	movx	a,@dptr
   1082 F8                 3886 	mov	r0,a
   1083 A3                 3887 	inc	dptr
   1084 AE 82              3888 	mov	r6,dpl
   1086 AF 83              3889 	mov	r7,dph
                           3890 ;	genCast
   1088 79 00              3891 	mov	r1,#0x00
                           3892 ;	genIpush
   108A C0 02              3893 	push	ar2
   108C C0 03              3894 	push	ar3
   108E C0 04              3895 	push	ar4
   1090 C0 05              3896 	push	ar5
   1092 C0 06              3897 	push	ar6
   1094 C0 07              3898 	push	ar7
   1096 C0 00              3899 	push	ar0
   1098 C0 01              3900 	push	ar1
   109A C0 00              3901 	push	ar0
   109C C0 01              3902 	push	ar1
                           3903 ;	genIpush
   109E 74 07              3904 	mov	a,#__str_38
   10A0 C0 E0              3905 	push	acc
   10A2 74 24              3906 	mov	a,#(__str_38 >> 8)
   10A4 C0 E0              3907 	push	acc
   10A6 74 80              3908 	mov	a,#0x80
   10A8 C0 E0              3909 	push	acc
                           3910 ;	genCall
   10AA 12 18 60           3911 	lcall	_printf_small
   10AD E5 81              3912 	mov	a,sp
   10AF 24 FB              3913 	add	a,#0xfb
   10B1 F5 81              3914 	mov	sp,a
   10B3 D0 01              3915 	pop	ar1
   10B5 D0 00              3916 	pop	ar0
   10B7 D0 07              3917 	pop	ar7
   10B9 D0 06              3918 	pop	ar6
   10BB D0 05              3919 	pop	ar5
   10BD D0 04              3920 	pop	ar4
   10BF D0 03              3921 	pop	ar3
   10C1 D0 02              3922 	pop	ar2
                           3923 ;	main.c:387: h++;
                           3924 ;	genPlus
                           3925 ;     genPlusIncr
   10C3 05 36              3926 	inc	_main_sloc11_1_0
   10C5 E4                 3927 	clr	a
   10C6 B5 36 02           3928 	cjne	a,_main_sloc11_1_0,00377$
   10C9 05 37              3929 	inc	(_main_sloc11_1_0 + 1)
   10CB                    3930 00377$:
                           3931 ;	main.c:388: t++;
                           3932 ;	genPlus
                           3933 ;     genPlusIncr
   10CB 0C                 3934 	inc	r4
   10CC BC 00 01           3935 	cjne	r4,#0x00,00378$
   10CF 0D                 3936 	inc	r5
   10D0                    3937 00378$:
                           3938 ;	main.c:390: ptrb++;
                           3939 ;	genIpop
   10D0 D0 01              3940 	pop	ar1
   10D2 D0 00              3941 	pop	ar0
                           3942 ;	Peephole 112.b	changed ljmp to sjmp
   10D4 80 98              3943 	sjmp	00199$
   10D6                    3944 00294$:
                           3945 ;	genAssign
   10D6 90 0C 8E           3946 	mov	dptr,#_main_t_1_1
   10D9 EC                 3947 	mov	a,r4
   10DA F0                 3948 	movx	@dptr,a
   10DB A3                 3949 	inc	dptr
   10DC ED                 3950 	mov	a,r5
   10DD F0                 3951 	movx	@dptr,a
                           3952 ;	genAssign
   10DE 90 0B BA           3953 	mov	dptr,#_main_ptrb_1_1
   10E1 EE                 3954 	mov	a,r6
   10E2 F0                 3955 	movx	@dptr,a
   10E3 A3                 3956 	inc	dptr
   10E4 EF                 3957 	mov	a,r7
   10E5 F0                 3958 	movx	@dptr,a
                           3959 ;	main.c:392: printf_tiny("\n\r");
                           3960 ;	genIpush
   10E6 C0 02              3961 	push	ar2
   10E8 C0 03              3962 	push	ar3
   10EA C0 00              3963 	push	ar0
   10EC C0 01              3964 	push	ar1
   10EE 74 F0              3965 	mov	a,#__str_10
   10F0 C0 E0              3966 	push	acc
   10F2 74 1F              3967 	mov	a,#(__str_10 >> 8)
   10F4 C0 E0              3968 	push	acc
                           3969 ;	genCall
   10F6 12 17 38           3970 	lcall	_printf_tiny
   10F9 15 81              3971 	dec	sp
   10FB 15 81              3972 	dec	sp
   10FD D0 01              3973 	pop	ar1
   10FF D0 00              3974 	pop	ar0
   1101 D0 03              3975 	pop	ar3
   1103 D0 02              3976 	pop	ar2
                           3977 ;	main.c:393: h = 0;
                           3978 ;	genAssign
   1105 90 0C 8C           3979 	mov	dptr,#_main_h_1_1
   1108 E4                 3980 	clr	a
   1109 F0                 3981 	movx	@dptr,a
   110A A3                 3982 	inc	dptr
   110B F0                 3983 	movx	@dptr,a
   110C 02 10 03           3984 	ljmp	00202$
   110F                    3985 00204$:
                           3986 ;	main.c:397: printf_tiny("\n\r");
                           3987 ;	genIpush
   110F C0 02              3988 	push	ar2
   1111 C0 03              3989 	push	ar3
   1113 C0 00              3990 	push	ar0
   1115 C0 01              3991 	push	ar1
   1117 74 F0              3992 	mov	a,#__str_10
   1119 C0 E0              3993 	push	acc
   111B 74 1F              3994 	mov	a,#(__str_10 >> 8)
   111D C0 E0              3995 	push	acc
                           3996 ;	genCall
   111F 12 17 38           3997 	lcall	_printf_tiny
   1122 15 81              3998 	dec	sp
   1124 15 81              3999 	dec	sp
   1126 D0 01              4000 	pop	ar1
   1128 D0 00              4001 	pop	ar0
   112A D0 03              4002 	pop	ar3
   112C D0 02              4003 	pop	ar2
   112E                    4004 00206$:
                           4005 ;	main.c:402: if(a == '@')                                                                      /* to delete all buffer and ask for new user input */
                           4006 ;	genCmpEq
                           4007 ;	gencjneshort
   112E E5 31              4008 	mov	a,_main_sloc8_1_0
   1130 B4 40 02           4009 	cjne	a,#0x40,00379$
   1133 80 03              4010 	sjmp	00380$
   1135                    4011 00379$:
   1135 02 02 60           4012 	ljmp	00217$
   1138                    4013 00380$:
                           4014 ;	main.c:405: for (c = 0; c<= i ; c++)
                           4015 ;	genAssign
   1138 AA 2F              4016 	mov	r2,_main_sloc7_1_0
   113A AB 30              4017 	mov	r3,(_main_sloc7_1_0 + 1)
                           4018 ;	genAssign
   113C 7C 00              4019 	mov	r4,#0x00
   113E 7D 00              4020 	mov	r5,#0x00
   1140                    4021 00210$:
                           4022 ;	genCmpGt
                           4023 ;	genCmp
   1140 C3                 4024 	clr	c
   1141 EA                 4025 	mov	a,r2
   1142 9C                 4026 	subb	a,r4
   1143 EB                 4027 	mov	a,r3
   1144 9D                 4028 	subb	a,r5
                           4029 ;	genIfxJump
   1145 50 03              4030 	jnc	00381$
   1147 02 00 99           4031 	ljmp	00101$
   114A                    4032 00381$:
                           4033 ;	main.c:407: if((arr[c]) == 1)
                           4034 ;	genLeftShift
                           4035 ;	genLeftShiftLiteral
                           4036 ;	genlshTwo
   114A 8C 06              4037 	mov	ar6,r4
   114C ED                 4038 	mov	a,r5
   114D CE                 4039 	xch	a,r6
   114E 25 E0              4040 	add	a,acc
   1150 CE                 4041 	xch	a,r6
   1151 33                 4042 	rlc	a
   1152 FF                 4043 	mov	r7,a
                           4044 ;	genPlus
                           4045 ;	Peephole 236.g	used r6 instead of ar6
   1153 EE                 4046 	mov	a,r6
   1154 24 96              4047 	add	a,#_main_arr_1_1
   1156 F5 82              4048 	mov	dpl,a
                           4049 ;	Peephole 236.g	used r7 instead of ar7
   1158 EF                 4050 	mov	a,r7
   1159 34 0C              4051 	addc	a,#(_main_arr_1_1 >> 8)
   115B F5 83              4052 	mov	dph,a
                           4053 ;	genPointerGet
                           4054 ;	genFarPointerGet
   115D E0                 4055 	movx	a,@dptr
   115E F8                 4056 	mov	r0,a
   115F A3                 4057 	inc	dptr
   1160 E0                 4058 	movx	a,@dptr
   1161 F9                 4059 	mov	r1,a
                           4060 ;	genCmpEq
                           4061 ;	gencjneshort
   1162 B8 01 06           4062 	cjne	r0,#0x01,00382$
   1165 B9 00 03           4063 	cjne	r1,#0x00,00382$
   1168 02 00 99           4064 	ljmp	00101$
   116B                    4065 00382$:
                           4066 ;	main.c:410: free(buffer[c]);
                           4067 ;	genPlus
                           4068 ;	Peephole 236.g	used r6 instead of ar6
   116B EE                 4069 	mov	a,r6
   116C 24 BC              4070 	add	a,#_main_buffer_1_1
   116E F5 82              4071 	mov	dpl,a
                           4072 ;	Peephole 236.g	used r7 instead of ar7
   1170 EF                 4073 	mov	a,r7
   1171 34 0B              4074 	addc	a,#(_main_buffer_1_1 >> 8)
   1173 F5 83              4075 	mov	dph,a
                           4076 ;	genPointerGet
                           4077 ;	genFarPointerGet
   1175 E0                 4078 	movx	a,@dptr
   1176 FE                 4079 	mov	r6,a
   1177 A3                 4080 	inc	dptr
   1178 E0                 4081 	movx	a,@dptr
   1179 FF                 4082 	mov	r7,a
                           4083 ;	genCast
   117A 78 00              4084 	mov	r0,#0x0
                           4085 ;	genCall
   117C 8E 82              4086 	mov	dpl,r6
   117E 8F 83              4087 	mov	dph,r7
   1180 88 F0              4088 	mov	b,r0
   1182 C0 02              4089 	push	ar2
   1184 C0 03              4090 	push	ar3
   1186 C0 04              4091 	push	ar4
   1188 C0 05              4092 	push	ar5
   118A 12 15 0F           4093 	lcall	_free
   118D D0 05              4094 	pop	ar5
   118F D0 04              4095 	pop	ar4
   1191 D0 03              4096 	pop	ar3
   1193 D0 02              4097 	pop	ar2
                           4098 ;	main.c:411: printf_small("buffer %d deleted \n\r",c);
                           4099 ;	genIpush
   1195 C0 02              4100 	push	ar2
   1197 C0 03              4101 	push	ar3
   1199 C0 04              4102 	push	ar4
   119B C0 05              4103 	push	ar5
   119D C0 04              4104 	push	ar4
   119F C0 05              4105 	push	ar5
                           4106 ;	genIpush
   11A1 74 0C              4107 	mov	a,#__str_39
   11A3 C0 E0              4108 	push	acc
   11A5 74 24              4109 	mov	a,#(__str_39 >> 8)
   11A7 C0 E0              4110 	push	acc
   11A9 74 80              4111 	mov	a,#0x80
   11AB C0 E0              4112 	push	acc
                           4113 ;	genCall
   11AD 12 18 60           4114 	lcall	_printf_small
   11B0 E5 81              4115 	mov	a,sp
   11B2 24 FB              4116 	add	a,#0xfb
   11B4 F5 81              4117 	mov	sp,a
   11B6 D0 05              4118 	pop	ar5
   11B8 D0 04              4119 	pop	ar4
   11BA D0 03              4120 	pop	ar3
   11BC D0 02              4121 	pop	ar2
                           4122 ;	main.c:405: for (c = 0; c<= i ; c++)
                           4123 ;	genPlus
                           4124 ;     genPlusIncr
   11BE 0C                 4125 	inc	r4
   11BF BC 00 01           4126 	cjne	r4,#0x00,00383$
   11C2 0D                 4127 	inc	r5
   11C3                    4128 00383$:
                           4129 ;	main.c:418: goto again;
   11C3 02 11 40           4130 	ljmp	00210$
                           4131 ;	Peephole 259.b	removed redundant label 00219$ and ret
                           4132 ;
                           4133 ;------------------------------------------------------------
                           4134 ;Allocation info for local variables in function 'serialinit'
                           4135 ;------------------------------------------------------------
                           4136 ;------------------------------------------------------------
                           4137 ;	main.c:435: void serialinit()                                                   /* serial initialising function */
                           4138 ;	-----------------------------------------
                           4139 ;	 function serialinit
                           4140 ;	-----------------------------------------
   11C6                    4141 _serialinit:
                           4142 ;	main.c:437: TMOD = 0X20;
                           4143 ;	genAssign
   11C6 75 89 20           4144 	mov	_TMOD,#0x20
                           4145 ;	main.c:438: TH1 = 0xFD ;
                           4146 ;	genAssign
   11C9 75 8D FD           4147 	mov	_TH1,#0xFD
                           4148 ;	main.c:439: SCON = 0X50;
                           4149 ;	genAssign
   11CC 75 98 50           4150 	mov	_SCON,#0x50
                           4151 ;	main.c:440: TR1 = 1;
                           4152 ;	genAssign
   11CF D2 8E              4153 	setb	_TR1
                           4154 ;	main.c:441: IE = 0x90 ;
                           4155 ;	genAssign
   11D1 75 A8 90           4156 	mov	_IE,#0x90
                           4157 ;	main.c:442: RI = 0;
                           4158 ;	genAssign
   11D4 C2 98              4159 	clr	_RI
                           4160 ;	main.c:443: TI = 1;
                           4161 ;	genAssign
   11D6 D2 99              4162 	setb	_TI
                           4163 ;	Peephole 300	removed redundant label 00101$
   11D8 22                 4164 	ret
                           4165 ;------------------------------------------------------------
                           4166 ;Allocation info for local variables in function 'putstr'
                           4167 ;------------------------------------------------------------
                           4168 ;s                         Allocated with name '_putstr_s_1_1'
                           4169 ;------------------------------------------------------------
                           4170 ;	main.c:447: void putstr(char* s)                                            /* to print a string through serial port*/
                           4171 ;	-----------------------------------------
                           4172 ;	 function putstr
                           4173 ;	-----------------------------------------
   11D9                    4174 _putstr:
                           4175 ;	genReceive
   11D9 AA F0              4176 	mov	r2,b
   11DB AB 83              4177 	mov	r3,dph
   11DD E5 82              4178 	mov	a,dpl
   11DF 90 0E 26           4179 	mov	dptr,#_putstr_s_1_1
   11E2 F0                 4180 	movx	@dptr,a
   11E3 A3                 4181 	inc	dptr
   11E4 EB                 4182 	mov	a,r3
   11E5 F0                 4183 	movx	@dptr,a
   11E6 A3                 4184 	inc	dptr
   11E7 EA                 4185 	mov	a,r2
   11E8 F0                 4186 	movx	@dptr,a
                           4187 ;	main.c:450: while(*s)
                           4188 ;	genAssign
   11E9 90 0E 26           4189 	mov	dptr,#_putstr_s_1_1
   11EC E0                 4190 	movx	a,@dptr
   11ED FA                 4191 	mov	r2,a
   11EE A3                 4192 	inc	dptr
   11EF E0                 4193 	movx	a,@dptr
   11F0 FB                 4194 	mov	r3,a
   11F1 A3                 4195 	inc	dptr
   11F2 E0                 4196 	movx	a,@dptr
   11F3 FC                 4197 	mov	r4,a
   11F4                    4198 00101$:
                           4199 ;	genPointerGet
                           4200 ;	genGenPointerGet
   11F4 8A 82              4201 	mov	dpl,r2
   11F6 8B 83              4202 	mov	dph,r3
   11F8 8C F0              4203 	mov	b,r4
   11FA 12 1C 23           4204 	lcall	__gptrget
                           4205 ;	genIfx
   11FD FD                 4206 	mov	r5,a
                           4207 ;	Peephole 105	removed redundant mov
                           4208 ;	genIfxJump
                           4209 ;	Peephole 108.c	removed ljmp by inverse jump logic
   11FE 60 23              4210 	jz	00108$
                           4211 ;	Peephole 300	removed redundant label 00109$
                           4212 ;	main.c:452: putchar (*s);
                           4213 ;	genCall
   1200 8D 82              4214 	mov	dpl,r5
   1202 C0 02              4215 	push	ar2
   1204 C0 03              4216 	push	ar3
   1206 C0 04              4217 	push	ar4
   1208 12 12 2F           4218 	lcall	_putchar
   120B D0 04              4219 	pop	ar4
   120D D0 03              4220 	pop	ar3
   120F D0 02              4221 	pop	ar2
                           4222 ;	main.c:453: s++;
                           4223 ;	genPlus
                           4224 ;     genPlusIncr
   1211 0A                 4225 	inc	r2
   1212 BA 00 01           4226 	cjne	r2,#0x00,00110$
   1215 0B                 4227 	inc	r3
   1216                    4228 00110$:
                           4229 ;	genAssign
   1216 90 0E 26           4230 	mov	dptr,#_putstr_s_1_1
   1219 EA                 4231 	mov	a,r2
   121A F0                 4232 	movx	@dptr,a
   121B A3                 4233 	inc	dptr
   121C EB                 4234 	mov	a,r3
   121D F0                 4235 	movx	@dptr,a
   121E A3                 4236 	inc	dptr
   121F EC                 4237 	mov	a,r4
   1220 F0                 4238 	movx	@dptr,a
                           4239 ;	Peephole 112.b	changed ljmp to sjmp
   1221 80 D1              4240 	sjmp	00101$
   1223                    4241 00108$:
                           4242 ;	genAssign
   1223 90 0E 26           4243 	mov	dptr,#_putstr_s_1_1
   1226 EA                 4244 	mov	a,r2
   1227 F0                 4245 	movx	@dptr,a
   1228 A3                 4246 	inc	dptr
   1229 EB                 4247 	mov	a,r3
   122A F0                 4248 	movx	@dptr,a
   122B A3                 4249 	inc	dptr
   122C EC                 4250 	mov	a,r4
   122D F0                 4251 	movx	@dptr,a
                           4252 ;	Peephole 300	removed redundant label 00104$
   122E 22                 4253 	ret
                           4254 ;------------------------------------------------------------
                           4255 ;Allocation info for local variables in function 'putchar'
                           4256 ;------------------------------------------------------------
                           4257 ;c                         Allocated with name '_putchar_c_1_1'
                           4258 ;------------------------------------------------------------
                           4259 ;	main.c:458: void putchar (char c)                                       /* to put a char out of serial port */
                           4260 ;	-----------------------------------------
                           4261 ;	 function putchar
                           4262 ;	-----------------------------------------
   122F                    4263 _putchar:
                           4264 ;	genReceive
   122F E5 82              4265 	mov	a,dpl
   1231 90 0E 29           4266 	mov	dptr,#_putchar_c_1_1
   1234 F0                 4267 	movx	@dptr,a
                           4268 ;	main.c:461: DEBUGPORT(20);
                           4269 ;	genAssign
                           4270 ;	Peephole 182.b	used 16 bit load of dptr
   1235 90 FF FF           4271 	mov	dptr,#0xFFFF
                           4272 ;	genPointerSet
                           4273 ;     genFarPointerSet
   1238 74 14              4274 	mov	a,#0x14
   123A F0                 4275 	movx	@dptr,a
                           4276 ;	main.c:462: while (TI == 0);
   123B                    4277 00101$:
                           4278 ;	genIfx
                           4279 ;	genIfxJump
                           4280 ;	Peephole 108.d	removed ljmp by inverse jump logic
   123B 30 99 FD           4281 	jnb	_TI,00101$
                           4282 ;	Peephole 300	removed redundant label 00108$
                           4283 ;	main.c:463: SBUF = c;
                           4284 ;	genAssign
   123E 90 0E 29           4285 	mov	dptr,#_putchar_c_1_1
   1241 E0                 4286 	movx	a,@dptr
   1242 F5 99              4287 	mov	_SBUF,a
                           4288 ;	main.c:464: TI = 0;
                           4289 ;	genAssign
   1244 C2 99              4290 	clr	_TI
                           4291 ;	Peephole 300	removed redundant label 00104$
   1246 22                 4292 	ret
                           4293 ;------------------------------------------------------------
                           4294 ;Allocation info for local variables in function 'getchar'
                           4295 ;------------------------------------------------------------
                           4296 ;------------------------------------------------------------
                           4297 ;	main.c:469: char getchar ()                                             /* to get a char from serial port */
                           4298 ;	-----------------------------------------
                           4299 ;	 function getchar
                           4300 ;	-----------------------------------------
   1247                    4301 _getchar:
                           4302 ;	main.c:473: while ((SCON & 0x01) == 0);
   1247                    4303 00101$:
                           4304 ;	genAnd
   1247 E5 98              4305 	mov	a,_SCON
                           4306 ;	genIfxJump
                           4307 ;	Peephole 108.d	removed ljmp by inverse jump logic
   1249 30 E0 FB           4308 	jnb	acc.0,00101$
                           4309 ;	Peephole 300	removed redundant label 00108$
                           4310 ;	main.c:474: RI = 0;
                           4311 ;	genAssign
   124C C2 98              4312 	clr	_RI
                           4313 ;	main.c:475: return SBUF;
                           4314 ;	genAssign
   124E AA 99              4315 	mov	r2,_SBUF
                           4316 ;	genRet
   1250 8A 82              4317 	mov	dpl,r2
                           4318 ;	Peephole 300	removed redundant label 00104$
   1252 22                 4319 	ret
                           4320 ;------------------------------------------------------------
                           4321 ;Allocation info for local variables in function 'gets'
                           4322 ;------------------------------------------------------------
                           4323 ;str                       Allocated with name '_gets_str_1_1'
                           4324 ;s                         Allocated with name '_gets_s_1_1'
                           4325 ;c                         Allocated with name '_gets_c_1_1'
                           4326 ;count                     Allocated with name '_gets_count_1_1'
                           4327 ;------------------------------------------------------------
                           4328 ;	main.c:478: char * gets(const char *str)                                    /* to get a string input from user */
                           4329 ;	-----------------------------------------
                           4330 ;	 function gets
                           4331 ;	-----------------------------------------
   1253                    4332 _gets:
                           4333 ;	genReceive
   1253 AA F0              4334 	mov	r2,b
   1255 AB 83              4335 	mov	r3,dph
   1257 E5 82              4336 	mov	a,dpl
   1259 90 0E 2A           4337 	mov	dptr,#_gets_str_1_1
   125C F0                 4338 	movx	@dptr,a
   125D A3                 4339 	inc	dptr
   125E EB                 4340 	mov	a,r3
   125F F0                 4341 	movx	@dptr,a
   1260 A3                 4342 	inc	dptr
   1261 EA                 4343 	mov	a,r2
   1262 F0                 4344 	movx	@dptr,a
                           4345 ;	main.c:480: char *s=str;
                           4346 ;	genAssign
   1263 90 0E 2A           4347 	mov	dptr,#_gets_str_1_1
   1266 E0                 4348 	movx	a,@dptr
   1267 FA                 4349 	mov	r2,a
   1268 A3                 4350 	inc	dptr
   1269 E0                 4351 	movx	a,@dptr
   126A FB                 4352 	mov	r3,a
   126B A3                 4353 	inc	dptr
   126C E0                 4354 	movx	a,@dptr
   126D FC                 4355 	mov	r4,a
                           4356 ;	genAssign
   126E 90 0E 2D           4357 	mov	dptr,#_gets_s_1_1
   1271 EA                 4358 	mov	a,r2
   1272 F0                 4359 	movx	@dptr,a
   1273 A3                 4360 	inc	dptr
   1274 EB                 4361 	mov	a,r3
   1275 F0                 4362 	movx	@dptr,a
   1276 A3                 4363 	inc	dptr
   1277 EC                 4364 	mov	a,r4
   1278 F0                 4365 	movx	@dptr,a
                           4366 ;	main.c:482: unsigned int count=0;
                           4367 ;	genAssign
   1279 90 0E 30           4368 	mov	dptr,#_gets_count_1_1
   127C E4                 4369 	clr	a
   127D F0                 4370 	movx	@dptr,a
   127E A3                 4371 	inc	dptr
   127F F0                 4372 	movx	@dptr,a
                           4373 ;	main.c:484: while (1) {
   1280                    4374 00109$:
                           4375 ;	main.c:485: c=getchar();
                           4376 ;	genCall
   1280 12 12 47           4377 	lcall	_getchar
   1283 AA 82              4378 	mov	r2,dpl
                           4379 ;	main.c:486: switch(c) {
                           4380 ;	genCmpEq
                           4381 ;	gencjneshort
   1285 BA 08 02           4382 	cjne	r2,#0x08,00118$
                           4383 ;	Peephole 112.b	changed ljmp to sjmp
   1288 80 0D              4384 	sjmp	00101$
   128A                    4385 00118$:
                           4386 ;	genCmpEq
                           4387 ;	gencjneshort
   128A BA 0A 02           4388 	cjne	r2,#0x0A,00119$
                           4389 ;	Peephole 112.b	changed ljmp to sjmp
   128D 80 67              4390 	sjmp	00105$
   128F                    4391 00119$:
                           4392 ;	genCmpEq
                           4393 ;	gencjneshort
   128F BA 0D 02           4394 	cjne	r2,#0x0D,00120$
                           4395 ;	Peephole 112.b	changed ljmp to sjmp
   1292 80 62              4396 	sjmp	00105$
   1294                    4397 00120$:
   1294 02 13 29           4398 	ljmp	00106$
                           4399 ;	main.c:487: case '\b':
   1297                    4400 00101$:
                           4401 ;	main.c:488: if (count)
                           4402 ;	genAssign
   1297 90 0E 30           4403 	mov	dptr,#_gets_count_1_1
   129A E0                 4404 	movx	a,@dptr
   129B FB                 4405 	mov	r3,a
   129C A3                 4406 	inc	dptr
   129D E0                 4407 	movx	a,@dptr
                           4408 ;	genIfx
   129E FC                 4409 	mov	r4,a
                           4410 ;	Peephole 135	removed redundant mov
   129F 4B                 4411 	orl	a,r3
                           4412 ;	genIfxJump
                           4413 ;	Peephole 108.c	removed ljmp by inverse jump logic
   12A0 60 DE              4414 	jz	00109$
                           4415 ;	Peephole 300	removed redundant label 00121$
                           4416 ;	main.c:490: putchar ('\b');
                           4417 ;	genCall
   12A2 75 82 08           4418 	mov	dpl,#0x08
   12A5 C0 03              4419 	push	ar3
   12A7 C0 04              4420 	push	ar4
   12A9 12 12 2F           4421 	lcall	_putchar
   12AC D0 04              4422 	pop	ar4
   12AE D0 03              4423 	pop	ar3
                           4424 ;	main.c:491: putchar (' ');
                           4425 ;	genCall
   12B0 75 82 20           4426 	mov	dpl,#0x20
   12B3 C0 03              4427 	push	ar3
   12B5 C0 04              4428 	push	ar4
   12B7 12 12 2F           4429 	lcall	_putchar
   12BA D0 04              4430 	pop	ar4
   12BC D0 03              4431 	pop	ar3
                           4432 ;	main.c:492: putchar ('\b');
                           4433 ;	genCall
   12BE 75 82 08           4434 	mov	dpl,#0x08
   12C1 C0 03              4435 	push	ar3
   12C3 C0 04              4436 	push	ar4
   12C5 12 12 2F           4437 	lcall	_putchar
   12C8 D0 04              4438 	pop	ar4
   12CA D0 03              4439 	pop	ar3
                           4440 ;	main.c:493: s--;
                           4441 ;	genAssign
   12CC 90 0E 2D           4442 	mov	dptr,#_gets_s_1_1
   12CF E0                 4443 	movx	a,@dptr
   12D0 FD                 4444 	mov	r5,a
   12D1 A3                 4445 	inc	dptr
   12D2 E0                 4446 	movx	a,@dptr
   12D3 FE                 4447 	mov	r6,a
   12D4 A3                 4448 	inc	dptr
   12D5 E0                 4449 	movx	a,@dptr
   12D6 FF                 4450 	mov	r7,a
                           4451 ;	genMinus
                           4452 ;	genMinusDec
   12D7 1D                 4453 	dec	r5
   12D8 BD FF 01           4454 	cjne	r5,#0xff,00122$
   12DB 1E                 4455 	dec	r6
   12DC                    4456 00122$:
                           4457 ;	genAssign
   12DC 90 0E 2D           4458 	mov	dptr,#_gets_s_1_1
   12DF ED                 4459 	mov	a,r5
   12E0 F0                 4460 	movx	@dptr,a
   12E1 A3                 4461 	inc	dptr
   12E2 EE                 4462 	mov	a,r6
   12E3 F0                 4463 	movx	@dptr,a
   12E4 A3                 4464 	inc	dptr
   12E5 EF                 4465 	mov	a,r7
   12E6 F0                 4466 	movx	@dptr,a
                           4467 ;	main.c:494: count--;
                           4468 ;	genMinus
                           4469 ;	genMinusDec
   12E7 1B                 4470 	dec	r3
   12E8 BB FF 01           4471 	cjne	r3,#0xff,00123$
   12EB 1C                 4472 	dec	r4
   12EC                    4473 00123$:
                           4474 ;	genAssign
   12EC 90 0E 30           4475 	mov	dptr,#_gets_count_1_1
   12EF EB                 4476 	mov	a,r3
   12F0 F0                 4477 	movx	@dptr,a
   12F1 A3                 4478 	inc	dptr
   12F2 EC                 4479 	mov	a,r4
   12F3 F0                 4480 	movx	@dptr,a
                           4481 ;	main.c:496: break;
                           4482 ;	main.c:498: case '\r':
                           4483 ;	Peephole 112.b	changed ljmp to sjmp
   12F4 80 8A              4484 	sjmp	00109$
   12F6                    4485 00105$:
                           4486 ;	main.c:499: putchar('\r');
                           4487 ;	genCall
   12F6 75 82 0D           4488 	mov	dpl,#0x0D
   12F9 12 12 2F           4489 	lcall	_putchar
                           4490 ;	main.c:500: putchar('\n');
                           4491 ;	genCall
   12FC 75 82 0A           4492 	mov	dpl,#0x0A
   12FF 12 12 2F           4493 	lcall	_putchar
                           4494 ;	main.c:501: *s=0;
                           4495 ;	genAssign
   1302 90 0E 2D           4496 	mov	dptr,#_gets_s_1_1
   1305 E0                 4497 	movx	a,@dptr
   1306 FB                 4498 	mov	r3,a
   1307 A3                 4499 	inc	dptr
   1308 E0                 4500 	movx	a,@dptr
   1309 FC                 4501 	mov	r4,a
   130A A3                 4502 	inc	dptr
   130B E0                 4503 	movx	a,@dptr
   130C FD                 4504 	mov	r5,a
                           4505 ;	genPointerSet
                           4506 ;	genGenPointerSet
   130D 8B 82              4507 	mov	dpl,r3
   130F 8C 83              4508 	mov	dph,r4
   1311 8D F0              4509 	mov	b,r5
                           4510 ;	Peephole 181	changed mov to clr
   1313 E4                 4511 	clr	a
   1314 12 17 1F           4512 	lcall	__gptrput
                           4513 ;	main.c:502: return str;
                           4514 ;	genAssign
   1317 90 0E 2A           4515 	mov	dptr,#_gets_str_1_1
   131A E0                 4516 	movx	a,@dptr
   131B FB                 4517 	mov	r3,a
   131C A3                 4518 	inc	dptr
   131D E0                 4519 	movx	a,@dptr
   131E FC                 4520 	mov	r4,a
   131F A3                 4521 	inc	dptr
   1320 E0                 4522 	movx	a,@dptr
   1321 FD                 4523 	mov	r5,a
                           4524 ;	genRet
   1322 8B 82              4525 	mov	dpl,r3
   1324 8C 83              4526 	mov	dph,r4
   1326 8D F0              4527 	mov	b,r5
                           4528 ;	main.c:503: default:
                           4529 ;	Peephole 112.b	changed ljmp to sjmp
                           4530 ;	Peephole 251.b	replaced sjmp to ret with ret
   1328 22                 4531 	ret
   1329                    4532 00106$:
                           4533 ;	main.c:504: *s++=c;
                           4534 ;	genAssign
   1329 90 0E 2D           4535 	mov	dptr,#_gets_s_1_1
   132C E0                 4536 	movx	a,@dptr
   132D FB                 4537 	mov	r3,a
   132E A3                 4538 	inc	dptr
   132F E0                 4539 	movx	a,@dptr
   1330 FC                 4540 	mov	r4,a
   1331 A3                 4541 	inc	dptr
   1332 E0                 4542 	movx	a,@dptr
   1333 FD                 4543 	mov	r5,a
                           4544 ;	genPointerSet
                           4545 ;	genGenPointerSet
   1334 8B 82              4546 	mov	dpl,r3
   1336 8C 83              4547 	mov	dph,r4
   1338 8D F0              4548 	mov	b,r5
   133A EA                 4549 	mov	a,r2
   133B 12 17 1F           4550 	lcall	__gptrput
                           4551 ;	genPlus
   133E 90 0E 2D           4552 	mov	dptr,#_gets_s_1_1
                           4553 ;     genPlusIncr
   1341 74 01              4554 	mov	a,#0x01
                           4555 ;	Peephole 236.a	used r3 instead of ar3
   1343 2B                 4556 	add	a,r3
   1344 F0                 4557 	movx	@dptr,a
                           4558 ;	Peephole 181	changed mov to clr
   1345 E4                 4559 	clr	a
                           4560 ;	Peephole 236.b	used r4 instead of ar4
   1346 3C                 4561 	addc	a,r4
   1347 A3                 4562 	inc	dptr
   1348 F0                 4563 	movx	@dptr,a
   1349 A3                 4564 	inc	dptr
   134A ED                 4565 	mov	a,r5
   134B F0                 4566 	movx	@dptr,a
                           4567 ;	main.c:505: count++;
                           4568 ;	genAssign
   134C 90 0E 30           4569 	mov	dptr,#_gets_count_1_1
   134F E0                 4570 	movx	a,@dptr
   1350 FB                 4571 	mov	r3,a
   1351 A3                 4572 	inc	dptr
   1352 E0                 4573 	movx	a,@dptr
   1353 FC                 4574 	mov	r4,a
                           4575 ;	genPlus
   1354 90 0E 30           4576 	mov	dptr,#_gets_count_1_1
                           4577 ;     genPlusIncr
   1357 74 01              4578 	mov	a,#0x01
                           4579 ;	Peephole 236.a	used r3 instead of ar3
   1359 2B                 4580 	add	a,r3
   135A F0                 4581 	movx	@dptr,a
                           4582 ;	Peephole 181	changed mov to clr
   135B E4                 4583 	clr	a
                           4584 ;	Peephole 236.b	used r4 instead of ar4
   135C 3C                 4585 	addc	a,r4
   135D A3                 4586 	inc	dptr
   135E F0                 4587 	movx	@dptr,a
                           4588 ;	main.c:506: putchar(c);
                           4589 ;	genCall
   135F 8A 82              4590 	mov	dpl,r2
   1361 12 12 2F           4591 	lcall	_putchar
                           4592 ;	main.c:508: }
   1364 02 12 80           4593 	ljmp	00109$
                           4594 ;	Peephole 259.b	removed redundant label 00111$ and ret
                           4595 ;
                           4596 ;------------------------------------------------------------
                           4597 ;Allocation info for local variables in function 'atoi'
                           4598 ;------------------------------------------------------------
                           4599 ;rv                        Allocated to registers r2 r3 
                           4600 ;sign                      Allocated to registers r1 
                           4601 ;sloc0                     Allocated with name '_atoi_sloc0_1_0'
                           4602 ;s                         Allocated with name '_atoi_s_1_1'
                           4603 ;------------------------------------------------------------
                           4604 ;	main.c:512: int atoi(char * s)                                                              /* to convert  ascii string into integer*/
                           4605 ;	-----------------------------------------
                           4606 ;	 function atoi
                           4607 ;	-----------------------------------------
   1367                    4608 _atoi:
                           4609 ;	genReceive
   1367 AA F0              4610 	mov	r2,b
   1369 AB 83              4611 	mov	r3,dph
   136B E5 82              4612 	mov	a,dpl
   136D 90 0E 32           4613 	mov	dptr,#_atoi_s_1_1
   1370 F0                 4614 	movx	@dptr,a
   1371 A3                 4615 	inc	dptr
   1372 EB                 4616 	mov	a,r3
   1373 F0                 4617 	movx	@dptr,a
   1374 A3                 4618 	inc	dptr
   1375 EA                 4619 	mov	a,r2
   1376 F0                 4620 	movx	@dptr,a
                           4621 ;	main.c:514: register int rv=0;
                           4622 ;	genAssign
   1377 7A 00              4623 	mov	r2,#0x00
   1379 7B 00              4624 	mov	r3,#0x00
                           4625 ;	main.c:518: while (*s) {
                           4626 ;	genAssign
   137B 90 0E 32           4627 	mov	dptr,#_atoi_s_1_1
   137E E0                 4628 	movx	a,@dptr
   137F FC                 4629 	mov	r4,a
   1380 A3                 4630 	inc	dptr
   1381 E0                 4631 	movx	a,@dptr
   1382 FD                 4632 	mov	r5,a
   1383 A3                 4633 	inc	dptr
   1384 E0                 4634 	movx	a,@dptr
   1385 FE                 4635 	mov	r6,a
   1386                    4636 00107$:
                           4637 ;	genPointerGet
                           4638 ;	genGenPointerGet
   1386 8C 82              4639 	mov	dpl,r4
   1388 8D 83              4640 	mov	dph,r5
   138A 8E F0              4641 	mov	b,r6
   138C 12 1C 23           4642 	lcall	__gptrget
                           4643 ;	genIfx
   138F FF                 4644 	mov	r7,a
                           4645 ;	Peephole 105	removed redundant mov
                           4646 ;	genIfxJump
                           4647 ;	Peephole 108.c	removed ljmp by inverse jump logic
   1390 60 39              4648 	jz	00133$
                           4649 ;	Peephole 300	removed redundant label 00135$
                           4650 ;	main.c:519: if (*s <= '9' && *s >= '0')
                           4651 ;	genCmpGt
                           4652 ;	genCmp
   1392 C3                 4653 	clr	c
                           4654 ;	Peephole 159	avoided xrl during execution
   1393 74 B9              4655 	mov	a,#(0x39 ^ 0x80)
   1395 8F F0              4656 	mov	b,r7
   1397 63 F0 80           4657 	xrl	b,#0x80
   139A 95 F0              4658 	subb	a,b
                           4659 ;	genIfxJump
                           4660 ;	Peephole 112.b	changed ljmp to sjmp
                           4661 ;	Peephole 160.a	removed sjmp by inverse jump logic
                           4662 ;	genCmpLt
                           4663 ;	genCmp
   139C 40 07              4664 	jc	00102$
                           4665 ;	Peephole 300	removed redundant label 00136$
                           4666 ;	Peephole 256.a	removed redundant clr c
   139E EF                 4667 	mov	a,r7
   139F 64 80              4668 	xrl	a,#0x80
   13A1 94 B0              4669 	subb	a,#0xb0
                           4670 ;	genIfxJump
                           4671 ;	Peephole 108.a	removed ljmp by inverse jump logic
   13A3 50 26              4672 	jnc	00133$
                           4673 ;	Peephole 300	removed redundant label 00137$
                           4674 ;	main.c:520: break;
   13A5                    4675 00102$:
                           4676 ;	main.c:521: if (*s == '-' || *s == '+')
                           4677 ;	genPointerGet
                           4678 ;	genGenPointerGet
   13A5 8C 82              4679 	mov	dpl,r4
   13A7 8D 83              4680 	mov	dph,r5
   13A9 8E F0              4681 	mov	b,r6
   13AB 12 1C 23           4682 	lcall	__gptrget
   13AE FF                 4683 	mov	r7,a
                           4684 ;	genCmpEq
                           4685 ;	gencjneshort
   13AF BF 2D 02           4686 	cjne	r7,#0x2D,00138$
                           4687 ;	Peephole 112.b	changed ljmp to sjmp
   13B2 80 17              4688 	sjmp	00133$
   13B4                    4689 00138$:
                           4690 ;	genCmpEq
                           4691 ;	gencjneshort
   13B4 BF 2B 02           4692 	cjne	r7,#0x2B,00139$
                           4693 ;	Peephole 112.b	changed ljmp to sjmp
   13B7 80 12              4694 	sjmp	00133$
   13B9                    4695 00139$:
                           4696 ;	main.c:523: s++;
                           4697 ;	genPlus
                           4698 ;     genPlusIncr
   13B9 0C                 4699 	inc	r4
   13BA BC 00 01           4700 	cjne	r4,#0x00,00140$
   13BD 0D                 4701 	inc	r5
   13BE                    4702 00140$:
                           4703 ;	genAssign
   13BE 90 0E 32           4704 	mov	dptr,#_atoi_s_1_1
   13C1 EC                 4705 	mov	a,r4
   13C2 F0                 4706 	movx	@dptr,a
   13C3 A3                 4707 	inc	dptr
   13C4 ED                 4708 	mov	a,r5
   13C5 F0                 4709 	movx	@dptr,a
   13C6 A3                 4710 	inc	dptr
   13C7 EE                 4711 	mov	a,r6
   13C8 F0                 4712 	movx	@dptr,a
                           4713 ;	Peephole 112.b	changed ljmp to sjmp
   13C9 80 BB              4714 	sjmp	00107$
   13CB                    4715 00133$:
                           4716 ;	genAssign
   13CB 90 0E 32           4717 	mov	dptr,#_atoi_s_1_1
   13CE EC                 4718 	mov	a,r4
   13CF F0                 4719 	movx	@dptr,a
   13D0 A3                 4720 	inc	dptr
   13D1 ED                 4721 	mov	a,r5
   13D2 F0                 4722 	movx	@dptr,a
   13D3 A3                 4723 	inc	dptr
   13D4 EE                 4724 	mov	a,r6
   13D5 F0                 4725 	movx	@dptr,a
                           4726 ;	main.c:526: sign = (*s == '-');
                           4727 ;	genPointerGet
                           4728 ;	genGenPointerGet
   13D6 8C 82              4729 	mov	dpl,r4
   13D8 8D 83              4730 	mov	dph,r5
   13DA 8E F0              4731 	mov	b,r6
   13DC 12 1C 23           4732 	lcall	__gptrget
   13DF FF                 4733 	mov	r7,a
                           4734 ;	genCmpEq
                           4735 ;	gencjne
                           4736 ;	gencjneshort
                           4737 ;	Peephole 241.d	optimized compare
   13E0 E4                 4738 	clr	a
   13E1 BF 2D 01           4739 	cjne	r7,#0x2D,00141$
   13E4 04                 4740 	inc	a
   13E5                    4741 00141$:
                           4742 ;	Peephole 300	removed redundant label 00142$
                           4743 ;	genAssign
                           4744 ;	main.c:527: if (*s == '-' || *s == '+') s++;
                           4745 ;	genIfx
   13E5 F8                 4746 	mov	r0,a
   13E6 88 01              4747 	mov	ar1,r0
                           4748 ;	Peephole 166	removed redundant mov
                           4749 ;	genIfxJump
                           4750 ;	Peephole 108.b	removed ljmp by inverse jump logic
   13E8 70 03              4751 	jnz	00110$
                           4752 ;	Peephole 300	removed redundant label 00143$
                           4753 ;	genCmpEq
                           4754 ;	gencjneshort
                           4755 ;	Peephole 112.b	changed ljmp to sjmp
                           4756 ;	Peephole 198.b	optimized misc jump sequence
   13EA BF 2B 0E           4757 	cjne	r7,#0x2B,00131$
                           4758 ;	Peephole 200.b	removed redundant sjmp
                           4759 ;	Peephole 300	removed redundant label 00144$
                           4760 ;	Peephole 300	removed redundant label 00145$
   13ED                    4761 00110$:
                           4762 ;	genPlus
   13ED 90 0E 32           4763 	mov	dptr,#_atoi_s_1_1
                           4764 ;     genPlusIncr
   13F0 74 01              4765 	mov	a,#0x01
                           4766 ;	Peephole 236.a	used r4 instead of ar4
   13F2 2C                 4767 	add	a,r4
   13F3 F0                 4768 	movx	@dptr,a
                           4769 ;	Peephole 181	changed mov to clr
   13F4 E4                 4770 	clr	a
                           4771 ;	Peephole 236.b	used r5 instead of ar5
   13F5 3D                 4772 	addc	a,r5
   13F6 A3                 4773 	inc	dptr
   13F7 F0                 4774 	movx	@dptr,a
   13F8 A3                 4775 	inc	dptr
   13F9 EE                 4776 	mov	a,r6
   13FA F0                 4777 	movx	@dptr,a
                           4778 ;	main.c:529: while (*s && *s >= '0' && *s <= '9') {
   13FB                    4779 00131$:
                           4780 ;	genAssign
   13FB 90 0E 32           4781 	mov	dptr,#_atoi_s_1_1
   13FE E0                 4782 	movx	a,@dptr
   13FF FC                 4783 	mov	r4,a
   1400 A3                 4784 	inc	dptr
   1401 E0                 4785 	movx	a,@dptr
   1402 FD                 4786 	mov	r5,a
   1403 A3                 4787 	inc	dptr
   1404 E0                 4788 	movx	a,@dptr
   1405 FE                 4789 	mov	r6,a
   1406                    4790 00115$:
                           4791 ;	genPointerGet
                           4792 ;	genGenPointerGet
   1406 8C 82              4793 	mov	dpl,r4
   1408 8D 83              4794 	mov	dph,r5
   140A 8E F0              4795 	mov	b,r6
   140C 12 1C 23           4796 	lcall	__gptrget
                           4797 ;	genIfx
   140F FF                 4798 	mov	r7,a
                           4799 ;	Peephole 105	removed redundant mov
                           4800 ;	genIfxJump
                           4801 ;	Peephole 108.c	removed ljmp by inverse jump logic
   1410 60 68              4802 	jz	00134$
                           4803 ;	Peephole 300	removed redundant label 00146$
                           4804 ;	genCmpLt
                           4805 ;	genCmp
   1412 C3                 4806 	clr	c
   1413 EF                 4807 	mov	a,r7
   1414 64 80              4808 	xrl	a,#0x80
   1416 94 B0              4809 	subb	a,#0xb0
                           4810 ;	genIfxJump
                           4811 ;	Peephole 112.b	changed ljmp to sjmp
                           4812 ;	Peephole 160.a	removed sjmp by inverse jump logic
                           4813 ;	genCmpGt
                           4814 ;	genCmp
   1418 40 60              4815 	jc	00134$
                           4816 ;	Peephole 300	removed redundant label 00147$
                           4817 ;	Peephole 256.a	removed redundant clr c
                           4818 ;	Peephole 159	avoided xrl during execution
   141A 74 B9              4819 	mov	a,#(0x39 ^ 0x80)
   141C 8F F0              4820 	mov	b,r7
   141E 63 F0 80           4821 	xrl	b,#0x80
   1421 95 F0              4822 	subb	a,b
                           4823 ;	genIfxJump
                           4824 ;	Peephole 112.b	changed ljmp to sjmp
                           4825 ;	Peephole 160.a	removed sjmp by inverse jump logic
   1423 40 55              4826 	jc	00134$
                           4827 ;	Peephole 300	removed redundant label 00148$
                           4828 ;	main.c:530: rv = (rv * 10) + (*s - '0');
                           4829 ;	genIpush
   1425 C0 01              4830 	push	ar1
                           4831 ;	genAssign
   1427 90 0E 4D           4832 	mov	dptr,#__mulint_PARM_2
   142A 74 0A              4833 	mov	a,#0x0A
   142C F0                 4834 	movx	@dptr,a
   142D E4                 4835 	clr	a
   142E A3                 4836 	inc	dptr
   142F F0                 4837 	movx	@dptr,a
                           4838 ;	genCall
   1430 8A 82              4839 	mov	dpl,r2
   1432 8B 83              4840 	mov	dph,r3
   1434 C0 04              4841 	push	ar4
   1436 C0 05              4842 	push	ar5
   1438 C0 06              4843 	push	ar6
   143A C0 07              4844 	push	ar7
   143C C0 01              4845 	push	ar1
   143E 12 18 40           4846 	lcall	__mulint
   1441 85 82 3C           4847 	mov	_atoi_sloc0_1_0,dpl
   1444 85 83 3D           4848 	mov	(_atoi_sloc0_1_0 + 1),dph
   1447 D0 01              4849 	pop	ar1
   1449 D0 07              4850 	pop	ar7
   144B D0 06              4851 	pop	ar6
   144D D0 05              4852 	pop	ar5
   144F D0 04              4853 	pop	ar4
                           4854 ;	genCast
   1451 EF                 4855 	mov	a,r7
   1452 33                 4856 	rlc	a
   1453 95 E0              4857 	subb	a,acc
   1455 F8                 4858 	mov	r0,a
                           4859 ;	genMinus
   1456 EF                 4860 	mov	a,r7
   1457 24 D0              4861 	add	a,#0xd0
   1459 FF                 4862 	mov	r7,a
   145A E8                 4863 	mov	a,r0
   145B 34 FF              4864 	addc	a,#0xff
   145D F8                 4865 	mov	r0,a
                           4866 ;	genPlus
                           4867 ;	Peephole 236.g	used r7 instead of ar7
   145E EF                 4868 	mov	a,r7
   145F 25 3C              4869 	add	a,_atoi_sloc0_1_0
   1461 FA                 4870 	mov	r2,a
                           4871 ;	Peephole 236.g	used r0 instead of ar0
   1462 E8                 4872 	mov	a,r0
   1463 35 3D              4873 	addc	a,(_atoi_sloc0_1_0 + 1)
   1465 FB                 4874 	mov	r3,a
                           4875 ;	main.c:531: s++;
                           4876 ;	genPlus
                           4877 ;     genPlusIncr
   1466 0C                 4878 	inc	r4
   1467 BC 00 01           4879 	cjne	r4,#0x00,00149$
   146A 0D                 4880 	inc	r5
   146B                    4881 00149$:
                           4882 ;	genAssign
   146B 90 0E 32           4883 	mov	dptr,#_atoi_s_1_1
   146E EC                 4884 	mov	a,r4
   146F F0                 4885 	movx	@dptr,a
   1470 A3                 4886 	inc	dptr
   1471 ED                 4887 	mov	a,r5
   1472 F0                 4888 	movx	@dptr,a
   1473 A3                 4889 	inc	dptr
   1474 EE                 4890 	mov	a,r6
   1475 F0                 4891 	movx	@dptr,a
                           4892 ;	genIpop
   1476 D0 01              4893 	pop	ar1
                           4894 ;	Peephole 112.b	changed ljmp to sjmp
   1478 80 8C              4895 	sjmp	00115$
   147A                    4896 00134$:
                           4897 ;	genAssign
   147A 90 0E 32           4898 	mov	dptr,#_atoi_s_1_1
   147D EC                 4899 	mov	a,r4
   147E F0                 4900 	movx	@dptr,a
   147F A3                 4901 	inc	dptr
   1480 ED                 4902 	mov	a,r5
   1481 F0                 4903 	movx	@dptr,a
   1482 A3                 4904 	inc	dptr
   1483 EE                 4905 	mov	a,r6
   1484 F0                 4906 	movx	@dptr,a
                           4907 ;	main.c:534: return (sign ? -rv : rv);
                           4908 ;	genIfx
   1485 E9                 4909 	mov	a,r1
                           4910 ;	genIfxJump
                           4911 ;	Peephole 108.c	removed ljmp by inverse jump logic
   1486 60 09              4912 	jz	00120$
                           4913 ;	Peephole 300	removed redundant label 00150$
                           4914 ;	genUminus
   1488 C3                 4915 	clr	c
   1489 E4                 4916 	clr	a
   148A 9A                 4917 	subb	a,r2
   148B FC                 4918 	mov	r4,a
   148C E4                 4919 	clr	a
   148D 9B                 4920 	subb	a,r3
   148E FD                 4921 	mov	r5,a
                           4922 ;	Peephole 112.b	changed ljmp to sjmp
   148F 80 04              4923 	sjmp	00121$
   1491                    4924 00120$:
                           4925 ;	genAssign
   1491 8A 04              4926 	mov	ar4,r2
   1493 8B 05              4927 	mov	ar5,r3
   1495                    4928 00121$:
                           4929 ;	genRet
   1495 8C 82              4930 	mov	dpl,r4
   1497 8D 83              4931 	mov	dph,r5
                           4932 ;	Peephole 300	removed redundant label 00118$
   1499 22                 4933 	ret
                           4934 	.area CSEG    (CODE)
                           4935 	.area CONST   (CODE)
   1E94                    4936 __str_0:
   1E94 20 45 6E 74 65 72  4937 	.ascii " Enter buffer size between 32 and 2800( enter multiple of 16"
        20 62 75 66 66 65
        72 20 73 69 7A 65
        20 62 65 74 77 65
        65 6E 20 33 32 20
        61 6E 64 20 32 38
        30 30 28 20 65 6E
        74 65 72 20 6D 75
        6C 74 69 70 6C 65
        20 6F 66 20 31 36
   1ED0 29                 4938 	.ascii ")"
   1ED1 0A                 4939 	.db 0x0A
   1ED2 0D                 4940 	.db 0x0D
   1ED3 20                 4941 	.ascii " "
   1ED4 00                 4942 	.db 0x00
   1ED5                    4943 __str_1:
   1ED5 65 6E 74 65 72 20  4944 	.ascii "enter proper number as specified"
        70 72 6F 70 65 72
        20 6E 75 6D 62 65
        72 20 61 73 20 73
        70 65 63 69 66 69
        65 64
   1EF5 0A                 4945 	.db 0x0A
   1EF6 0D                 4946 	.db 0x0D
   1EF7 00                 4947 	.db 0x00
   1EF8                    4948 __str_2:
   1EF8 65 6E 74 65 72 20  4949 	.ascii "enter a number as specified"
        61 20 6E 75 6D 62
        65 72 20 61 73 20
        73 70 65 63 69 66
        69 65 64
   1F13 0A                 4950 	.db 0x0A
   1F14 0D                 4951 	.db 0x0D
   1F15 00                 4952 	.db 0x00
   1F16                    4953 __str_3:
   1F16 65 6E 74 65 72 20  4954 	.ascii "enter proper size which is multiple of 16"
        70 72 6F 70 65 72
        20 73 69 7A 65 20
        77 68 69 63 68 20
        69 73 20 6D 75 6C
        74 69 70 6C 65 20
        6F 66 20 31 36
   1F3F 0A                 4955 	.db 0x0A
   1F40 0D                 4956 	.db 0x0D
   1F41 00                 4957 	.db 0x00
   1F42                    4958 __str_4:
   1F42 65 6E 74 65 72 20  4959 	.ascii "enter proper size "
        70 72 6F 70 65 72
        20 73 69 7A 65 20
   1F54 0A                 4960 	.db 0x0A
   1F55 0D                 4961 	.db 0x0D
   1F56 00                 4962 	.db 0x00
   1F57                    4963 __str_5:
   1F57 6D 61 6C 6C 6F 63  4964 	.ascii "malloc buffer[0] failed"
        20 62 75 66 66 65
        72 5B 30 5D 20 66
        61 69 6C 65 64
   1F6E 0A                 4965 	.db 0x0A
   1F6F 0D                 4966 	.db 0x0D
   1F70 00                 4967 	.db 0x00
   1F71                    4968 __str_6:
   1F71 6D 61 6C 6C 6F 63  4969 	.ascii "malloc buffer[1] failed"
        20 62 75 66 66 65
        72 5B 31 5D 20 66
        61 69 6C 65 64
   1F88 0A                 4970 	.db 0x0A
   1F89 0D                 4971 	.db 0x0D
   1F8A 00                 4972 	.db 0x00
   1F8B                    4973 __str_7:
   1F8B 65 6E 74 65 72 20  4974 	.ascii "enter smaller buffer size"
        73 6D 61 6C 6C 65
        72 20 62 75 66 66
        65 72 20 73 69 7A
        65
   1FA4 0A                 4975 	.db 0x0A
   1FA5 0D                 4976 	.db 0x0D
   1FA6 00                 4977 	.db 0x00
   1FA7                    4978 __str_8:
   1FA7 20 6D 61 6C 6C 6F  4979 	.ascii " malloc passed , buffer allocation is successful "
        63 20 70 61 73 73
        65 64 20 2C 20 62
        75 66 66 65 72 20
        61 6C 6C 6F 63 61
        74 69 6F 6E 20 69
        73 20 73 75 63 63
        65 73 73 66 75 6C
        20
   1FD8 0A                 4980 	.db 0x0A
   1FD9 0D                 4981 	.db 0x0D
   1FDA 00                 4982 	.db 0x00
   1FDB                    4983 __str_9:
   1FDB 20 65 6E 74 65 72  4984 	.ascii " enter a character"
        20 61 20 63 68 61
        72 61 63 74 65 72
   1FED 0A                 4985 	.db 0x0A
   1FEE 0D                 4986 	.db 0x0D
   1FEF 00                 4987 	.db 0x00
   1FF0                    4988 __str_10:
   1FF0 0A                 4989 	.db 0x0A
   1FF1 0D                 4990 	.db 0x0D
   1FF2 00                 4991 	.db 0x00
   1FF3                    4992 __str_11:
   1FF3 65 6E 74 65 72 20  4993 	.ascii "enter a buffer size between 20 and 400 bytes"
        61 20 62 75 66 66
        65 72 20 73 69 7A
        65 20 62 65 74 77
        65 65 6E 20 32 30
        20 61 6E 64 20 34
        30 30 20 62 79 74
        65 73
   201F 00                 4994 	.db 0x00
   2020                    4995 __str_12:
   2020 20 6D 61 6C 6C 6F  4996 	.ascii " malloc buffer  failed"
        63 20 62 75 66 66
        65 72 20 20 66 61
        69 6C 65 64
   2036 0A                 4997 	.db 0x0A
   2037 0D                 4998 	.db 0x0D
   2038 00                 4999 	.db 0x00
   2039                    5000 __str_13:
   2039 79 6F 75 20 73 68  5001 	.ascii "you should enter small buffer size "
        6F 75 6C 64 20 65
        6E 74 65 72 20 73
        6D 61 6C 6C 20 62
        75 66 66 65 72 20
        73 69 7A 65 20
   205C 0A                 5002 	.db 0x0A
   205D 0D                 5003 	.db 0x0D
   205E 00                 5004 	.db 0x00
   205F                    5005 __str_14:
   205F 62 75 66 66 65 72  5006 	.ascii "buffer is allocated and number is  : %d "
        20 69 73 20 61 6C
        6C 6F 63 61 74 65
        64 20 61 6E 64 20
        6E 75 6D 62 65 72
        20 69 73 20 20 3A
        20 25 64 20
   2087 0A                 5007 	.db 0x0A
   2088 0D                 5008 	.db 0x0D
   2089 00                 5009 	.db 0x00
   208A                    5010 __str_15:
   208A 65 6E 74 65 72 20  5011 	.ascii "enter a buffer number to delete"
        61 20 62 75 66 66
        65 72 20 6E 75 6D
        62 65 72 20 74 6F
        20 64 65 6C 65 74
        65
   20A9 00                 5012 	.db 0x00
   20AA                    5013 __str_16:
   20AA 62 75 66 66 65 72  5014 	.ascii "buffer%d is deleted"
        25 64 20 69 73 20
        64 65 6C 65 74 65
        64
   20BD 00                 5015 	.db 0x00
   20BE                    5016 __str_17:
   20BE 69 6E 76 61 6C 69  5017 	.ascii "invalid buffer number ,no deletion occured "
        64 20 62 75 66 66
        65 72 20 6E 75 6D
        62 65 72 20 2C 6E
        6F 20 64 65 6C 65
        74 69 6F 6E 20 6F
        63 63 75 72 65 64
        20
   20E9 00                 5018 	.db 0x00
   20EA                    5019 __str_18:
   20EA 0A                 5020 	.db 0x0A
   20EB 0D                 5021 	.db 0x0D
   20EC 20 77 65 20 68 61  5022 	.ascii " we have heap report for buffers"
        76 65 20 68 65 61
        70 20 72 65 70 6F
        72 74 20 66 6F 72
        20 62 75 66 66 65
        72 73
   210C 0A                 5023 	.db 0x0A
   210D 0D                 5024 	.db 0x0D
   210E 00                 5025 	.db 0x00
   210F                    5026 __str_19:
   210F 4E 75 6D 62 65 72  5027 	.ascii "Number of characters received since last '?' : %d "
        20 6F 66 20 63 68
        61 72 61 63 74 65
        72 73 20 72 65 63
        65 69 76 65 64 20
        73 69 6E 63 65 20
        6C 61 73 74 20 27
        3F 27 20 3A 20 25
        64 20
   2141 0A                 5028 	.db 0x0A
   2142 0D                 5029 	.db 0x0D
   2143 00                 5030 	.db 0x00
   2144                    5031 __str_20:
   2144 23 23 23 23 23 23  5032 	.ascii "############################################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
   2180 23 23 23 23 23 23  5033 	.ascii "###################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23
   21A3 0A                 5034 	.db 0x0A
   21A4 0D                 5035 	.db 0x0D
   21A5 00                 5036 	.db 0x00
   21A6                    5037 __str_21:
   21A6 20 20 2D 2D 2D 2D  5038 	.ascii "  -------------Report for Buffer0---------------------- "
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 52 65 70
        6F 72 74 20 66 6F
        72 20 42 75 66 66
        65 72 30 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        2D 20
   21DE 0A                 5039 	.db 0x0A
   21DF 0D                 5040 	.db 0x0D
   21E0 00                 5041 	.db 0x00
   21E1                    5042 __str_22:
   21E1 62 75 66 66 65 72  5043 	.ascii "buffer start address : %d "
        20 73 74 61 72 74
        20 61 64 64 72 65
        73 73 20 3A 20 25
        64 20
   21FB 0A                 5044 	.db 0x0A
   21FC 0D                 5045 	.db 0x0D
   21FD 20                 5046 	.ascii " "
   21FE 00                 5047 	.db 0x00
   21FF                    5048 __str_23:
   21FF 62 75 66 66 65 72  5049 	.ascii "buffer end address : %d "
        20 65 6E 64 20 61
        64 64 72 65 73 73
        20 3A 20 25 64 20
   2217 0A                 5050 	.db 0x0A
   2218 0D                 5051 	.db 0x0D
   2219 00                 5052 	.db 0x00
   221A                    5053 __str_24:
   221A 74 6F 74 61 6C 20  5054 	.ascii "total buffer size  : %d "
        62 75 66 66 65 72
        20 73 69 7A 65 20
        20 3A 20 25 64 20
   2232 0A                 5055 	.db 0x0A
   2233 0D                 5056 	.db 0x0D
   2234 00                 5057 	.db 0x00
   2235                    5058 __str_25:
   2235 20 6E 75 6D 62 65  5059 	.ascii " number of characters : %d "
        72 20 6F 66 20 63
        68 61 72 61 63 74
        65 72 73 20 3A 20
        25 64 20
   2250 0A                 5060 	.db 0x0A
   2251 0D                 5061 	.db 0x0D
   2252 00                 5062 	.db 0x00
   2253                    5063 __str_26:
   2253 20 6E 75 6D 62 65  5064 	.ascii " number of free spaces : %d "
        72 20 6F 66 20 66
        72 65 65 20 73 70
        61 63 65 73 20 3A
        20 25 64 20
   226F 0A                 5065 	.db 0x0A
   2270 0D                 5066 	.db 0x0D
   2271 00                 5067 	.db 0x00
   2272                    5068 __str_27:
   2272 23 23 23 23 23 23  5069 	.ascii "############################################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
   22AE 23 23 23 23 23 23  5070 	.ascii "################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23
   22CE 0A                 5071 	.db 0x0A
   22CF 0D                 5072 	.db 0x0D
   22D0 00                 5073 	.db 0x00
   22D1                    5074 __str_28:
   22D1 2D 2D 2D 2D 2D 2D  5075 	.ascii "------------------Report for Buffer1------------------"
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        52 65 70 6F 72 74
        20 66 6F 72 20 42
        75 66 66 65 72 31
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
   2307 0A                 5076 	.db 0x0A
   2308 0D                 5077 	.db 0x0D
   2309 00                 5078 	.db 0x00
   230A                    5079 __str_29:
   230A 23 23 23 23 23 23  5080 	.ascii "############################################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
   2346 23 23 23 23 23 23  5081 	.ascii "##################################"
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23 23 23
        23 23 23 23
   2368 0A                 5082 	.db 0x0A
   2369 0D                 5083 	.db 0x0D
   236A 00                 5084 	.db 0x00
   236B                    5085 __str_30:
   236B 63 68 61 72 61 63  5086 	.ascii "characters in buffer[0]"
        74 65 72 73 20 69
        6E 20 62 75 66 66
        65 72 5B 30 5D
   2382 0A                 5087 	.db 0x0A
   2383 0D                 5088 	.db 0x0D
   2384 00                 5089 	.db 0x00
   2385                    5090 __str_31:
   2385 25 63              5091 	.ascii "%c"
   2387 00                 5092 	.db 0x00
   2388                    5093 __str_32:
   2388 63 68 61 72 61 63  5094 	.ascii "characters in buffer[1]"
        74 65 72 73 20 69
        6E 20 62 75 66 66
        65 72 5B 31 5D
   239F 0A                 5095 	.db 0x0A
   23A0 0D                 5096 	.db 0x0D
   23A1 00                 5097 	.db 0x00
   23A2                    5098 __str_33:
   23A2 2D 2D 2D 2D 2D 2D  5099 	.ascii "------------------Report for other buffer %d----------------"
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        52 65 70 6F 72 74
        20 66 6F 72 20 6F
        74 68 65 72 20 62
        75 66 66 65 72 20
        25 64 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
        2D 2D 2D 2D 2D 2D
   23DE 2D                 5100 	.ascii "-"
   23DF 0A                 5101 	.db 0x0A
   23E0 0D                 5102 	.db 0x0D
   23E1 00                 5103 	.db 0x00
   23E2                    5104 __str_34:
   23E2 76 61 6C 75 65 73  5105 	.ascii "values are in hex"
        20 61 72 65 20 69
        6E 20 68 65 78
   23F3 0A                 5106 	.db 0x0A
   23F4 0D                 5107 	.db 0x0D
   23F5 00                 5108 	.db 0x00
   23F6                    5109 __str_35:
   23F6 30 78 25 78 3A     5110 	.ascii "0x%x:"
   23FB 00                 5111 	.db 0x00
   23FC                    5112 __str_36:
   23FC 25 78 20           5113 	.ascii "%x "
   23FF 00                 5114 	.db 0x00
   2400                    5115 __str_37:
   2400 30 78 25 78 3A 20  5116 	.ascii "0x%x: "
   2406 00                 5117 	.db 0x00
   2407                    5118 __str_38:
   2407 25 78 20 20        5119 	.ascii "%x  "
   240B 00                 5120 	.db 0x00
   240C                    5121 __str_39:
   240C 62 75 66 66 65 72  5122 	.ascii "buffer %d deleted "
        20 25 64 20 64 65
        6C 65 74 65 64 20
   241E 0A                 5123 	.db 0x0A
   241F 0D                 5124 	.db 0x0D
   2420 00                 5125 	.db 0x00
                           5126 	.area XINIT   (CODE)
