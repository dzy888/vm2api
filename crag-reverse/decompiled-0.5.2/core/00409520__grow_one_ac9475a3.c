// 00409520 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<(u64,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,
   alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::path::PathBuf>>::grow_one */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<(u64,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::binding::BoundAccount>,alloc[12e961f32105355]::sync::Arc<craggemini_core[66f3c71560d70857]::pool::AccountPool>)>>
::grow_one(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_28 [2];
  ulonglong local_20;
  
  uVar2 = *param_1 * 2;
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_28,*param_1,param_1[1],uVar3,8,0x18);
  if (local_28[0] == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[1] = local_20;
  *param_1 = uVar3;
  return;
}


