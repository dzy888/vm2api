// 00710b50 bind_addr

/* mio[4b4dae02747c797f]::sys::unix::uds::listener::bind_addr */

undefined4 * __rustcall
mio[4b4dae02747c797f]::sys::unix::uds::listener::bind_addr(undefined4 *param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  uint *puVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined2 uVar13;
  undefined2 uVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  
  lVar6 = 0;
  iVar1 = (*(code *)PTR_socket_0079aa88)();
  if (iVar1 < 0) {
    piVar3 = (int *)(*(code *)PTR___errno_location_007990a0)();
    iVar1 = *piVar3;
    if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
        &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
      (*(code *)PTR_set_functions_inner_007990c0)();
    }
    *(ulonglong *)(param_1 + 2) = (longlong)iVar1 << 0x20 | 2;
    *param_1 = 1;
  }
  else {
    uVar15 = 0;
    uVar16 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 0;
    uVar8 = 0;
    pcVar2 = (char *)(*(code *)PTR_as_pathname_0079a9d0)();
    if (((pcVar2 == (char *)0x0) &&
        (pcVar2 = (char *)(*(code *)PTR_as_abstract_name_0079a9d8)(), pcVar2 == (char *)0x0)) ||
       ((*(code *)PTR_memcpy_00799008)(), lVar6 == 0)) {
      iVar5 = 2;
    }
    else {
      iVar5 = (int)lVar6 + (3 - (uint)(*pcVar2 == '\0'));
    }
    iVar5 = (*(code *)PTR_bind_0079aa68)
                      (uVar12,iVar5,0,uVar8,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                       uVar16);
    if (iVar5 < 0) {
      puVar4 = (uint *)(*(code *)PTR___errno_location_007990a0)();
      uVar7 = (ulonglong)*puVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
    }
    else {
      iVar5 = (*(code *)PTR_listen_0079aa80)();
      if (-1 < iVar5) {
        param_1[1] = iVar1;
        *param_1 = 0;
        return param_1;
      }
      puVar4 = (uint *)(*(code *)PTR___errno_location_007990a0)();
      uVar7 = (ulonglong)*puVar4;
      if (*(undefined ***)PTR_OS_FUNCTIONS_007990a8 !=
          &anon_e028aac905421e2c9e47b66f9d5ebdd3_3_llvm_3338540630057475929) {
        (*(code *)PTR_set_functions_inner_007990c0)();
      }
    }
    *(ulonglong *)(param_1 + 2) = uVar7 << 0x20 | 2;
    *param_1 = 1;
    (*(code *)PTR_close_00799030)();
  }
  return param_1;
}


