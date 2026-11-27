// 00638080 <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,alloc[12e961f32105355]::string::String>

/* <tokio[d7d91d38da47d894]::process::Command>::args::<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,
   alloc[12e961f32105355]::string::String> */

undefined8 __rustcall
<tokio[d7d91d38da47d894]::process::Command>::args::
<alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>,alloc[12e961f32105355]::string::String>
          (undefined8 param_1,longlong *param_2)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong *plVar5;
  longlong *plVar6;
  ulonglong uVar7;
  
  puVar4 = PTR_arg_00799368;
  lVar2 = *param_2;
  plVar6 = (longlong *)param_2[1];
  plVar1 = plVar6 + param_2[2] * 3;
  if (param_2[2] != 0) {
    do {
      plVar5 = plVar6 + 3;
      lVar3 = *plVar6;
      plVar6 = plVar5;
      if (lVar3 == -1) goto LAB_00638132;
      (*(code *)puVar4)();
      if (lVar3 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)();
      }
    } while (plVar5 != plVar1);
    plVar6 = plVar1;
  }
LAB_00638132:
  puVar4 = PTR___rust_dealloc_00798fc8;
  if (plVar1 != plVar6) {
    uVar7 = (ulonglong)((longlong)plVar1 - (longlong)plVar6) / 0x18;
    plVar6 = plVar6 + 1;
    do {
      if (plVar6[-1] != 0) {
        (*(code *)puVar4)();
      }
      plVar6 = plVar6 + 3;
      uVar7 = uVar7 - 1;
    } while (uVar7 != 0);
  }
  if (lVar2 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return param_1;
}


