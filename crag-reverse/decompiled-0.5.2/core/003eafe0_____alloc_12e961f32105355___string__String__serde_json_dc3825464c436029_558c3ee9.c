// 003eafe0 <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0},alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)>>

/* core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value), <[(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,
   craggemini_core[66f3c71560d70857]::resume::write_canonical_json::{closure#0}>::{closure#0},
   alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,
   &serde_json[dc3825464c436029]::value::Value)>> */

void __rustcall
core[c0acaeba6ab4c2e0]::slice::sort::stable::driftsort_main::
<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_,alloc[12e961f32105355]::vec::Vec<(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)>>
          (undefined8 param_1,ulonglong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 local_1030 [512];
  
  puVar4 = local_1030;
  local_1030[0] = 0;
  uVar3 = param_2 - (param_2 >> 1);
  uVar5 = 500000;
  if (param_2 < 500000) {
    uVar5 = param_2;
  }
  if (uVar5 <= uVar3) {
    uVar5 = uVar3;
  }
  if (uVar5 < 0x101) {
    uVar3 = 0x100;
  }
  else {
    uVar6 = uVar5 * 0x10;
    bVar1 = uVar3 >> 0x3c != 0;
    if (0x7ffffffffffffff8 >= uVar6 && !bVar1) goto LAB_003eb066;
    uVar3 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff8 < uVar6 || bVar1);
    uVar2 = 0;
    do {
      param_1 = uVar2;
      (*(code *)PTR_handle_error_00798ff0)(uVar3);
      param_2 = uVar6;
LAB_003eb066:
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      puVar4 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
      uVar3 = uVar5;
      uVar2 = 8;
    } while (puVar4 == (undefined8 *)0x0);
  }
  drift::sort::
  <(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value),<[(&alloc[12e961f32105355]::string::String,&serde_json[dc3825464c436029]::value::Value)]>::sort_by_key<&alloc[12e961f32105355]::string::String,craggemini_core[66f3c71560d70857]::resume::write_canonical_json::_closure_0_>::_closure_0_>
            (param_1,param_2,puVar4,uVar3,param_2 < 0x41,param_3);
  if (0x100 < uVar5) {
    (*(code *)PTR___rust_dealloc_00798fc8)();
  }
  return;
}


