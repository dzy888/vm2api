// 006bce70 new_channel

/* <hyper[c4782d5b5c5e3493]::body::incoming::Incoming>::new_channel */

undefined8 * __rustcall
<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>::new_channel
          (undefined8 *param_1,undefined8 param_2)

{
  longlong lVar1;
  code *pcVar2;
  longlong *plVar3;
  undefined4 extraout_XMM0_Da;
  
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
  }
  else {
    (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,0xe0);
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 != 0 && SCARRY8(lVar1,1) == *plVar3 < 0) {
      *param_1 = plVar3;
      *(undefined1 *)(param_1 + 1) = 0;
      param_1[2] = param_2;
      param_1[3] = plVar3;
      *(undefined1 *)(param_1 + 4) = 0;
      return param_1;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}


