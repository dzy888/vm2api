// 006fa7e0 into_boxed_slice

/* <alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>>::into_boxed_slice
    */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::vec::Vec<tokio[d7d91d38da47d894]::signal::unix::SignalInfo>>::
into_boxed_slice(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulonglong uVar1;
  code *pcVar2;
  ulonglong uVar3;
  undefined1 auVar4 [16];
  
  uVar1 = param_1[2];
  if (uVar1 < *param_1) {
    if (uVar1 == 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(param_4,8);
      uVar3 = 8;
    }
    else {
      uVar3 = (*(code *)PTR___rust_realloc_007997f0)(uVar1 << 5,8);
      if (uVar3 == 0) {
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
    }
  }
  else {
    uVar3 = param_1[1];
  }
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = uVar3;
  return auVar4;
}


