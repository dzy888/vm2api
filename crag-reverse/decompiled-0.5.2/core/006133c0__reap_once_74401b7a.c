// 006133c0 reap_once

/* WARNING: Removing unreachable block (ram,0x0061386e) */
/* WARNING: Removing unreachable block (ram,0x00613bf7) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::admission::OrphanReaper>::reap_once */

longlong __rustcall
<craggemini_core[66f3c71560d70857]::admission::OrphanReaper>::reap_once(longlong *param_1)

{
  undefined1 auVar1 [16];
  char cVar2;
  code *pcVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  longlong *plVar7;
  char cVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  char *pcVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  longlong lVar16;
  uint *puVar17;
  undefined1 *puVar18;
  ulonglong uVar19;
  uint *puVar20;
  longlong lVar21;
  ushort uVar22;
  longlong lVar23;
  longlong lVar24;
  ulonglong uVar25;
  longlong in_FS_OFFSET;
  byte bVar26;
  undefined8 uVar27;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined8 extraout_XMM0_Qa_07;
  undefined8 extraout_XMM0_Qa_08;
  undefined8 extraout_XMM0_Qa_09;
  undefined8 extraout_XMM0_Qa_10;
  undefined8 extraout_XMM0_Qa_11;
  undefined8 extraout_XMM0_Qa_12;
  undefined8 extraout_XMM0_Qa_13;
  undefined8 extraout_XMM0_Qa_14;
  undefined8 extraout_XMM0_Qa_15;
  undefined8 extraout_XMM0_Qa_16;
  undefined8 extraout_XMM0_Qa_17;
  undefined8 extraout_XMM0_Qa_18;
  undefined8 extraout_XMM0_Qa_19;
  undefined8 extraout_XMM0_Qa_20;
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint local_1c4;
  uint *local_1c0;
  uint *local_1b8;
  uint *puStack_1b0;
  uint *puStack_1a8;
  uint *puStack_1a0;
  uint *puStack_198;
  uint *local_190;
  undefined8 local_188;
  undefined2 local_180;
  uint local_174;
  longlong local_170;
  uint *local_168;
  uint *puStack_160;
  uint *local_158;
  uint *puStack_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  uint *local_130;
  uint *puStack_128;
  uint *local_120;
  uint *puStack_118;
  longlong *local_110;
  longlong *local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined8 local_d8;
  longlong *local_a8;
  char local_a0;
  longlong local_90;
  undefined8 local_80;
  longlong *local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong *local_40;
  char local_38;
  
  iVar9 = (*(code *)PTR_getpid_00799ef0)();
  if (iVar9 != 1) {
    local_108 = (longlong *)((ulonglong)local_108 & 0xffffffff00000000);
    iVar9 = (*(code *)PTR_prctl_007991e0)(0,0,0);
    if (iVar9 != 0) {
      return 0;
    }
    if ((int)local_108 == 0) {
      return 0;
    }
  }
  uVar10 = (*(code *)PTR_getpid_00799ef0)();
  lVar16 = 5;
  (*(code *)PTR_read_dir_00799ad0)();
  local_a8 = local_108;
  if ((char)lStack_100 == '\x02') {
    if ((1 < ((uint)local_108 & 3) - 2) && (((ulonglong)local_108 & 3) != 0)) {
      lStack_100 = (longlong)local_108 + -1;
      local_108 = (longlong *)CONCAT71(local_108._1_7_,3);
      (*(code *)PTR_drop_00799040)();
    }
    lVar24 = 0;
  }
  else {
    local_40 = local_108;
    local_38 = (char)lStack_100;
    local_174 = uVar10;
    if (*(char *)(in_FS_OFFSET + -0x28) == '\x01') {
      local_58 = *(longlong *)(in_FS_OFFSET + -0x38);
      lVar16 = *(longlong *)(in_FS_OFFSET + -0x30);
    }
    else {
      local_58 = (*(code *)PTR_hashmap_random_keys_00799248)();
      *(longlong *)(in_FS_OFFSET + -0x38) = local_58;
      *(longlong *)(in_FS_OFFSET + -0x30) = lVar16;
      *(undefined1 *)(in_FS_OFFSET + -0x28) = 1;
    }
    *(longlong *)(in_FS_OFFSET + -0x38) = local_58 + 1;
    local_78 = (longlong *)anon_1b4a85c95499e1b671cf4fa96a1b6d0f_365_llvm_10049508496007902178;
    lStack_70 = _UNK_0078f4c0;
    local_68 = _DAT_0078f4c8;
    lStack_60 = _UNK_0078f4d0;
    local_108 = (longlong *)0x0;
    local_d8 = 0;
    local_a0 = (char)lStack_100;
    puVar20 = (uint *)(param_1 + 4);
    lVar24 = 0;
    local_110 = param_1;
    lStack_50 = lVar16;
    do {
      (*(code *)PTR_next_00799b88)();
      if (local_1b8 == (uint *)0x0) {
        if (local_a0 != '\x02') {
          LOCK();
          *local_a8 = *local_a8 + -1;
          UNLOCK();
          if (*local_a8 == 0) {
            (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        local_a0 = '\x02';
        local_168 = puStack_1b0;
        puStack_160 = puStack_1a8;
        local_158 = puStack_1a0;
        puStack_150 = puStack_198;
        local_148 = local_190;
        if (local_1b8 != (uint *)0x1) break;
      }
      else {
        local_158 = puStack_1a0;
        puStack_150 = puStack_198;
        local_168 = puStack_1b0;
        puStack_160 = puStack_1a8;
      }
      local_1b8 = local_168;
      puStack_1b0 = puStack_160;
      puStack_198 = local_190;
      puStack_1a8 = local_158;
      puStack_1a0 = puStack_150;
      local_148 = local_190;
      if (local_168 == (uint *)0x0) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <core[c0acaeba6ab4c2e0]::result::Result<std[6c98fd8553dbae28]::fs::DirEntry,core[c0acaeba6ab4c2e0]::io::error::Error>>
                  (&local_1b8,&local_a8);
      }
      else {
        local_120 = puStack_150;
        puStack_118 = local_190;
        local_130 = puStack_160;
        puStack_128 = local_158;
        local_138 = local_168;
        uVar27 = (*(code *)PTR_file_name_00799b90)();
        uVar27 = (*(code *)PTR_from_utf8_00799468)(uVar27,local_158);
        puVar5 = puStack_1a8;
        if ((int)local_1b8 == 1) {
          if (local_168 != (uint *)0x0) {
LAB_00613f1a:
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
LAB_00613f20:
          LOCK();
          *(longlong *)local_138 = *(longlong *)local_138 + -1;
          UNLOCK();
          if (*(longlong *)local_138 == 0) {
            uVar27 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        else {
          if ((longlong)puStack_1a8 < 0) {
LAB_0061422c:
            (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          if (puStack_1a8 == (uint *)0x0) {
            pbVar11 = (byte *)0x1;
          }
          else {
            local_1c0 = puVar20;
            (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
            pbVar11 = (byte *)(*(code *)PTR___rust_alloc_00799000)();
            if (pbVar11 == (byte *)0x0) goto LAB_0061422c;
            uVar27 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,puVar5);
            puVar20 = local_1c0;
          }
          if (local_168 != (uint *)0x0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          if (puVar5 == (uint *)0x1) {
            bVar26 = *pbVar11;
            if ((bVar26 == 0x2b) || (bVar26 == 0x2d)) goto LAB_00613f1a;
          }
          else {
            if (puVar5 == (uint *)0x0) goto LAB_00613f20;
            bVar26 = *pbVar11;
          }
          if (bVar26 != 0x2d) {
            puVar17 = puVar5;
            if (bVar26 == 0x2b) {
              pbVar11 = pbVar11 + 1;
              puVar17 = (uint *)((longlong)puVar5 + -1);
            }
            if (&DAT_00000007 < puVar17) {
              uVar10 = 0;
              do {
                iVar9 = (int)((longlong)(int)uVar10 * 10);
                if ((((longlong)iVar9 != (longlong)(int)uVar10 * 10) ||
                    (uVar15 = *pbVar11 - 0x30, 9 < uVar15)) ||
                   (uVar10 = iVar9 + uVar15, SCARRY4(iVar9,uVar15))) goto LAB_00613f0b;
                pbVar11 = pbVar11 + 1;
                puVar17 = (uint *)((longlong)puVar17 + -1);
              } while (puVar17 != (uint *)0x0);
              goto LAB_0061393c;
            }
            if (puVar17 == (uint *)0x0) {
              uVar10 = 0;
              goto LAB_0061393c;
            }
            uVar10 = *pbVar11 - 0x30;
            if (uVar10 < 10) {
              if (puVar17 == (uint *)0x1) goto LAB_0061393c;
              if (9 < pbVar11[1] - 0x30) goto LAB_00613f0b;
              uVar10 = (pbVar11[1] - 0x30) + uVar10 * 10;
              if (puVar17 == (uint *)0x2) goto LAB_0061393c;
              if (9 < pbVar11[2] - 0x30) goto LAB_00613f0b;
              uVar10 = (pbVar11[2] - 0x30) + uVar10 * 10;
              if (puVar17 == (uint *)0x3) goto LAB_0061393c;
              if (9 < pbVar11[3] - 0x30) goto LAB_00613f0b;
              uVar10 = (pbVar11[3] - 0x30) + uVar10 * 10;
              if (puVar17 == (uint *)&DAT_00000004) goto LAB_0061393c;
              if (9 < pbVar11[4] - 0x30) goto LAB_00613f0b;
              uVar10 = (pbVar11[4] - 0x30) + uVar10 * 10;
              if (puVar17 == (uint *)&DAT_00000005) goto LAB_0061393c;
              if (9 < pbVar11[5] - 0x30) goto LAB_00613f0b;
              uVar10 = (pbVar11[5] - 0x30) + uVar10 * 10;
              if (puVar17 == (uint *)&DAT_00000006) goto LAB_0061393c;
              if (9 < pbVar11[6] - 0x30) goto LAB_00613f0b;
              local_1c4 = (pbVar11[6] - 0x30) + uVar10 * 10;
              goto LAB_00613948;
            }
LAB_00613f0b:
            if (puVar5 != (uint *)0x0) goto LAB_00613f1a;
            goto LAB_00613f20;
          }
          puVar18 = (undefined1 *)((longlong)puVar5 + -1);
          if (&DAT_00000008 < puVar5) {
            uVar10 = 0;
            do {
              pbVar11 = pbVar11 + 1;
              iVar9 = (int)((longlong)(int)uVar10 * 10);
              if ((((longlong)iVar9 != (longlong)(int)uVar10 * 10) ||
                  (uVar15 = *pbVar11 - 0x30, 9 < uVar15)) ||
                 (uVar10 = iVar9 - uVar15, SBORROW4(iVar9,uVar15))) goto LAB_00613f0b;
              puVar18 = puVar18 + -1;
            } while (puVar18 != (undefined1 *)0x0);
          }
          else {
            uVar10 = 0;
            if (puVar18 != (undefined1 *)0x0) {
              puVar17 = (uint *)0x1;
              do {
                if (9 < pbVar11[(longlong)puVar17] - 0x30) goto LAB_00613f0b;
                uVar10 = uVar10 * 10 - (pbVar11[(longlong)puVar17] - 0x30);
                puVar17 = (uint *)((longlong)puVar17 + 1);
              } while (puVar5 != puVar17);
            }
          }
LAB_0061393c:
          local_1c4 = uVar10;
LAB_00613948:
          if (((int)local_1c4 < 2) || (local_174 == local_1c4)) goto LAB_00613f0b;
          local_168 = &local_1c4;
          puStack_160 = (uint *)PTR_fmt_007999c0;
          uVar27 = (*(code *)PTR_format_inner_00799048)(uVar27,&local_168);
          uVar27 = (*(code *)PTR_inner_00799760)(uVar27,local_80);
          if (local_90 != 0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          if (local_1b8 == (uint *)0xffffffffffffffff) {
            if ((1 < ((uint)puStack_1b0 & 3) - 2) && (((ulonglong)puStack_1b0 & 3) != 0)) {
              puStack_160 = (uint *)((longlong)puStack_1b0 + -1);
              local_168 = (uint *)CONCAT71(local_168._1_7_,3);
              uVar27 = (*(code *)PTR_drop_00799040)();
            }
            goto LAB_00613f0b;
          }
          local_1c0 = local_1b8;
          local_140 = puStack_1b0;
          uVar19 = 0;
          do {
            uVar14 = uVar19;
            if ((undefined1 *)((longlong)puStack_1a8 + uVar14) == (undefined1 *)0x0)
            goto joined_r0x00613ef3;
            uVar19 = uVar14 - 1;
          } while (((undefined1 *)((longlong)puStack_1b0 + (longlong)puStack_1a8))[uVar14 - 1] !=
                   ')');
          if (puStack_1a8 < (uint *)((longlong)puStack_1a8 + uVar14)) {
joined_r0x00613ef3:
            if (local_1c0 != (uint *)0x0) {
              uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
            }
            goto LAB_00613f0b;
          }
          uVar27 = (*(code *)PTR_from_utf8_00799468)(puStack_1a8,~(uVar14 - 1));
          puVar6 = puStack_1a8;
          puVar17 = puStack_1b0;
          if ((int)local_1b8 == 1) goto joined_r0x00613ef3;
          local_190 = (uint *)((longlong)puStack_1b0 + (longlong)puStack_1a8);
          local_1b8 = (uint *)0x0;
          puStack_1b0 = puStack_1a8;
          puStack_1a8 = puVar17;
          puStack_1a0 = puVar6;
          puStack_198 = puVar17;
          local_188 = 0;
          local_180 = 1;
          local_170 = lVar24;
          pcVar12 = (char *)<core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                            ::try_fold::
                            <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                                      ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_00;
          if (pcVar12 == (char *)0x0) goto joined_r0x00613ef3;
          cVar2 = *pcVar12;
          auVar30 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                    ::try_fold::
                    <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                              ();
          uVar19 = auVar30._8_8_;
          pbVar11 = auVar30._0_8_;
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_01;
          if (pbVar11 == (byte *)0x0) goto joined_r0x00613ef3;
          if (uVar19 == 1) {
            bVar26 = *pbVar11;
            if ((bVar26 != 0x2b) && (bVar26 != 0x2d)) goto LAB_00613ae1;
            goto joined_r0x00613ef3;
          }
          if (uVar19 == 0) goto joined_r0x00613ef3;
          bVar26 = *pbVar11;
LAB_00613ae1:
          if (bVar26 == 0x2d) {
            lVar16 = uVar19 - 1;
            if (uVar19 < 9) {
              uVar10 = 0;
              if (lVar16 != 0) {
                uVar14 = 1;
                do {
                  if (9 < pbVar11[uVar14] - 0x30) goto joined_r0x00613ef3;
                  uVar10 = uVar10 * 10 - (pbVar11[uVar14] - 0x30);
                  uVar14 = uVar14 + 1;
                } while (uVar19 != uVar14);
              }
            }
            else {
              uVar10 = 0;
              do {
                pbVar11 = pbVar11 + 1;
                iVar9 = (int)((longlong)(int)uVar10 * 10);
                if ((((longlong)iVar9 != (longlong)(int)uVar10 * 10) ||
                    (uVar15 = *pbVar11 - 0x30, 9 < uVar15)) ||
                   (uVar10 = iVar9 - uVar15, SBORROW4(iVar9,uVar15))) goto joined_r0x00613ef3;
                lVar16 = lVar16 + -1;
              } while (lVar16 != 0);
            }
          }
          else {
            if (bVar26 == 0x2b) {
              auVar30._8_8_ = uVar19 - 1;
              auVar30._0_8_ = pbVar11 + 1;
            }
            uVar19 = auVar30._8_8_;
            pbVar11 = auVar30._0_8_;
            if (uVar19 < 8) {
              if (uVar19 == 0) {
                uVar10 = 0;
              }
              else {
                uVar10 = *pbVar11 - 0x30;
                if (9 < uVar10) goto joined_r0x00613ef3;
                if (uVar19 != 1) {
                  if (9 < pbVar11[1] - 0x30) goto joined_r0x00613ef3;
                  uVar10 = (pbVar11[1] - 0x30) + uVar10 * 10;
                  if (uVar19 != 2) {
                    if (9 < pbVar11[2] - 0x30) goto joined_r0x00613ef3;
                    uVar10 = (pbVar11[2] - 0x30) + uVar10 * 10;
                    if (uVar19 != 3) {
                      if (9 < pbVar11[3] - 0x30) goto joined_r0x00613ef3;
                      uVar10 = (pbVar11[3] - 0x30) + uVar10 * 10;
                      if (uVar19 != 4) {
                        if (9 < pbVar11[4] - 0x30) goto joined_r0x00613ef3;
                        uVar10 = (pbVar11[4] - 0x30) + uVar10 * 10;
                        if (uVar19 != 5) {
                          if (9 < pbVar11[5] - 0x30) goto joined_r0x00613ef3;
                          uVar10 = (pbVar11[5] - 0x30) + uVar10 * 10;
                          if (uVar19 != 6) {
                            if (9 < pbVar11[6] - 0x30) goto joined_r0x00613ef3;
                            uVar10 = (pbVar11[6] - 0x30) + uVar10 * 10;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            else {
              uVar10 = 0;
              do {
                pbVar11 = auVar30._0_8_;
                iVar9 = (int)((longlong)(int)uVar10 * 10);
                if ((((longlong)iVar9 != (longlong)(int)uVar10 * 10) ||
                    (uVar15 = *pbVar11 - 0x30, 9 < uVar15)) ||
                   (uVar10 = iVar9 + uVar15, SCARRY4(iVar9,uVar15))) goto joined_r0x00613ef3;
                lVar16 = auVar30._8_8_ + -1;
                auVar30._8_8_ = lVar16;
                auVar30._0_8_ = pbVar11 + 1;
              } while (lVar16 != 0);
            }
          }
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_02;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_03;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_04;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_05;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_06;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_07;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_08;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_09;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_10;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_11;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_12;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_13;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_14;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_15;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_16;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_17;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          lVar16 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                   ::try_fold::
                   <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                             ();
          lVar24 = local_170;
          uVar27 = extraout_XMM0_Qa_18;
          if (lVar16 == 0) goto joined_r0x00613ef3;
          auVar30 = <core[c0acaeba6ab4c2e0]::str::iter::Split<core[c0acaeba6ab4c2e0]::str::IsWhitespace>as_core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator>
                    ::try_fold::
                    <(),core[c0acaeba6ab4c2e0]::iter::traits::iterator::Iterator::find::check<&str,&mut_core[c0acaeba6ab4c2e0]::str::IsNotEmpty>::_closure_0_,core[c0acaeba6ab4c2e0]::ops::control_flow::ControlFlow<&str>>
                              ();
          plVar7 = local_110;
          lVar24 = local_170;
          uVar19 = auVar30._8_8_;
          pcVar12 = auVar30._0_8_;
          uVar27 = extraout_XMM0_Qa_19;
          if (pcVar12 == (char *)0x0) goto joined_r0x00613ef3;
          if (uVar19 == 1) {
            cVar8 = *pcVar12;
            if ((cVar8 != '+') && (cVar8 != '-')) goto LAB_00613e4a;
            goto joined_r0x00613ef3;
          }
          if (uVar19 == 0) goto joined_r0x00613ef3;
          cVar8 = *pcVar12;
LAB_00613e4a:
          uVar14 = (ulonglong)(cVar8 == '+');
          if (0x10 < uVar19 - uVar14) {
            lVar16 = 0;
            uVar25 = 0;
            while( true ) {
              if (lVar16 == -uVar14 + uVar19) goto LAB_00613fa6;
              auVar1._8_8_ = 0;
              auVar1._0_8_ = uVar25;
              uVar13 = SUB168(auVar1 * ZEXT816(10),0);
              if (SUB168(auVar1 * ZEXT816(10),8) != 0) break;
              uVar15 = (byte)pcVar12[lVar16 + uVar14] - 0x30;
              uVar25 = uVar13 + uVar15;
              if ((9 < uVar15) || (lVar16 = lVar16 + 1, CARRY8(uVar13,(ulonglong)uVar15))) break;
            }
            goto joined_r0x00613ef3;
          }
          if (uVar19 == uVar14) {
            uVar25 = 0;
          }
          else {
            lVar16 = 0;
            uVar25 = 0;
            do {
              if (9 < (byte)pcVar12[lVar16 + uVar14] - 0x30) goto joined_r0x00613ef3;
              uVar25 = (ulonglong)((byte)pcVar12[lVar16 + uVar14] - 0x30) + uVar25 * 10;
              lVar16 = lVar16 + 1;
            } while (lVar16 != -uVar14 + uVar19);
          }
LAB_00613fa6:
          if ((cVar2 != 'Z') || (local_174 != uVar10)) goto joined_r0x00613ef3;
          if (local_110[3] != 0) {
            uVar14 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                     ::hash_one::<&u32>(puVar20,&local_1c4);
            lVar16 = *plVar7;
            uVar19 = plVar7[1];
            bVar26 = (byte)(uVar14 >> 0x39);
            auVar30 = ZEXT216(CONCAT11(bVar26,bVar26));
            auVar30 = pshuflw(auVar30,auVar30,0);
            lVar21 = 0;
            while( true ) {
              uVar14 = uVar14 & uVar19;
              auVar1 = *(undefined1 (*) [16])(lVar16 + uVar14);
              auVar29[0] = -(auVar1[0] == auVar30[0]);
              auVar29[1] = -(auVar1[1] == auVar30[1]);
              auVar29[2] = -(auVar1[2] == auVar30[2]);
              auVar29[3] = -(auVar1[3] == auVar30[3]);
              auVar29[4] = -(auVar1[4] == auVar30[4]);
              auVar29[5] = -(auVar1[5] == auVar30[5]);
              auVar29[6] = -(auVar1[6] == auVar30[6]);
              auVar29[7] = -(auVar1[7] == auVar30[7]);
              auVar29[8] = -(auVar1[8] == auVar30[0]);
              auVar29[9] = -(auVar1[9] == auVar30[1]);
              auVar29[10] = -(auVar1[10] == auVar30[2]);
              auVar29[0xb] = -(auVar1[0xb] == auVar30[3]);
              auVar29[0xc] = -(auVar1[0xc] == auVar30[4]);
              auVar29[0xd] = -(auVar1[0xd] == auVar30[5]);
              auVar29[0xe] = -(auVar1[0xe] == auVar30[6]);
              auVar29[0xf] = -(auVar1[0xf] == auVar30[7]);
              uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe |
                       (ushort)(auVar29[0xf] >> 7) << 0xf;
              uVar10 = (uint)uVar22;
              while (uVar22 != 0) {
                uVar15 = 0;
                for (uVar4 = uVar10; (uVar4 & 1) == 0; uVar4 = uVar4 >> 1 | 0x80000000) {
                  uVar15 = uVar15 + 1;
                }
                lVar23 = lVar16 + (uVar15 + uVar14 & uVar19) * -0x10;
                if (local_1c4 == *(uint *)(lVar23 + -0x10)) {
                  if (*(ulonglong *)(lVar23 + -8) != uVar25) goto LAB_006140bc;
                  local_1b8 = (uint *)((ulonglong)local_1b8 & 0xffffffff00000000);
                  uVar10 = (*(code *)PTR_waitpid_00799128)(lVar16,1);
                  if (uVar10 != local_1c4) goto LAB_006140bc;
                  lVar24 = lVar24 + 1;
                  uVar27 = extraout_XMM0_Qa_20;
                  goto joined_r0x00613ef3;
                }
                uVar22 = (ushort)(uVar10 - 1) & (ushort)uVar10;
                uVar10 = CONCAT22((short)(uVar10 - 1 >> 0x10),uVar22);
              }
              auVar28[0] = -(auVar1[0] == -1);
              auVar28[1] = -(auVar1[1] == -1);
              auVar28[2] = -(auVar1[2] == -1);
              auVar28[3] = -(auVar1[3] == -1);
              auVar28[4] = -(auVar1[4] == -1);
              auVar28[5] = -(auVar1[5] == -1);
              auVar28[6] = -(auVar1[6] == -1);
              auVar28[7] = -(auVar1[7] == -1);
              auVar28[8] = -(auVar1[8] == -1);
              auVar28[9] = -(auVar1[9] == -1);
              auVar28[10] = -(auVar1[10] == -1);
              auVar28[0xb] = -(auVar1[0xb] == -1);
              auVar28[0xc] = -(auVar1[0xc] == -1);
              auVar28[0xd] = -(auVar1[0xd] == -1);
              auVar28[0xe] = -(auVar1[0xe] == -1);
              auVar28[0xf] = -(auVar1[0xf] == -1);
              if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 ||
                               (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                              (SUB161(auVar28 >> 0x17,0) & 1) != 0) ||
                             (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                            (SUB161(auVar28 >> 0x27,0) & 1) != 0) ||
                           (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
                          (SUB161(auVar28 >> 0x37,0) & 1) != 0) ||
                         (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
                        (SUB161(auVar28 >> 0x47,0) & 1) != 0) ||
                       (SUB161(auVar28 >> 0x4f,0) & 1) != 0) || (SUB161(auVar28 >> 0x57,0) & 1) != 0
                      ) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
                    (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0)
                  || (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') break;
              uVar14 = uVar14 + lVar21 + 0x10;
              lVar21 = lVar21 + 0x10;
            }
          }
LAB_006140bc:
          uVar27 = <hashbrown[b5c94476ffc33875]::map::HashMap<i32,u64,std[6c98fd8553dbae28]::hash::random::RandomState>>
                   ::insert(&local_78,local_1c4,uVar25);
          if (local_1c0 != (uint *)0x0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          if (puVar5 != (uint *)0x0) {
            uVar27 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
          }
          LOCK();
          *(longlong *)local_138 = *(longlong *)local_138 + -1;
          UNLOCK();
          if (*(longlong *)local_138 == 0) {
            uVar27 = (*(code *)PTR_drop_slow_007997d0)();
          }
        }
        *(undefined1 *)local_130 = 0;
        if (puStack_128 != (uint *)0x0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar27,1);
        }
      }
    } while (local_a0 != '\x02');
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <core[c0acaeba6ab4c2e0]::iter::adapters::flatten::Flatten<std[6c98fd8553dbae28]::fs::ReadDir>>
              (&local_108);
    plVar7 = local_110;
    local_e8 = local_58;
    lStack_e0 = lStack_50;
    local_f8 = local_68;
    lStack_f0 = lStack_60;
    local_108 = local_78;
    lStack_100 = lStack_70;
    if ((local_110[1] != 0) && (local_110[1] * 0x11 != -0x21)) {
      (*(code *)PTR___rust_dealloc_00798fc8)();
    }
    plVar7[4] = local_e8;
    plVar7[5] = lStack_e0;
    plVar7[2] = local_f8;
    plVar7[3] = lStack_f0;
    *plVar7 = (longlong)local_108;
    plVar7[1] = lStack_100;
  }
  return lVar24;
}


