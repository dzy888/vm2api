// 00586d20 child_pre_exec_attach

/* craggemini_core[66f3c71560d70857]::guard::child_pre_exec_attach */

ulonglong __rustcall
craggemini_core[66f3c71560d70857]::guard::child_pre_exec_attach
          (int param_1,uint param_2,int param_3,undefined8 param_4,uint param_5,char param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  longlong lVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar14;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 local_70;
  undefined2 local_6c;
  uint local_64;
  ulonglong local_60;
  longlong local_58;
  uint local_50;
  undefined4 local_4c;
  undefined8 local_48;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined6 uStack_38;
  undefined1 uStack_32;
  undefined1 local_31;
  
  uVar10 = (ulonglong)param_5;
  iVar5 = (*(code *)PTR_setsid_00799ec8)();
  if (-1 < iVar5) {
    if ((param_2 & 1) != 0) {
      iVar5 = (*(code *)PTR_ioctl_00799ed0)(extraout_XMM0_Da,0);
      if ((((iVar5 < 0) || (iVar5 = (*(code *)PTR_dup2_00799ed8)(), iVar5 < 0)) ||
          (iVar5 = (*(code *)PTR_dup2_00799ed8)(), iVar5 < 0)) ||
         (iVar5 = (*(code *)PTR_dup2_00799ed8)(), iVar5 < 0)) goto LAB_00586dff;
      if ((param_6 != '\0') && (iVar5 = (*(code *)PTR_open_00799ee0)(), -1 < iVar5)) {
        (*(code *)PTR_dup2_00799ed8)();
        (*(code *)PTR_close_00799030)();
      }
      if (2 < param_3) {
        (*(code *)PTR_close_00799030)();
      }
    }
    iVar5 = (*(code *)PTR_prctl_007991e0)();
    if (iVar5 == 0) {
      iVar5 = (*(code *)PTR_getppid_00799ee8)();
      if (iVar5 == param_1) {
        uVar9 = (*(code *)PTR_getpid_00799ef0)();
        puVar4 = PTR_write_00799ef8;
        puVar2 = PTR_OS_FUNCTIONS_007990a8;
        puVar1 = PTR___errno_location_007990a0;
        uVar14 = 0;
        local_48 = 0;
        uStack_40 = 0;
        uStack_39 = 0;
        uStack_38 = 0;
        uStack_32 = 0;
        local_31 = 10;
        local_64 = param_5;
        if ((int)uVar9 == 0) {
          uStack_32 = 0x30;
          uVar13 = 0x16;
        }
        else {
          uVar12 = 0x16;
          do {
            uVar13 = uVar12;
            if (0x17 < uVar13) {
              (*(code *)PTR_panic_bounds_check_00799520)(0,&PTR_s_src_guard_rs_0078dd78);
              goto LAB_0058714d;
            }
            uVar6 = (uint)uVar9;
            uVar12 = (uVar9 & 0xffffffff) / 10;
            *(byte *)((longlong)&local_48 + uVar13) = (char)uVar9 + (char)uVar12 * -10 | 0x30;
            uVar9 = uVar12;
            uVar12 = uVar13 - 1;
          } while (9 < uVar6);
        }
        uVar13 = 0x18 - uVar13;
        do {
          while( true ) {
            uVar10 = (*(code *)puVar4)(uVar14,uVar13);
            puVar3 = PTR_poll_00799b78;
            if (-1 < (longlong)uVar10) break;
            piVar7 = (int *)(*(code *)puVar1)();
            iVar5 = *piVar7;
            lVar8 = (longlong)iVar5;
            uVar14 = extraout_XMM0_Da_01;
            if (*(undefined ***)puVar2 != &PTR_call_once_0078dd48) {
              local_58 = lVar8;
              uVar14 = (*(code *)PTR_set_functions_inner_007990c0)();
              iVar5 = (int)local_58;
              lVar8 = local_58;
            }
            if (iVar5 != 4) goto LAB_00586e22;
          }
          if (uVar10 == 0) {
            uVar10 = 0x2000000002;
LAB_005870a5:
            if (*(undefined ***)puVar2 == &PTR_call_once_0078dd48) {
              return uVar10;
            }
            goto LAB_00586ee6;
          }
          if (uVar13 < uVar10) {
            (*(code *)PTR_slice_index_fail_007993c8)(&PTR_s_src_guard_rs_0078dd60,uVar13);
            goto LAB_005870ec;
          }
          uVar13 = uVar13 - uVar10;
          uVar14 = extraout_XMM0_Da_00;
        } while (uVar13 != 0);
        local_6c = 0;
        local_70 = 0;
        uVar10 = 0;
LAB_00586fc2:
        local_58 = (longlong)&local_70 + uVar10;
        lVar11 = 6 - uVar10;
        do {
          local_50 = local_64;
          local_4c = 1;
          iVar5 = (*(code *)puVar3)(uVar14,5000);
          if (-1 < iVar5) {
            if (iVar5 == 0) {
              uVar10 = 0x6e00000002;
              goto LAB_005870a5;
            }
            lVar8 = (*(code *)PTR_read_00799e98)(extraout_XMM0_Da_02,lVar11);
            if (-1 < lVar8) goto LAB_00587062;
          }
          piVar7 = (int *)(*(code *)puVar1)();
          iVar5 = *piVar7;
          lVar8 = (longlong)iVar5;
          uVar14 = extraout_XMM0_Da_04;
          if (*(undefined ***)puVar2 != &PTR_call_once_0078dd48) {
            local_60 = uVar10;
            uVar14 = (*(code *)PTR_set_functions_inner_007990c0)();
            uVar10 = local_60;
          }
          if (iVar5 != 4) goto LAB_00586e22;
        } while( true );
      }
      uVar10 = 0x2000000002;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 == &PTR_call_once_0078dd48) {
        return 0x2000000002;
      }
      goto LAB_00586ee6;
    }
  }
LAB_00586dff:
  piVar7 = (int *)(*(code *)PTR___errno_location_007990a0)();
  lVar8 = (longlong)*piVar7;
  if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
    (*(code *)PTR_set_functions_inner_007990c0)();
  }
LAB_00586e22:
  return lVar8 << 0x20 | 2;
LAB_00587062:
  if (lVar8 == 0) goto LAB_005870ec;
  uVar10 = uVar10 + lVar8;
  uVar14 = extraout_XMM0_Da_03;
  if (5 < uVar10) {
    if (CONCAT24(local_6c,local_70) == 0xa5944414552) {
      return 0;
    }
    uVar10 = 0x4700000002;
    if (*(undefined ***)puVar2 != &PTR_call_once_0078dd48) {
LAB_0058714d:
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    return uVar10;
  }
  goto LAB_00586fc2;
LAB_005870ec:
  uVar10 = 0x2000000002;
  if (*(undefined ***)puVar2 == &PTR_call_once_0078dd48) {
    return 0x2000000002;
  }
LAB_00586ee6:
  (*(code *)PTR_set_functions_inner_007990c0)();
  return uVar10;
}


