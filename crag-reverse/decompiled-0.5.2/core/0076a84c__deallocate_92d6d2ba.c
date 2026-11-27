// 0076a84c deallocate

/* WARNING: Switch with 1 destination removed at 0x0076a88b */
/* <alloc[12e961f32105355]::raw_vec::RawVecInner>::deallocate */

void __rustcall
<alloc[12e961f32105355]::raw_vec::RawVecInner>::deallocate
          (longlong *param_1,longlong param_2,longlong param_3)

{
  longlong *plVar1;
  longlong local_10;
  longlong local_8;
  
  plVar1 = &local_10;
  if ((param_3 == 0) || (*param_1 == 0)) {
    param_3 = 0;
  }
  else {
    param_3 = *param_1 * param_3;
    plVar1 = &local_8;
    local_10 = param_2;
  }
  *plVar1 = param_3;
  if ((local_10 == 0) || (local_8 == 0)) {
    return;
  }
  (*(code *)PTR_free_0079adc8)();
  return;
}


