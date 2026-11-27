// 00602850 {closure#0}

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* craggemini_core[66f3c71560d70857]::server::normalize_thought_level::{closure#0} */

bool __rustcall
craggemini_core[66f3c71560d70857]::server::normalize_thought_level::_closure_0_(void)

{
  byte *pbVar1;
  byte *pbVar2;
  ulonglong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  undefined8 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  ushort *puVar61;
  ushort uVar62;
  ulonglong uVar63;
  uint *puVar64;
  ulonglong extraout_RDX;
  ulonglong uVar65;
  ulonglong uVar66;
  undefined1 uVar67;
  bool bVar68;
  undefined8 extraout_XMM0_Qa;
  byte bVar69;
  byte bVar70;
  byte bVar71;
  byte bVar72;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  byte bVar79;
  byte bVar80;
  byte bVar81;
  byte bVar82;
  byte bVar83;
  byte bVar84;
  byte bVar85;
  byte bVar86;
  byte bVar87;
  byte bVar88;
  byte bVar89;
  byte bVar90;
  byte bVar91;
  byte bVar92;
  byte bVar93;
  byte bVar94;
  byte bVar95;
  byte bVar96;
  byte bVar97;
  byte bVar98;
  byte bVar99;
  byte bVar100;
  byte bVar101;
  byte bVar102;
  byte bVar103;
  byte bVar104;
  byte bVar105;
  byte bVar106;
  byte bVar107;
  byte bVar108;
  
  ::<str>::trim_matches::<<char>::is_whitespace>();
  uVar67 = extraout_RDX == 0;
  uVar66 = extraout_RDX;
  uVar65 = extraout_RDX;
  if (-1 < (longlong)extraout_RDX) goto LAB_00602877;
  do {
    uVar67 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    uVar65 = uVar66;
LAB_00602877:
    if ((bool)uVar67) {
      return false;
    }
    uVar66 = uVar65;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar61 = (ushort *)(*(code *)PTR___rust_alloc_00799000)();
  } while (puVar61 == (ushort *)0x0);
  (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,extraout_RDX);
  bVar60 = UNK_0018483f;
  bVar59 = UNK_0018483e;
  bVar58 = UNK_0018483d;
  bVar57 = UNK_0018483c;
  bVar56 = UNK_0018483b;
  bVar55 = UNK_0018483a;
  bVar54 = UNK_00184839;
  bVar53 = UNK_00184838;
  bVar52 = UNK_00184837;
  bVar51 = UNK_00184836;
  bVar50 = UNK_00184835;
  bVar49 = UNK_00184834;
  bVar48 = UNK_00184833;
  bVar47 = UNK_00184832;
  bVar46 = UNK_00184831;
  bVar45 = DAT_00184830;
  auVar43 = _DAT_00183f60;
  bVar76 = UNK_0018303f;
  bVar75 = UNK_0018303e;
  bVar74 = UNK_0018303d;
  bVar73 = UNK_0018303c;
  bVar72 = UNK_0018303b;
  bVar71 = UNK_0018303a;
  bVar70 = UNK_00183039;
  bVar69 = UNK_00183038;
  bVar42 = UNK_00183037;
  bVar41 = UNK_00183036;
  bVar40 = UNK_00183035;
  bVar39 = UNK_00183034;
  bVar38 = UNK_00183033;
  bVar37 = UNK_00183032;
  bVar36 = UNK_00183031;
  bVar35 = DAT_00183030;
  if (uVar65 < 8) {
    uVar63 = 0;
  }
  else {
    if (uVar65 < 0x20) {
      uVar66 = 0;
LAB_00602968:
      uVar44 = s__001846a0._0_8_;
      auVar43 = _DAT_00184160;
      bVar42 = UNK_001840c7;
      bVar41 = UNK_001840c6;
      bVar40 = UNK_001840c5;
      bVar39 = UNK_001840c4;
      bVar38 = UNK_001840c3;
      bVar37 = UNK_001840c2;
      bVar36 = UNK_001840c1;
      bVar35 = DAT_001840c0;
      uVar63 = uVar65 & 0x7ffffffffffffff8;
      do {
        uVar3 = *(ulonglong *)((longlong)puVar61 + uVar66);
        bVar69 = (char)uVar3 + auVar43[0];
        bVar70 = (char)(uVar3 >> 8) + auVar43[1];
        bVar71 = (char)(uVar3 >> 0x10) + auVar43[2];
        bVar72 = (char)(uVar3 >> 0x18) + auVar43[3];
        bVar73 = (char)(uVar3 >> 0x20) + auVar43[4];
        bVar74 = (char)(uVar3 >> 0x28) + auVar43[5];
        bVar75 = (char)(uVar3 >> 0x30) + auVar43[6];
        bVar76 = (char)(uVar3 >> 0x38) + auVar43[7];
        *(ulonglong *)((longlong)puVar61 + uVar66) =
             ~CONCAT17(-((byte)((bVar76 < bVar42) * bVar42 | (bVar76 >= bVar42) * bVar76) == bVar76)
                       ,CONCAT16(-((byte)((bVar75 < bVar41) * bVar41 | (bVar75 >= bVar41) * bVar75)
                                  == bVar75),
                                 CONCAT15(-((byte)((bVar74 < bVar40) * bVar40 |
                                                  (bVar74 >= bVar40) * bVar74) == bVar74),
                                          CONCAT14(-((byte)((bVar73 < bVar39) * bVar39 |
                                                           (bVar73 >= bVar39) * bVar73) == bVar73),
                                                   CONCAT13(-((byte)((bVar72 < bVar38) * bVar38 |
                                                                    (bVar72 >= bVar38) * bVar72) ==
                                                             bVar72),CONCAT12(-((byte)((bVar71 < 
                                                  bVar37) * bVar37 | (bVar71 >= bVar37) * bVar71) ==
                                                  bVar71),CONCAT11(-((byte)((bVar70 < bVar36) *
                                                                            bVar36 | (bVar70 >=
                                                                                     bVar36) * 
                                                  bVar70) == bVar70),
                                                  -((byte)((bVar69 < bVar35) * bVar35 |
                                                          (bVar69 >= bVar35) * bVar69) == bVar69))))
                                                  )))) & uVar44 | uVar3;
        uVar66 = uVar66 + 8;
        if (uVar63 == uVar66) goto LAB_006029e1;
      } while( true );
    }
    uVar63 = uVar65 & 0x7fffffffffffffe0;
    uVar66 = 0;
    do {
      pbVar1 = (byte *)((longlong)puVar61 + uVar66);
      bVar4 = pbVar1[1];
      bVar5 = pbVar1[2];
      bVar6 = pbVar1[3];
      bVar7 = pbVar1[4];
      bVar8 = pbVar1[5];
      bVar9 = pbVar1[6];
      bVar10 = pbVar1[7];
      bVar11 = pbVar1[8];
      bVar12 = pbVar1[9];
      bVar13 = pbVar1[10];
      bVar14 = pbVar1[0xb];
      bVar15 = pbVar1[0xc];
      bVar16 = pbVar1[0xd];
      bVar17 = pbVar1[0xe];
      bVar18 = pbVar1[0xf];
      pbVar2 = (byte *)((longlong)puVar61 + uVar66 + 0x10);
      bVar19 = *pbVar2;
      bVar20 = pbVar2[1];
      bVar21 = pbVar2[2];
      bVar22 = pbVar2[3];
      bVar23 = pbVar2[4];
      bVar24 = pbVar2[5];
      bVar25 = pbVar2[6];
      bVar26 = pbVar2[7];
      bVar27 = pbVar2[8];
      bVar28 = pbVar2[9];
      bVar29 = pbVar2[10];
      bVar30 = pbVar2[0xb];
      bVar31 = pbVar2[0xc];
      bVar32 = pbVar2[0xd];
      bVar33 = pbVar2[0xe];
      bVar34 = pbVar2[0xf];
      bVar77 = *pbVar1 + auVar43[0];
      bVar78 = bVar4 + auVar43[1];
      bVar79 = bVar5 + auVar43[2];
      bVar80 = bVar6 + auVar43[3];
      bVar81 = bVar7 + auVar43[4];
      bVar82 = bVar8 + auVar43[5];
      bVar83 = bVar9 + auVar43[6];
      bVar84 = bVar10 + auVar43[7];
      bVar85 = bVar11 + auVar43[8];
      bVar86 = bVar12 + auVar43[9];
      bVar87 = bVar13 + auVar43[10];
      bVar88 = bVar14 + auVar43[0xb];
      bVar89 = bVar15 + auVar43[0xc];
      bVar90 = bVar16 + auVar43[0xd];
      bVar91 = bVar17 + auVar43[0xe];
      bVar92 = bVar18 + auVar43[0xf];
      bVar93 = bVar19 + auVar43[0];
      bVar94 = bVar20 + auVar43[1];
      bVar95 = bVar21 + auVar43[2];
      bVar96 = bVar22 + auVar43[3];
      bVar97 = bVar23 + auVar43[4];
      bVar98 = bVar24 + auVar43[5];
      bVar99 = bVar25 + auVar43[6];
      bVar100 = bVar26 + auVar43[7];
      bVar101 = bVar27 + auVar43[8];
      bVar102 = bVar28 + auVar43[9];
      bVar103 = bVar29 + auVar43[10];
      bVar104 = bVar30 + auVar43[0xb];
      bVar105 = bVar31 + auVar43[0xc];
      bVar106 = bVar32 + auVar43[0xd];
      bVar107 = bVar33 + auVar43[0xe];
      bVar108 = bVar34 + auVar43[0xf];
      pbVar2 = (byte *)((longlong)puVar61 + uVar66);
      *pbVar2 = -((byte)((bVar35 < bVar77) * bVar35 | (bVar35 >= bVar77) * bVar77) == bVar77) &
                bVar45 | *pbVar1;
      pbVar2[1] = -((byte)((bVar36 < bVar78) * bVar36 | (bVar36 >= bVar78) * bVar78) == bVar78) &
                  bVar46 | bVar4;
      pbVar2[2] = -((byte)((bVar37 < bVar79) * bVar37 | (bVar37 >= bVar79) * bVar79) == bVar79) &
                  bVar47 | bVar5;
      pbVar2[3] = -((byte)((bVar38 < bVar80) * bVar38 | (bVar38 >= bVar80) * bVar80) == bVar80) &
                  bVar48 | bVar6;
      pbVar2[4] = -((byte)((bVar39 < bVar81) * bVar39 | (bVar39 >= bVar81) * bVar81) == bVar81) &
                  bVar49 | bVar7;
      pbVar2[5] = -((byte)((bVar40 < bVar82) * bVar40 | (bVar40 >= bVar82) * bVar82) == bVar82) &
                  bVar50 | bVar8;
      pbVar2[6] = -((byte)((bVar41 < bVar83) * bVar41 | (bVar41 >= bVar83) * bVar83) == bVar83) &
                  bVar51 | bVar9;
      pbVar2[7] = -((byte)((bVar42 < bVar84) * bVar42 | (bVar42 >= bVar84) * bVar84) == bVar84) &
                  bVar52 | bVar10;
      pbVar2[8] = -((byte)((bVar69 < bVar85) * bVar69 | (bVar69 >= bVar85) * bVar85) == bVar85) &
                  bVar53 | bVar11;
      pbVar2[9] = -((byte)((bVar70 < bVar86) * bVar70 | (bVar70 >= bVar86) * bVar86) == bVar86) &
                  bVar54 | bVar12;
      pbVar2[10] = -((byte)((bVar71 < bVar87) * bVar71 | (bVar71 >= bVar87) * bVar87) == bVar87) &
                   bVar55 | bVar13;
      pbVar2[0xb] = -((byte)((bVar72 < bVar88) * bVar72 | (bVar72 >= bVar88) * bVar88) == bVar88) &
                    bVar56 | bVar14;
      pbVar2[0xc] = -((byte)((bVar73 < bVar89) * bVar73 | (bVar73 >= bVar89) * bVar89) == bVar89) &
                    bVar57 | bVar15;
      pbVar2[0xd] = -((byte)((bVar74 < bVar90) * bVar74 | (bVar74 >= bVar90) * bVar90) == bVar90) &
                    bVar58 | bVar16;
      pbVar2[0xe] = -((byte)((bVar75 < bVar91) * bVar75 | (bVar75 >= bVar91) * bVar91) == bVar91) &
                    bVar59 | bVar17;
      pbVar2[0xf] = -((byte)((bVar76 < bVar92) * bVar76 | (bVar76 >= bVar92) * bVar92) == bVar92) &
                    bVar60 | bVar18;
      pbVar1 = (byte *)((longlong)puVar61 + uVar66 + 0x10);
      *pbVar1 = -((byte)((bVar35 < bVar93) * bVar35 | (bVar35 >= bVar93) * bVar93) == bVar93) &
                bVar45 | bVar19;
      pbVar1[1] = -((byte)((bVar36 < bVar94) * bVar36 | (bVar36 >= bVar94) * bVar94) == bVar94) &
                  bVar46 | bVar20;
      pbVar1[2] = -((byte)((bVar37 < bVar95) * bVar37 | (bVar37 >= bVar95) * bVar95) == bVar95) &
                  bVar47 | bVar21;
      pbVar1[3] = -((byte)((bVar38 < bVar96) * bVar38 | (bVar38 >= bVar96) * bVar96) == bVar96) &
                  bVar48 | bVar22;
      pbVar1[4] = -((byte)((bVar39 < bVar97) * bVar39 | (bVar39 >= bVar97) * bVar97) == bVar97) &
                  bVar49 | bVar23;
      pbVar1[5] = -((byte)((bVar40 < bVar98) * bVar40 | (bVar40 >= bVar98) * bVar98) == bVar98) &
                  bVar50 | bVar24;
      pbVar1[6] = -((byte)((bVar41 < bVar99) * bVar41 | (bVar41 >= bVar99) * bVar99) == bVar99) &
                  bVar51 | bVar25;
      pbVar1[7] = -((byte)((bVar42 < bVar100) * bVar42 | (bVar42 >= bVar100) * bVar100) == bVar100)
                  & bVar52 | bVar26;
      pbVar1[8] = -((byte)((bVar69 < bVar101) * bVar69 | (bVar69 >= bVar101) * bVar101) == bVar101)
                  & bVar53 | bVar27;
      pbVar1[9] = -((byte)((bVar70 < bVar102) * bVar70 | (bVar70 >= bVar102) * bVar102) == bVar102)
                  & bVar54 | bVar28;
      pbVar1[10] = -((byte)((bVar71 < bVar103) * bVar71 | (bVar71 >= bVar103) * bVar103) == bVar103)
                   & bVar55 | bVar29;
      pbVar1[0xb] = -((byte)((bVar72 < bVar104) * bVar72 | (bVar72 >= bVar104) * bVar104) == bVar104
                     ) & bVar56 | bVar30;
      pbVar1[0xc] = -((byte)((bVar73 < bVar105) * bVar73 | (bVar73 >= bVar105) * bVar105) == bVar105
                     ) & bVar57 | bVar31;
      pbVar1[0xd] = -((byte)((bVar74 < bVar106) * bVar74 | (bVar74 >= bVar106) * bVar106) == bVar106
                     ) & bVar58 | bVar32;
      pbVar1[0xe] = -((byte)((bVar75 < bVar107) * bVar75 | (bVar75 >= bVar107) * bVar107) == bVar107
                     ) & bVar59 | bVar33;
      pbVar1[0xf] = -((byte)((bVar76 < bVar108) * bVar76 | (bVar76 >= bVar108) * bVar108) == bVar108
                     ) & bVar60 | bVar34;
      uVar66 = uVar66 + 0x20;
    } while (uVar63 != uVar66);
    if (uVar65 == uVar63) goto LAB_006029e6;
    uVar66 = uVar63;
    if ((uVar65 & 0x18) != 0) goto LAB_00602968;
  }
  do {
    *(byte *)((longlong)puVar61 + uVar63) =
         ((byte)(*(byte *)((longlong)puVar61 + uVar63) + 0xbf) < 0x1a) << 5 |
         *(byte *)((longlong)puVar61 + uVar63);
    uVar63 = uVar63 + 1;
LAB_006029e1:
  } while (uVar65 != uVar63);
LAB_006029e6:
  bVar68 = false;
  puVar64 = &switchD_006029ff::switchdataD_0019f6b4;
  switch(uVar65) {
  case 1:
    bVar68 = (char)*puVar61 == '0';
    break;
  case 3:
    uVar62 = (byte)puVar61[1] ^ 0x66 | *puVar61 ^ 0x666f;
    puVar64 = (uint *)(ulonglong)uVar62;
    bVar68 = uVar62 == 0;
    break;
  case 4:
    bVar68 = *(int *)puVar61 == 0x656e6f6e;
    break;
  case 8:
    bVar68 = *(longlong *)puVar61 == 0x64656c6261736964;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(puVar64,1);
  return bVar68;
}


