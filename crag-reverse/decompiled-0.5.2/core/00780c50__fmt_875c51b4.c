// 00780c50 fmt

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <core[c0acaeba6ab4c2e0]::bstr::ByteStr as core[c0acaeba6ab4c2e0]::fmt::Display>::fmt */

ulonglong __rustcall
<core[c0acaeba6ab4c2e0]::bstr::ByteStr_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt
          (undefined8 param_1,byte *param_2,longlong param_3)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  ulonglong unaff_R13;
  ulonglong uVar17;
  byte *pbVar18;
  undefined8 uVar19;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char cVar23;
  char cVar24;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  undefined1 auVar49 [16];
  undefined1 auVar50 [16];
  undefined1 auVar51 [16];
  ulonglong local_78;
  byte *local_70;
  ulonglong local_68;
  longlong local_58;
  
  uVar12 = *(uint *)(param_3 + 0x10);
  if (((uVar12 & 0x8000000) == 0) || (*(ushort *)(param_3 + 0x14) == 0)) {
    if ((uVar12 & 0x10000000) == 0) {
      lVar4 = *(longlong *)(param_3 + 8);
      uVar19 = (*(code *)PTR_next_0079b318)();
      puVar3 = PTR_next_0079b318;
      if (local_70 != (byte *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0x18);
        do {
          cVar23 = (*pcVar2)(uVar19,local_68);
          unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
          if ((cVar23 != '\0') ||
             ((local_58 != 0 && (cVar23 = (*pcVar2)(extraout_XMM0_Qa,3), cVar23 != '\0'))))
          goto LAB_00781309;
          uVar19 = (*(code *)puVar3)();
        } while (local_70 != (byte *)0x0);
      }
LAB_0078119e:
      unaff_R13 = 0;
      goto LAB_00781309;
    }
    local_78 = 0;
LAB_00781029:
    uVar17 = (ulonglong)*(ushort *)(param_3 + 0x16);
    if (uVar17 == 0) {
      uVar17 = 0;
    }
    else {
      (*(code *)PTR_next_0079b318)();
      if (local_70 == (byte *)0x0) {
        uVar7 = 0;
      }
      else {
        pbVar18 = (byte *)0x0;
        uVar7 = 0;
        uVar5 = uVar17;
        do {
          uVar8 = 0;
          pbVar13 = (byte *)0x0;
          pbVar14 = local_70;
          while (pbVar14 != local_70 + local_68) {
            bVar1 = *pbVar14;
            if ((char)bVar1 < '\0') {
              if (bVar1 < 0xe0) {
                pbVar15 = pbVar14 + 2;
              }
              else {
                pbVar15 = pbVar14 + (4 - (ulonglong)(bVar1 < 0xf0));
              }
            }
            else {
              pbVar15 = pbVar14 + 1;
            }
            pbVar13 = pbVar15 + ((longlong)pbVar13 - (longlong)pbVar14);
            uVar8 = uVar8 + 1;
            pbVar14 = pbVar15;
            if (uVar5 == uVar8) goto LAB_00781180;
          }
          if (uVar5 - uVar8 == 0) {
LAB_00781180:
            if (pbVar13 + (longlong)pbVar18 <= param_2) goto LAB_007811bb;
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798a90,param_2);
            goto LAB_0078119e;
          }
          pbVar18 = pbVar18 + local_68;
          if (local_58 == 0) {
            uVar7 = uVar7 + uVar8;
            uVar5 = uVar5 - uVar8;
          }
          else {
            pbVar18 = pbVar18 + local_58;
            if (uVar5 - 1 == uVar8) {
              if (param_2 < pbVar18) {
                (*(code *)PTR_slice_index_fail_007993c8)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798a78,param_2);
                pcVar2 = (code *)swi(3);
                uVar17 = (*pcVar2)();
                return uVar17;
              }
              goto LAB_007811bb;
            }
            uVar7 = uVar7 + uVar8 + 1;
            uVar5 = ~uVar8 + uVar5;
          }
          (*(code *)PTR_next_0079b318)();
        } while (local_70 != (byte *)0x0);
      }
      uVar17 = uVar7;
    }
