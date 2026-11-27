// 003ea9c0 <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt,alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String), <(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String) as core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt,
   alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::string::String)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt,alloc[12e961f32105355]::vec::Vec<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_1030 [512];
  
  local_1030[0] = 0;
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x28b0a;
  if (param_2 < 0x28b0a) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (0x55 < uVar4) {
    if (uVar2 < 0x2aaaaaaaaaaaaab) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = 8;
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = uVar4;
        goto LAB_003eaa87;
      }
    }
    else {
      uVar1 = 0;
    }
    param_1 = uVar1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar4 * 0x30;
  }
  puVar3 = local_1030;
  uVar2 = 0x55;
LAB_003eaa87:
  drift::sort::
  <(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String),<(alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::string::String)as_core[c0acaeba6ab4c2e0]::cmp::PartialOrd>::lt>
            (param_1,param_2,puVar3,uVar2,param_2 < 0x41,param_3);
  if (0x55 < uVar4) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


