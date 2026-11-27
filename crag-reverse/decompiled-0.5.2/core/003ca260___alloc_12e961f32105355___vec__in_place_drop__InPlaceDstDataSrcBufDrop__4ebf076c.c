// 003ca260 <alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::tools::GeneratedImage,serde_json[dc3825464c436029]::value::Value>>

/* WARNING: Switch with 1 destination removed at 0x003ca2ba */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::tools::GeneratedImage,
   serde_json[dc3825464c436029]::value::Value>> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::
<alloc[12e961f32105355]::vec::in_place_drop::InPlaceDstDataSrcBufDrop<craggemini_core[66f3c71560d70857]::tools::GeneratedImage,serde_json[dc3825464c436029]::value::Value>>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  
  lVar1 = param_1[2];
  lVar2 = *param_1;
  for (lVar3 = param_1[1] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
    <serde_json[dc3825464c436029]::value::Value>(lVar2);
    lVar2 = lVar2 + 0x20;
  }
  if (lVar1 == 0) {
    return;
  }
  (*(code *)PTR_free_0079adc8)(param_4,8);
  return;
}


