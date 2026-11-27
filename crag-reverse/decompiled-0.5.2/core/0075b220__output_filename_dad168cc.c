// 0075b220 output_filename

/* WARNING: Switch with 1 destination removed at 0x0075b2a5 */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* std[6c98fd8553dbae28]::sys::backtrace::output_filename */

ulonglong __rustcall
std[6c98fd8553dbae28]::sys::backtrace::output_filename
          (char *param_1,char *param_2,char param_3,longlong param_4)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ushort uVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  int iVar16;
  ulonglong unaff_R13;
  uint uVar17;
  undefined8 uVar18;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  char cVar22;
  char cVar23;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar24 [16];
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
  char *pcStack_88;
  byte *pbStack_80;
  ulonglong uStack_78;
  byte *pbStack_70;
  ulonglong uStack_68;
  longlong lStack_58;
  char *local_50;
  byte *pbStack_48;
  char *local_40;
  undefined8 local_38;
  char **ppcStack_30;
  
  if (*param_2 == '\0') {
    pcStack_88 = *(char **)(param_2 + 8);
    pbStack_80 = *(byte **)(param_2 + 0x10);
    if (param_3 == '\0') {
      if (pbStack_80 != (byte *)0x0) goto LAB_0075b258;
      pbStack_80 = (byte *)0x0;
    }
  }
  else {
    pcStack_88 = &DAT_001bff3f;
    pbStack_80 = (byte *)0x9;
    if (param_3 == '\0') {
LAB_0075b258:
      if ((((param_4 != 0) && (*pcStack_88 == '/')) &&
          (lVar4 = (*(code *)PTR__strip_prefix_0079ac08)
                             (*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 8)),
          lVar4 != 0)) && ((*(code *)PTR_from_utf8_00799468)(), (int)local_40 != 1)) {
        local_50 = local_38;
        pbStack_48 = (byte *)ppcStack_30;
        local_40 = "/";
        local_38 = PTR_fmt_0079a6b8;
        ppcStack_30 = &local_50;
        uVar5 = (*(code *)PTR_write_007994b0)(&local_40,&DAT_001861ec);
        return uVar5;
      }
    }
  }
  uVar10 = *(uint *)(param_1 + 0x10);
  local_40 = param_1;
  if (((uVar10 & 0x8000000) == 0) || (*(ushort *)(param_1 + 0x14) == 0)) {
    if ((uVar10 & 0x10000000) == 0) {
      lVar4 = *(longlong *)(param_1 + 8);
      local_50 = pcStack_88;
      pbStack_48 = pbStack_80;
      uVar18 = (*(code *)PTR_next_0079b318)();
      puVar3 = PTR_next_0079b318;
      if (pbStack_70 != (byte *)0x0) {
        pcVar2 = *(code **)(lVar4 + 0x18);
        do {
          cVar22 = (*pcVar2)(uVar18,uStack_68);
          unaff_R13 = CONCAT71((int7)(unaff_R13 >> 8),1);
          if ((cVar22 != '\0') ||
             ((lStack_58 != 0 && (cVar22 = (*pcVar2)(extraout_XMM0_Qa,3), cVar22 != '\0'))))
          goto LAB_00781309;
          uVar18 = (*(code *)puVar3)();
        } while (pbStack_70 != (byte *)0x0);
      }
LAB_0078119e:
      unaff_R13 = 0;
      goto LAB_00781309;
    }
    uStack_78 = 0;
LAB_00781029:
    uVar5 = (ulonglong)*(ushort *)(param_1 + 0x16);
    if (uVar5 == 0) {
      uVar5 = 0;
      pcStack_88 = (char *)0x1;
      pbStack_80 = (byte *)0x0;
    }
    else {
      local_38 = (char *)CONCAT44(uVar10,(undefined4)local_38);
      local_50 = pcStack_88;
      pbStack_48 = pbStack_80;
      (*(code *)PTR_next_0079b318)();
      if (pbStack_70 == (byte *)0x0) {
        uVar7 = 0;
      }
      else {
        pbVar13 = (byte *)0x0;
        uVar7 = 0;
        uVar6 = uVar5;
        do {
          uVar8 = 0;
          pbVar11 = (byte *)0x0;
          pbVar14 = pbStack_70;
          while( true ) {
            uVar10 = local_38._4_4_;
            if (pbVar14 == pbStack_70 + uStack_68) break;
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
            pbVar11 = pbVar15 + ((longlong)pbVar11 - (longlong)pbVar14);
            uVar8 = uVar8 + 1;
            pbVar14 = pbVar15;
            if (uVar6 == uVar8) goto LAB_00781180;
          }
          if (uVar6 - uVar8 == 0) {
LAB_00781180:
            pbVar13 = pbVar11 + (longlong)pbVar13;
            if (pbVar13 <= pbStack_80) goto LAB_007811b3;
            (*(code *)PTR_slice_index_fail_007993c8)
                      (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798a90,pbStack_80);
            goto LAB_0078119e;
          }
          pbVar13 = pbVar13 + uStack_68;
          if (lStack_58 == 0) {
            uVar7 = uVar7 + uVar8;
            uVar6 = uVar6 - uVar8;
          }
          else {
            pbVar13 = pbVar13 + lStack_58;
            if (uVar6 - 1 == uVar8) {
              if (pbStack_80 < pbVar13) {
                (*(code *)PTR_slice_index_fail_007993c8)
                          (&PTR_s__rustc_48a229ceaefd4985c50990b14_00798a78,pbStack_80);
                pcVar2 = (code *)swi(3);
                uVar5 = (*pcVar2)();
                return uVar5;
              }
              goto LAB_007811b3;
            }
            uVar7 = uVar7 + uVar8 + 1;
            uVar6 = ~uVar8 + uVar6;
          }
          (*(code *)PTR_next_0079b318)();
        } while (pbStack_70 != (byte *)0x0);
      }
      pbVar13 = pbStack_80;
      uVar5 = uVar7;
      uVar10 = local_38._4_4_;
LAB_007811b3:
      pbStack_80 = pbVar13;
    }
    iVar16 = 0;
    pcVar12 = (char *)0x0;
    if (uVar5 <= uStack_78) {
      pcVar12 = (char *)(uStack_78 - uVar5);
    }
    uVar17 = uVar10 & 0x1fffff;
    switch(uVar10 >> 0x1d & 3) {
    case 1:
switchD_00781168_caseD_1:
      iVar16 = (int)pcVar12;
      break;
    case 2:
switchD_00781168_caseD_2:
      iVar16 = (int)(((ulonglong)pcVar12 & 0xffff) >> 1);
    }
  }
  else {
    uStack_78 = (ulonglong)*(ushort *)(param_1 + 0x14);
    if ((uVar10 & 0x10000000) != 0) goto LAB_00781029;
    local_50 = pcStack_88;
    pbStack_48 = pbStack_80;
    (*(code *)PTR_next_0079b318)();
    uVar5 = 0;
    while (pbStack_70 != (byte *)0x0) {
      if (uStack_68 < 0x20) {
        if (uStack_68 == 0) {
          lVar4 = 0;
        }
        else {
          if (3 < uStack_68) {
            uVar17 = (uint)uStack_68 & 0x1c;
            uVar7 = (ulonglong)uVar17;
            auVar19[0] = -(DAT_001844d0 < (char)*(undefined2 *)pbStack_70);
            cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)pbStack_70 >> 8));
            cVar23 = -(UNK_001844d7 < '\0');
            auVar19._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                        -(UNK_001844d6 < '\0')),
                                                               -(UNK_001844d6 < '\0')),
                                                      -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')
                                            ),-(UNK_001844d4 < '\0')),
                           CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
            auVar19[7] = -(UNK_001844d3 < '\0');
            auVar19[6] = -(UNK_001844d3 < '\0');
            auVar19[5] = -(UNK_001844d2 < '\0');
            auVar19[4] = -(UNK_001844d2 < '\0');
            auVar19[3] = cVar22;
            auVar19[2] = cVar22;
            auVar19[1] = auVar19[0];
            auVar19 = pshuflw(auVar19,auVar19,0xd4);
            auVar20._12_4_ = auVar19._12_4_;
            auVar20._0_8_ = auVar19._0_8_;
            auVar20._8_4_ = auVar19._4_4_;
            auVar21 = auVar20 & _DAT_00184640;
            auVar24[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 2));
            cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 2) >> 8));
            cVar23 = -(UNK_001844d7 < '\0');
            auVar24._8_8_ =
                 (undefined8)
                 (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                        -(UNK_001844d6 < '\0')),
                                                               -(UNK_001844d6 < '\0')),
                                                      -(UNK_001844d5 < '\0')),-(UNK_001844d5 < '\0')
                                            ),-(UNK_001844d4 < '\0')),
                           CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
            auVar24[7] = -(UNK_001844d3 < '\0');
            auVar24[6] = -(UNK_001844d3 < '\0');
            auVar24[5] = -(UNK_001844d2 < '\0');
            auVar24[4] = -(UNK_001844d2 < '\0');
            auVar24[3] = cVar22;
            auVar24[2] = cVar22;
            auVar24[1] = auVar24[0];
            auVar19 = pshuflw(auVar24,auVar24,0xd4);
            auVar25._12_4_ = auVar19._12_4_;
            auVar25._0_8_ = auVar19._0_8_;
            auVar25._8_4_ = auVar19._4_4_;
            auVar26 = auVar25 & _DAT_00184640;
            if (uVar7 != 4) {
              auVar27[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 4));
              cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 4) >> 8));
              cVar23 = -(UNK_001844d7 < '\0');
              auVar27._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                          -(UNK_001844d6 < '\0')),
                                                                 -(UNK_001844d6 < '\0')),
                                                        -(UNK_001844d5 < '\0')),
                                               -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                             CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
              auVar27[7] = -(UNK_001844d3 < '\0');
              auVar27[6] = -(UNK_001844d3 < '\0');
              auVar27[5] = -(UNK_001844d2 < '\0');
              auVar27[4] = -(UNK_001844d2 < '\0');
              auVar27[3] = cVar22;
              auVar27[2] = cVar22;
              auVar27[1] = auVar27[0];
              auVar19 = pshuflw(auVar27,auVar27,0xd4);
              auVar28._12_4_ = auVar19._12_4_;
              auVar28._0_8_ = auVar19._0_8_;
              auVar28._8_4_ = auVar19._4_4_;
              auVar39[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 6));
              cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 6) >> 8));
              cVar23 = -(UNK_001844d7 < '\0');
              auVar39._8_8_ =
                   (undefined8)
                   (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                          -(UNK_001844d6 < '\0')),
                                                                 -(UNK_001844d6 < '\0')),
                                                        -(UNK_001844d5 < '\0')),
                                               -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                             CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
              auVar39[7] = -(UNK_001844d3 < '\0');
              auVar39[6] = -(UNK_001844d3 < '\0');
              auVar39[5] = -(UNK_001844d2 < '\0');
              auVar39[4] = -(UNK_001844d2 < '\0');
              auVar39[3] = cVar22;
              auVar39[2] = cVar22;
              auVar39[1] = auVar39[0];
              auVar19 = pshuflw(auVar39,auVar39,0xd4);
              auVar40._12_4_ = auVar19._12_4_;
              auVar40._0_8_ = auVar19._0_8_;
              auVar40._8_4_ = auVar19._4_4_;
              lVar4 = auVar21._8_8_;
              auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar28 & _DAT_00184640,0);
              auVar21._8_8_ = lVar4 + SUB168(auVar28 & _DAT_00184640,8);
              lVar4 = auVar26._8_8_;
              auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar40 & _DAT_00184640,0);
              auVar26._8_8_ = lVar4 + SUB168(auVar40 & _DAT_00184640,8);
              if (uVar17 != 8) {
                auVar29[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 8));
                cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 8) >> 8));
                cVar23 = -(UNK_001844d7 < '\0');
                auVar29._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                            -(UNK_001844d6 < '\0')),
                                                                   -(UNK_001844d6 < '\0')),
                                                          -(UNK_001844d5 < '\0')),
                                                 -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                               CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                auVar29[7] = -(UNK_001844d3 < '\0');
                auVar29[6] = -(UNK_001844d3 < '\0');
                auVar29[5] = -(UNK_001844d2 < '\0');
                auVar29[4] = -(UNK_001844d2 < '\0');
                auVar29[3] = cVar22;
                auVar29[2] = cVar22;
                auVar29[1] = auVar29[0];
                auVar19 = pshuflw(auVar29,auVar29,0xd4);
                auVar30._12_4_ = auVar19._12_4_;
                auVar30._0_8_ = auVar19._0_8_;
                auVar30._8_4_ = auVar19._4_4_;
                auVar41[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 10));
                cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 10) >> 8));
                cVar23 = -(UNK_001844d7 < '\0');
                auVar41._8_8_ =
                     (undefined8)
                     (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23),
                                                                            -(UNK_001844d6 < '\0')),
                                                                   -(UNK_001844d6 < '\0')),
                                                          -(UNK_001844d5 < '\0')),
                                                 -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                               CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                auVar41[7] = -(UNK_001844d3 < '\0');
                auVar41[6] = -(UNK_001844d3 < '\0');
                auVar41[5] = -(UNK_001844d2 < '\0');
                auVar41[4] = -(UNK_001844d2 < '\0');
                auVar41[3] = cVar22;
                auVar41[2] = cVar22;
                auVar41[1] = auVar41[0];
                auVar19 = pshuflw(auVar41,auVar41,0xd4);
                auVar42._12_4_ = auVar19._12_4_;
                auVar42._0_8_ = auVar19._0_8_;
                auVar42._8_4_ = auVar19._4_4_;
                auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar30 & _DAT_00184640,0);
                auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar30 & _DAT_00184640,8);
                auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar42 & _DAT_00184640,0);
                auVar26._8_8_ = auVar26._8_8_ + SUB168(auVar42 & _DAT_00184640,8);
                if (uVar17 != 0xc) {
                  auVar31[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0xc));
                  cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 0xc) >> 8));
                  cVar23 = -(UNK_001844d7 < '\0');
                  auVar31._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23
                                                                                      ),
                                                                              -(UNK_001844d6 < '\0')
                                                                             ),
                                                                     -(UNK_001844d6 < '\0')),
                                                            -(UNK_001844d5 < '\0')),
                                                   -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                 CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                  auVar31[7] = -(UNK_001844d3 < '\0');
                  auVar31[6] = -(UNK_001844d3 < '\0');
                  auVar31[5] = -(UNK_001844d2 < '\0');
                  auVar31[4] = -(UNK_001844d2 < '\0');
                  auVar31[3] = cVar22;
                  auVar31[2] = cVar22;
                  auVar31[1] = auVar31[0];
                  auVar19 = pshuflw(auVar31,auVar31,0xd4);
                  auVar32._12_4_ = auVar19._12_4_;
                  auVar32._0_8_ = auVar19._0_8_;
                  auVar32._8_4_ = auVar19._4_4_;
                  auVar43[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0xe));
                  cVar22 = -(UNK_001844d1 < (char)((ushort)*(undefined2 *)(pbStack_70 + 0xe) >> 8));
                  cVar23 = -(UNK_001844d7 < '\0');
                  auVar43._8_8_ =
                       (undefined8)
                       (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,cVar23
                                                                                      ),
                                                                              -(UNK_001844d6 < '\0')
                                                                             ),
                                                                     -(UNK_001844d6 < '\0')),
                                                            -(UNK_001844d5 < '\0')),
                                                   -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                 CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                  auVar43[7] = -(UNK_001844d3 < '\0');
                  auVar43[6] = -(UNK_001844d3 < '\0');
                  auVar43[5] = -(UNK_001844d2 < '\0');
                  auVar43[4] = -(UNK_001844d2 < '\0');
                  auVar43[3] = cVar22;
                  auVar43[2] = cVar22;
                  auVar43[1] = auVar43[0];
                  auVar19 = pshuflw(auVar43,auVar43,0xd4);
                  auVar44._12_4_ = auVar19._12_4_;
                  auVar44._0_8_ = auVar19._0_8_;
                  auVar44._8_4_ = auVar19._4_4_;
                  auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar32 & _DAT_00184640,0);
                  auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar32 & _DAT_00184640,8);
                  auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar44 & _DAT_00184640,0);
                  auVar26._8_8_ = auVar26._8_8_ + SUB168(auVar44 & _DAT_00184640,8);
                  if (uVar17 != 0x10) {
                    auVar33[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x10));
                    cVar22 = -(UNK_001844d1 <
                              (char)((ushort)*(undefined2 *)(pbStack_70 + 0x10) >> 8));
                    cVar23 = -(UNK_001844d7 < '\0');
                    auVar33._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                   CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                    auVar33[7] = -(UNK_001844d3 < '\0');
                    auVar33[6] = -(UNK_001844d3 < '\0');
                    auVar33[5] = -(UNK_001844d2 < '\0');
                    auVar33[4] = -(UNK_001844d2 < '\0');
                    auVar33[3] = cVar22;
                    auVar33[2] = cVar22;
                    auVar33[1] = auVar33[0];
                    auVar19 = pshuflw(auVar33,auVar33,0xd4);
                    auVar34._12_4_ = auVar19._12_4_;
                    auVar34._0_8_ = auVar19._0_8_;
                    auVar34._8_4_ = auVar19._4_4_;
                    auVar45[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x12));
                    cVar22 = -(UNK_001844d1 <
                              (char)((ushort)*(undefined2 *)(pbStack_70 + 0x12) >> 8));
                    cVar23 = -(UNK_001844d7 < '\0');
                    auVar45._8_8_ =
                         (undefined8)
                         (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                   CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                    auVar45[7] = -(UNK_001844d3 < '\0');
                    auVar45[6] = -(UNK_001844d3 < '\0');
                    auVar45[5] = -(UNK_001844d2 < '\0');
                    auVar45[4] = -(UNK_001844d2 < '\0');
                    auVar45[3] = cVar22;
                    auVar45[2] = cVar22;
                    auVar45[1] = auVar45[0];
                    auVar19 = pshuflw(auVar45,auVar45,0xd4);
                    auVar46._12_4_ = auVar19._12_4_;
                    auVar46._0_8_ = auVar19._0_8_;
                    auVar46._8_4_ = auVar19._4_4_;
                    auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar34 & _DAT_00184640,0);
                    auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar34 & _DAT_00184640,8);
                    auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar46 & _DAT_00184640,0);
                    auVar26._8_8_ = auVar26._8_8_ + SUB168(auVar46 & _DAT_00184640,8);
                    if (uVar17 != 0x14) {
                      auVar35[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x14));
                      cVar22 = -(UNK_001844d1 <
                                (char)((ushort)*(undefined2 *)(pbStack_70 + 0x14) >> 8));
                      cVar23 = -(UNK_001844d7 < '\0');
                      auVar35._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                     CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                      auVar35[7] = -(UNK_001844d3 < '\0');
                      auVar35[6] = -(UNK_001844d3 < '\0');
                      auVar35[5] = -(UNK_001844d2 < '\0');
                      auVar35[4] = -(UNK_001844d2 < '\0');
                      auVar35[3] = cVar22;
                      auVar35[2] = cVar22;
                      auVar35[1] = auVar35[0];
                      auVar19 = pshuflw(auVar35,auVar35,0xd4);
                      auVar36._12_4_ = auVar19._12_4_;
                      auVar36._0_8_ = auVar19._0_8_;
                      auVar36._8_4_ = auVar19._4_4_;
                      auVar47[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x16));
                      cVar22 = -(UNK_001844d1 <
                                (char)((ushort)*(undefined2 *)(pbStack_70 + 0x16) >> 8));
                      cVar23 = -(UNK_001844d7 < '\0');
                      auVar47._8_8_ =
                           (undefined8)
                           (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                     CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                      auVar47[7] = -(UNK_001844d3 < '\0');
                      auVar47[6] = -(UNK_001844d3 < '\0');
                      auVar47[5] = -(UNK_001844d2 < '\0');
                      auVar47[4] = -(UNK_001844d2 < '\0');
                      auVar47[3] = cVar22;
                      auVar47[2] = cVar22;
                      auVar47[1] = auVar47[0];
                      auVar19 = pshuflw(auVar47,auVar47,0xd4);
                      auVar48._12_4_ = auVar19._12_4_;
                      auVar48._0_8_ = auVar19._0_8_;
                      auVar48._8_4_ = auVar19._4_4_;
                      auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar36 & _DAT_00184640,0);
                      auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar36 & _DAT_00184640,8);
                      auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar48 & _DAT_00184640,0);
                      auVar26._8_8_ = auVar26._8_8_ + SUB168(auVar48 & _DAT_00184640,8);
                      if (uVar17 != 0x18) {
                        auVar37[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x18));
                        cVar22 = -(UNK_001844d1 <
                                  (char)((ushort)*(undefined2 *)(pbStack_70 + 0x18) >> 8));
                        cVar23 = -(UNK_001844d7 < '\0');
                        auVar37._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                       CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                        auVar37[7] = -(UNK_001844d3 < '\0');
                        auVar37[6] = -(UNK_001844d3 < '\0');
                        auVar37[5] = -(UNK_001844d2 < '\0');
                        auVar37[4] = -(UNK_001844d2 < '\0');
                        auVar37[3] = cVar22;
                        auVar37[2] = cVar22;
                        auVar37[1] = auVar37[0];
                        auVar19 = pshuflw(auVar37,auVar37,0xd4);
                        auVar38._12_4_ = auVar19._12_4_;
                        auVar38._0_8_ = auVar19._0_8_;
                        auVar38._8_4_ = auVar19._4_4_;
                        auVar49[0] = -(DAT_001844d0 < (char)*(undefined2 *)(pbStack_70 + 0x1a));
                        cVar22 = -(UNK_001844d1 <
                                  (char)((ushort)*(undefined2 *)(pbStack_70 + 0x1a) >> 8));
                        cVar23 = -(UNK_001844d7 < '\0');
                        auVar49._8_8_ =
                             (undefined8)
                             (CONCAT72(CONCAT61(CONCAT51(CONCAT41(CONCAT31(CONCAT21(CONCAT11(cVar23,
                                                  cVar23),-(UNK_001844d6 < '\0')),
                                                  -(UNK_001844d6 < '\0')),-(UNK_001844d5 < '\0')),
                                                  -(UNK_001844d5 < '\0')),-(UNK_001844d4 < '\0')),
                                       CONCAT11(-(UNK_001844d4 < '\0'),cVar23)) >> 8);
                        auVar49[7] = -(UNK_001844d3 < '\0');
                        auVar49[6] = -(UNK_001844d3 < '\0');
                        auVar49[5] = -(UNK_001844d2 < '\0');
                        auVar49[4] = -(UNK_001844d2 < '\0');
                        auVar49[3] = cVar22;
                        auVar49[2] = cVar22;
                        auVar49[1] = auVar49[0];
                        auVar19 = pshuflw(auVar49,auVar49,0xd4);
                        auVar50._12_4_ = auVar19._12_4_;
                        auVar50._0_8_ = auVar19._0_8_;
                        auVar50._8_4_ = auVar19._4_4_;
                        auVar21._0_8_ = auVar21._0_8_ + SUB168(auVar38 & _DAT_00184640,0);
                        auVar21._8_8_ = auVar21._8_8_ + SUB168(auVar38 & _DAT_00184640,8);
                        auVar26._0_8_ = auVar26._0_8_ + SUB168(auVar50 & _DAT_00184640,0);
                        auVar26._8_8_ = auVar26._8_8_ + SUB168(auVar50 & _DAT_00184640,8);
                      }
                    }
                  }
                }
              }
            }
            lVar4 = auVar21._8_8_ + auVar26._8_8_ + auVar21._0_8_ + auVar26._0_8_;
            goto LAB_00780f7f;
          }
          uVar7 = 0;
          lVar4 = 0;
          do {
            lVar4 = lVar4 + (ulonglong)(-0x41 < (char)pbStack_70[uVar7]);
            uVar7 = uVar7 + 1;
LAB_00780f7f:
          } while (uStack_68 != uVar7);
        }
      }
      else {
        lVar4 = (*(code *)PTR_do_count_chars_00799d00)();
      }
      uVar5 = ((uVar5 + 1) - (ulonglong)(lStack_58 == 0)) + lVar4;
      (*(code *)PTR_next_0079b318)();
    }
    iVar16 = 0;
    pcVar12 = (char *)0x0;
    if (uVar5 <= uStack_78) {
      pcVar12 = (char *)(uStack_78 - uVar5);
    }
    uVar17 = uVar10 & 0x1fffff;
    switch(uVar10 >> 0x1d & 3) {
    case 1:
      goto switchD_00781168_caseD_1;
    case 2:
      goto switchD_00781168_caseD_2;
    }
  }
  lVar4 = *(longlong *)(local_40 + 8);
  uVar10 = iVar16 + 1;
  local_40 = pcVar12;
  do {
    uVar9 = (short)uVar10 - 1;
    uVar10 = (uint)uVar9;
    if (uVar9 == 0) {
      local_38 = (char *)CONCAT44(uVar17,(undefined4)local_38);
      local_50 = pcStack_88;
      pbStack_48 = pbStack_80;
      uVar18 = (*(code *)PTR_next_0079b318)();
      if (pbStack_70 == (byte *)0x0) goto LAB_007812a4;
      pcVar2 = *(code **)(lVar4 + 0x18);
      goto LAB_00781277;
    }
    cVar22 = (**(code **)(lVar4 + 0x20))();
  } while (cVar22 == '\0');
