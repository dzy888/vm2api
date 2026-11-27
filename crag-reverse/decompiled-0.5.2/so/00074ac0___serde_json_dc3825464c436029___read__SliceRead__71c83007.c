// 00074ac0 <serde_json[dc3825464c436029]::read::SliceRead>

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* serde_json[dc3825464c436029]::read::parse_unicode_escape::<serde_json[dc3825464c436029]::read::SliceRead>
    */

undefined8 __rustcall
serde_json[dc3825464c436029]::read::parse_unicode_escape::
<serde_json[dc3825464c436029]::read::SliceRead>
          (longlong *param_1,char param_2,longlong *param_3,undefined8 param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  code *pcVar5;
  byte bVar6;
  int iVar7;
  undefined8 uVar8;
  longlong lVar9;
  ushort uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  uint uVar14;
  ulonglong unaff_RBP;
  byte *pbVar15;
  longlong *plVar16;
  undefined *puVar17;
  longlong lVar18;
  longlong *plVar19;
  longlong *plVar20;
  uint uVar21;
  ulonglong unaff_R14;
  uint uVar22;
  longlong *plVar23;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 local_58 [3];
  longlong local_40;
  longlong *local_38;
  
  plVar16 = (longlong *)param_1[1];
  plVar19 = (longlong *)param_1[2];
  uVar13 = (longlong)plVar16 - (longlong)plVar19;
  if (plVar16 < plVar19) {
LAB_0007521e:
    param_3 = plVar16;
    (*(code *)PTR_slice_index_fail_000c3bb0)
              (&PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c11d0);
LAB_00075234:
    <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
    <alloc[12e961f32105355]::alloc::Global>(param_3,plVar16,4,1,1);
    pbVar15 = (byte *)(param_3[2] + param_3[1]);
    if ((uint)unaff_R14 < 0x800) {
LAB_00074ca7:
      bVar6 = (byte)(unaff_RBP >> 6) | 0xc0;
      lVar12 = 2;
    }
    else {
LAB_00075267:
      bVar6 = (byte)(unaff_R14 >> 0xc) | 0xe0;
      pbVar15[1] = (byte)((uint)unaff_R14 >> 6) & 0x3f | 0x80;
      lVar12 = 3;
    }
    *pbVar15 = bVar6;
    pbVar15[lVar12 + -1] = (byte)unaff_RBP & 0x3f | 0x80;
    param_3[2] = param_3[2] + lVar12;
LAB_00075297:
    uVar8 = 0;
  }
  else {
    if (uVar13 < 4) {
      param_1[2] = (longlong)plVar16;
      local_58[0] = 4;
      lVar18 = *param_1;
      lVar12 = lVar18 + (longlong)plVar16;
      lVar9 = (**(code **)PTR_FN_000c3fd0)(param_4,lVar12);
      if (lVar9 == 1) {
        lVar12 = (lVar12 - lVar18) + 1;
      }
      else {
        lVar12 = 0;
      }
      uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa,lVar18 + lVar12);
LAB_00074fef:
      uVar8 = (*(code *)PTR_syntax_000c3d50)(uVar8,(longlong)plVar16 - lVar12);
      return uVar8;
    }
    lVar18 = *param_1;
    bVar6 = *(byte *)(lVar18 + (longlong)plVar19);
    bVar1 = *(byte *)(lVar18 + 1 + (longlong)plVar19);
    bVar2 = *(byte *)(lVar18 + 2 + (longlong)plVar19);
    bVar3 = *(byte *)(lVar18 + 3 + (longlong)plVar19);
    plVar23 = (longlong *)((longlong)plVar19 + 4);
    param_1[2] = (longlong)plVar23;
    puVar17 = PTR_HEX1_000c4020;
    uVar11 = (ulonglong)
             (*(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar1 * 2) |
             *(ushort *)(PTR_HEX1_000c4020 + (ulonglong)bVar6 * 2));
    uVar21 = (int)(short)(*(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar1 * 2) |
                         *(ushort *)(PTR_HEX1_000c4020 + (ulonglong)bVar6 * 2)) << 8 |
             (int)*(short *)(PTR_HEX1_000c4020 + (ulonglong)bVar2 * 2) |
             (int)*(short *)(PTR_HEX0_000c4028 + (ulonglong)bVar3 * 2);
    unaff_R14 = (ulonglong)uVar21;
    if ((int)uVar21 < 0) {
      local_58[0] = 0xc;
      if (plVar16 < plVar23) {
        (*(code *)PTR_slice_index_fail_000c3bb0)
                  (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,plVar16);
LAB_00075329:
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      lVar12 = lVar18 + (longlong)plVar23;
      lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar11,lVar12);
      if (lVar9 == 1) {
        lVar12 = (lVar12 - lVar18) + 1;
      }
      else {
        lVar12 = 0;
      }
      uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_00,lVar18 + lVar12);
    }
    else {
      if ((param_2 == '\0') || ((uVar21 & 0xfc00) != 0xdc00)) {
        if ((uVar21 + 0x2400 & 0xffff) < 0xfc00) {
          unaff_RBP = (ulonglong)uVar21;
LAB_00074b77:
          unaff_R14 = unaff_RBP & 0xffff;
          if (0x7f < (uint)unaff_R14) {
            plVar16 = (longlong *)param_3[2];
            if ((ulonglong)(*param_3 - (longlong)plVar16) < 4) goto LAB_00075234;
            pbVar15 = (byte *)((longlong)plVar16 + param_3[1]);
            if (0x7ff < (uint)unaff_R14) goto LAB_00075267;
            goto LAB_00074ca7;
          }
          lVar12 = param_3[2];
          if (lVar12 == *param_3) {
            (*(code *)PTR_grow_one_000c3bf8)();
          }
          *(char *)(param_3[1] + lVar12) = (char)unaff_RBP;
          param_3[2] = lVar12 + 1;
        }
        else {
          if (param_2 == '\0') {
            plVar20 = (longlong *)((longlong)plVar19 + 5);
            do {
              uVar21 = (uint)unaff_R14;
              uVar13 = uVar13 - 6;
              plVar23 = (longlong *)((longlong)plVar20 - 1);
              if (plVar16 <= plVar23) goto LAB_00075049;
              if (*(char *)(lVar18 + -1 + (longlong)plVar20) != '\\') {
                push_wtf8_codepoint(unaff_R14 & 0xffff,param_3);
                goto LAB_00075297;
              }
              param_1[2] = (longlong)plVar20;
              if (plVar16 <= plVar20) goto LAB_00075089;
              if (*(char *)(lVar18 + (longlong)plVar20) != 'u') {
                push_wtf8_codepoint(unaff_R14 & 0xffff,param_3);
                uVar8 = parse_escape::<serde_json[dc3825464c436029]::read::SliceRead>
                                  (param_1,0,param_3);
                return uVar8;
              }
              param_1[2] = (longlong)((longlong)plVar20 + 1U);
              if (plVar16 < (longlong *)((longlong)plVar20 + 1U)) goto LAB_00075208;
              if (uVar13 < 4) goto LAB_000750fc;
              bVar6 = *(byte *)(lVar18 + 1 + (longlong)plVar20);
              bVar1 = *(byte *)(lVar18 + 2 + (longlong)plVar20);
              bVar2 = *(byte *)(lVar18 + 3 + (longlong)plVar20);
              bVar3 = *(byte *)(lVar18 + 4 + (longlong)plVar20);
              plVar19 = (longlong *)((longlong)plVar20 + 5);
              param_1[2] = (longlong)plVar19;
              uVar10 = *(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar1 * 2) |
                       *(ushort *)(puVar17 + (ulonglong)bVar6 * 2);
              uVar14 = (int)(short)uVar10 << 8 | (int)*(short *)(puVar17 + (ulonglong)bVar2 * 2) |
                       (int)*(short *)(PTR_HEX0_000c4028 + (ulonglong)bVar3 * 2);
              unaff_RBP = (ulonglong)uVar14;
              if ((int)uVar14 < 0) goto LAB_0007513e;
              if (0xfbff < (uVar14 + 0x2000 & 0xffff)) goto LAB_00074e38;
              lVar12 = param_3[2];
              if ((ulonglong)(*param_3 - lVar12) < 4) {
                local_40 = lVar18;
                local_38 = param_1;
                <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,4,1,1);
                lVar12 = param_3[2];
                param_1 = local_38;
                puVar17 = PTR_HEX1_000c4020;
                lVar18 = local_40;
              }
              lVar9 = param_3[1];
              *(undefined1 *)(lVar9 + lVar12) = 0xed;
              uVar11 = (ulonglong)CONCAT31((uint3)(unaff_R14 >> 8) >> 6,(char)(uVar21 >> 6)) &
                       0xffffffffffffff2f | 0x80;
              *(char *)(lVar9 + 1 + lVar12) = (char)uVar11;
              *(byte *)(lVar9 + 2 + lVar12) = (byte)unaff_R14 & 0x3f | 0x80;
              param_3[2] = param_3[2] + 3;
              plVar20 = (longlong *)((longlong)plVar20 + 6);
              unaff_R14 = (ulonglong)uVar14;
            } while (0xfbff < (uVar14 + 0x2400 & 0xffff));
            goto LAB_00074b77;
          }
          if (plVar16 <= plVar23) {
LAB_00075049:
            local_58[0] = 4;
            if (plVar16 < plVar23) {
              (*(code *)PTR_slice_index_fail_000c3bb0)
                        (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,plVar16)
              ;
              goto LAB_00075329;
            }
            lVar12 = lVar18 + (longlong)plVar23;
            lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar11,lVar12);
            if (lVar9 == 1) {
              lVar12 = (lVar12 - lVar18) + 1;
            }
            else {
              lVar12 = 0;
            }
            uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_02,lVar18 + lVar12);
            goto LAB_000750e2;
          }
          plVar20 = (longlong *)((longlong)plVar19 + 5);
          cVar4 = *(char *)(lVar18 + 4 + (longlong)plVar19);
          param_1[2] = (longlong)plVar20;
          if (cVar4 != '\\') {
LAB_00074e23:
            local_58[0] = 0x17;
LAB_00074e2b:
            uVar8 = error::<serde_json[dc3825464c436029]::read::SliceRead,()>(param_1,local_58);
            return uVar8;
          }
          if (plVar16 <= plVar20) {
LAB_00075089:
            local_58[0] = 4;
            lVar12 = lVar18 + (longlong)plVar20;
            lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar11,lVar12);
            if (lVar9 == 1) {
              lVar12 = (lVar12 - lVar18) + 1;
            }
            else {
              lVar12 = 0;
            }
            uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_03,lVar18 + lVar12);
            uVar8 = (*(code *)PTR_syntax_000c3d50)(uVar8,(longlong)plVar20 - lVar12);
            return uVar8;
          }
          plVar23 = (longlong *)((longlong)plVar19 + 6);
          cVar4 = *(char *)(lVar18 + 5 + (longlong)plVar19);
          param_1[2] = (longlong)plVar23;
          if (cVar4 != 'u') goto LAB_00074e23;
          uVar11 = (longlong)plVar16 - (longlong)plVar23;
          if (plVar16 < plVar23) {
LAB_00075208:
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&
                       PTR_anon_d15e6213c59156a99525d62e3a7cf6d1_0_llvm_13084535133562080302_000c11d0
                       ,plVar16);
            goto LAB_0007521e;
          }
          if (uVar11 < 4) {
LAB_000750fc:
            param_1[2] = (longlong)plVar16;
            local_58[0] = 4;
            lVar12 = lVar18 + (longlong)plVar16;
            lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar11,lVar12);
            if (lVar9 == 1) {
              lVar12 = (lVar12 - lVar18) + 1;
            }
            else {
              lVar12 = 0;
            }
            uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_04,lVar18 + lVar12);
            goto LAB_00074fef;
          }
          bVar6 = *(byte *)(lVar18 + 6 + (longlong)plVar19);
          bVar1 = *(byte *)(lVar18 + 7 + (longlong)plVar19);
          bVar2 = *(byte *)(lVar18 + 8 + (longlong)plVar19);
          bVar3 = *(byte *)(lVar18 + 9 + (longlong)plVar19);
          plVar19 = (longlong *)((longlong)plVar19 + 10);
          param_1[2] = (longlong)plVar19;
          uVar10 = *(ushort *)(PTR_HEX0_000c4028 + (ulonglong)bVar1 * 2) |
                   *(ushort *)(puVar17 + (ulonglong)bVar6 * 2);
          uVar14 = (int)(short)uVar10 << 8 | (int)*(short *)(puVar17 + (ulonglong)bVar2 * 2) |
                   (int)*(short *)(PTR_HEX0_000c4028 + (ulonglong)bVar3 * 2);
          if ((int)uVar14 < 0) {
LAB_0007513e:
            local_58[0] = 0xc;
            if (plVar19 <= plVar16) {
              lVar12 = lVar18 + (longlong)plVar19;
              lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar10,lVar12);
              if (lVar9 == 1) {
                lVar12 = (lVar12 - lVar18) + 1;
              }
              else {
                lVar12 = 0;
              }
              uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_05,lVar18 + lVar12);
              uVar8 = (*(code *)PTR_syntax_000c3d50)(uVar8,(longlong)plVar19 - lVar12);
              return uVar8;
            }
            (*(code *)PTR_slice_index_fail_000c3bb0)
                      (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,plVar16);
            goto LAB_00075329;
          }
          if ((uVar14 + 0x2000 & 0xffff) < 0xfc00) {
            local_58[0] = 0x14;
            goto LAB_00074e2b;
          }
