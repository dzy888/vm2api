// 003eaeb0 <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0},alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64),
   <[(std[6c98fd8553dbae28]::path::PathBuf, alloc[12e961f32105355]::string::String,
   std[6c98fd8553dbae28]::time::SystemTime,
   u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,
   craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::{closure#2}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,
   alloc[12e961f32105355]::string::String, std[6c98fd8553dbae28]::time::SystemTime, u64)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  undefined8 *puVar3;
  ulonglong uVar4;
  undefined8 local_1030 [512];
  
  local_1030[0] = 0;
  uVar2 = param_2 - (param_2 >> 1);
  uVar4 = 0x1b207;
  if (param_2 < 0x1b207) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar2) {
    uVar4 = uVar2;
  }
  if (0x38 < uVar4) {
    if (uVar2 < 0x1c71c71c71c71c8) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar1 = 8;
      if (puVar3 != (undefined8 *)0x0) {
        uVar2 = uVar4;
        goto LAB_003eaf78;
      }
    }
    else {
      uVar1 = 0;
    }
    param_1 = uVar1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = uVar4 * 0x48;
  }
  puVar3 = local_1030;
  uVar2 = 0x38;
LAB_003eaf78:
  drift::sort::
  <(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64),<[(std[6c98fd8553dbae28]::path::PathBuf,alloc[12e961f32105355]::string::String,std[6c98fd8553dbae28]::time::SystemTime,u64)]>::sort_by_key<std[6c98fd8553dbae28]::time::SystemTime,craggemini_core[66f3c71560d70857]::pool::prune_account_cuts::_closure_2_>::_closure_0_>
            (param_1,param_2,puVar3,uVar2,param_2 < 0x41,param_3);
  if (0x38 < uVar4) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


