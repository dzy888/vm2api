// 006541e0 create

/* WARNING: Removing unreachable block (ram,0x00654477) */
/* <craggemini_core[66f3c71560d70857]::shm::ShmOwner>::create */

longlong * __rustcall
<craggemini_core[66f3c71560d70857]::shm::ShmOwner>::create
          (longlong *param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  longlong lVar1;
  char cVar2;
  int iVar3;
  longlong lVar4;
  undefined8 *puVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined1 auVar12 [16];
  int local_108;
  undefined4 local_104;
  longlong local_100;
  int local_e0;
  ulonglong local_d8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  uint local_a8;
  int local_a4;
  
  lVar8 = param_2[1];
  lVar1 = param_2[2];
  cVar2 = (*(code *)PTR_is_absolute_00799b58)();
  if (cVar2 == '\0') {
    local_100 = (*(code *)PTR_<&str>_007991e8)(extraout_XMM0_Da,0x23);
    uVar11 = extraout_XMM0_Da_00;
LAB_006542bc:
    param_1[1] = local_100;
  }
  else {
    uVar6 = param_4 - 0x10000;
    uVar7 = CONCAT71((int7)(uVar6 >> 8),uVar6 < 0x3ff0001);
    if (0x3ff0000 < param_3 - 0x10000U || uVar6 >= 0x3ff0001) {
      local_100 = (*(code *)PTR_<&str>_007991e8)(uVar7,0x2a);
      uVar11 = extraout_XMM0_Da_01;
      goto LAB_006542bc;
    }
    uVar11 = (*(code *)PTR_symlink_metadata_007992d0)(uVar7,lVar1);
    if (local_e0 == 2) {
      uVar9 = (uint)local_d8 & 3;
      switch(uVar9) {
      case 0:
        cVar2 = *(char *)(local_d8 + 0x10);
        break;
      case 1:
        cVar2 = *(char *)(local_d8 + 0x1f);
        break;
      case 2:
        lVar4 = (*(code *)PTR_get_os_functions_007992e0)();
        cVar2 = (**(code **)(lVar4 + 8))();
        uVar11 = extraout_XMM0_Da_05;
        break;
      case 3:
        cVar2 = (char)(local_d8 >> 0x20);
      }
      if (cVar2 == '\0') {
        if ((1 < uVar9 - 2) && ((local_d8 & 3) != 0)) {
          (*(code *)PTR_drop_00799040)();
        }
LAB_006543a2:
        uVar11 = (*(code *)PTR__open_00799768)(lVar1,lVar8);
        if (local_108 != 1) {
          puVar5 = (undefined8 *)(*(code *)PTR_set_permissions_007992e8)(uVar11,0x180);
          if (puVar5 == (undefined8 *)0x0) {
            uVar9 = (int)param_3 + 0xfffU & 0xffff000;
            uVar6 = (ulonglong)uVar9;
            uVar10 = (int)param_4 + 0xfffU & 0xffff000;
            lVar8 = uVar6 + uVar10 + 0x1000;
            puVar5 = (undefined8 *)(*(code *)PTR_set_len_0079a0d8)();
            if (puVar5 == (undefined8 *)0x0) {
              (*(code *)PTR_metadata_00799b30)();
              if (((((local_a8 & 0xf000) == 0x8000) &&
                   (iVar3 = (*(code *)PTR_geteuid_007992d8)(), (local_a8 & 0xfff) == 0x180)) &&
                  (local_b0 == 1)) && (local_a4 == iVar3)) {
                auVar12 = <craggemini_core[66f3c71560d70857]::shm::Mapping>::map_file
                                    (local_104,lVar8);
                puVar5 = auVar12._8_8_;
                if ((auVar12._0_8_ & 1) == 0) {
                  (*(code *)PTR_memset_00799090)(auVar12._0_8_,0x1000);
                  *puVar5 = 0x31304d4853594741;
                  *(undefined4 *)(puVar5 + 1) = 1;
                  *(undefined4 *)(puVar5 + 2) = 0x1000;
                  *(uint *)((longlong)puVar5 + 0x14) = uVar9;
                  *(int *)(puVar5 + 3) = (int)(uVar6 + 0x1000);
                  *(uint *)((longlong)puVar5 + 0x1c) = uVar10;
                  puVar5[4] = 0;
                  puVar5[5] = 0;
                  puVar5[6] = 0;
                  puVar5[7] = 0;
                  puVar5[8] = 0;
                  puVar5[9] = 0;
                  puVar5[10] = 0;
                  puVar5[0xb] = 0;
                  puVar5[0xc] = 0;
                  puVar5[0xd] = 0;
                  puVar5[0xe] = 0;
                  puVar5[0xf] = 0;
                  param_1[2] = param_2[2];
                  lVar1 = param_2[1];
                  *param_1 = *param_2;
                  param_1[1] = lVar1;
                  param_1[3] = (longlong)puVar5;
                  param_1[4] = lVar8;
                  param_1[5] = 0x1000;
                  param_1[6] = uVar6;
                  param_1[7] = uVar6 + 0x1000;
                  param_1[8] = (ulonglong)uVar10;
                  *(undefined4 *)(param_1 + 9) = local_c0;
                  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_bc;
                  *(undefined4 *)(param_1 + 10) = uStack_b8;
                  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_b4;
                  param_1[0xb] = 0;
                  param_1[0xc] = 0;
                  (*(code *)PTR_close_00799030)();
                  return param_1;
                }
              }
              else {
                uVar7 = (*(code *)PTR_remove_file_007992f0)();
                uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                         <core[c0acaeba6ab4c2e0]::option::Option<core[c0acaeba6ab4c2e0]::io::error::Error>>
                                   (uVar7,lVar1);
                puVar5 = (undefined8 *)(*(code *)PTR_<&str>_007991e8)(uVar11,0x36);
              }
            }
          }
          param_1[1] = (longlong)puVar5;
          *param_1 = -1;
          uVar11 = (*(code *)PTR_close_00799030)();
          lVar8 = *param_2;
          goto joined_r0x00654621;
        }
        goto LAB_006542bc;
      }
    }
    else {
      if ((local_a8 & 0xf000) == 0x8000) {
        iVar3 = (*(code *)PTR_geteuid_007992d8)();
        uVar11 = extraout_XMM0_Da_02;
        if (local_a4 == iVar3) {
          local_d8 = (*(code *)PTR_remove_file_007992f0)();
          uVar11 = extraout_XMM0_Da_03;
          if (local_d8 == 0) goto LAB_006543a2;
          goto LAB_00654369;
        }
      }
      local_d8 = (*(code *)PTR_<&str>_007991e8)(uVar11,0x3a);
      uVar11 = extraout_XMM0_Da_04;
    }
LAB_00654369:
    param_1[1] = local_d8;
  }
  *param_1 = -1;
  lVar8 = *param_2;
joined_r0x00654621:
  if (lVar8 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
  }
  return param_1;
}


