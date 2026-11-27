// 00774680 from_raw

/* <alloc[12e961f32105355]::ffi::c_str::CString>::from_raw */

undefined1  [16] __rustcall
<alloc[12e961f32105355]::ffi::c_str::CString>::from_raw(undefined8 param_1)

{
  longlong lVar1;
  undefined1 auVar2 [16];
  
  lVar1 = (*(code *)PTR_strlen_0079aa38)();
  auVar2._8_8_ = lVar1 + 1;
  auVar2._0_8_ = param_1;
  return auVar2;
}