LAB_00781224:
  unaff_R13 = CONCAT71((int7)(uVar5 >> 8),1);
LAB_00781309:
  return unaff_R13 & 0xffffffff;
  while (uVar18 = (*(code *)PTR_next_0079b318)(), pbStack_70 != (byte *)0x0) {
LAB_00781277:
    cVar22 = (*pcVar2)(uVar18,uStack_68);
    if ((cVar22 != '\0') ||
       ((lStack_58 != 0 && (cVar22 = (*pcVar2)(extraout_XMM0_Qa_00,3), cVar22 != '\0'))))
    goto LAB_00781224;
  }
LAB_007812a4:
  local_40 = (char *)(ulonglong)(uint)((int)local_40 - iVar16);
  if (uStack_78 <= uVar5) {
    uVar5 = uStack_78;
  }
  iVar16 = (iVar16 + (int)uVar5) - (int)uStack_78;
  uVar9 = 0xffff;
  do {
    if ((ushort)(uVar9 + (short)iVar16) == -1) {
      uVar9 = (ushort)local_40;
      break;
    }
    cVar22 = (**(code **)(lVar4 + 0x20))();
    uVar9 = uVar9 + 1;
  } while (cVar22 == '\0');
  unaff_R13 = (ulonglong)CONCAT31((int3)((uint)iVar16 >> 8),uVar9 < (ushort)local_40);
  goto LAB_00781309;
}


