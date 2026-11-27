// 003c51a0 <hyper[c4782d5b5c5e3493]::body::incoming::Incoming>

/* <axum_core[61c49771464cda0a]::body::Body>::new::<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>
    */

void __rustcall
<axum_core[61c49771464cda0a]::body::Body>::new::<hyper[c4782d5b5c5e3493]::body::incoming::Incoming>
          (undefined4 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if (*(char *)(param_1 + 4) == -1) {
    (*(code *)PTR_unwrap_failed_00799278)();
    core[c0acaeba6ab4c2e0]::ptr::drop_glue::
    <http_body_util[89f9933de382700b]::combinators::map_err::MapErr<hyper[c4782d5b5c5e3493]::body::incoming::Incoming,<axum_core[61c49771464cda0a]::error::Error>::new<hyper[c4782d5b5c5e3493]::error::Error>>>
              (&local_28);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  uStack_14._1_3_ = (undefined3)((uint)param_1[5] >> 8);
  uStack_14._0_1_ = (undefined1)((uint)*(undefined4 *)((longlong)param_1 + 0x11) >> 0x18);
  local_28 = *param_1;
  uStack_24 = param_1[1];
  uStack_20 = param_1[2];
  uStack_1c = param_1[3];
  local_18 = CONCAT31((int3)*(undefined4 *)((longlong)param_1 + 0x11),*(char *)(param_1 + 4));
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  puVar2[2] = CONCAT44(uStack_14,local_18);
  *puVar2 = CONCAT44(uStack_24,local_28);
  puVar2[1] = CONCAT44(uStack_1c,uStack_20);
  return;
}


