// 00747860 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,
   gimli[a7f20a324fd82d99]::common::DebugArangesOffset)>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<alloc[12e961f32105355]::boxed::Box<dyn
   core[c0acaeba6ab4c2e0]::ops::function::FnMut<(), Output =
   core[c0acaeba6ab4c2e0]::result::Result<(), core[c0acaeba6ab4c2e0]::io::error::Error>> +
   core[c0acaeba6ab4c2e0]::marker::Send + core[c0acaeba6ab4c2e0]::marker::Sync>>>::grow_one
   <alloc[12e961f32105355]::raw_vec::RawVec<std[6c98fd8553dbae28]::backtrace_rs::symbolize::gimli::mmap::Mmap>>::grow_one
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<(gimli[a7f20a324fd82d99]::common::DebugInfoOffset,gimli[a7f20a324fd82d99]::common::DebugArangesOffset)>>
::grow_one(ulonglong *param_1)

{
  code *pcVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int local_30 [2];
  ulonglong local_28;
  
  uVar2 = *param_1 * 2;
  uVar3 = 4;
  if (4 < uVar2) {
    uVar3 = uVar2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_30,*param_1,param_1[1],uVar3,8,0x10);
  if (local_30[0] == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  param_1[1] = local_28;
  *param_1 = uVar3;
  return;
}


