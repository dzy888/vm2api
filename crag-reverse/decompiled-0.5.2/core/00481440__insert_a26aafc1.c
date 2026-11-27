// 00481440 insert

/* <hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,
   std[6c98fd8553dbae28]::hash::random::RandomState>>::insert */

undefined8 * __rustcall
<hashbrown[b5c94476ffc33875]::map::HashMap<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>>
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
  undefined8 uVar26;
  undefined8 uVar27;
  longlong lVar28;
  longlong lVar29;
  longlong lVar30;
  longlong lVar31;
  longlong lVar32;
  longlong lVar33;
  bool bVar34;
  longlong lVar35;
  longlong lVar36;
  undefined *puVar37;
  ushort uVar38;
  int iVar39;
  uint uVar40;
  ulonglong uVar41;
  byte bVar42;
  longlong lVar43;
  longlong lVar44;
  uint uVar45;
  byte bVar46;
  undefined1 auVar47 [16];
  byte bVar50;
  undefined1 auVar48 [16];
  longlong lVar49;
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
  ulonglong local_f0;
  
  uVar41 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
           ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 4,param_3);
  if (param_2[2] == 0) {
    <hashbrown[b5c94476ffc33875]::raw::RawTable<(alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry)>>
    ::reserve_rehash::
    <hashbrown[b5c94476ffc33875]::map::make_hasher<alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::CachedSignatureEntry,std[6c98fd8553dbae28]::hash::random::RandomState>::_closure_0_>
              (param_2,param_2 + 4);
  }
  puVar37 = PTR_bcmp_00799020;
  pauVar3 = (undefined1 (*) [16])*param_2;
  uVar4 = param_2[1];
  bVar42 = (byte)(uVar41 >> 0x38);
  bVar46 = bVar42 >> 1;
  auVar47 = ZEXT216(CONCAT11(bVar46,bVar46));
  auVar47 = pshuflw(auVar47,auVar47,0);
  lVar5 = param_3[2];
  bVar34 = false;
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
  lVar43 = 0;
  do {
    uVar41 = uVar41 & uVar4;
    auVar2 = *(undefined1 (*) [16])(*pauVar3 + uVar41);
    auVar48[0] = -(auVar2[0] == auVar47[0]);
    auVar48[1] = -(auVar2[1] == auVar47[1]);
    auVar48[2] = -(auVar2[2] == auVar47[2]);
    auVar48[3] = -(auVar2[3] == auVar47[3]);
    auVar48[4] = -(auVar2[4] == auVar47[4]);
    auVar48[5] = -(auVar2[5] == auVar47[5]);
    auVar48[6] = -(auVar2[6] == auVar47[6]);
    auVar48[7] = -(auVar2[7] == auVar47[7]);
    auVar48[8] = -(auVar2[8] == auVar47[0]);
    auVar48[9] = -(auVar2[9] == auVar47[1]);
    auVar48[10] = -(auVar2[10] == auVar47[2]);
    auVar48[0xb] = -(auVar2[0xb] == auVar47[3]);
    auVar48[0xc] = -(auVar2[0xc] == auVar47[4]);
    auVar48[0xd] = -(auVar2[0xd] == auVar47[5]);
    bVar50 = auVar2[0xf];
    auVar48[0xe] = -(auVar2[0xe] == auVar47[6]);
    auVar48[0xf] = -(bVar50 == auVar47[7]);
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
    uVar45 = (uint)uVar38;
    if (uVar38 != 0) {
      do {
        uVar40 = 0;
        for (uVar6 = uVar45; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar40 = uVar40 + 1;
        }
        lVar44 = (uVar40 + uVar41 & uVar4) * -0x58;
        if ((lVar5 == *(longlong *)((longlong)pauVar3 + lVar44 + -0x48)) &&
           (iVar39 = (*(code *)puVar37)(), iVar39 == 0)) {
          uVar21 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x40);
          uVar22 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x38);
          uVar23 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x30);
          uVar24 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x28);
          uVar25 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x20);
          uVar26 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x18);
          uVar27 = *(undefined8 *)((longlong)pauVar3 + lVar44 + -8);
          param_1[6] = *(undefined8 *)((longlong)pauVar3 + lVar44 + -0x10);
          param_1[7] = uVar27;
          param_1[4] = uVar25;
          param_1[5] = uVar26;
          param_1[2] = uVar23;
          param_1[3] = uVar24;
          *param_1 = uVar21;
          param_1[1] = uVar22;
          lVar5 = *param_4;
          lVar43 = param_4[1];
          lVar28 = param_4[2];
          lVar29 = param_4[3];
          lVar35 = param_4[4];
          uVar7 = *(undefined1 *)((longlong)param_4 + 0x21);
          uVar8 = *(undefined1 *)((longlong)param_4 + 0x22);
          uVar9 = *(undefined1 *)((longlong)param_4 + 0x23);
          uVar10 = *(undefined1 *)((longlong)param_4 + 0x24);
          uVar11 = *(undefined1 *)((longlong)param_4 + 0x25);
          uVar12 = *(undefined1 *)((longlong)param_4 + 0x26);
          uVar13 = *(undefined1 *)((longlong)param_4 + 0x27);
          lVar36 = param_4[5];
          uVar14 = *(undefined1 *)((longlong)param_4 + 0x29);
          uVar15 = *(undefined1 *)((longlong)param_4 + 0x2a);
          uVar16 = *(undefined1 *)((longlong)param_4 + 0x2b);
          uVar17 = *(undefined1 *)((longlong)param_4 + 0x2c);
          uVar18 = *(undefined1 *)((longlong)param_4 + 0x2d);
          uVar19 = *(undefined1 *)((longlong)param_4 + 0x2e);
          uVar20 = *(undefined1 *)((longlong)param_4 + 0x2f);
          lVar30 = param_4[7];
          *(longlong *)((longlong)pauVar3 + lVar44 + -0x10) = param_4[6];
          *(longlong *)((longlong)pauVar3 + lVar44 + -8) = lVar30;
          *(char *)((longlong)pauVar3 + lVar44 + -0x20) = (char)lVar35;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1f) = uVar7;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1e) = uVar8;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1d) = uVar9;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1c) = uVar10;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1b) = uVar11;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x1a) = uVar12;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x19) = uVar13;
          *(char *)((longlong)pauVar3 + lVar44 + -0x18) = (char)lVar36;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x17) = uVar14;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x16) = uVar15;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x15) = uVar16;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x14) = uVar17;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x13) = uVar18;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x12) = uVar19;
          *(undefined1 *)((longlong)pauVar3 + lVar44 + -0x11) = uVar20;
          *(longlong *)((longlong)pauVar3 + lVar44 + -0x30) = lVar28;
          *(longlong *)((longlong)pauVar3 + lVar44 + -0x28) = lVar29;
          *(longlong *)((longlong)pauVar3 + lVar44 + -0x40) = lVar5;
          *(longlong *)((longlong)pauVar3 + lVar44 + -0x38) = lVar43;
          if (*param_3 == 0) {
            return param_1;
          }
          (*(code *)PTR___rust_dealloc_00798fc8)();
          return param_1;
        }
        uVar38 = (ushort)(uVar45 - 1) & (ushort)uVar45;
        uVar45 = CONCAT22((short)(uVar45 - 1 >> 0x10),uVar38);
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
    if (bVar34) {
LAB_004815bd:
      auVar66[0] = -(auVar2[0] == cVar51);
      auVar66[1] = -(auVar2[1] == cVar52);
      auVar66[2] = -(auVar2[2] == cVar53);
      auVar66[3] = -(auVar2[3] == cVar54);
      auVar66[4] = -(auVar2[4] == cVar55);
      auVar66[5] = -(auVar2[5] == cVar56);
      auVar66[6] = -(auVar2[6] == cVar57);
      auVar66[7] = -(auVar2[7] == bVar46);
      auVar66[8] = -(auVar2[8] == cVar58);
      auVar66[9] = -(auVar2[9] == cVar59);
      auVar66[10] = -(auVar2[10] == cVar60);
      auVar66[0xb] = -(auVar2[0xb] == cVar61);
      auVar66[0xc] = -(auVar2[0xc] == cVar62);
      auVar66[0xd] = -(auVar2[0xd] == cVar63);
      auVar66[0xe] = -(auVar2[0xe] == cVar64);
      auVar66[0xf] = -(bVar50 == bVar65);
      if ((((((((((((((((SUB161(auVar66 >> 7,0) & 1) != 0 || (SUB161(auVar66 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar66 >> 0x17,0) & 1) != 0) || (SUB161(auVar66 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar66 >> 0x27,0) & 1) != 0) || (SUB161(auVar66 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar66 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar66 >> 0x3f,0) & 1) != 0) || (SUB161(auVar66 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar66 >> 0x4f,0) & 1) != 0) || (SUB161(auVar66 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar66 >> 0x5f,0) & 1) != 0) || (SUB161(auVar66 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar66 >> 0x6f,0) & 1) != 0) || (SUB161(auVar66 >> 0x77,0) & 1) != 0) ||
          auVar66[0xf] < '\0') {
        bVar46 = (*pauVar3)[local_f0];
        if (-1 < (char)bVar46) {
          auVar47 = *pauVar3;
          uVar45 = 0;
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
            uVar45 = uVar45 + 1;
          }
          local_f0 = (ulonglong)uVar45;
          bVar46 = (*pauVar3)[local_f0];
        }
        lVar5 = param_3[2];
        lVar43 = *param_3;
        lVar44 = param_3[1];
        lVar28 = *param_4;
        lVar29 = param_4[1];
        lVar30 = param_4[2];
        lVar35 = param_4[3];
        lVar36 = param_4[4];
        lVar31 = param_4[5];
        lVar32 = param_4[6];
        lVar33 = param_4[7];
        bVar42 = bVar42 >> 1;
        (*pauVar3)[local_f0] = bVar42;
        pauVar3[1][local_f0 - 0x10 & uVar4] = bVar42;
        lVar49 = param_2[3] - DAT_001827f8;
        param_2[2] = param_2[2] - (ulonglong)(bVar46 & 1);
        param_2[3] = lVar49;
        lVar49 = local_f0 * -0x58;
        *(longlong *)((longlong)pauVar3 + lVar49 + -8) = lVar33;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar49 + -0x18);
        *plVar1 = lVar31;
        plVar1[1] = lVar32;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar49 + -0x28);
        *plVar1 = lVar35;
        plVar1[1] = lVar36;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar49 + -0x38);
        *plVar1 = lVar29;
        plVar1[1] = lVar30;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar49 + -0x48);
        *plVar1 = lVar5;
        plVar1[1] = lVar28;
        plVar1 = (longlong *)((longlong)pauVar3 + lVar49 + -0x58);
        *plVar1 = lVar43;
        plVar1[1] = lVar44;
        *param_1 = 0xffffffffffffffff;
        return param_1;
      }
      bVar34 = true;
    }
    else {
      uVar38 = (ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
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
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(bVar50 >> 7) << 0xf;
      if (uVar38 != 0) {
        uVar45 = 0;
        for (uVar40 = (uint)uVar38; (uVar40 & 1) == 0; uVar40 = uVar40 >> 1 | 0x80000000) {
          uVar45 = uVar45 + 1;
        }
        local_f0 = uVar45 + uVar41 & uVar4;
        goto LAB_004815bd;
      }
      bVar34 = false;
    }
    uVar41 = uVar41 + lVar43 + 0x10;
    lVar43 = lVar43 + 0x10;
  } while( true );
}


