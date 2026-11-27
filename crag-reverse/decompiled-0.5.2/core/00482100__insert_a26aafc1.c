// 00482100 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   (alloc[12e961f32105355]::string::String, alloc[12e961f32105355]::string::String),
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,longlong *param_4)

{
  longlong *plVar1;
  undefined1 auVar2 [16];
  undefined1 (*pauVar3) [16];
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  bool bVar32;
  longlong lVar33;
  undefined *puVar34;
  ushort uVar35;
  int iVar36;
  uint uVar37;
  ulonglong uVar38;
  ulonglong uVar39;
  byte bVar40;
  longlong lVar41;
  uint uVar42;
  byte bVar43;
  undefined1 auVar44 [16];
  byte bVar46;
  undefined1 auVar45 [16];
  longlong lVar47;
  undefined1 in_XMM2_Ba;
  char cVar48;
  undefined1 in_XMM2_Bb;
  char cVar49;
  undefined1 in_XMM2_Bc;
  char cVar50;
  undefined1 in_XMM2_Bd;
  char cVar51;
  undefined1 in_XMM2_Be;
  char cVar52;
  undefined1 in_XMM2_Bf;
  char cVar53;
  undefined1 in_XMM2_Bg;
  char cVar54;
  undefined1 in_XMM2_Bh;
  undefined1 in_XMM2_Bi;
  char cVar55;
  undefined1 in_XMM2_Bj;
  char cVar56;
  undefined1 in_XMM2_Bk;
  char cVar57;
  undefined1 in_XMM2_Bl;
  char cVar58;
  undefined1 in_XMM2_Bm;
  char cVar59;
  undefined1 in_XMM2_Bn;
  char cVar60;
  undefined1 in_XMM2_Bo;
  char cVar61;
  undefined1 in_XMM2_Bp;
  byte bVar62;
  undefined1 auVar63 [16];
  ulonglong local_e0;
  
  uVar38 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String))>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar34 = PTR_bcmp_00799020;
  pauVar3 = (undefined1 (*) [16])*param_2;
  uVar4 = param_2[1];
  bVar40 = (byte)(uVar38 >> 0x38);
  bVar43 = bVar40 >> 1;
  auVar44 = ZEXT216(CONCAT11(bVar43,bVar43));
  auVar44 = pshuflw(auVar44,auVar44,0);
  lVar5 = param_3[2];
  bVar32 = false;
  iVar36 = -(uint)(CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) ==
                  CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))));
  cVar48 = (char)iVar36;
  cVar49 = (char)((uint)iVar36 >> 8);
  cVar50 = (char)((uint)iVar36 >> 0x10);
  cVar51 = (char)((uint)iVar36 >> 0x18);
  iVar36 = -(uint)(CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))) ==
                  CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))));
  cVar52 = (char)iVar36;
  cVar53 = (char)((uint)iVar36 >> 8);
  cVar54 = (char)((uint)iVar36 >> 0x10);
  bVar43 = (byte)((uint)iVar36 >> 0x18);
  iVar36 = -(uint)(CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))) ==
                  CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))));
  cVar55 = (char)iVar36;
  cVar56 = (char)((uint)iVar36 >> 8);
  cVar57 = (char)((uint)iVar36 >> 0x10);
  cVar58 = (char)((uint)iVar36 >> 0x18);
  iVar36 = -(uint)(CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))) ==
                  CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))));
  cVar59 = (char)iVar36;
  cVar60 = (char)((uint)iVar36 >> 8);
  cVar61 = (char)((uint)iVar36 >> 0x10);
  bVar62 = (byte)((uint)iVar36 >> 0x18);
  lVar41 = 0;
  do {
    uVar38 = uVar38 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar38);
    auVar45[0] = -(auVar2[0] == auVar44[0]);
    auVar45[1] = -(auVar2[1] == auVar44[1]);
    auVar45[2] = -(auVar2[2] == auVar44[2]);
    auVar45[3] = -(auVar2[3] == auVar44[3]);
    auVar45[4] = -(auVar2[4] == auVar44[4]);
    auVar45[5] = -(auVar2[5] == auVar44[5]);
    auVar45[6] = -(auVar2[6] == auVar44[6]);
    auVar45[7] = -(auVar2[7] == auVar44[7]);
    auVar45[8] = -(auVar2[8] == auVar44[0]);
    auVar45[9] = -(auVar2[9] == auVar44[1]);
    auVar45[10] = -(auVar2[10] == auVar44[2]);
    auVar45[0xb] = -(auVar2[0xb] == auVar44[3]);
    auVar45[0xc] = -(auVar2[0xc] == auVar44[4]);
    auVar45[0xd] = -(auVar2[0xd] == auVar44[5]);
    bVar46 = auVar2[0xf];
    auVar45[0xe] = -(auVar2[0xe] == auVar44[6]);
    auVar45[0xf] = -(bVar46 == auVar44[7]);
    uVar35 = (ushort)(SUB161(auVar45 >> 7,0) & 1) | (ushort)(SUB161(auVar45 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar45 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar45 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar45 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar45 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar45 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar45 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar45 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar45 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar45 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar45 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar45 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar45 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar45 >> 0x77,0) & 1) << 0xe | (ushort)(auVar45[0xf] >> 7) << 0xf;
    uVar42 = (uint)uVar35;
    if (uVar35 != 0) {
      do {
        uVar37 = 0;
        for (uVar6 = uVar42; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar37 = uVar37 + 1;
        }
        uVar39 = uVar37 + uVar38 & uVar4;
        if ((lVar5 == *(longlong *)((longlong)pauVar3 + uVar39 * -0x48 + -0x38)) &&
           (iVar36 = (*(code *)puVar34)(), iVar36 == 0)) {
          uVar21 = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -0x30);
          uVar22 = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -0x28);
          uVar23 = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -0x20);
          uVar24 = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -0x18);
          uVar25 = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -8);
          param_1[4] = *(undefined8 *)((longlong)pauVar3 + uVar39 * -0x48 + -0x10);
          param_1[5] = uVar25;
          param_1[2] = uVar23;
          param_1[3] = uVar24;
          *param_1 = uVar21;
          param_1[1] = uVar22;
          lVar5 = *param_4;
          lVar41 = param_4[1];
          lVar26 = param_4[2];
          lVar27 = param_4[3];
          uVar7 = *(undefined1 *)((longlong)param_4 + 0x21);
          uVar8 = *(undefined1 *)((longlong)param_4 + 0x22);
          uVar9 = *(undefined1 *)((longlong)param_4 + 0x23);
          uVar10 = *(undefined1 *)((longlong)param_4 + 0x24);
          uVar11 = *(undefined1 *)((longlong)param_4 + 0x25);
          uVar12 = *(undefined1 *)((longlong)param_4 + 0x26);
          uVar13 = *(undefined1 *)((longlong)param_4 + 0x27);
          lVar33 = param_4[5];
          uVar14 = *(undefined1 *)((longlong)param_4 + 0x29);
          uVar15 = *(undefined1 *)((longlong)param_4 + 0x2a);
          uVar16 = *(undefined1 *)((longlong)param_4 + 0x2b);
          uVar17 = *(undefined1 *)((longlong)param_4 + 0x2c);
          uVar18 = *(undefined1 *)((longlong)param_4 + 0x2d);
          uVar19 = *(undefined1 *)((longlong)param_4 + 0x2e);
          uVar20 = *(undefined1 *)((longlong)param_4 + 0x2f);
          *(char *)((longlong)pauVar3 + uVar39 * -0x48 + -0x10) = (char)param_4[4];
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -0xf) = uVar7;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -0xe) = uVar8;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -0xd) = uVar9;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -0xc) = uVar10;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -0xb) = uVar11;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -10) = uVar12;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -9) = uVar13;
          *(char *)((longlong)pauVar3 + uVar39 * -0x48 + -8) = (char)lVar33;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -7) = uVar14;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -6) = uVar15;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -5) = uVar16;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -4) = uVar17;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -3) = uVar18;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -2) = uVar19;
          *(undefined1 *)((longlong)pauVar3 + uVar39 * -0x48 + -1) = uVar20;
          *(longlong *)((longlong)pauVar3 + uVar39 * -0x48 + -0x20) = lVar26;
          *(longlong *)((longlong)pauVar3 + uVar39 * -0x48 + -0x18) = lVar27;
          *(longlong *)((longlong)pauVar3 + uVar39 * -0x48 + -0x30) = lVar5;
          *(longlong *)((longlong)pauVar3 + uVar39 * -0x48 + -0x28) = lVar41;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)();
          return param_1;
        }
        uVar35 = (ushort)(uVar42 - 1) & (ushort)uVar42;
        uVar42 = CONCAT22((short)(uVar42 - 1 >> 0x10),uVar35);
        iVar36 = -(uint)(CONCAT13(cVar51,CONCAT12(cVar50,CONCAT11(cVar49,cVar48))) ==
                        CONCAT13(cVar51,CONCAT12(cVar50,CONCAT11(cVar49,cVar48))));
        cVar48 = (char)iVar36;
        cVar49 = (char)((uint)iVar36 >> 8);
        cVar50 = (char)((uint)iVar36 >> 0x10);
        cVar51 = (char)((uint)iVar36 >> 0x18);
        iVar36 = -(uint)(CONCAT13(bVar43,CONCAT12(cVar54,CONCAT11(cVar53,cVar52))) ==
                        CONCAT13(bVar43,CONCAT12(cVar54,CONCAT11(cVar53,cVar52))));
        cVar52 = (char)iVar36;
        cVar53 = (char)((uint)iVar36 >> 8);
        cVar54 = (char)((uint)iVar36 >> 0x10);
        bVar43 = (byte)((uint)iVar36 >> 0x18);
        iVar36 = -(uint)(CONCAT13(cVar58,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))) ==
                        CONCAT13(cVar58,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))));
        cVar55 = (char)iVar36;
        cVar56 = (char)((uint)iVar36 >> 8);
        cVar57 = (char)((uint)iVar36 >> 0x10);
        cVar58 = (char)((uint)iVar36 >> 0x18);
        iVar36 = -(uint)(CONCAT13(bVar62,CONCAT12(cVar61,CONCAT11(cVar60,cVar59))) ==
                        CONCAT13(bVar62,CONCAT12(cVar61,CONCAT11(cVar60,cVar59))));
        cVar59 = (char)iVar36;
        cVar60 = (char)((uint)iVar36 >> 8);
        cVar61 = (char)((uint)iVar36 >> 0x10);
        bVar62 = (byte)((uint)iVar36 >> 0x18);
      } while (uVar35 != 0);
    }
    if (bVar32) {
LAB_0048226d:
      auVar63[0] = -(auVar2[0] == cVar48);
      auVar63[1] = -(auVar2[1] == cVar49);
      auVar63[2] = -(auVar2[2] == cVar50);
      auVar63[3] = -(auVar2[3] == cVar51);
      auVar63[4] = -(auVar2[4] == cVar52);
      auVar63[5] = -(auVar2[5] == cVar53);
      auVar63[6] = -(auVar2[6] == cVar54);
      auVar63[7] = -(auVar2[7] == bVar43);
      auVar63[8] = -(auVar2[8] == cVar55);
      auVar63[9] = -(auVar2[9] == cVar56);
      auVar63[10] = -(auVar2[10] == cVar57);
      auVar63[0xb] = -(auVar2[0xb] == cVar58);
      auVar63[0xc] = -(auVar2[0xc] == cVar59);
      auVar63[0xd] = -(auVar2[0xd] == cVar60);
      auVar63[0xe] = -(auVar2[0xe] == cVar61);
      auVar63[0xf] = -(bVar46 == bVar62);
      if ((((((((((((((((SUB161(auVar63 >> 7,0) & 1) != 0 || (SUB161(auVar63 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar63 >> 0x17,0) & 1) != 0) || (SUB161(auVar63 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar63 >> 0x27,0) & 1) != 0) || (SUB161(auVar63 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar63 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar63 >> 0x3f,0) & 1) != 0) || (SUB161(auVar63 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar63 >> 0x4f,0) & 1) != 0) || (SUB161(auVar63 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar63 >> 0x5f,0) & 1) != 0) || (SUB161(auVar63 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar63 >> 0x6f,0) & 1) != 0) || (SUB161(auVar63 >> 0x77,0) & 1) != 0) ||
          auVar63[0xf] < '\0') {
        bVar43 = (*pauVar3)[local_e0];
        if (-1 < (char)bVar43) {
          auVar44 = *pauVar3;
          uVar42 = 0;
          for (uVar37 = (uint)(ushort)((ushort)(SUB161(auVar44 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar44 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar44 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar44 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar44 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar44 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar44 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar44 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar44 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar44 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar44 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar44 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar44 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar44[0xf] >> 7) << 0xf); (uVar37 & 1) == 0;
              uVar37 = uVar37 >> 1 | 0x80000000) {
            uVar42 = uVar42 + 1;
          }
          local_e0 = (ulonglong)uVar42;
          bVar43 = (*pauVar3)[local_e0];
        }
        lVar5 = param_3[2];
        lVar41 = *param_3;
        lVar26 = param_3[1];
        lVar27 = *param_4;
        lVar33 = param_4[1];
        lVar28 = param_4[2];
        lVar29 = param_4[3];
        lVar30 = param_4[4];
        lVar31 = param_4[5];
        bVar40 = bVar40 >> 1;
        (*pauVar3)[local_e0] = bVar40;
        pauVar3[1][local_e0 - 0x10 & uVar4] = bVar40;
        lVar47 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar43 & 1);
        param_2[3] = lVar47;
        *(longlong *)((longlong)pauVar3 + local_e0 * -0x48 + -8) = lVar31;
        plVar1 = (longlong *)((longlong)pauVar3 + local_e0 * -0x48 + -0x18);
        *plVar1 = lVar29;
        plVar1[1] = lVar30;
        plVar1 = (longlong *)((longlong)pauVar3 + local_e0 * -0x48 + -0x28);
        *plVar1 = lVar33;
        plVar1[1] = lVar28;
        plVar1 = (longlong *)((longlong)pauVar3 + local_e0 * -0x48 + -0x38);
        *plVar1 = lVar5;
        plVar1[1] = lVar27;
        plVar1 = (longlong *)((longlong)pauVar3 + local_e0 * -0x48 + -0x48);
        *plVar1 = lVar41;
        plVar1[1] = lVar26;
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar32 = true;
    }
    else {
      uVar35 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar46 >> 7) << 0xf;
      if (uVar35 != 0) {
        uVar42 = 0;
        for (uVar37 = (uint)uVar35; (uVar37 & 1) == 0; uVar37 = uVar37 >> 1 | 0x80000000) {
          uVar42 = uVar42 + 1;
        }
        local_e0 = uVar42 + uVar38 & uVar4;
        goto LAB_0048226d;
      }
      bVar32 = false;
    }
    uVar38 = uVar38 + lVar41 + 0x10;
    lVar41 = lVar41 + 0x10;
  } while( true );
}


