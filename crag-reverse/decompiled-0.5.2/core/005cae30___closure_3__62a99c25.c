// 005cae30 {closure#3}

/* craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::{closure#3} */

void __rustcall
craggemini_core[66f3c71560d70857]::oauth::inspect_token_file::_closure_3_
          (longlong *param_1,char *param_2)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar5;
  longlong local_60;
  undefined1 *puStack_58;
  longlong local_50;
  
  cVar1 = *param_2;
  if (cVar1 == '\x03') {
    param_2 = *(char **)(param_2 + 0x18);
    if (-1 < (longlong)param_2) {
      if (param_2 == (char *)0x0) {
        lVar4 = 1;
LAB_005caf27:
        *param_1 = (longlong)param_2;
        param_1[1] = lVar4;
        param_1[2] = (longlong)param_2;
        return;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar4 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar4 != 0) {
        (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,param_2);
        goto LAB_005caf27;
      }
    }
    cVar1 = (*(code *)PTR_handle_error_00798ff0)();
  }
  if (cVar1 != '\x02') {
LAB_005cafd9:
    *param_1 = -1;
    return;
  }
  if (*(longlong *)(param_2 + 8) == 0) {
    if (*(longlong *)(param_2 + 0x10) < 0) goto LAB_005cafd9;
LAB_005caf44:
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puStack_58 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puStack_58 == (undefined1 *)0x0) {
LAB_005cb016:
      uVar5 = (*(code *)PTR_handle_error_00798ff0)();
      if (local_60 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar5,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_60 = 0x13;
    local_50 = 0;
    lVar3 = 0x13;
    lVar4 = 0;
  }
  else {
    if ((int)*(longlong *)(param_2 + 8) != 1) goto LAB_005cafd9;
    if (-1 < *(longlong *)(param_2 + 0x10)) goto LAB_005caf44;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar4 = 1;
    puStack_58 = (undefined1 *)(*(code *)PTR___rust_alloc_00799000)();
    if (puStack_58 == (undefined1 *)0x0) goto LAB_005cb016;
    local_60 = 0x14;
    *puStack_58 = 0x2d;
    local_50 = 1;
    lVar3 = 0x14;
  }
  uVar2 = 0x13;
  uVar5 = (*(code *)PTR__fmt_00799d88)();
  if ((ulonglong)(lVar3 - lVar4) < uVar2) {
    uVar5 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_60,lVar4,uVar2,1,1);
    lVar4 = local_50;
  }
  else if (uVar2 == 0) goto LAB_005cafc3;
  (*(code *)PTR_memcpy_00799008)(uVar5,uVar2);
LAB_005cafc3:
  param_1[2] = lVar4 + uVar2;
  *param_1 = local_60;
  param_1[1] = (longlong)puStack_58;
  return;
}


