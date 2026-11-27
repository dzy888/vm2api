// 006f5e20 new

/* <tokio[d7d91d38da47d894]::runtime::signal::Driver>::new */

longlong * __rustcall
<tokio[d7d91d38da47d894]::runtime::signal::Driver>::new(longlong *param_1,longlong *param_2)

{
  code *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  int local_30;
  undefined4 local_2c;
  longlong local_28;
  
  if (tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS._24_4_ != 0) {
    <std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>
    ::initialize::
    <<std[6c98fd8553dbae28]::sync::once_lock::OnceLock<tokio[d7d91d38da47d894]::signal::registry::Globals>>::get_or_init<tokio[d7d91d38da47d894]::signal::registry::globals_init>::_closure_0_,_>
              (tokio[d7d91d38da47d894]::signal::registry::globals::GLOBALS);
  }
  uVar8 = (*(code *)PTR_try_clone_0079a920)();
  if (local_30 == 1) {
    param_1[1] = local_28;
    *param_1 = -1;
    lVar6 = *param_2;
  }
  else {
    lVar6 = (*(code *)PTR_register_0079a898)(1,1);
    if (lVar6 == 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar7 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      if (puVar7 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      *puVar7 = 1;
      puVar7[1] = 1;
      param_1[6] = param_2[6];
      lVar6 = *param_2;
      lVar2 = param_2[1];
      lVar3 = param_2[2];
      lVar4 = param_2[3];
      lVar5 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar5;
      param_1[2] = lVar3;
      param_1[3] = lVar4;
      *param_1 = lVar6;
      param_1[1] = lVar2;
      param_1[7] = (longlong)puVar7;
      *(undefined4 *)(param_1 + 8) = local_2c;
      return param_1;
    }
    param_1[1] = lVar6;
    *param_1 = -1;
    uVar8 = (*(code *)PTR_close_00799030)();
    lVar6 = *param_2;
  }
  if (lVar6 != 0) {
    uVar8 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
  }
  if ((param_2[3] != -1) && (param_2[3] != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar8,1);
  }
  (*(code *)PTR_close_00799030)();
  return param_1;
}


