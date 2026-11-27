// 00480370 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  bool bVar36;
  undefined *puVar37;
  ushort uVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  ulonglong uVar42;
  uint uVar43;
  byte bVar44;
  longlong lVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  byte bVar49;
  undefined1 auVar48 [16];
  longlong lVar50;
  undefined1 in_XMM2_Ba;
  char cVar51;
  undefined1 in_XMM2_Bb;
  char cVar52;
  undefined1 in_XMM2_Bc;
  char cVar53;
  undefined1 in_XMM2_Bd;
  char cVar54;
  undefined1 in_XMM2_Be;
  char cVar55;
  undefined1 in_XMM2_Bf;
  char cVar56;
  undefined1 in_XMM2_Bg;
  char cVar57;
  undefined1 in_XMM2_Bh;
  undefined1 in_XMM2_Bi;
  char cVar58;
  undefined1 in_XMM2_Bj;
  char cVar59;
  undefined1 in_XMM2_Bk;
  char cVar60;
  undefined1 in_XMM2_Bl;
  char cVar61;
  undefined1 in_XMM2_Bm;
  char cVar62;
  undefined1 in_XMM2_Bn;
  char cVar63;
  undefined1 in_XMM2_Bo;
  char cVar64;
  undefined1 in_XMM2_Bp;
  byte bVar65;
  undefined1 auVar66 [16];
  ulonglong local_118;
  
  uVar41 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::pool::AccountCooldownRecord,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar37 = PTR_bcmp_00799020;
  pauVar2 = (undefined1 (*) [16])*param_2;
  uVar3 = param_2[1];
  bVar44 = (byte)(uVar41 >> 0x38);
  bVar46 = bVar44 >> 1;
  auVar47 = ZEXT216(CONCAT11(bVar46,bVar46));
  auVar47 = pshuflw(auVar47,auVar47,0);
  lVar4 = param_3[2];
  bVar36 = false;
  iVar39 = -(uint)(CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))) ==
                  CONCAT13(in_XMM2_Bd,CONCAT12(in_XMM2_Bc,CONCAT11(in_XMM2_Bb,in_XMM2_Ba))));
  cVar51 = (char)iVar39;
  cVar52 = (char)((uint)iVar39 >> 8);
  cVar53 = (char)((uint)iVar39 >> 0x10);
  cVar54 = (char)((uint)iVar39 >> 0x18);
  iVar39 = -(uint)(CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))) ==
                  CONCAT13(in_XMM2_Bh,CONCAT12(in_XMM2_Bg,CONCAT11(in_XMM2_Bf,in_XMM2_Be))));
  cVar55 = (char)iVar39;
  cVar56 = (char)((uint)iVar39 >> 8);
  cVar57 = (char)((uint)iVar39 >> 0x10);
  bVar46 = (byte)((uint)iVar39 >> 0x18);
  iVar39 = -(uint)(CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))) ==
                  CONCAT13(in_XMM2_Bl,CONCAT12(in_XMM2_Bk,CONCAT11(in_XMM2_Bj,in_XMM2_Bi))));
  cVar58 = (char)iVar39;
  cVar59 = (char)((uint)iVar39 >> 8);
  cVar60 = (char)((uint)iVar39 >> 0x10);
  cVar61 = (char)((uint)iVar39 >> 0x18);
  iVar39 = -(uint)(CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))) ==
                  CONCAT13(in_XMM2_Bp,CONCAT12(in_XMM2_Bo,CONCAT11(in_XMM2_Bn,in_XMM2_Bm))));
  cVar62 = (char)iVar39;
  cVar63 = (char)((uint)iVar39 >> 8);
  cVar64 = (char)((uint)iVar39 >> 0x10);
  bVar65 = (byte)((uint)iVar39 >> 0x18);
  lVar45 = 0;
  do {
    uVar41 = uVar41 & uVar3;
    auVar1 = *(undefined1 (*) [16])(*pauVar2 + uVar41);
    auVar48[0] = -(auVar1[0] == auVar47[0]);
    auVar48[1] = -(auVar1[1] == auVar47[1]);
    auVar48[2] = -(auVar1[2] == auVar47[2]);
    auVar48[3] = -(auVar1[3] == auVar47[3]);
    auVar48[4] = -(auVar1[4] == auVar47[4]);
    auVar48[5] = -(auVar1[5] == auVar47[5]);
    auVar48[6] = -(auVar1[6] == auVar47[6]);
    auVar48[7] = -(auVar1[7] == auVar47[7]);
    auVar48[8] = -(auVar1[8] == auVar47[0]);
    auVar48[9] = -(auVar1[9] == auVar47[1]);
    auVar48[10] = -(auVar1[10] == auVar47[2]);
    auVar48[0xb] = -(auVar1[0xb] == auVar47[3]);
    auVar48[0xc] = -(auVar1[0xc] == auVar47[4]);
    auVar48[0xd] = -(auVar1[0xd] == auVar47[5]);
    bVar49 = auVar1[0xf];
    auVar48[0xe] = -(auVar1[0xe] == auVar47[6]);
    auVar48[0xf] = -(bVar49 == auVar47[7]);
    uVar38 = (ushort)(SUB161(auVar48 >> 7,0) & 1) | (ushort)(SUB161(auVar48 >> 0xf,0) & 1) << 1 |
             (ushort)(SUB161(auVar48 >> 0x17,0) & 1) << 2 |
             (ushort)(SUB161(auVar48 >> 0x1f,0) & 1) << 3 |
             (ushort)(SUB161(auVar48 >> 0x27,0) & 1) << 4 |
             (ushort)(SUB161(auVar48 >> 0x2f,0) & 1) << 5 |
             (ushort)(SUB161(auVar48 >> 0x37,0) & 1) << 6 |
             (ushort)(SUB161(auVar48 >> 0x3f,0) & 1) << 7 |
             (ushort)(SUB161(auVar48 >> 0x47,0) & 1) << 8 |
             (ushort)(SUB161(auVar48 >> 0x4f,0) & 1) << 9 |
             (ushort)(SUB161(auVar48 >> 0x57,0) & 1) << 10 |
             (ushort)(SUB161(auVar48 >> 0x5f,0) & 1) << 0xb |
             (ushort)(SUB161(auVar48 >> 0x67,0) & 1) << 0xc |
             (ushort)(SUB161(auVar48 >> 0x6f,0) & 1) << 0xd |
             (ushort)(SUB161(auVar48 >> 0x77,0) & 1) << 0xe | (ushort)(auVar48[0xf] >> 7) << 0xf;
    uVar43 = (uint)uVar38;
    if (uVar38 != 0) {
      do {
        uVar40 = 0;
        for (uVar6 = uVar43; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        uVar42 = uVar40 + uVar41 & uVar3;
        if ((lVar4 == *(longlong *)pauVar2[uVar42 * -8 + -7]) &&
           (iVar39 = (*(code *)puVar37)(), iVar39 == 0)) {
          param_1[0xc] = *(undefined8 *)(pauVar2[uVar42 * -8 + -1] + 8);
          uVar5 = *(undefined8 *)pauVar2[uVar42 * -8 + -1];
          param_1[10] = *(undefined8 *)(pauVar2[uVar42 * -8 + -2] + 8);
          param_1[0xb] = uVar5;
          uVar5 = *(undefined8 *)pauVar2[uVar42 * -8 + -2];
          param_1[8] = *(undefined8 *)(pauVar2[uVar42 * -8 + -3] + 8);
          param_1[9] = uVar5;
          uVar5 = *(undefined8 *)(pauVar2[uVar42 * -8 + -7] + 8);
          uVar23 = *(undefined8 *)pauVar2[uVar42 * -8 + -6];
          uVar24 = *(undefined8 *)(pauVar2[uVar42 * -8 + -6] + 8);
          uVar25 = *(undefined8 *)pauVar2[uVar42 * -8 + -5];
          uVar26 = *(undefined8 *)(pauVar2[uVar42 * -8 + -5] + 8);
          uVar27 = *(undefined8 *)pauVar2[uVar42 * -8 + -4];
          uVar28 = *(undefined8 *)pauVar2[uVar42 * -8 + -3];
          param_1[6] = *(undefined8 *)(pauVar2[uVar42 * -8 + -4] + 8);
          param_1[7] = uVar28;
          param_1[4] = uVar26;
          param_1[5] = uVar27;
          param_1[2] = uVar24;
          param_1[3] = uVar25;
          *param_1 = uVar5;
          param_1[1] = uVar23;
          *(undefined8 *)(pauVar2[uVar42 * -8 + -1] + 8) = param_4[0xc];
          uVar5 = param_4[0xb];
          *(undefined8 *)(pauVar2[uVar42 * -8 + -2] + 8) = param_4[10];
          *(undefined8 *)pauVar2[uVar42 * -8 + -1] = uVar5;
          uVar5 = param_4[9];
          *(undefined8 *)(pauVar2[uVar42 * -8 + -3] + 8) = param_4[8];
          *(undefined8 *)pauVar2[uVar42 * -8 + -2] = uVar5;
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
          *(undefined8 *)(pauVar2[uVar42 * -8 + -4] + 8) = param_4[6];
          *(undefined8 *)pauVar2[uVar42 * -8 + -3] = uVar26;
          pauVar2[uVar42 * -8 + -5][8] = uVar7;
          pauVar2[uVar42 * -8 + -5][9] = uVar8;
          pauVar2[uVar42 * -8 + -5][10] = uVar9;
          pauVar2[uVar42 * -8 + -5][0xb] = uVar10;
          pauVar2[uVar42 * -8 + -5][0xc] = uVar11;
          pauVar2[uVar42 * -8 + -5][0xd] = uVar12;
          pauVar2[uVar42 * -8 + -5][0xe] = uVar13;
          pauVar2[uVar42 * -8 + -5][0xf] = uVar14;
          pauVar2[uVar42 * -8 + -4][0] = uVar15;
          pauVar2[uVar42 * -8 + -4][1] = uVar16;
          pauVar2[uVar42 * -8 + -4][2] = uVar17;
          pauVar2[uVar42 * -8 + -4][3] = uVar18;
          pauVar2[uVar42 * -8 + -4][4] = uVar19;
          pauVar2[uVar42 * -8 + -4][5] = uVar20;
          pauVar2[uVar42 * -8 + -4][6] = uVar21;
          pauVar2[uVar42 * -8 + -4][7] = uVar22;
          *(undefined8 *)(pauVar2[uVar42 * -8 + -6] + 8) = uVar24;
          *(undefined8 *)pauVar2[uVar42 * -8 + -5] = uVar25;
          *(undefined8 *)(pauVar2[uVar42 * -8 + -7] + 8) = uVar5;
          *(undefined8 *)pauVar2[uVar42 * -8 + -6] = uVar23;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)(puVar37,1);
          return param_1;
        }
        uVar38 = (ushort)(uVar43 - 1) & (ushort)uVar43;
        uVar43 = CONCAT22((short)(uVar43 - 1 >> 0x10),uVar38);
        iVar39 = -(uint)(CONCAT13(cVar54,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))) ==
                        CONCAT13(cVar54,CONCAT12(cVar53,CONCAT11(cVar52,cVar51))));
        cVar51 = (char)iVar39;
        cVar52 = (char)((uint)iVar39 >> 8);
        cVar53 = (char)((uint)iVar39 >> 0x10);
        cVar54 = (char)((uint)iVar39 >> 0x18);
        iVar39 = -(uint)(CONCAT13(bVar46,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))) ==
                        CONCAT13(bVar46,CONCAT12(cVar57,CONCAT11(cVar56,cVar55))));
        cVar55 = (char)iVar39;
        cVar56 = (char)((uint)iVar39 >> 8);
        cVar57 = (char)((uint)iVar39 >> 0x10);
        bVar46 = (byte)((uint)iVar39 >> 0x18);
        iVar39 = -(uint)(CONCAT13(cVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58))) ==
                        CONCAT13(cVar61,CONCAT12(cVar60,CONCAT11(cVar59,cVar58))));
        cVar58 = (char)iVar39;
        cVar59 = (char)((uint)iVar39 >> 8);
        cVar60 = (char)((uint)iVar39 >> 0x10);
        cVar61 = (char)((uint)iVar39 >> 0x18);
        iVar39 = -(uint)(CONCAT13(bVar65,CONCAT12(cVar64,CONCAT11(cVar63,cVar62))) ==
                        CONCAT13(bVar65,CONCAT12(cVar64,CONCAT11(cVar63,cVar62))));
        cVar62 = (char)iVar39;
        cVar63 = (char)((uint)iVar39 >> 8);
        cVar64 = (char)((uint)iVar39 >> 0x10);
        bVar65 = (byte)((uint)iVar39 >> 0x18);
      } while (uVar38 != 0);
    }
    if (bVar36) {
LAB_004804ee:
      auVar66[0] = -(auVar1[0] == cVar51);
      auVar66[1] = -(auVar1[1] == cVar52);
      auVar66[2] = -(auVar1[2] == cVar53);
      auVar66[3] = -(auVar1[3] == cVar54);
      auVar66[4] = -(auVar1[4] == cVar55);
      auVar66[5] = -(auVar1[5] == cVar56);
      auVar66[6] = -(auVar1[6] == cVar57);
      auVar66[7] = -(auVar1[7] == bVar46);
      auVar66[8] = -(auVar1[8] == cVar58);
      auVar66[9] = -(auVar1[9] == cVar59);
      auVar66[10] = -(auVar1[10] == cVar60);
      auVar66[0xb] = -(auVar1[0xb] == cVar61);
      auVar66[0xc] = -(auVar1[0xc] == cVar62);
      auVar66[0xd] = -(auVar1[0xd] == cVar63);
      auVar66[0xe] = -(auVar1[0xe] == cVar64);
      auVar66[0xf] = -(bVar49 == bVar65);
      if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar66 >> 0x3f,0) & 1) != 0) || (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar66 >> 0x4f,0) & 1) != 0) || (SUB161(auVar66 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || (SUB161(auVar66 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar66 >> 0x6f,0) & 1) != 0) || (SUB161(auVar66 >> 0x77,0) & 1) != 0) ||
          auVar66[0xf] < '\0') {
        bVar46 = (*pauVar2)[local_118];
        if (-1 < (char)bVar46) {
          auVar47 = *pauVar2;
          uVar43 = 0;
          for (uVar40 = (uint)(ushort)((ushort)(SUB161(auVar47 >> 7,0) & 1) |
                                       (ushort)(SUB161(auVar47 >> 0xf,0) & 1) << 1 |
                                       (ushort)(SUB161(auVar47 >> 0x17,0) & 1) << 2 |
                                       (ushort)(SUB161(auVar47 >> 0x1f,0) & 1) << 3 |
                                       (ushort)(SUB161(auVar47 >> 0x27,0) & 1) << 4 |
                                       (ushort)(SUB161(auVar47 >> 0x2f,0) & 1) << 5 |
                                       (ushort)(SUB161(auVar47 >> 0x37,0) & 1) << 6 |
                                       (ushort)(SUB161(auVar47 >> 0x3f,0) & 1) << 7 |
                                       (ushort)(SUB161(auVar47 >> 0x47,0) & 1) << 8 |
                                       (ushort)(SUB161(auVar47 >> 0x4f,0) & 1) << 9 |
                                       (ushort)(SUB161(auVar47 >> 0x57,0) & 1) << 10 |
                                       (ushort)(SUB161(auVar47 >> 0x5f,0) & 1) << 0xb |
                                       (ushort)(SUB161(auVar47 >> 0x67,0) & 1) << 0xc |
                                       (ushort)(SUB161(auVar47 >> 0x6f,0) & 1) << 0xd |
                                       (ushort)(SUB161(auVar47 >> 0x77,0) & 1) << 0xe |
                                      (ushort)(byte)(auVar47[0xf] >> 7) << 0xf); (uVar40 & 1) == 0;
              uVar40 = uVar40 >> 1 | 0x80000000) {
            uVar43 = uVar43 + 1;
          }
          local_118 = (ulonglong)uVar43;
          bVar46 = (*pauVar2)[local_118];
        }
        lVar4 = param_3[2];
        lVar45 = *param_3;
        lVar29 = param_3[1];
        uVar23 = *param_4;
        uVar24 = param_4[1];
        uVar25 = param_4[2];
        uVar26 = param_4[3];
        uVar27 = param_4[4];
        uVar28 = param_4[5];
        uVar30 = param_4[6];
        uVar31 = param_4[7];
        uVar32 = param_4[8];
        uVar33 = param_4[9];
        uVar34 = param_4[10];
        uVar35 = param_4[0xb];
        uVar5 = param_4[0xc];
        bVar44 = bVar44 >> 1;
        (*pauVar2)[local_118] = bVar44;
        pauVar2[1][local_118 - 0x10 & uVar3] = bVar44;
        lVar50 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar46 & 1);
        param_2[3] = lVar50;
        *(longlong *)pauVar2[local_118 * -8 + -8] = lVar45;
        *(longlong *)(pauVar2[local_118 * -8 + -8] + 8) = lVar29;
        *(undefined8 *)pauVar2[local_118 * -8 + -1] = uVar35;
        *(undefined8 *)(pauVar2[local_118 * -8 + -1] + 8) = uVar5;
        *(undefined8 *)pauVar2[local_118 * -8 + -2] = uVar33;
        *(undefined8 *)(pauVar2[local_118 * -8 + -2] + 8) = uVar34;
        *(undefined8 *)pauVar2[local_118 * -8 + -3] = uVar31;
        *(undefined8 *)(pauVar2[local_118 * -8 + -3] + 8) = uVar32;
        *(undefined8 *)pauVar2[local_118 * -8 + -4] = uVar28;
        *(undefined8 *)(pauVar2[local_118 * -8 + -4] + 8) = uVar30;
        *(undefined8 *)pauVar2[local_118 * -8 + -5] = uVar26;
        *(undefined8 *)(pauVar2[local_118 * -8 + -5] + 8) = uVar27;
        *(undefined8 *)pauVar2[local_118 * -8 + -6] = uVar24;
        *(undefined8 *)(pauVar2[local_118 * -8 + -6] + 8) = uVar25;
        *(longlong *)pauVar2[local_118 * -8 + -7] = lVar4;
        *(undefined8 *)(pauVar2[local_118 * -8 + -7] + 8) = uVar23;
        *param_1 = 0xfffffffffffffffe;
        return param_1;
      }
      bVar36 = true;
    }
    else {
      uVar38 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(bVar49 >> 7) << 0xf;
      if (uVar38 != 0) {
        uVar43 = 0;
        for (uVar40 = (uint)uVar38; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
          uVar43 = uVar43 + 1;
        }
        local_118 = uVar43 + uVar41 & uVar3;
        goto LAB_004804ee;
      }
      bVar36 = false;
    }
    uVar41 = uVar41 + lVar45 + 0x10;
    lVar45 = lVar45 + 0x10;
  } while( true );
}


