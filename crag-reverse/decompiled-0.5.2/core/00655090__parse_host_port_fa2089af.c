// 00655090 parse_host_port

/* craggemini_core[66f3c71560d70857]::binding::parse_host_port */

undefined8 * __rustcall
craggemini_core[66f3c71560d70857]::binding::parse_host_port
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  ulonglong uVar8;
  undefined *puVar9;
  char cVar10;
  ulonglong uVar11;
  byte *pbVar12;
  ulonglong extraout_RDX;
  ushort uVar13;
  uint uVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  undefined1 auVar18 [16];
  char *local_b8;
  char local_b0 [8];
  ulonglong local_a8;
  longlong local_a0;
  undefined1 local_98 [104];
  
  auVar18 = ::<str>::trim_matches::<<char>::is_whitespace>(param_2,param_3);
  if ((auVar18._8_8_ == 0) || (*auVar18._0_8_ != '[')) {
LAB_00655119:
    puVar9 = PTR_memrchr_0079a040;
    uVar17 = auVar18._8_8_;
    uVar8 = uVar17;
    do {
      lVar16 = (*(code *)puVar9)();
      if (lVar16 != 1) break;
      if ((uVar8 < uVar17) && (*(char *)(auVar18._0_8_ + uVar8) == ':')) {
        if ((longlong)uVar8 < 0) goto LAB_0065515d;
        goto LAB_0065523e;
      }
    } while (uVar8 <= uVar17);
LAB_00655169:
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &DAT_001a38fe;
    param_1[2] = 0x1a;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = &DAT_001a3918;
    param_1[5] = 0x12;
LAB_006551d5:
    param_1[6] = 0;
    *(undefined4 *)(param_1 + 7) = 0x6020190;
    return param_1;
  }
  lVar16 = auVar18._8_8_ + -1;
  local_b8 = auVar18._0_8_ + 1;
  auVar18._8_8_ = lVar16;
  auVar18._0_8_ = local_b8;
  (*(code *)PTR_new_00799a18)(&DAT_001a392a,lVar16,2);
  <core[c0acaeba6ab4c2e0]::str::pattern::StrSearcher_as_core[c0acaeba6ab4c2e0]::str::pattern::Searcher>
  ::next_match(local_b0,local_98);
  if (local_b0[0] == '\0') {
    *param_1 = 0xffffffffffffffff;
    param_1[1] = &DAT_001a38fe;
    param_1[2] = 0x1a;
    param_1[3] = 0xffffffffffffffff;
    param_1[4] = &DAT_001a392c;
    param_1[5] = 0x11;
    goto LAB_006551d5;
  }
  if ((longlong)local_a8 < 0) {
    (*(code *)PTR_handle_error_00798ff0)();
    goto LAB_00655119;
  }
  uVar17 = lVar16 - local_a0;
  auVar18._8_8_ = uVar17;
  local_b8 = local_b8 + local_a0;
  if (local_a8 == 0) {
LAB_006552a3:
    pbVar7 = (byte *)0x1;
    local_a8 = 0;
  }
  else {
    uVar8 = extraout_RDX;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    pbVar7 = (byte *)(*(code *)PTR___rust_alloc_00799000)();
    if (pbVar7 == (byte *)0x0) {
      (*(code *)PTR_handle_error_00798ff0)();
LAB_0065523e:
      uVar17 = auVar18._8_8_ - (uVar8 + 1);
      local_b8 = (char *)(auVar18._0_8_ + uVar8 + 1);
      if (uVar8 == 0) goto LAB_006552a3;
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      pbVar7 = (byte *)(*(code *)PTR___rust_alloc_00799000)();
      local_a8 = uVar8;
      if (pbVar7 != (byte *)0x0) goto LAB_0065527d;
LAB_0065515d:
      (*(code *)PTR_handle_error_00798ff0)();
      goto LAB_00655169;
    }
LAB_0065527d:
    (*(code *)PTR_memcpy_00799008)();
  }
  if (uVar17 != 0) {
    if (uVar17 == 1) {
      cVar10 = *local_b8;
      if ((cVar10 == '+') || (cVar10 == '-')) goto LAB_006553b5;
    }
    else {
      cVar10 = *local_b8;
    }
    uVar8 = (ulonglong)(cVar10 == '+');
    uVar11 = uVar17 - uVar8;
    pbVar12 = (byte *)(local_b8 + uVar8);
    if (uVar11 < 5) {
      if (uVar17 == uVar8) {
        uVar5 = 0;
      }
      else {
        uVar5 = *pbVar12 - 0x30;
        if (9 < uVar5) goto LAB_006553b5;
        if (uVar11 != 1) {
          if (9 < pbVar12[1] - 0x30) goto LAB_006553b5;
          uVar5 = (short)uVar5 * 10 + (pbVar12[1] - 0x30);
          if (uVar11 != 2) {
            if (9 < pbVar12[2] - 0x30) goto LAB_006553b5;
            uVar5 = uVar5 * 10 + (pbVar12[2] - 0x30);
            if (uVar11 != 3) {
              if (9 < pbVar12[3] - 0x30) goto LAB_006553b5;
              uVar5 = uVar5 * 10 + (pbVar12[3] - 0x30);
            }
          }
        }
      }
LAB_006553a3:
      iVar6 = uVar5 << 0x10;
      bVar3 = false;
LAB_006553a6:
      if (iVar6 != 0 && !bVar3) {
        pbVar12 = (byte *)(local_a8 - 0xfe);
        if ((byte *)0xffffffffffffff02 < pbVar12) {
          pbVar12 = pbVar7 + local_a8;
          pbVar15 = pbVar7;
          do {
            if (pbVar15 == pbVar12) {
              param_1[1] = local_a8;
              param_1[2] = pbVar7;
              param_1[3] = local_a8;
              *(short *)(param_1 + 4) = (short)((uint)iVar6 >> 0x10);
              *param_1 = 0xfffffffffffffffe;
              return param_1;
            }
            bVar2 = *pbVar15;
            uVar5 = (uint)bVar2;
            if ((char)bVar2 < '\0') {
              uVar14 = bVar2 & 0x1f;
              pbVar1 = pbVar15 + 1;
              if (bVar2 < 0xe0) {
                pbVar15 = pbVar15 + 2;
                uVar5 = uVar14 << 6 | *pbVar1 & 0x3f;
              }
              else {
                uVar5 = pbVar15[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
                if (bVar2 < 0xf0) {
                  pbVar15 = pbVar15 + 3;
                  uVar5 = uVar5 | uVar14 << 0xc;
                }
                else {
                  pbVar1 = pbVar15 + 3;
                  pbVar15 = pbVar15 + 4;
                  uVar5 = *pbVar1 & 0x3f | uVar5 << 6 | (bVar2 & 7) << 0x12;
                }
              }
            }
            else {
              pbVar15 = pbVar15 + 1;
            }
          } while ((0x2f < uVar5) || ((0x800100002400U >> ((ulonglong)uVar5 & 0x3f) & 1) == 0));
        }
        *param_1 = 0xffffffffffffffff;
        param_1[1] = &DAT_001a38fe;
        puVar9 = &DAT_001a3949;
        goto LAB_006553e0;
      }
    }
    else {
      lVar16 = 0;
      uVar5 = 0;
      do {
        if (lVar16 == uVar17 - uVar8) goto LAB_006553a3;
        uVar4 = (ushort)(uVar5 * 10);
        if ((short)(uVar5 * 10 >> 0x10) != 0) {
          iVar6 = 0;
          bVar3 = true;
          goto LAB_006553a6;
        }
        uVar13 = (ushort)(pbVar12[lVar16] - 0x30);
        uVar5 = (uint)(ushort)(uVar4 + uVar13);
      } while ((pbVar12[lVar16] - 0x30 < 10) && (lVar16 = lVar16 + 1, !CARRY2(uVar4,uVar13)));
    }
  }
LAB_006553b5:
  pbVar12 = &DAT_0000001a;
  *param_1 = 0xffffffffffffffff;
  *(undefined2 *)(param_1 + 1) = 0x38fe;
  *(undefined2 *)((longlong)param_1 + 0xe) = 0;
  *(undefined4 *)((longlong)param_1 + 10) = 0x1a;
  puVar9 = &DAT_001a393d;
LAB_006553e0:
  param_1[2] = 0x1a;
  param_1[3] = 0xffffffffffffffff;
  param_1[4] = puVar9;
  param_1[5] = 0xc;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0x6020190;
  if (local_a8 == 0) {
    return param_1;
  }
  (*(code *)PTR___rust_dealloc_00798fc8)(pbVar12,1);
  return param_1;
}


