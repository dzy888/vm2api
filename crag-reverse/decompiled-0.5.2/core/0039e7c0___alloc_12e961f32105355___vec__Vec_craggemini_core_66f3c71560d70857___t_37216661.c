// 0039e7c0 <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>>

/* WARNING: Switch with 1 destination removed at 0x0039e814 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar2 = param_1[1];
  lVar1 = param_1[2];
  if (lVar1 != 0) {
    do {
      <craggemini_core[66f3c71560d70857]::tools::GroundingMetadata>(lVar2);
      lVar2 = lVar2 + 0x48;
      lVar1 = lVar1 + -1;
    } while (lVar1 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


