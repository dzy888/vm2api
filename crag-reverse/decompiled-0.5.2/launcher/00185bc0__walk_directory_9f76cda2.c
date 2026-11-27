// 00185bc0 walk_directory

/* craggemini[b21da2d71f2da7a3]::license::files::walk_directory */

longlong __rustcall
craggemini[b21da2d71f2da7a3]::license::files::walk_directory
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
  
  cVar3 = (*(code *)PTR_is_absolute_0021a0f0)();
  pcVar8 = ".";
  if (cVar3 != '\0') {
    pcVar8 = "/";
  }
  uVar11 = (*(code *)PTR__open_0021a0f8)(1,pcVar8);
  if (local_b8 == 1) {
    if ((1 < (uStack_b0 & 3) - 2) && ((uStack_b0 & 3) != 0)) {
      (*(code *)PTR_drop_00219c58)();
    }
    lVar6 = 0x301;
  }
  else {
    uVar9 = (ulonglong)uStack_b4;
    (*(code *)PTR_components_0021a100)(uVar11,param_2);
    puVar2 = PTR_next_0021a108;
LAB_00185cd0:
    (*(code *)puVar2)();
    if ((byte)local_b8 != 0xff) {
      if (((byte)local_b8 & 0xe) != 6) {
        if ((byte)local_b8 != 9) {
          lVar6 = 0x301;
          goto LAB_00185f14;
        }
        uVar11 = (*(code *)PTR_spec_new_impl_0021a110)(8,local_a8);
        if (CONCAT44(uStack_b4,local_b8) == -1) {
          puVar1 = (undefined1 *)CONCAT44(uStack_ac,uStack_b0);
          uVar4 = (*(code *)PTR_openat_0021a070)(uVar11,0xb0000);
          if (-1 < (int)uVar4) {
LAB_00185de9:
            uVar9 = (ulonglong)uVar4;
            uVar11 = (*(code *)PTR_close_00219d60)();
            *puVar1 = 0;
            if (local_a8 != 0) {
              (*(code *)PTR___rust_dealloc_00219c40)(uVar11,1);
              uVar9 = (ulonglong)uVar4;
            }
            goto LAB_00185cd0;
          }
          piVar7 = (int *)(*(code *)PTR___errno_location_00219f18)();
          iVar5 = *piVar7;
          if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
              &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
            (*(code *)PTR_set_functions_inner_00219f28)();
          }
          lVar6 = (*(code *)PTR_get_os_functions_0021a0e8)();
          cVar3 = (**(code **)(lVar6 + 8))();
          if ((param_3 == '\0') || (cVar3 != '\0')) {
            lVar6 = (*(code *)PTR_get_os_functions_0021a0e8)();
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
            iVar5 = (*(code *)PTR_mkdirat_0021a118)(extraout_XMM0_Da,0x1c0);
            uVar11 = extraout_XMM0_Da_00;
            if (iVar5 != 0) {
              if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
                  &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
                (*(code *)PTR_set_functions_inner_00219f28)();
              }
              lVar6 = (*(code *)PTR_get_os_functions_0021a0e8)();
              cVar3 = (**(code **)(lVar6 + 8))();
              uVar11 = extraout_XMM0_Da_01;
              if (cVar3 != '\f') {
                bVar10 = 3;
                goto LAB_00185eef;
              }
            }
            uVar4 = (*(code *)PTR_openat_0021a070)(uVar11,0xb0000);
            if (-1 < (int)uVar4) goto LAB_00185de9;
            bVar10 = 3;
            uVar11 = extraout_XMM0_Da_02;
            if (*(undefined ***)PTR_OS_FUNCTIONS_00219f20 !=
                &anon_16a3b356826a16bc04f9b830aca94c66_0_llvm_11779858384484307972) {
              uVar11 = (*(code *)PTR_set_functions_inner_00219f28)();
            }
          }
LAB_00185eef:
          *puVar1 = 0;
          if (local_a8 != 0) {
            (*(code *)PTR___rust_dealloc_00219c40)(uVar11,1);
          }
        }
        else {
          if (CONCAT44(uStack_b4,local_b8) != 0) {
            (*(code *)PTR___rust_dealloc_00219c40)(uVar11,1);
          }
          bVar10 = 3;
        }
        lVar6 = (ulonglong)bVar10 * 0x100 + 1;
LAB_00185f14:
        (*(code *)PTR_close_00219d60)();
        return lVar6;
      }
      goto LAB_00185cd0;
    }
    lVar6 = uVar9 << 0x20;
  }
  return lVar6;
}


