// 00587530 walk_directory

/* craggemini_core[66f3c71560d70857]::license::files::walk_directory */

longlong __rustcall
craggemini_core[66f3c71560d70857]::license::files::walk_directory
          (undefined8 param_1,undefined8 param_2,char param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  int *piVar7;
  char *pcVar8;
  ulonglong uVar9;
  byte bVar10;
  undefined4 uVar11;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  int local_b8;
  uint uStack_b4;
  uint uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  
  cVar3 = (*(code *)PTR_is_absolute_00799b58)();
  pcVar8 = ".";
  if (cVar3 != '\0') {
    pcVar8 = "/";
  }
  uVar11 = (*(code *)PTR__open_00799768)(1,pcVar8);
  if (local_b8 == 1) {
    if ((1 < (uStack_b0 & 3) - 2) && ((uStack_b0 & 3) != 0)) {
      (*(code *)PTR_drop_00799040)();
    }
    lVar6 = 0x301;
  }
  else {
    uVar9 = (ulonglong)uStack_b4;
    (*(code *)PTR_components_007995d8)(uVar11,param_2);
    puVar2 = PTR_next_00799f18;
LAB_00587640:
    (*(code *)puVar2)();
    if ((byte)local_b8 != 0xff) {
      if (((byte)local_b8 & 0xe) != 6) {
        if ((byte)local_b8 != 9) {
          lVar6 = 0x301;
          goto LAB_00587884;
        }
        uVar11 = (*(code *)PTR_spec_new_impl_00799f20)(8,local_a8);
        if (CONCAT44(uStack_b4,local_b8) == -1) {
          puVar1 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
          uVar4 = (*(code *)PTR_openat_00799f10)(uVar11,0xb0000);
          if (-1 < (int)uVar4) {
LAB_00587759:
            uVar9 = (ulonglong)uVar4;
            uVar11 = (*(code *)PTR_close_00799030)();
            *puVar1 = 0;
            if (local_a8 != 0) {
              (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
              uVar9 = (ulonglong)uVar4;
            }
            goto LAB_00587640;
          }
          piVar7 = (int *)(*(code *)PTR___errno_location_007990a0)();
          iVar5 = *piVar7;
          if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
            (*(code *)PTR_set_functions_inner_007990c0)();
          }
          lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
          cVar3 = (**(code **)(lVar6 + 8))();
          if ((param_3 == '\0') || (cVar3 != '\0')) {
            lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar3 = (**(code **)(lVar6 + 8))();
            if (cVar3 == '\0') {
              bVar10 = 0;
              uVar11 = extraout_XMM0_Da_03;
            }
            else {
              bVar10 = 3;
              uVar11 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                       <core[c0acaeba6ab4c2e0]::io::error::Error>
                                 ((longlong)iVar5 << 0x20 | 2,puVar1);
            }
          }
          else {
            iVar5 = (*(code *)PTR_mkdirat_00799f28)(extraout_XMM0_Da,0x1c0);
            uVar11 = extraout_XMM0_Da_00;
            if (iVar5 != 0) {
              if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
                (*(code *)PTR_set_functions_inner_007990c0)();
              }
              lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
              cVar3 = (**(code **)(lVar6 + 8))();
              uVar11 = extraout_XMM0_Da_01;
              if (cVar3 != '\f') {
                bVar10 = 3;
                goto LAB_0058785f;
              }
            }
            uVar4 = (*(code *)PTR_openat_00799f10)(uVar11,0xb0000);
            if (-1 < (int)uVar4) goto LAB_00587759;
            bVar10 = 3;
            uVar11 = extraout_XMM0_Da_02;
            if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 != &PTR_call_once_0078dd48) {
              uVar11 = (*(code *)PTR_set_functions_inner_007990c0)();
            }
          }
LAB_0058785f:
          *puVar1 = 0;
          if (local_a8 != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
        }
        else {
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            (*(code *)PTR___rust_dealloc_00798fc8)(uVar11,1);
          }
          bVar10 = 3;
        }
        lVar6 = (ulonglong)bVar10 * 0x100 + 1;
LAB_00587884:
        (*(code *)PTR_close_00799030)();
        return lVar6;
      }
      goto LAB_00587640;
    }
    lVar6 = uVar9 << 0x20;
  }
  return lVar6;
}


