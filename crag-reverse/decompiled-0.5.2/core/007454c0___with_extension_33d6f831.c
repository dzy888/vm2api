// 007454c0 _with_extension

/* <std[6c98fd8553dbae28]::path::Path>::_with_extension */

void __rustcall
<std[6c98fd8553dbae28]::path::Path>::_with_extension
          (ulonglong *param_1,char *param_2,char *param_3,undefined8 param_4,longlong param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char *pcVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  char local_b8;
  short *local_b0;
  ulonglong local_a8;
  ulonglong *local_78;
  char *local_70;
  char *pcStack_68;
  char *local_60;
  undefined2 local_38;
  undefined1 local_36;
  
  if (param_3 == (char *)0x0) {
    local_36 = false;
  }
  else {
    local_36 = *param_2 == '/';
  }
  local_60 = (char *)CONCAT71(local_60._1_7_,0xff);
  local_38 = 0x201;
  local_70 = param_2;
  pcStack_68 = param_3;
  uVar6 = (*(code *)PTR_next_back_0079a1d8)();
  if (((local_b8 == -1) || (local_b8 != '\t')) || ((local_a8 == 2 && (*local_b0 == 0x2e2e)))) {
LAB_007455e2:
    pcVar5 = param_3 + param_5 + 1;
    if ((longlong)pcVar5 < 0) goto LAB_007455f0;
LAB_007455b9:
    local_78 = param_1;
    if (pcVar5 == (char *)0x0) goto LAB_007455fc;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    uVar2 = (*(code *)PTR___rust_alloc_00799000)();
    uVar6 = extraout_XMM0_Da;
    if (uVar2 == 0) goto LAB_007455f0;
  }
  else {
    lVar1 = 0;
    do {
      lVar3 = lVar1;
      if (local_a8 + lVar3 == 0) goto LAB_007455e2;
      lVar1 = lVar3 + -1;
    } while (*(char *)((longlong)local_b0 + lVar3 + (local_a8 - 1)) != '.');
    if (local_a8 + lVar1 == 0) goto LAB_007455e2;
    pcVar4 = param_3 + lVar3;
    if (param_3 < (char *)((~local_a8 + local_a8) - lVar1)) {
      uVar6 = (*(code *)PTR_slice_index_fail_007993c8)
                        (&PTR_s__rustc_48a229ceaefd4985c50990b14_00796a98,param_3);
      if (local_70 != (char *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar6,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    pcVar5 = param_3 + lVar1 + param_5 + 1;
    param_3 = pcVar4;
    if (-1 < (longlong)pcVar5) goto LAB_007455b9;
LAB_007455f0:
    uVar6 = (*(code *)PTR_handle_error_00798ff0)();
LAB_007455fc:
    uVar2 = 1;
  }
  local_60 = (char *)0x0;
  local_70 = pcVar5;
  pcStack_68 = (char *)uVar2;
  if (pcVar5 < param_3) {
    uVar6 = <alloc[12e961f32105355]::raw_vec::RawVecInner<_>>::reserve::do_reserve_and_handle::
            <alloc[12e961f32105355]::alloc::Global>(&local_70,0,param_3,1,1);
  }
  else {
    pcVar5 = (char *)0x0;
    if (param_3 == (char *)0x0) goto LAB_0074562c;
  }
  pcVar5 = local_60;
  uVar6 = (*(code *)PTR_memcpy_00799008)(uVar6,param_3);
LAB_0074562c:
  local_60 = param_3 + (longlong)pcVar5;
  (*(code *)PTR__set_extension_0079adf0)(uVar6,param_5);
  local_78[2] = (ulonglong)local_60;
  *local_78 = (ulonglong)local_70;
  local_78[1] = (ulonglong)pcStack_68;
  return;
}