LAB_007811bb:
    iVar16 = 0;
    uVar7 = 0;
    if (uVar17 <= local_78) {
      uVar7 = local_78 - uVar17;
    }
    switch(uVar12 >> 0x1d & 3) {
    case 1:
switchD_00781168_caseD_1:
      iVar16 = (int)uVar7;
      break;
    case 2:
switchD_00781168_caseD_2:
      iVar16 = (int)((uVar7 & 0xffff) >> 1);
    }
  }
  else {
    local_78 = (ulonglong)*(ushort *)(param_3 + 0x14);
    if ((uVar12 & 0x10000000) != 0) goto LAB_00781029;
    (*(code *)PTR_next_0079b318)();
    uVar17 = 0;
    while (local_70 != (byte *)0x0) {
      if (local_68 < 0x20) {
        if (local_68 == 0) {
          lVar4 = 0;
        }
        else {
          if (3 < local_68) {
            uVar6 = (uint)local_68 & 0x1c;
            uVar7 = (ulonglong)uVar6;
            auVar20[0] = -(DAT_001844d0 < (char)*(undefined2 *)local_70);
            cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)local_70 >> 8));
            cVar24 = -(UNK_001844d7 < '\0');
            auVar20._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                        -(UNK_001844d6 < '\0')),
                                                               -(UNK_001844d6 < '\0')),
                                                      -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')
                                            ),-(UNK_001844d4 < '\0')),
                           CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
            auVar20[7] = -(UNK_001844d3 < '\0');
            auVar20[6] = -(UNK_001844d3 < '\0');
            auVar20[5] = -(UNK_001844d2 < '\0');
            auVar20[4] = -(UNK_001844d2 < '\0');
            auVar20[3] = cVar23;
            auVar20[2] = cVar23;
            auVar20[1] = auVar20[0];
            auVar20 = pshuflw(auVar20,auVar20,0xd4);
            auVar21._12_4_ = auVar20._12_4_;
            auVar21._0_8_ = auVar20._0_8_;
            auVar21._8_4_ = auVar20._4_4_;
            auVar22 = auVar21 & _DAT_00184640;
            auVar25[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 2));
            cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 2) >> 8));
            cVar24 = -(UNK_001844d7 < '\0');
            auVar25._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                        -(UNK_001844d6 < '\0')),
                                                               -(UNK_001844d6 < '\0')),
                                                      -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')
                                            ),-(UNK_001844d4 < '\0')),
                           CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
            auVar25[7] = -(UNK_001844d3 < '\0');
            auVar25[6] = -(UNK_001844d3 < '\0');
            auVar25[5] = -(UNK_001844d2 < '\0');
            auVar25[4] = -(UNK_001844d2 < '\0');
            auVar25[3] = cVar23;
            auVar25[2] = cVar23;
            auVar25[1] = auVar25[0];
            auVar20 = pshuflw(auVar25,auVar25,0xd4);
            auVar26._12_4_ = auVar20._12_4_;
            auVar26._0_8_ = auVar20._0_8_;
            auVar26._8_4_ = auVar20._4_4_;
            auVar27 = auVar26 & _DAT_00184640;
            if (uVar7 != 4) {
              auVar28[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 4));
              cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 4) >> 8));
              cVar24 = -(UNK_001844d7 < '\0');
              auVar28._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                          -(UNK_001844d6 < '\0')),
                                                                 -(UNK_001844d6 < '\0')),
                                                        -(UNK_001844d5 < '\0')),
                                               -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                             CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
              auVar28[7] = -(UNK_001844d3 < '\0');
              auVar28[6] = -(UNK_001844d3 < '\0');
              auVar28[5] = -(UNK_001844d2 < '\0');
              auVar28[4] = -(UNK_001844d2 < '\0');
              auVar28[3] = cVar23;
              auVar28[2] = cVar23;
              auVar28[1] = auVar28[0];
              auVar20 = pshuflw(auVar28,auVar28,0xd4);
              auVar29._12_4_ = auVar20._12_4_;
              auVar29._0_8_ = auVar20._0_8_;
              auVar29._8_4_ = auVar20._4_4_;
              auVar40[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 6));
              cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 6) >> 8));
              cVar24 = -(UNK_001844d7 < '\0');
              auVar40._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                          -(UNK_001844d6 < '\0')),
                                                                 -(UNK_001844d6 < '\0')),
                                                        -(UNK_001844d5 < '\0')),
                                               -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                             CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
              auVar40[7] = -(UNK_001844d3 < '\0');
              auVar40[6] = -(UNK_001844d3 < '\0');
              auVar40[5] = -(UNK_001844d2 < '\0');
              auVar40[4] = -(UNK_001844d2 < '\0');
              auVar40[3] = cVar23;
              auVar40[2] = cVar23;
              auVar40[1] = auVar40[0];
              auVar20 = pshuflw(auVar40,auVar40,0xd4);
              auVar41._12_4_ = auVar20._12_4_;
              auVar41._0_8_ = auVar20._0_8_;
              auVar41._8_4_ = auVar20._4_4_;
              lVar4 = auVar22._8_8_;
              auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar29 & _DAT_00184640,0);
              auVar22._8_8_ = lVar4 + SUB168(auVar29 & _DAT_00184640,8);
              lVar4 = auVar27._8_8_;
              auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar41 & _DAT_00184640,0);
              auVar27._8_8_ = lVar4 + SUB168(auVar41 & _DAT_00184640,8);
              if (uVar6 != 8) {
                auVar30[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 8));
                cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 8) >> 8));
                cVar24 = -(UNK_001844d7 < '\0');
                auVar30._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                            -(UNK_001844d6 < '\0')),
                                                                   -(UNK_001844d6 < '\0')),
                                                          -(UNK_001844d5 < '\0')),
                                                 -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                               CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                auVar30[7] = -(UNK_001844d3 < '\0');
                auVar30[6] = -(UNK_001844d3 < '\0');
                auVar30[5] = -(UNK_001844d2 < '\0');
                auVar30[4] = -(UNK_001844d2 < '\0');
                auVar30[3] = cVar23;
                auVar30[2] = cVar23;
                auVar30[1] = auVar30[0];
                auVar20 = pshuflw(auVar30,auVar30,0xd4);
                auVar31._12_4_ = auVar20._12_4_;
                auVar31._0_8_ = auVar20._0_8_;
                auVar31._8_4_ = auVar20._4_4_;
                auVar42[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 10));
                cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 10) >> 8));
                cVar24 = -(UNK_001844d7 < '\0');
                auVar42._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24),
                                                                            -(UNK_001844d6 < '\0')),
                                                                   -(UNK_001844d6 < '\0')),
                                                          -(UNK_001844d5 < '\0')),
                                                 -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                               CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                auVar42[7] = -(UNK_001844d3 < '\0');
                auVar42[6] = -(UNK_001844d3 < '\0');
                auVar42[5] = -(UNK_001844d2 < '\0');
                auVar42[4] = -(UNK_001844d2 < '\0');
                auVar42[3] = cVar23;
                auVar42[2] = cVar23;
                auVar42[1] = auVar42[0];
                auVar20 = pshuflw(auVar42,auVar42,0xd4);
                auVar43._12_4_ = auVar20._12_4_;
                auVar43._0_8_ = auVar20._0_8_;
                auVar43._8_4_ = auVar20._4_4_;
                auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar31 & _DAT_00184640,0);
                auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar31 & _DAT_00184640,8);
                auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar43 & _DAT_00184640,0);
                auVar27._8_8_ = auVar27._8_8_ + SUB168(auVar43 & _DAT_00184640,8);
                if (uVar6 != 0xc) {
                  auVar32[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0xc));
                  cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 0xc) >> 8));
                  cVar24 = -(UNK_001844d7 < '\0');
                  auVar32._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24
                                                                                      ),
                                                                              -(UNK_001844d6 < '\0')
                                                                             ),
                                                                     -(UNK_001844d6 < '\0')),
                                                            -(UNK_001844d5 < '\0')),
                                                   -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                 CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                  auVar32[7] = -(UNK_001844d3 < '\0');
                  auVar32[6] = -(UNK_001844d3 < '\0');
                  auVar32[5] = -(UNK_001844d2 < '\0');
                  auVar32[4] = -(UNK_001844d2 < '\0');
                  auVar32[3] = cVar23;
                  auVar32[2] = cVar23;
                  auVar32[1] = auVar32[0];
                  auVar20 = pshuflw(auVar32,auVar32,0xd4);
                  auVar33._12_4_ = auVar20._12_4_;
                  auVar33._0_8_ = auVar20._0_8_;
                  auVar33._8_4_ = auVar20._4_4_;
                  auVar44[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0xe));
                  cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 0xe) >> 8));
                  cVar24 = -(UNK_001844d7 < '\0');
                  auVar44._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,cVar24
                                                                                      ),
                                                                              -(UNK_001844d6 < '\0')
                                                                             ),
                                                                     -(UNK_001844d6 < '\0')),
                                                            -(UNK_001844d5 < '\0')),
                                                   -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                 CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                  auVar44[7] = -(UNK_001844d3 < '\0');
                  auVar44[6] = -(UNK_001844d3 < '\0');
                  auVar44[5] = -(UNK_001844d2 < '\0');
                  auVar44[4] = -(UNK_001844d2 < '\0');
                  auVar44[3] = cVar23;
                  auVar44[2] = cVar23;
                  auVar44[1] = auVar44[0];
                  auVar20 = pshuflw(auVar44,auVar44,0xd4);
                  auVar45._12_4_ = auVar20._12_4_;
                  auVar45._0_8_ = auVar20._0_8_;
                  auVar45._8_4_ = auVar20._4_4_;
                  auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar33 & _DAT_00184640,0);
                  auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar33 & _DAT_00184640,8);
                  auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar45 & _DAT_00184640,0);
                  auVar27._8_8_ = auVar27._8_8_ + SUB168(auVar45 & _DAT_00184640,8);
                  if (uVar6 != 0x10) {
                    auVar34[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x10));
                    cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 0x10) >> 8))
                    ;
                    cVar24 = -(UNK_001844d7 < '\0');
                    auVar34._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                   CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                    auVar34[7] = -(UNK_001844d3 < '\0');
                    auVar34[6] = -(UNK_001844d3 < '\0');
                    auVar34[5] = -(UNK_001844d2 < '\0');
                    auVar34[4] = -(UNK_001844d2 < '\0');
                    auVar34[3] = cVar23;
                    auVar34[2] = cVar23;
                    auVar34[1] = auVar34[0];
                    auVar20 = pshuflw(auVar34,auVar34,0xd4);
                    auVar35._12_4_ = auVar20._12_4_;
                    auVar35._0_8_ = auVar20._0_8_;
                    auVar35._8_4_ = auVar20._4_4_;
                    auVar46[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x12));
                    cVar23 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(local_70 + 0x12) >> 8))
                    ;
                    cVar24 = -(UNK_001844d7 < '\0');
                    auVar46._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                   CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                    auVar46[7] = -(UNK_001844d3 < '\0');
                    auVar46[6] = -(UNK_001844d3 < '\0');
                    auVar46[5] = -(UNK_001844d2 < '\0');
                    auVar46[4] = -(UNK_001844d2 < '\0');
                    auVar46[3] = cVar23;
                    auVar46[2] = cVar23;
                    auVar46[1] = auVar46[0];
                    auVar20 = pshuflw(auVar46,auVar46,0xd4);
                    auVar47._12_4_ = auVar20._12_4_;
                    auVar47._0_8_ = auVar20._0_8_;
                    auVar47._8_4_ = auVar20._4_4_;
                    auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar35 & _DAT_00184640,0);
                    auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar35 & _DAT_00184640,8);
                    auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar47 & _DAT_00184640,0);
                    auVar27._8_8_ = auVar27._8_8_ + SUB168(auVar47 & _DAT_00184640,8);
                    if (uVar6 != 0x14) {
                      auVar36[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x14));
                      cVar23 = -(UNK_001844d1 <
                                (char)((ushort)*(undefined2 *)(local_70 + 0x14) >> 8));
                      cVar24 = -(UNK_001844d7 < '\0');
                      auVar36._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                     CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                      auVar36[7] = -(UNK_001844d3 < '\0');
                      auVar36[6] = -(UNK_001844d3 < '\0');
                      auVar36[5] = -(UNK_001844d2 < '\0');
                      auVar36[4] = -(UNK_001844d2 < '\0');
                      auVar36[3] = cVar23;
                      auVar36[2] = cVar23;
                      auVar36[1] = auVar36[0];
                      auVar20 = pshuflw(auVar36,auVar36,0xd4);
                      auVar37._12_4_ = auVar20._12_4_;
                      auVar37._0_8_ = auVar20._0_8_;
                      auVar37._8_4_ = auVar20._4_4_;
                      auVar48[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x16));
                      cVar23 = -(UNK_001844d1 <
                                (char)((ushort)*(undefined2 *)(local_70 + 0x16) >> 8));
                      cVar24 = -(UNK_001844d7 < '\0');
                      auVar48._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                     CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                      auVar48[7] = -(UNK_001844d3 < '\0');
                      auVar48[6] = -(UNK_001844d3 < '\0');
                      auVar48[5] = -(UNK_001844d2 < '\0');
                      auVar48[4] = -(UNK_001844d2 < '\0');
                      auVar48[3] = cVar23;
                      auVar48[2] = cVar23;
                      auVar48[1] = auVar48[0];
                      auVar20 = pshuflw(auVar48,auVar48,0xd4);
                      auVar49._12_4_ = auVar20._12_4_;
                      auVar49._0_8_ = auVar20._0_8_;
                      auVar49._8_4_ = auVar20._4_4_;
                      auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar37 & _DAT_00184640,0);
                      auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar37 & _DAT_00184640,8);
                      auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar49 & _DAT_00184640,0);
                      auVar27._8_8_ = auVar27._8_8_ + SUB168(auVar49 & _DAT_00184640,8);
                      if (uVar6 != 0x18) {
                        auVar38[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x18));
                        cVar23 = -(UNK_001844d1 <
                                  (char)((ushort)*(undefined2 *)(local_70 + 0x18) >> 8));
                        cVar24 = -(UNK_001844d7 < '\0');
                        auVar38._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                       CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                        auVar38[7] = -(UNK_001844d3 < '\0');
                        auVar38[6] = -(UNK_001844d3 < '\0');
                        auVar38[5] = -(UNK_001844d2 < '\0');
                        auVar38[4] = -(UNK_001844d2 < '\0');
                        auVar38[3] = cVar23;
                        auVar38[2] = cVar23;
                        auVar38[1] = auVar38[0];
                        auVar20 = pshuflw(auVar38,auVar38,0xd4);
                        auVar39._12_4_ = auVar20._12_4_;
                        auVar39._0_8_ = auVar20._0_8_;
                        auVar39._8_4_ = auVar20._4_4_;
                        auVar50[0] = -(DAT_001844d0 < (char)*(undefined2 *)(local_70 + 0x1a));
                        cVar23 = -(UNK_001844d1 <
                                  (char)((ushort)*(undefined2 *)(local_70 + 0x1a) >> 8));
                        cVar24 = -(UNK_001844d7 < '\0');
                        auVar50._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar24,
                                                  cVar24),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                       CONCAT11(-(UNK_001844d4 < '\0'),cVar24)) >> 8);
                        auVar50[7] = -(UNK_001844d3 < '\0');
                        auVar50[6] = -(UNK_001844d3 < '\0');
                        auVar50[5] = -(UNK_001844d2 < '\0');
                        auVar50[4] = -(UNK_001844d2 < '\0');
                        auVar50[3] = cVar23;
                        auVar50[2] = cVar23;
                        auVar50[1] = auVar50[0];
                        auVar20 = pshuflw(auVar50,auVar50,0xd4);
                        auVar51._12_4_ = auVar20._12_4_;
                        auVar51._0_8_ = auVar20._0_8_;
                        auVar51._8_4_ = auVar20._4_4_;
                        auVar22._0_8_ = auVar22._0_8_ + SUB168(auVar39 & _DAT_00184640,0);
                        auVar22._8_8_ = auVar22._8_8_ + SUB168(auVar39 & _DAT_00184640,8);
                        auVar27._0_8_ = auVar27._0_8_ + SUB168(auVar51 & _DAT_00184640,0);
                        auVar27._8_8_ = auVar27._8_8_ + SUB168(auVar51 & _DAT_00184640,8);
                      }
                    }
                  }
                }
              }
            }
            lVar4 = auVar22._8_8_ + auVar27._8_8_ + auVar22._0_8_ + auVar27._0_8_;
            goto LAB_00780f7f;
          }
          uVar7 = 0;
          lVar4 = 0;
          do {
            lVar4 = lVar4 + (ulonglong)(-0x41 < (char)local_70[uVar7]);
            uVar7 = uVar7 + 1;
LAB_00780f7f:
          } while (local_68 != uVar7);
        }
      }
      else {
        lVar4 = (*(code *)PTR_do_count_chars_00799d00)();
      }
      uVar17 = ((uVar17 + 1) - (ulonglong)(local_58 == 0)) + lVar4;
      (*(code *)PTR_next_0079b318)();
    }
    iVar16 = 0;
    uVar7 = 0;
    if (uVar17 <= local_78) {
      uVar7 = local_78 - uVar17;
    }
    switch(uVar12 >> 0x1d & 3) {
    case 1:
      goto switchD_00781168_caseD_1;
    case 2:
      goto switchD_00781168_caseD_2;
    }
  }
  lVar4 = *(longlong *)(param_3 + 8);
  uVar12 = iVar16 + 1;
  do {
    uVar9 = (short)uVar12 - 1;
    uVar12 = (uint)uVar9;
    if (uVar9 == 0) {
      uVar19 = (*(code *)PTR_next_0079b318)();
      if (local_70 == (byte *)0x0) goto LAB_007812a4;
      pcVar2 = *(code **)(lVar4 + 0x18);
      goto LAB_00781277;
    }
    cVar23 = (**(code **)(lVar4 + 0x20))();
  } while (cVar23 == '\0');
