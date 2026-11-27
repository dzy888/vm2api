// 00408fe0 grow_one

/* <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>::grow_one
    */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::pool::AgySlot>>::
grow_one(longlong *param_1)

{
  longlong lVar1;
  code *pcVar2;
  longlong lVar3;
  int local_28 [2];
  longlong local_20;
  
  lVar1 = *param_1;
  lVar3 = 1;
  if (lVar1 != 0) {
    lVar3 = lVar1 * 2;
  }
  <alloc[12e961f32105355]::raw_vec::RawVecInner>::finish_grow
            (local_28,lVar1,param_1[1],lVar3,8,0x848);
  if (local_28[0] == 1) {
    (*(code *)PTR_handle_error_00798ff0)();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  param_1[1] = local_20;
  *param_1 = lVar3;
  return;
}


