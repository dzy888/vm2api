// 00725740 <&str>

/* WARNING: Switch with 1 destination removed at 0x007257d1 */
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
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    lVar2 = (*(code *)PTR___rust_alloc_00799000)();
    if (lVar2 == 0) {
      (*(code *)PTR_handle_error_00798ff0)();
      if (param_3 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(param_4,1);
      }
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    (*(code *)PTR_memcpy_00799008)(param_4,param_3);
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  plVar3 = (longlong *)(*(code *)PTR___rust_alloc_00799000)();
  if (plVar3 == (longlong *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  *plVar3 = param_3;
  plVar3[1] = lVar2;
  plVar3[2] = param_3;
  lVar2 = (*(code *)PTR_custom_owner_from_box_00799f90)
                    (param_4,&
                             PTR_<<alloc[12e961f32105355]::boxed::Box<dyn_core[c0acaeba6ab4c2e0]::error::Error_core[c0acaeba6ab4c2e0]::marker::Send_core[c0acaeba6ab4c2e0]::marker::Sync>as_core[c0acaeba6ab4c2e0]::convert::From<alloc[12e961f32105355]::string::String>>::from::StringError>_00797410
                    );
  return lVar2 + 1;
}


