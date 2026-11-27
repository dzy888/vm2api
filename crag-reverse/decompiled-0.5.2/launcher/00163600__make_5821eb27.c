// 00163600 make

/* <craggemini[b21da2d71f2da7a3]::license::LicenseStatus>::make */

void __rustcall
<craggemini[b21da2d71f2da7a3]::license::LicenseStatus>::make
          (ulonglong *param_1,char *param_2,char *param_3,char *param_4,ulonglong param_5)

{
  bool bVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  char cVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  ulonglong in_R10;
  ulonglong in_R11;
  undefined *puVar12;
  ulonglong *puVar13;
  undefined *puVar14;
  bool bVar15;
  ulonglong local_c8;
  ulonglong local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  undefined *local_a0;
  ulonglong local_98;
  ulonglong local_90;
  int *local_88;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong uStack_70;
  ulonglong local_68;
  ulonglong local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  ulonglong local_48;
  ulonglong uStack_40;
  
  pcVar8 = (char *)(param_5 & 0xffffffff);
  puVar13 = param_1;
  if ((byte)pcVar8 == 0xff) {
    local_a0 = &DAT_00117806;
    local_98 = 5;
  }
  else {
    if (6 < (byte)pcVar8) goto LAB_00163693;
    local_98 = *(ulonglong *)(&DAT_00117c10 + (param_5 & 0xff) * 8);
    local_a0 = &DAT_00117c48 + *(int *)(&DAT_00117c48 + (param_5 & 0xff) * 4);
  }
  pcVar10 = param_2;
  if (param_4 != (char *)0x0) goto LAB_0016366f;
LAB_001636ae:
  puVar5 = (ulonglong *)0x0;
  param_2 = param_3;
  pcVar9 = pcVar8;
  if ((longlong)param_3 < 0) goto LAB_00163684;
  do {
    if (param_2 == (char *)0x0) {
      local_a8 = (ulonglong *)0x1;
      puVar4 = puVar13;
joined_r0x00163791:
      if (param_4 == (char *)0x0) {
        local_58._0_4_ = 0;
        local_58._4_4_ = 0;
        cVar3 = -1;
        local_c8 = 0xffffffffffffffff;
        puVar12 = (undefined *)0x0;
        local_80 = 0xffffffffffffffff;
        puVar14 = (undefined *)0x0;
        local_88 = (int *)0x0;
        local_78 = local_48;
        uStack_70 = uStack_40;
      }
      else {
        local_88 = *(int **)(param_4 + 0x70);
        local_60 = *(ulonglong *)(param_4 + 0x78);
        if (local_60 == 4) {
          bVar15 = *local_88 != 0x74736f68;
          local_b8 = 6;
          if (!bVar15) {
            local_b8 = 0x11;
          }
          puVar14 = &DAT_00117846;
          if (!bVar15) {
            puVar14 = &DAT_0011784c;
          }
          local_b0 = (ulonglong)bVar15 * 2 + 4;
          puVar12 = &DAT_00117864;
          if (!bVar15) {
            puVar12 = &DAT_00114654;
          }
        }
        else if (local_60 == 7) {
          local_b0 = 6;
          bVar15 = *(int *)((longlong)local_88 + 3) == 0x646e756f;
          bVar1 = *local_88 == 0x6f626e75;
          puVar14 = &DAT_00117846;
          if (bVar15 && bVar1) {
            puVar14 = &DAT_0011785d;
          }
          puVar12 = &DAT_00117864;
          if (bVar15 && bVar1) {
            puVar12 = &DAT_0011786a;
          }
          local_b8 = (ulonglong)(bVar15 && bVar1) | 6;
        }
        else {
          local_b0 = 6;
          puVar12 = &DAT_00117864;
          puVar14 = &DAT_00117846;
          local_b8 = 6;
        }
        local_58 = *(undefined8 *)(param_4 + 0x68);
        uStack_50 = 0;
        (*(code *)PTR_clone_00219d58)();
        local_90 = local_78;
        local_c8 = local_80;
        local_68 = uStack_70;
        pcVar10 = param_4 + 0x38;
        puVar4 = &local_80;
        (*(code *)PTR_clone_00219d58)();
        cVar3 = param_4[0x80];
      }
      cVar7 = (char)pcVar9;
      if (puVar5 != (ulonglong *)0x0) {
        param_5 = *puVar5;
        pcVar10 = (char *)puVar5[1];
        puVar4 = (ulonglong *)puVar5[2];
      }
      uVar2 = (ulonglong)(puVar5 != (ulonglong *)0x0);
      if (cVar7 == -1) {
        puVar11 = (undefined *)0x0;
        uVar6 = 0;
        cVar7 = -1;
      }
      else {
        puVar11 = &DAT_00117c64 + *(int *)(&DAT_00117c64 + ((ulonglong)pcVar9 & 0xff) * 4);
        uVar6 = (ulonglong)(uint)((int)((ulonglong)pcVar9 & 0xff) << 3);
        in_R10 = *(ulonglong *)(&DAT_00117c80 + uVar6);
        in_R11 = *(ulonglong *)(&DAT_00117cb8 + uVar6);
        uVar6 = *(ulonglong *)
                 ((longlong)
                  &PTR_anon_c9247e0b0208fc9c8c019285c3882aec_80_llvm_5798562142159169407_00215470 +
                 uVar6);
      }
      param_1[0x10] = (ulonglong)&DAT_00117870;
      param_1[0x11] = 10;
      param_1[0x12] = (ulonglong)local_a0;
      param_1[0x13] = local_98;
      *(bool *)(param_1 + 0x1e) = cVar7 == -1;
      param_1[6] = (ulonglong)param_2;
      param_1[7] = (ulonglong)local_a8;
      param_1[8] = (ulonglong)param_2;
      param_1[0x14] = (ulonglong)local_88;
      param_1[0x15] = local_60;
      param_1[0x16] = (ulonglong)puVar14;
      param_1[0x17] = local_b8;
      param_1[0x18] = (ulonglong)puVar12;
      param_1[0x19] = local_b0;
      param_1[0xf] = CONCAT44(local_58._4_4_,(undefined4)local_58);
      param_1[9] = local_c8;
      param_1[10] = local_90;
      param_1[0xb] = local_68;
      param_1[0xc] = local_80;
      param_1[0xd] = local_78;
      param_1[0xe] = uStack_70;
      *(char *)((longlong)param_1 + 0xf1) = cVar3;
      *param_1 = uVar2;
      param_1[1] = param_5;
      param_1[2] = uVar2;
      param_1[3] = (ulonglong)pcVar10;
      param_1[4] = uVar2;
      param_1[5] = (ulonglong)puVar4;
      param_1[0x1a] = (ulonglong)puVar11;
      param_1[0x1b] = in_R10;
      param_1[0x1c] = uVar6;
      param_1[0x1d] = in_R11;
      return;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00219c80)();
    puVar13 = (ulonglong *)0x1;
    puVar4 = (ulonglong *)(*(code *)PTR___rust_alloc_00219c88)();
    pcVar8 = param_2;
    if (puVar4 != (ulonglong *)0x0) {
      (*(code *)PTR_memcpy_00219c60)();
      pcVar9 = (char *)((ulonglong)pcVar9 & 0xffffffff);
      local_a8 = puVar4;
      goto joined_r0x00163791;
    }
    while( true ) {
      param_3 = param_2;
      (*(code *)PTR_handle_error_00219c78)();
LAB_00163693:
      local_a0 = &DAT_001178a4;
      local_98 = 7;
      pcVar10 = param_2;
      if (param_4 == (char *)0x0) goto LAB_001636ae;
LAB_0016366f:
      puVar5 = (ulonglong *)0x0;
      if (*param_4 != '\0') {
        puVar5 = (ulonglong *)(param_4 + 8);
      }
      param_2 = param_3;
      pcVar9 = pcVar8;
      if (-1 < (longlong)param_3) break;
LAB_00163684:
      puVar13 = (ulonglong *)0x0;
    }
  } while( true );
}