LAB_00781224:
  unaff_R13 = CONCAT71((int7)(uVar17 >> 8),1);
LAB_00781309:
  return unaff_R13 & 0xffffffff;
  while (uVar19 = (*(code *)PTR_next_0079b318)(), local_70 != (byte *)0x0) {
LAB_00781277:
    cVar23 = (*pcVar2)(uVar19,local_68);
    if ((cVar23 != '\0') ||
       ((local_58 != 0 && (cVar23 = (*pcVar2)(extraout_XMM0_Qa_00,3), cVar23 != '\0'))))
    goto LAB_00781224;
  }
LAB_007812a4:
  uVar9 = (short)uVar7 - (short)iVar16;
  if (local_78 <= uVar17) {
    uVar17 = local_78;
  }
  iVar16 = (iVar16 + (int)uVar17) - (int)local_78;
  uVar10 = 0xffff;
  do {
    uVar11 = uVar9;
    if ((ushort)(uVar10 + (short)iVar16) == -1) break;
    cVar23 = (**(code **)(lVar4 + 0x20))();
    uVar11 = uVar10 + 1;
    uVar10 = uVar11;
  } while (cVar23 == '\0');
  unaff_R13 = (ulonglong)CONCAT31((int3)((uint)iVar16 >> 8),uVar11 < uVar9);
  goto LAB_00781309;
}


