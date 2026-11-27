// 000780e0 <&str>

/* WARNING: Switch with 1 destination removed at 0x00078171 */
/* <core[c0acaeba6ab4c2e0]::io::error::Error>::new::<&str> */

longlong __rustcall
<core[c0acaeba6ab4c2e0]::io::error::Error>::new::<&str>
          (undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4)

{
  code *pcVar1;
  longlong lVar2;
  longlong *plVar3;
  
  if (param_3 == 0) {
    lVar2 = 1;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
    lVar2 = (*(code *)PTR___rust_alloc_000c3a90)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_000c3a98)();
      if (param_3 != 0) {
        (*(code *)PTR___rust_dealloc_000c3aa0)(param_4,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_000c3aa8)(param_4,param_3);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_000c3a90)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *plVar3 = param_3;
  plVar3[1] = lVar2;
  plVar3[2] = param_3;
  lVar2 = (*(code *)PTR_custom_owner_from_box_000c3ee0)
                    (param_4,&
                             PTR_<<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>::from::StringError>_000c21d0
                    );
  return lVar2 + 1;
}


