// 00486d30 record_stream_frame

/* WARNING: Removing unreachable block (ram,0x004877fa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* <craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_frame */

undefined8 * __rustcall
<craggemini_core[66f3c71560d70857]::subagents::SubagentRegistry>::record_stream_frame
          (undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,int param_5
          ,undefined8 *param_6,longlong param_7,undefined8 param_8,code *param_9)

{
  code *pcVar1;
  code cVar2;
  uint uVar3;
  bool bVar4;
  undefined *puVar5;
  int iVar6;
  ulonglong uVar7;
  code *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  ulonglong uVar13;
  code *pcVar14;
  ushort uVar15;
  longlong lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  longlong lVar19;
  code *pcVar20;
  longlong lVar21;
  undefined8 *puVar22;
  code *pcVar23;
  byte bVar24;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_05;
  undefined8 extraout_XMM0_Qa_06;
  undefined1 auVar26 [16];
  undefined8 uVar25;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  undefined8 extraout_XMM0_Qa_03;
  undefined8 extraout_XMM0_Qa_04;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  code *local_1b0;
  code *local_1a8;
  char local_1a0;
  undefined7 uStack_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  char cStack_190;
  undefined7 uStack_18f;
  undefined8 uStack_188;
  code *local_180;
  undefined8 *local_178;
  code *local_170;
  code *local_168;
  code *local_160;
  undefined1 local_158 [16];
  int local_144;
  longlong local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  code *local_108;
  code *local_100;
  undefined1 local_f8 [16];
  code *local_e8;
  code *local_e0;
  code *local_d0;
  longlong local_c0;
  code *local_b8;
  longlong local_b0;
  code *local_a8;
  undefined8 *local_a0;
  undefined1 local_98 [16];
  longlong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  code *local_70;
  code *local_68;
  char local_60;
  undefined8 uStack_5f;
  undefined7 uStack_57;
  undefined1 local_50;
  undefined7 uStack_4f;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_144 = param_5;
  local_40 = param_3;
  local_38 = param_4;
  if (param_6 == (undefined8 *)0x0) {
LAB_00486d81:
    if (param_2[0xc] != 0) {
      uVar7 = <std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
              ::hash_one::<&u32>(param_2 + 0xd,&local_144);
      bVar24 = (byte)(uVar7 >> 0x39);
      auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
      auVar26 = pshuflw(auVar26,auVar26,0);
      lVar16 = 0;
      while( true ) {
        uVar7 = uVar7 & param_2[10];
        auVar28 = *(undefined1 (*) [16])(param_2[9] + uVar7);
        auVar30[0] = -(auVar28[0] == auVar26[0]);
        auVar30[1] = -(auVar28[1] == auVar26[1]);
        auVar30[2] = -(auVar28[2] == auVar26[2]);
        auVar30[3] = -(auVar28[3] == auVar26[3]);
        auVar30[4] = -(auVar28[4] == auVar26[4]);
        auVar30[5] = -(auVar28[5] == auVar26[5]);
        auVar30[6] = -(auVar28[6] == auVar26[6]);
        auVar30[7] = -(auVar28[7] == auVar26[7]);
        auVar30[8] = -(auVar28[8] == auVar26[0]);
        auVar30[9] = -(auVar28[9] == auVar26[1]);
        auVar30[10] = -(auVar28[10] == auVar26[2]);
        auVar30[0xb] = -(auVar28[0xb] == auVar26[3]);
        auVar30[0xc] = -(auVar28[0xc] == auVar26[4]);
        auVar30[0xd] = -(auVar28[0xd] == auVar26[5]);
        auVar30[0xe] = -(auVar28[0xe] == auVar26[6]);
        auVar30[0xf] = -(auVar28[0xf] == auVar26[7]);
        uVar15 = (ushort)(SUB161(auVar30 >> 7,0) & 1) | (ushort)(SUB161(auVar30 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar30 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar30 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar30 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar30 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar30 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar30 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar30 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar30 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar30 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar30 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar30 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar30 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar30 >> 0x77,0) & 1) << 0xe | (ushort)(auVar30[0xf] >> 7) << 0xf
        ;
        uVar11 = (uint)uVar15;
        while (uVar15 != 0) {
          uVar12 = 0;
          for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          if (param_5 == *(int *)(param_2[9] + (uVar12 + uVar7 & param_2[10]) * -0x20 + -0x20)) {
            (*(code *)PTR_clone_00798fd0)();
            if (CONCAT71(uStack_19f,local_1a0) != -1) goto LAB_00486ef4;
            goto LAB_00486e85;
          }
          uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
        }
        auVar29[0] = -(auVar28[0] == -1);
        auVar29[1] = -(auVar28[1] == -1);
        auVar29[2] = -(auVar28[2] == -1);
        auVar29[3] = -(auVar28[3] == -1);
        auVar29[4] = -(auVar28[4] == -1);
        auVar29[5] = -(auVar28[5] == -1);
        auVar29[6] = -(auVar28[6] == -1);
        auVar29[7] = -(auVar28[7] == -1);
        auVar29[8] = -(auVar28[8] == -1);
        auVar29[9] = -(auVar28[9] == -1);
        auVar29[10] = -(auVar28[10] == -1);
        auVar29[0xb] = -(auVar28[0xb] == -1);
        auVar29[0xc] = -(auVar28[0xc] == -1);
        auVar29[0xd] = -(auVar28[0xd] == -1);
        auVar29[0xe] = -(auVar28[0xe] == -1);
        auVar29[0xf] = -(auVar28[0xf] == -1);
        if ((((((((((((((((SUB161(auVar29 >> 7,0) & 1) != 0 || (SUB161(auVar29 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar29 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar29 >> 0x1f,0) & 1) != 0) || (SUB161(auVar29 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar29 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar29 >> 0x37,0) & 1) != 0) || (SUB161(auVar29 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar29 >> 0x47,0) & 1) != 0) || (SUB161(auVar29 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar29 >> 0x57,0) & 1) != 0) || (SUB161(auVar29 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar29 >> 0x67,0) & 1) != 0) || (SUB161(auVar29 >> 0x6f,0) & 1) != 0) ||
            (SUB161(auVar29 >> 0x77,0) & 1) != 0) || auVar29[0xf] < '\0') break;
        uVar7 = uVar7 + lVar16 + 0x10;
        lVar16 = lVar16 + 0x10;
      }
    }
LAB_00486e85:
    local_108 = (code *)&local_40;
    local_100 = <&str_as_core[c0acaeba6ab4c2e0]::fmt::Display>::fmt;
    local_f8._8_8_ = PTR_fmt_00799470;
    local_f8._0_8_ = &local_144;
    (*(code *)PTR_format_inner_00799048)();
  }
  else {
    puVar17 = param_2;
    puVar22 = param_1;
    if (param_7 < 0) {
LAB_00486d75:
      (*(code *)PTR_handle_error_00798ff0)();
      param_2 = puVar17;
      param_1 = puVar22;
      goto LAB_00486d81;
    }
    if (param_7 == 0) {
      lVar16 = 1;
    }
    else {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar16 = (*(code *)PTR___rust_alloc_00799000)();
      puVar17 = param_1;
      puVar22 = param_6;
      if (lVar16 == 0) goto LAB_00486d75;
      (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Qa,param_7);
    }
    local_1a0 = (char)param_7;
    uStack_19f = (undefined7)((ulonglong)param_7 >> 8);
    uStack_198 = (undefined1)lVar16;
    uStack_197 = (undefined7)((ulonglong)lVar16 >> 8);
    cStack_190 = local_1a0;
    uStack_18f = uStack_19f;
LAB_00486ef4:
    local_118 = CONCAT71(uStack_18f,cStack_190);
    local_128 = CONCAT71(uStack_19f,local_1a0);
    uStack_120 = CONCAT71(uStack_197,uStack_198);
  }
  local_1a0 = '\0';
  uStack_19f = 0;
  uStack_198 = 1;
  uStack_197 = 0;
  cStack_190 = 0;
  uStack_18f = 0;
  uVar25 = (*(code *)PTR_new_00799a18)(&DAT_00195b71,param_9,2);
  local_1b0 = local_b8;
  local_158._0_8_ = local_100;
  local_a0 = param_1;
  if (local_108 == (code *)0x1) {
    local_98._0_8_ = local_f8._8_8_;
    local_68 = local_a8 + -local_f8._8_8_;
    local_168 = local_100 + -1;
    local_70 = local_100 + local_b0;
    local_180 = local_100 + local_c0;
    lVar16 = 1;
    lVar21 = 0;
    local_170 = (code *)0x0;
    pcVar8 = local_a8 + -1 + (longlong)local_e0;
    local_160 = local_e8;
    pcVar14 = local_e0;
    pcVar18 = local_d0;
    while( true ) {
      local_178 = param_2;
      if (pcVar18 != (code *)0xffffffffffffffff) break;
      if (local_b8 <= pcVar8) {
LAB_00487371:
        local_b8 = local_170;
        goto LAB_00487691;
      }
      if (local_168 < local_a8) {
LAB_004871b5:
        if (((ulonglong)local_160 >> ((ulonglong)(byte)pcVar8[local_c0] & 0x3f) & 1) == 0) {
          pcVar14 = pcVar14 + (longlong)local_a8;
        }
        else {
          lVar19 = -(longlong)pcVar14;
          pcVar8 = (code *)local_158._0_8_;
          do {
            if (local_a8 == pcVar8) {
              pcVar8 = local_168 + (longlong)pcVar14;
              pcVar18 = (code *)local_158._0_8_;
              goto LAB_00487210;
            }
            pcVar18 = pcVar8 + local_b0;
            lVar19 = lVar19 + -1;
            pcVar20 = pcVar14 + local_c0 + (longlong)pcVar8;
            pcVar8 = pcVar8 + 1;
          } while (*pcVar18 == *pcVar20);
          pcVar14 = (code *)-lVar19;
        }
        goto LAB_004871a3;
      }
      while (((ulonglong)local_160 >> ((ulonglong)(byte)pcVar8[local_c0] & 0x3f) & 1) == 0) {
        pcVar8 = pcVar14 + (longlong)local_a8;
LAB_00487186:
        pcVar14 = pcVar8;
        pcVar8 = local_a8 + -1 + (longlong)pcVar14;
        if (local_b8 <= pcVar8) goto LAB_00487371;
      }
      lVar19 = 0;
      pcVar20 = local_70;
      pcVar18 = pcVar14;
      while ((code *)(local_158._0_8_ + lVar19) < local_a8) {
        cVar2 = *pcVar20;
        pcVar8 = pcVar18 + 1;
        pcVar20 = pcVar20 + 1;
        lVar19 = lVar19 + 1;
        pcVar23 = local_180 + (longlong)pcVar18;
        pcVar18 = pcVar8;
        if (cVar2 != *pcVar23) goto LAB_00487186;
      }
      pcVar18 = (code *)0xffffffffffffffff;
      if ((code *)local_158._0_8_ != (code *)0x0) goto LAB_00487f71;
LAB_00487260:
      uVar7 = (longlong)pcVar14 - (longlong)local_170;
      if ((ulonglong)(CONCAT71(uStack_19f,local_1a0) - lVar21) < uVar7) {
        uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_1a0,lVar21,uVar7,1,1);
        lVar21 = CONCAT71(uStack_18f,cStack_190);
      }
      if (pcVar14 != local_170) {
        uVar25 = (*(code *)PTR_memcpy_00799008)();
      }
      lVar21 = lVar21 + uVar7;
      cStack_190 = (char)lVar21;
      uStack_18f = (undefined7)((ulonglong)lVar21 >> 8);
      if (CONCAT71(uStack_19f,local_1a0) == lVar21) {
        uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_1a0,lVar21,1,1,1);
        lVar21 = CONCAT71(uStack_18f,cStack_190);
      }
      local_170 = pcVar14 + (longlong)local_a8;
      lVar16 = CONCAT71(uStack_197,uStack_198);
      *(undefined1 *)(lVar16 + lVar21) = 10;
      lVar21 = lVar21 + 1;
      cStack_190 = (char)lVar21;
      uStack_18f = (undefined7)((ulonglong)lVar21 >> 8);
      pcVar8 = local_a8 + -1 + (longlong)local_170;
      param_2 = local_178;
      pcVar14 = local_170;
    }
    while (pcVar8 < local_b8) {
      while (((ulonglong)local_160 >> ((ulonglong)(byte)pcVar8[local_c0] & 0x3f) & 1) != 0) {
        pcVar8 = (code *)local_158._0_8_;
        if ((ulonglong)local_158._0_8_ < pcVar18) {
          pcVar8 = pcVar18;
        }
        while (pcVar8 < local_a8) {
          pcVar20 = pcVar8 + 1;
          pcVar23 = pcVar8 + local_b0;
          pcVar1 = pcVar14 + local_c0 + (longlong)pcVar8;
          pcVar8 = pcVar20;
          if (*pcVar23 != *pcVar1) {
            pcVar14 = pcVar20 + ((longlong)pcVar14 - local_158._0_8_);
            goto LAB_00487093;
          }
        }
        pcVar8 = local_168;
        do {
          pcVar20 = pcVar8 + 1;
          if (pcVar20 <= pcVar18) {
            pcVar18 = (code *)0x0;
            goto LAB_00487260;
          }
          if (local_a8 <= pcVar8) goto LAB_00487f71;
          pcVar20 = pcVar8 + local_b0;
          pcVar23 = pcVar14 + local_c0 + (longlong)pcVar8;
          pcVar8 = pcVar8 + -1;
        } while (*pcVar20 == *pcVar23);
        pcVar14 = pcVar14 + local_98._0_8_;
        pcVar8 = local_a8 + -1 + (longlong)pcVar14;
        pcVar18 = local_68;
        if (local_b8 <= pcVar8) goto LAB_0048735a;
      }
      pcVar14 = pcVar14 + (longlong)local_a8;
LAB_00487093:
      pcVar18 = (code *)0x0;
      pcVar8 = local_a8 + -1 + (longlong)pcVar14;
    }
LAB_0048735a:
    pcVar8 = local_170;
  }
  else {
    lVar16 = 1;
    if ((local_f8._8_8_ & 0x10000) == 0) {
      if (local_100 != (code *)0x0) {
        if (local_100 < local_b8) {
          if (-0x41 < (char)local_100[local_c0]) goto LAB_00487381;
        }
        else if (local_100 == local_b8) goto LAB_00487381;
LAB_00487f4b:
        (*(code *)PTR_slice_error_fail_00799408)
                  (local_b8,local_158._0_8_,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078aec0);
LAB_00487f81:
                    /* WARNING: Does not return */
        pcVar8 = (code *)invalidInstructionException();
        (*pcVar8)();
      }
LAB_00487381:
      pcVar8 = local_100;
      if (local_100 == local_b8) {
        if (((ulonglong)(byte)local_f8[8] & 1) == 0) goto LAB_00487392;
      }
      else {
        cVar2 = local_100[local_c0];
        uVar11 = (uint)(byte)cVar2;
        if ((char)cVar2 < '\0') {
          uVar12 = (byte)cVar2 & 0x1f;
          if ((byte)cVar2 < 0xe0) {
            uVar11 = uVar12 << 6 | (byte)local_100[local_c0 + 1] & 0x3f;
          }
          else {
            uVar11 = (byte)local_100[local_c0 + 2] & 0x3f |
                     ((byte)local_100[local_c0 + 1] & 0x3f) << 6;
            if ((byte)cVar2 < 0xf0) {
              uVar11 = uVar11 | uVar12 << 0xc;
            }
            else {
              uVar11 = (byte)local_100[local_c0 + 3] & 0x3f | uVar11 << 6 |
                       ((byte)cVar2 & 7) << 0x12;
            }
          }
        }
        if (((ulonglong)(byte)local_f8[8] & 1) == 0) {
          lVar16 = 1;
          if ((0x7f < uVar11) && (lVar16 = 2, 0x7ff < uVar11)) {
            lVar16 = 4 - (ulonglong)(uVar11 < 0x10000);
          }
          pcVar14 = local_100 + lVar16;
          if (pcVar14 != (code *)0x0) {
            if (pcVar14 < local_b8) {
              if ((char)pcVar14[local_c0] < -0x40) goto LAB_0048743a;
            }
            else if (pcVar14 != local_b8) {
LAB_0048743a:
              local_158._0_8_ = pcVar14;
              goto LAB_00487f4b;
            }
          }
          pcVar8 = local_b8;
          if (pcVar14 != local_b8) {
            pcVar8 = pcVar14;
          }
        }
      }
      if (pcVar8 == (code *)0x0) {
        pcVar14 = (code *)0x0;
        cStack_190 = 0;
        uStack_18f = 0;
      }
      else {
        <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
        <alloc[12e961f32105355]::alloc::Global>(&local_1a0,0,pcVar8,1,1);
        lVar16 = CONCAT71(uStack_18f,cStack_190);
        uVar25 = (*(code *)PTR_memcpy_00799008)();
        pcVar14 = (code *)CONCAT71(uStack_19f,local_1a0);
        pcVar18 = pcVar8 + lVar16;
        cStack_190 = (char)pcVar18;
        uStack_18f = (undefined7)((ulonglong)pcVar18 >> 8);
        if (pcVar14 != pcVar18) goto LAB_00487483;
      }
      uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
               <alloc[12e961f32105355]::alloc::Global>(&local_1a0,pcVar14,1,1,1);
LAB_00487483:
      puVar5 = PTR_memcpy_00799008;
LAB_004874b6:
      lVar16 = CONCAT71(uStack_197,uStack_198);
      *(undefined1 *)(lVar16 + CONCAT71(uStack_18f,cStack_190)) = 10;
      lVar21 = CONCAT71(uStack_18f,cStack_190) + 1;
      cStack_190 = (char)lVar21;
      uStack_18f = (undefined7)((ulonglong)lVar21 >> 8);
      if (pcVar8 != (code *)0x0) {
        if (pcVar8 < local_b8) {
          if ((char)pcVar8[local_c0] < -0x40) goto LAB_00487f3f;
        }
        else if (pcVar8 != local_b8) {
LAB_00487f3f:
          local_158._0_8_ = pcVar8;
          goto LAB_00487f4b;
        }
      }
      if (pcVar8 == local_b8) goto LAB_00487691;
      cVar2 = pcVar8[local_c0];
      lVar16 = 1;
      if ((char)cVar2 < '\0') {
        uVar11 = (byte)cVar2 & 0x1f;
        if ((byte)cVar2 < 0xe0) {
          uVar12 = uVar11 << 6 | (byte)pcVar8[local_c0 + 1] & 0x3f;
        }
        else {
          uVar12 = (byte)pcVar8[local_c0 + 2] & 0x3f | ((byte)pcVar8[local_c0 + 1] & 0x3f) << 6;
          if ((byte)cVar2 < 0xf0) {
            uVar12 = uVar11 << 0xc | uVar12;
          }
          else {
            uVar12 = ((byte)cVar2 & 7) << 0x12 | (byte)pcVar8[local_c0 + 3] & 0x3f | uVar12 << 6;
          }
        }
        if ((0x7f < uVar12) && (lVar16 = 2, 0x7ff < uVar12)) {
          lVar16 = 4 - (ulonglong)(uVar12 < 0x10000);
        }
      }
      pcVar14 = pcVar8 + lVar16;
      if (pcVar14 != (code *)0x0) {
        if (pcVar14 < local_b8) {
          if ((char)pcVar14[local_c0] < -0x40) goto LAB_00487f46;
        }
        else if (pcVar14 != local_b8) goto LAB_00487f46;
      }
      pcVar18 = local_b8;
      if (pcVar14 != local_b8) {
        pcVar18 = pcVar14;
      }
      uVar7 = (longlong)pcVar18 - (longlong)pcVar8;
      if ((ulonglong)(CONCAT71(uStack_19f,local_1a0) - lVar21) < uVar7) {
        uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_1a0,lVar21,uVar7,1,1);
        lVar21 = CONCAT71(uStack_18f,cStack_190);
      }
      if (pcVar18 != pcVar8) {
        uVar25 = (*(code *)puVar5)();
      }
      lVar21 = lVar21 + uVar7;
      cStack_190 = (char)lVar21;
      uStack_18f = (undefined7)((ulonglong)lVar21 >> 8);
      pcVar8 = pcVar18;
      if (CONCAT71(uStack_19f,local_1a0) == lVar21) {
        uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
                 <alloc[12e961f32105355]::alloc::Global>(&local_1a0,lVar21,1,1,1);
      }
      goto LAB_004874b6;
    }
LAB_00487392:
    lVar21 = 0;
    pcVar8 = (code *)0x0;
  }
  goto LAB_00487699;
  while( true ) {
    pcVar23 = pcVar18 + local_b0 + -1;
    pcVar20 = pcVar8 + local_c0;
    pcVar8 = pcVar8 + -1;
    pcVar18 = pcVar18 + -1;
    if (*pcVar23 != *pcVar20) break;
LAB_00487210:
    if (pcVar18 == (code *)0x0) {
      pcVar18 = (code *)0xffffffffffffffff;
      goto LAB_00487260;
    }
  }
  pcVar14 = pcVar14 + local_98._0_8_;
LAB_004871a3:
  pcVar8 = local_a8 + -1 + (longlong)pcVar14;
  if (local_b8 <= pcVar8) goto LAB_00487371;
  goto LAB_004871b5;
LAB_00487f71:
  (*(code *)PTR_panic_bounds_check_00799520)
            (pcVar20,&PTR_s__rustc_48a229ceaefd4985c50990b14_0078aa90);
  goto LAB_00487f81;
LAB_00487f46:
  local_158._0_8_ = pcVar14;
  goto LAB_00487f4b;
LAB_00487691:
  pcVar8 = local_b8;
LAB_00487699:
  uVar7 = (longlong)param_9 - (longlong)pcVar8;
  if ((ulonglong)(CONCAT71(uStack_19f,local_1a0) - lVar21) < uVar7) {
    uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
             <alloc[12e961f32105355]::alloc::Global>(&local_1a0,lVar21,uVar7,1,1);
    lVar16 = CONCAT71(uStack_197,uStack_198);
    lVar21 = CONCAT71(uStack_18f,cStack_190);
  }
  if (param_9 != pcVar8) {
    uVar25 = (*(code *)PTR_memcpy_00799008)();
  }
  uVar7 = lVar21 + uVar7;
  pcVar8 = (code *)CONCAT71(uStack_19f,local_1a0);
  if ((1 < uVar7) && (*(short *)(lVar16 + -2 + uVar7) == 0xa0a)) {
    pcVar20 = (code *)(uVar7 - 2);
    local_140 = 0;
    local_138 = 8;
    local_130 = 0;
    pcVar14 = (code *)0x0;
    pcVar18 = (code *)0x0;
    local_180 = pcVar8;
    local_178 = param_2;
    do {
      bVar4 = true;
      pcVar23 = pcVar14;
      if (pcVar14 <= pcVar20) {
        do {
          uVar7 = (longlong)pcVar20 - (longlong)pcVar23;
          if (uVar7 < 0x10) {
            uVar13 = 0;
            if (uVar7 == 0) goto LAB_00487800;
            while (pcVar23[uVar13 + lVar16] != (code)0xa) {
              uVar13 = uVar13 + 1;
              if (uVar7 == uVar13) goto LAB_00487800;
            }
          }
          else {
            lVar21 = (*(code *)PTR_memchr_aligned_00799490)();
            uVar13 = uVar7;
            uVar25 = extraout_XMM0_Qa_00;
            if (lVar21 != 1) {
LAB_00487800:
              pcVar14 = pcVar20;
              break;
            }
          }
          pcVar14 = pcVar23 + uVar13 + 1;
          pcVar23 = pcVar23 + uVar13;
          if ((pcVar23 < pcVar20) && (pcVar23[lVar16] == (code)0xa)) {
            bVar4 = false;
            uVar7 = (longlong)pcVar23 - (longlong)pcVar18;
            pcVar23 = pcVar14;
            lVar21 = local_130;
            goto joined_r0x0048788a;
          }
          pcVar23 = pcVar14;
        } while (pcVar14 <= pcVar20);
      }
      uVar7 = (longlong)pcVar20 - (longlong)pcVar18;
      pcVar23 = pcVar18;
      lVar21 = local_130;
joined_r0x0048788a:
      local_130 = lVar21;
      if (4 < uVar7) {
        pcVar18 = pcVar18 + lVar16;
        if (pcVar18[4] == (code)0x3a && *(int *)pcVar18 == 0x61746164) {
          local_1b0 = pcVar18 + 5;
          if (uVar7 - 5 == 0) {
            lVar19 = 0;
          }
          else {
            lVar19 = uVar7 - 5;
            if (pcVar18[5] == (code)0x20) {
              local_1b0 = pcVar18 + 6;
              lVar19 = uVar7 - 6;
            }
          }
          if (lVar21 == local_140) {
            uVar25 = <alloc[12e961f32105355]::raw_vec::RawVec<(alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
                     ::grow_one(&local_140);
          }
          *(code **)(local_138 + lVar21 * 0x10) = local_1b0;
          *(longlong *)(local_138 + 8 + lVar21 * 0x10) = lVar19;
          local_130 = lVar21 + 1;
          pcVar8 = local_180;
        }
      }
      pcVar18 = pcVar23;
    } while (!bVar4);
    if (local_130 != 0) {
      alloc[12e961f32105355]::str::join_generic_copy::<str,u8,&str>
                (&local_108,local_138,local_130,&DAT_00195b73,1);
      local_e8 = local_100;
      pcVar14 = local_108;
      local_e0 = (code *)local_f8._0_8_;
      local_108 = local_100;
      local_100 = (code *)local_f8._0_8_;
      local_f8 = (undefined1  [16])0x0;
      serde_json[dc3825464c436029]::de::from_trait::
      <serde_json[dc3825464c436029]::read::StrRead,serde_json[dc3825464c436029]::value::Value>
                (&local_1a0,&local_108);
      if (local_1a0 == -1) {
        uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::error::Error>(&uStack_198);
        pcVar8 = local_180;
        if (pcVar14 != (code *)0x0) {
          uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
          pcVar8 = local_180;
        }
      }
      else {
        uVar25 = CONCAT17(uStack_198,uStack_19f);
        uStack_4f = uStack_18f;
        uStack_48 = uStack_188;
        uStack_57 = uStack_197;
        local_50 = cStack_190;
        local_60 = local_1a0;
        uStack_5f = uVar25;
        if (pcVar14 != (code *)0x0) {
          uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
        }
        pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(uVar25,&local_60);
        pcVar10 = &local_60;
        if (pcVar9 != (char *)0x0) {
          pcVar10 = pcVar9;
        }
        pcVar8 = (code *)0xa;
        pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_01,pcVar10);
        if (((pcVar10 != (char *)0x0) && (*pcVar10 == '\x04')) &&
           (*(longlong *)(pcVar10 + 0x18) != 0)) {
          pcVar8 = (code *)&DAT_00000007;
          lVar16 = (*(code *)PTR_index_into_00799300)
                             (extraout_XMM0_Qa_02,*(undefined8 *)(pcVar10 + 0x10));
          if (lVar16 != 0) {
            pcVar8 = (code *)&DAT_00000005;
            pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Qa_03,lVar16);
            if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x04')) {
              local_108 = (code *)0x0;
              local_100 = (code *)0x1;
              auVar26._8_8_ = 0;
              auVar26._0_8_ = local_f8._8_8_;
              local_f8 = auVar26 << 0x40;
              local_1a8 = (code *)0xffffffffffffffff;
              local_1b0 = (code *)0x0;
              if (*(longlong *)(pcVar10 + 0x18) != 0) {
                lVar16 = *(longlong *)(pcVar10 + 0x10);
                lVar21 = *(longlong *)(pcVar10 + 0x18) << 5;
                pcVar23 = (code *)0x0;
                uVar25 = extraout_XMM0_Qa_04;
                do {
                  pcVar10 = (char *)(*(code *)PTR_index_into_00799300)(uVar25,lVar16);
                  uVar25 = extraout_XMM0_Qa_05;
                  if ((pcVar10 != (char *)0x0) && (*pcVar10 == '\x03')) {
                    uVar7 = *(ulonglong *)(pcVar10 + 0x18);
                    pcVar10 = (char *)(*(code *)PTR_index_into_00799300)
                                                (*(undefined8 *)(pcVar10 + 0x10),lVar16);
                    uVar25 = extraout_XMM0_Qa_06;
                    if ((pcVar10 == (char *)0x0) || ((*pcVar10 != '\x01' || (pcVar10[1] == '\0'))))
                    {
                      if ((ulonglong)((longlong)local_108 - (longlong)pcVar23) < uVar7) {
                        uVar25 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::
                                 do_reserve_and_handle::<alloc[12e961f32105355]::alloc::Global>
                                           (&local_108,pcVar23,uVar7,1,1);
                        pcVar23 = (code *)local_f8._0_8_;
LAB_00487d46:
                        uVar25 = (*(code *)PTR_memcpy_00799008)(uVar25,uVar7);
                      }
                      else if (uVar7 != 0) goto LAB_00487d46;
                      pcVar23 = pcVar23 + uVar7;
                      local_f8._0_8_ = pcVar23;
                    }
                  }
                  local_1b0 = local_100;
                  pcVar8 = local_108;
                  lVar16 = lVar16 + 0x20;
                  lVar21 = lVar21 + -0x20;
                } while (lVar21 != 0);
                if (pcVar23 == (code *)0x0) {
                  if (local_108 != (code *)0x0) {
                    (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
                  }
                }
                else {
                  local_1a8 = local_108;
                }
              }
              uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <serde_json[dc3825464c436029]::value::Value>(&local_60,pcVar8);
              param_2 = local_178;
              local_160 = pcVar23;
              pcVar8 = local_180;
              if (local_140 != 0) {
                uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,8);
                param_2 = local_178;
                pcVar8 = local_180;
              }
              goto joined_r0x00487aa9;
            }
          }
        }
        uVar25 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <serde_json[dc3825464c436029]::value::Value>(&local_60,pcVar8);
        pcVar8 = local_180;
      }
    }
    if (local_140 != 0) {
      uVar25 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,8);
    }
    param_2 = local_178;
  }
  local_1a8 = (code *)0xffffffffffffffff;
joined_r0x00487aa9:
  if (pcVar8 != (code *)0x0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar25,1);
  }
  (*(code *)PTR_now_00799478)();
  <chrono[1cd233408897ab2f]::datetime::DateTime<chrono[1cd233408897ab2f]::offset::utc::Utc>>::
  to_rfc3339(&local_88,&local_108);
  if (param_2[6] != 0) {
    pcVar14 = (code *)<std[6c98fd8553dbae28]::hash::random::RandomState_as_core[c0acaeba6ab4c2e0]::hash::BuildHasher>
                      ::hash_one::<&alloc[12e961f32105355]::string::String>(param_2 + 7);
    lVar21 = local_118;
    puVar5 = PTR_bcmp_00799020;
    lVar16 = param_2[3];
    pcVar8 = (code *)param_2[4];
    bVar24 = (byte)((ulonglong)pcVar14 >> 0x39);
    auVar26 = ZEXT216(CONCAT11(bVar24,bVar24));
    auVar26 = pshuflw(auVar26,auVar26,0);
    auVar28._0_8_ = auVar26._0_8_;
    auVar28._8_4_ = auVar26._0_4_;
    auVar28._12_4_ = auVar26._4_4_;
    pcVar18 = (code *)0x0;
    while( true ) {
      pcVar14 = (code *)((ulonglong)pcVar14 & (ulonglong)pcVar8);
      auVar26 = *(undefined1 (*) [16])(pcVar14 + lVar16);
      auVar27[0] = -(auVar26[0] == auVar28[0]);
      auVar27[1] = -(auVar26[1] == auVar28[1]);
      auVar27[2] = -(auVar26[2] == auVar28[2]);
      auVar27[3] = -(auVar26[3] == auVar28[3]);
      auVar27[4] = -(auVar26[4] == auVar28[4]);
      auVar27[5] = -(auVar26[5] == auVar28[5]);
      auVar27[6] = -(auVar26[6] == auVar28[6]);
      auVar27[7] = -(auVar26[7] == auVar28[7]);
      auVar27[8] = -(auVar26[8] == auVar28[8]);
      auVar27[9] = -(auVar26[9] == auVar28[9]);
      auVar27[10] = -(auVar26[10] == auVar28[10]);
      auVar27[0xb] = -(auVar26[0xb] == auVar28[0xb]);
      auVar27[0xc] = -(auVar26[0xc] == auVar28[0xc]);
      auVar27[0xd] = -(auVar26[0xd] == auVar28[0xd]);
      auVar27[0xe] = -(auVar26[0xe] == auVar28[0xe]);
      auVar27[0xf] = -(auVar26[0xf] == auVar28[0xf]);
      uVar15 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar15;
      if (uVar15 != 0) {
        local_180 = pcVar14;
        local_170 = pcVar18;
        local_168 = pcVar8;
        local_158 = auVar28;
        local_98 = auVar26;
        do {
          uVar12 = 0;
          for (uVar3 = uVar11; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
            uVar12 = uVar12 + 1;
          }
          lVar19 = ((ulonglong)(local_180 + uVar12) & (ulonglong)local_168) * -0xe0;
          if (lVar21 == *(longlong *)(lVar16 + -0xd0 + lVar19)) {
            lVar19 = lVar19 + lVar16;
            iVar6 = (*(code *)puVar5)(-((ulonglong)(local_180 + uVar12) & (ulonglong)local_168),
                                      lVar21);
            if (iVar6 == 0) {
              lVar16 = *(longlong *)(lVar19 + -0x18);
              *(longlong *)(lVar19 + -0x18) = _DAT_00183840 + lVar16;
              *(code **)(lVar19 + -0x10) = param_9 + *(longlong *)(lVar19 + -0x10);
              if (*(longlong *)(lVar19 + -0x98) != 0) {
                (*(code *)PTR___rust_dealloc_00798fc8)(lVar16,1);
              }
              *(undefined8 *)(lVar19 + -0x88) = local_78;
              *(longlong *)(lVar19 + -0x98) = local_88;
              *(undefined8 *)(lVar19 + -0x90) = uStack_80;
              local_a0[2] = local_118;
              *local_a0 = local_128;
              local_a0[1] = uStack_120;
              local_a0[3] = local_1a8;
              local_a0[4] = local_1b0;
              local_a0[5] = local_160;
              return local_a0;
            }
          }
          uVar15 = (ushort)(uVar11 - 1) & (ushort)uVar11;
          uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar15);
          pcVar14 = local_180;
          pcVar18 = local_170;
          pcVar8 = local_168;
          auVar28 = local_158;
          auVar26 = local_98;
        } while (uVar15 != 0);
      }
      auVar31[0] = -(auVar26[0] == -1);
      auVar31[1] = -(auVar26[1] == -1);
      auVar31[2] = -(auVar26[2] == -1);
      auVar31[3] = -(auVar26[3] == -1);
      auVar31[4] = -(auVar26[4] == -1);
      auVar31[5] = -(auVar26[5] == -1);
      auVar31[6] = -(auVar26[6] == -1);
      auVar31[7] = -(auVar26[7] == -1);
      auVar31[8] = -(auVar26[8] == -1);
      auVar31[9] = -(auVar26[9] == -1);
      auVar31[10] = -(auVar26[10] == -1);
      auVar31[0xb] = -(auVar26[0xb] == -1);
      auVar31[0xc] = -(auVar26[0xc] == -1);
      auVar31[0xd] = -(auVar26[0xd] == -1);
      auVar31[0xe] = -(auVar26[0xe] == -1);
      auVar31[0xf] = -(auVar26[0xf] == -1);
      if ((((((((((((((((SUB161(auVar31 >> 7,0) & 1) != 0 || (SUB161(auVar31 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar31 >> 0x17,0) & 1) != 0) || (SUB161(auVar31 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar31 >> 0x27,0) & 1) != 0) || (SUB161(auVar31 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar31 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar31 >> 0x3f,0) & 1) != 0) || (SUB161(auVar31 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar31 >> 0x4f,0) & 1) != 0) || (SUB161(auVar31 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar31 >> 0x5f,0) & 1) != 0) || (SUB161(auVar31 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar31 >> 0x6f,0) & 1) != 0) || (SUB161(auVar31 >> 0x77,0) & 1) != 0) ||
          auVar31[0xf] < '\0') break;
      pcVar14 = pcVar14 + (longlong)pcVar18 + 0x10;
      pcVar18 = pcVar18 + 0x10;
    }
  }
  puVar17 = local_a0;
  local_a0[2] = local_118;
  *local_a0 = local_128;
  local_a0[1] = uStack_120;
  local_a0[3] = local_1a8;
  local_a0[4] = local_1b0;
  local_a0[5] = local_160;
  if (local_88 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(local_128,1);
  }
  return puVar17;
}


