// 0047f2e0 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt,std[6c98fd8553dbae28]::hash::random::RandomState>>
::insert(undefined8 *param_1,undefined8 *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined1 auVar1 [16];
  undefined1 (*pauVar2) [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
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
  undefined1 uVar21;
  undefined1 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  longlong lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  bool bVar32;
  undefined *puVar33;
  ushort uVar34;
  int iVar35;
  uint uVar36;
  ulonglong uVar37;
  ulonglong uVar38;
  longlong lVar39;
  byte bVar40;
  uint uVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  byte bVar46;
  undefined1 auVar44 [16];
  longlong lVar45;
  undefined1 in_XMM2_Ba;
  char cVar47;
  undefined1 in_XMM2_Bb;
  char cVar48;
  undefined1 in_XMM2_Bc;
  char cVar49;
  undefined1 in_XMM2_Bd;
  char cVar50;
  undefined1 in_XMM2_Be;
  char cVar51;
  undefined1 in_XMM2_Bf;
  char cVar52;
  undefined1 in_XMM2_Bg;
  char cVar53;
  undefined1 in_XMM2_Bh;
  undefined1 in_XMM2_Bi;
  char cVar54;
  undefined1 in_XMM2_Bj;
  char cVar55;
  undefined1 in_XMM2_Bk;
  char cVar56;
  undefined1 in_XMM2_Bl;
  char cVar57;
  undefined1 in_XMM2_Bm;
  char cVar58;
  undefined1 in_XMM2_Bn;
  char cVar59;
  undefined1 in_XMM2_Bo;
  char cVar60;
  undefined1 in_XMM2_Bp;
  byte bVar61;
  undefined1 auVar62 [16];
  ulonglong local_f0;
  
  uVar37 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::acp_backend::SuspendedPrompt,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar33 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar40 = (byte)(uVar37 >> 0x38);
  bVar42 = bVar40 >> 1;
  auVar43 = ZEXT216(CONCAT11(bVar42,bVar42));
  auVar43 = pshuflw(auVar43,auVar43,0);
  lVar4 = param_3[2];
  bVar32 = false;
  iVar35 = -(uint)(CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) ==
                  CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))));
  cVar47 = (char)iVar35;
  cVar48 = (char)((uint)iVar35 >> 8);
  cVar49 = (char)((uint)iVar35 >> 0x10);
  cVar50 = (char)((uint)iVar35 >> 0x18);
  iVar35 = -(uint)(CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))) ==
                  CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))));
  cVar51 = (char)iVar35;
  cVar52 = (char)((uint)iVar35 >> 8);
  cVar53 = (char)((uint)iVar35 >> 0x10);
  bVar42 = (byte)((uint)iVar35 >> 0x18);
  iVar35 = -(uint)(CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))) ==
                  CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))));
  cVar54 = (char)iVar35;
  cVar55 = (char)((uint)iVar35 >> 8);
  cVar56 = (char)((uint)iVar35 >> 0x10);
  cVar57 = (char)((uint)iVar35 >> 0x18);
  iVar35 = -(uint)(CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))) ==
                  CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))));
  cVar58 = (char)iVar35;
  cVar59 = (char)((uint)iVar35 >> 8);
  cVar60 = (char)((uint)iVar35 >> 0x10);
  bVar61 = (byte)((uint)iVar35 >> 0x18);
  lVar39 = 0;
  do {
    uVar37 = uVar37 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar37);
    auVar44[0] = -(auVar1[0] == auVar43[0]);
    auVar44[1] = -(auVar1[1] == auVar43[1]);
    auVar44[2] = -(auVar1[2] == auVar43[2]);
    auVar44[3] = -(auVar1[3] == auVar43[3]);
    auVar44[4] = -(auVar1[4] == auVar43[4]);
    auVar44[5] = -(auVar1[5] == auVar43[5]);
    auVar44[6] = -(auVar1[6] == auVar43[6]);
    auVar44[7] = -(auVar1[7] == auVar43[7]);
    auVar44[8] = -(auVar1[8] == auVar43[0]);
    auVar44[9] = -(auVar1[9] == auVar43[1]);
    auVar44[10] = -(auVar1[10] == auVar43[2]);
    auVar44[0xb] = -(auVar1[0xb] == auVar43[3]);
    auVar44[0xc] = -(auVar1[0xc] == auVar43[4]);
    auVar44[0xd] = -(auVar1[0xd] == auVar43[5]);
    bVar46 = auVar1[0xf];
    auVar44[0xe] = -(auVar1[0xe] == auVar43[6]);
    auVar44[0xf] = -(bVar46 == auVar43[7]);
    uVar34 = (ushort)(SUB161(auVar44 >> 7,0) & 1) | (ushort)(SUB161(auVar44 >> 0xf,0) & 1) << 1 |
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
             (ushort)(SUB161(auVar44 >> 0x77,0) & 1) << 0xe | (ushort)(auVar44[0xf] >> 7) << 0xf;
    uVar41 = (uint)uVar34;
    if (uVar34 != 0) {
      do {
        uVar36 = 0;
        for (uVar6 = uVar41; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar36 = uVar36 + 1;
        }
        uVar38 = uVar36 + uVar37 & uVar3;
        if ((lVar4 == *(longlong *)pauVar2[uVar38 * -6 + -5]) &&
           (iVar35 = (*(code *)puVar33)(), iVar35 == 0)) {
          param_1[8] = *(undefined8 *)(pauVar2[uVar38 * -6 + -1] + 8);
          uVar5 = *(undefined8 *)(pauVar2[uVar38 * -6 + -5] + 8);
          uVar23 = *(undefined8 *)pauVar2[uVar38 * -6 + -4];
          uVar24 = *(undefined8 *)(pauVar2[uVar38 * -6 + -4] + 8);
          uVar25 = *(undefined8 *)pauVar2[uVar38 * -6 + -3];
          uVar26 = *(undefined8 *)(pauVar2[uVar38 * -6 + -3] + 8);
          uVar27 = *(undefined8 *)pauVar2[uVar38 * -6 + -2];
          uVar28 = *(undefined8 *)pauVar2[uVar38 * -6 + -1];
          param_1[6] = *(undefined8 *)(pauVar2[uVar38 * -6 + -2] + 8);
          param_1[7] = uVar28;
          param_1[4] = uVar26;
          param_1[5] = uVar27;
          param_1[2] = uVar24;
          param_1[3] = uVar25;
          *param_1 = uVar5;
          param_1[1] = uVar23;
          *(undefined8 *)(pauVar2[uVar38 * -6 + -1] + 8) = param_4[8];
          uVar5 = *param_4;
          uVar23 = param_4[1];
          uVar24 = param_4[2];
          uVar25 = param_4[3];
          uVar7 = *(undefined1 *)(param_4 + 4);
          uVar8 = *(undefined1 *)((longlong)param_4 + 0x21);
          uVar9 = *(undefined1 *)((longlong)param_4 + 0x22);
          uVar10 = *(undefined1 *)((longlong)param_4 + 0x23);
          uVar11 = *(undefined1 *)((longlong)param_4 + 0x24);
          uVar12 = *(undefined1 *)((longlong)param_4 + 0x25);
          uVar13 = *(undefined1 *)((longlong)param_4 + 0x26);
          uVar14 = *(undefined1 *)((longlong)param_4 + 0x27);
          uVar15 = *(undefined1 *)(param_4 + 5);
          uVar16 = *(undefined1 *)((longlong)param_4 + 0x29);
          uVar17 = *(undefined1 *)((longlong)param_4 + 0x2a);
          uVar18 = *(undefined1 *)((longlong)param_4 + 0x2b);
          uVar19 = *(undefined1 *)((longlong)param_4 + 0x2c);
          uVar20 = *(undefined1 *)((longlong)param_4 + 0x2d);
          uVar21 = *(undefined1 *)((longlong)param_4 + 0x2e);
          uVar22 = *(undefined1 *)((longlong)param_4 + 0x2f);
          uVar26 = param_4[7];
          *(undefined8 *)(pauVar2[uVar38 * -6 + -2] + 8) = param_4[6];
          *(undefined8 *)pauVar2[uVar38 * -6 + -1] = uVar26;
          pauVar2[uVar38 * -6 + -3][8] = uVar7;
          pauVar2[uVar38 * -6 + -3][9] = uVar8;
          pauVar2[uVar38 * -6 + -3][10] = uVar9;
          pauVar2[uVar38 * -6 + -3][0xb] = uVar10;
          pauVar2[uVar38 * -6 + -3][0xc] = uVar11;
          pauVar2[uVar38 * -6 + -3][0xd] = uVar12;
          pauVar2[uVar38 * -6 + -3][0xe] = uVar13;
          pauVar2[uVar38 * -6 + -3][0xf] = uVar14;
          pauVar2[uVar38 * -6 + -2][0] = uVar15;
          pauVar2[uVar38 * -6 + -2][1] = uVar16;
          pauVar2[uVar38 * -6 + -2][2] = uVar17;
          pauVar2[uVar38 * -6 + -2][3] = uVar18;
          pauVar2[uVar38 * -6 + -2][4] = uVar19;
          pauVar2[uVar38 * -6 + -2][5] = uVar20;
          pauVar2[uVar38 * -6 + -2][6] = uVar21;
          pauVar2[uVar38 * -6 + -2][7] = uVar22;
          *(undefined8 *)(pauVar2[uVar38 * -6 + -4] + 8) = uVar24;
          *(undefined8 *)pauVar2[uVar38 * -6 + -3] = uVar25;
          *(undefined8 *)(pauVar2[uVar38 * -6 + -5] + 8) = uVar5;
          *(undefined8 *)pauVar2[uVar38 * -6 + -4] = uVar23;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
          return param_1;
        }
        uVar34 = (ushort)(uVar41 - 1) & (ushort)uVar41;
        uVar41 = CONCAT22((short)(uVar41 - 1 >> 0x10),uVar34);
        iVar35 = -(uint)(CONCAT13(cVar50,CONCAT12(cVar49,CONCAT11(cVar48,cVar47))) ==
                        CONCAT13(cVar50,CONCAT12(cVar49,CONCAT11(cVar48,cVar47))));
        cVar47 = (char)iVar35;
        cVar48 = (char)((uint)iVar35 >> 8);
        cVar49 = (char)((uint)iVar35 >> 0x10);
        cVar50 = (char)((uint)iVar35 >> 0x18);
        iVar35 = -(uint)(CONCAT13(bVar42,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))) ==
                        CONCAT13(bVar42,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))));
        cVar51 = (char)iVar35;
        cVar52 = (char)((uint)iVar35 >> 8);
        cVar53 = (char)((uint)iVar35 >> 0x10);
        bVar42 = (byte)((uint)iVar35 >> 0x18);
        iVar35 = -(uint)(CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar54))) ==
                        CONCAT13(cVar57,CONCAT12(cVar56,CONCAT11(cVar55,cVar54))));
        cVar54 = (char)iVar35;
        cVar55 = (char)((uint)iVar35 >> 8);
        cVar56 = (char)((uint)iVar35 >> 0x10);
        cVar57 = (char)((uint)iVar35 >> 0x18);
        iVar35 = -(uint)(CONCAT13(bVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58))) ==
                        CONCAT13(bVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58))));
        cVar58 = (char)iVar35;
        cVar59 = (char)((uint)iVar35 >> 8);
        cVar60 = (char)((uint)iVar35 >> 0x10);
        bVar61 = (byte)((uint)iVar35 >> 0x18);
      } while (uVar34 != 0);
    }
    if (bVar32) {
LAB_0047f44e:
      auVar62[0] = -(auVar1[0] == cVar47);
      auVar62[1] = -(auVar1[1] == cVar48);
      auVar62[2] = -(auVar1[2] == cVar49);
      auVar62[3] = -(auVar1[3] == cVar50);
      auVar62[4] = -(auVar1[4] == cVar51);
      auVar62[5] = -(auVar1[5] == cVar52);
      auVar62[6] = -(auVar1[6] == cVar53);
      auVar62[7] = -(auVar1[7] == bVar42);
      auVar62[8] = -(auVar1[8] == cVar54);
      auVar62[9] = -(auVar1[9] == cVar55);
      auVar62[10] = -(auVar1[10] == cVar56);
      auVar62[0xb] = -(auVar1[0xb] == cVar57);
      auVar62[0xc] = -(auVar1[0xc] == cVar58);
      auVar62[0xd] = -(auVar1[0xd] == cVar59);
      auVar62[0xe] = -(auVar1[0xe] == cVar60);
      auVar62[0xf] = -(bVar46 == bVar61);
      if ((((((((((((((((SUB161(auVar62 >> 7,0) & 1) != 0 || (SUB161(auVar62 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar62 >> 0x17,0) & 1) != 0) || (SUB161(auVar62 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar62 >> 0x27,0) & 1) != 0) || (SUB161(auVar62 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar62 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar62 >> 0x3f,0) & 1) != 0) || (SUB161(auVar62 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar62 >> 0x4f,0) & 1) != 0) || (SUB161(auVar62 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar62 >> 0x5f,0) & 1) != 0) || (SUB161(auVar62 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar62 >> 0x6f,0) & 1) != 0) || (SUB161(auVar62 >> 0x77,0) & 1) != 0) ||
          auVar62[0xf] < '\0') {
        bVar42 = (*pauVar2)[local_f0];
        if (-1 < (char)bVar42) {
          auVar43 = *pauVar2;
          uVar41 = 0;
          for (uVar36 = (uint)(ushort)((ushort)(SUB161(auVar43 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar43 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar43 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar43 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar43 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar43 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar43 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar43 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar43 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar43 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar43 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar43 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar43 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar43 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar43 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar43[0xf] >> 7) << 0xf); (uVar36 & 1) == 0;
              uVar36 = uVar36 >> 1 | 0x80000000) {
            uVar41 = uVar41 + 1;
          }
          local_f0 = (ulonglong)uVar41;
          bVar42 = (*pauVar2)[local_f0];
        }
        lVar4 = param_3[2];
        lVar39 = *param_3;
        lVar29 = param_3[1];
        uVar23 = *param_4;
        uVar24 = param_4[1];
        uVar25 = param_4[2];
        uVar26 = param_4[3];
        uVar27 = param_4[4];
        uVar28 = param_4[5];
        uVar30 = param_4[6];
        uVar31 = param_4[7];
        uVar5 = param_4[8];
        bVar40 = bVar40 >> 1;
        (*pauVar2)[local_f0] = bVar40;
        pauVar2[1][local_f0 - 0x10 & uVar3] = bVar40;
        lVar45 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar42 & 1);
        param_2[3] = lVar45;
        *(undefined8 *)pauVar2[local_f0 * -6 + -1] = uVar31;
        *(undefined8 *)(pauVar2[local_f0 * -6 + -1] + 8) = uVar5;
        *(undefined8 *)pauVar2[local_f0 * -6 + -2] = uVar28;
        *(undefined8 *)(pauVar2[local_f0 * -6 + -2] + 8) = uVar30;
        *(undefined8 *)pauVar2[local_f0 * -6 + -3] = uVar26;
        *(undefined8 *)(pauVar2[local_f0 * -6 + -3] + 8) = uVar27;
        *(undefined8 *)pauVar2[local_f0 * -6 + -4] = uVar24;
        *(undefined8 *)(pauVar2[local_f0 * -6 + -4] + 8) = uVar25;
        *(longlong *)pauVar2[local_f0 * -6 + -5] = lVar4;
        *(undefined8 *)(pauVar2[local_f0 * -6 + -5] + 8) = uVar23;
        *(longlong *)pauVar2[local_f0 * -6 + -6] = lVar39;
        *(longlong *)(pauVar2[local_f0 * -6 + -6] + 8) = lVar29;
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar32 = true;
    }
    else {
      uVar34 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar46 >> 7) << 0xf;
      if (uVar34 != 0) {
        uVar41 = 0;
        for (uVar36 = (uint)uVar34; (uVar36 & 1) == 0; uVar36 = uVar36 >> 1 | 0x80000000) {
          uVar41 = uVar41 + 1;
        }
        local_f0 = uVar41 + uVar37 & uVar3;
        goto LAB_0047f44e;
      }
      bVar32 = false;
    }
    uVar37 = uVar37 + lVar39 + 0x10;
    lVar39 = lVar39 + 0x10;
  } while( true );
}


