// 00030e30 <&str>

/* WARNING: Switch with 1 destination removed at 0x00030e8e */
/* <agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str> */

void __rustcall
<agy_bridge[64a9e9deac6c45ce]::Turn>::mark_failed::<&str>
          (undefined4 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
          longlong *param_5)

{
  code *pcVar1;
  longlong lVar2;
  longlong extraout_RDX;
  longlong lVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  longlong local_38;
  longlong lStack_30;
  
  *(undefined1 *)(param_2 + 0x321) = 1;
  if (*(longlong *)(param_2 + 0x220) == -1) {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    param_1 = (*(code *)PTR_memcpy_000c3aa8)(extraout_XMM0_Da,param_4);
    *(undefined8 *)(param_2 + 0x220) = param_4;
    *(longlong *)(param_2 + 0x228) = lVar2;
    *(undefined8 *)(param_2 + 0x230) = param_4;
    lVar2 = *(longlong *)(param_2 + 0x238);
  }
  else {
    lVar2 = *(longlong *)(param_2 + 0x238);
  }
  if (lVar2 == -1) {
    lVar2 = *param_5;
    lVar3 = -1;
    if (lVar2 != -1) {
      uVar4 = <str>::trim_matches::<<char>::is_whitespace>(param_5[1],param_5[2]);
      if (extraout_RDX == 0) {
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(uVar4,1);
        }
      }
      else {
        local_38 = param_5[1];
        lStack_30 = param_5[2];
        lVar3 = lVar2;
      }
    }
    *(longlong *)(param_2 + 0x238) = lVar3;
    *(longlong *)(param_2 + 0x240) = local_38;
    *(longlong *)(param_2 + 0x248) = lStack_30;
  }
  else if ((*param_5 != -1) && (*param_5 != 0)) {
    (*(code *)PTR_free_000c4290)(param_1,1);
    return;
  }
  return;
}


