// 0018e540 <alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString>,std[6c98fd8553dbae28]::ffi::os_str::OsString>

/* <std[6c98fd8553dbae28]::process::Command>::args::<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString>,
   std[6c98fd8553dbae28]::ffi::os_str::OsString> */

undefined8 __rustcall
<std[6c98fd8553dbae28]::process::Command>::args::
<alloc[12e961f32105355]::vec::Vec<std[6c98fd8553dbae28]::ffi::os_str::OsString>,std[6c98fd8553dbae28]::ffi::os_str::OsString>
          (undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined *puVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  lVar2 = *param_2;
  plVar6 = (longlong *)param_2[1];
  plVar1 = plVar6 + param_2[2] * 3;
  if (param_2[2] == 0) {
LAB_0018e5db:
    puVar5 = PTR___rust_dealloc_00219c40;
    if (plVar1 != plVar6) {
      uVar7 = (ulonglong)((longlong)plVar1 - (longlong)plVar6) / 0x18;
      plVar6 = plVar6 + 1;
      do {
        if (plVar6[-1] != 0) {
          (*(code *)puVar5)();
        }
        plVar6 = plVar6 + 3;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  else {
    plVar4 = plVar6;
    do {
      plVar6 = plVar4 + 3;
      lVar3 = *plVar4;
      if (lVar3 == -1) goto LAB_0018e5db;
      (*(code *)PTR_arg_0021a200)();
      if (lVar3 != 0) {
        (*(code *)PTR___rust_dealloc_00219c40)();
      }
      plVar4 = plVar6;
    } while (plVar6 != plVar1);
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)();
  }
  return param_1;
}