LAB_00074e38:
          iVar7 = (uVar21 + 0x2800 & 0xffff) * 0x400;
          uVar21 = uVar14 + 0x2400 & 0xffff;
          uVar22 = uVar21 + iVar7 + 0x10000;
          lVar12 = param_3[2];
          if ((ulonglong)(*param_3 - lVar12) < 4) {
            <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(param_3,lVar12,4,1,1);
            lVar12 = param_3[2];
          }
          *(uint *)(param_3[1] + lVar12) =
               (uVar14 << 0x18 |
               (uVar21 + iVar7) * 0x400 & 0xff0000 | uVar22 >> 4 & 0xff00 | uVar22 >> 0x12) &
               (uint)DAT_00009150 | (uint)DAT_00008bc0;
          param_3[2] = param_3[2] + 4;
        }
        goto LAB_00075297;
      }
      local_58[0] = 0x14;
      if (plVar16 < plVar23) {
        (*(code *)PTR_slice_index_fail_000c3bb0)
                  (&anon_d15e6213c59156a99525d62e3a7cf6d1_8_llvm_13084535133562080302,plVar16);
        goto LAB_00075329;
      }
      lVar12 = lVar18 + (longlong)plVar23;
      lVar9 = (**(code **)PTR_FN_000c3fd0)(uVar11,lVar12);
      if (lVar9 == 1) {
        lVar12 = (lVar12 - lVar18) + 1;
      }
      else {
        lVar12 = 0;
      }
      uVar8 = (**(code **)PTR_FN_000c3fd8)(extraout_XMM0_Qa_01,lVar18 + lVar12);
    }
LAB_000750e2:
    uVar8 = (*(code *)PTR_syntax_000c3d50)(uVar8,(longlong)plVar23 - lVar12);
  }
  return uVar8;
}


