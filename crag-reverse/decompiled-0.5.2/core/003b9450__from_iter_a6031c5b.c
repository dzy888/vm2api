// 003b9450 from_iter

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value> as
   alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,
   core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,
   <craggemini_core[66f3c71560d70857]::schema::RefResolver>::resolve::{closure#0}>>>::from_iter */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>as_alloc[12e961f32105355]::vec::spec_from_iter_nested::SpecFromIterNested<serde_json[dc3825464c436029]::value::Value,core[c0acaeba6ab4c2e0]::iter::adapters::map::Map<core[c0acaeba6ab4c2e0]::slice::iter::Iter<serde_json[dc3825464c436029]::value::Value>,<craggemini_core[66f3c71560d70857]::schema::RefResolver>::resolve::{closure#0}>>>
::from_iter(ulonglong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined4 *puVar8;
  ulonglong local_70;
  undefined4 *local_68;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar7 = *param_2;
  lVar3 = param_2[1];
  plVar6 = (longlong *)(lVar3 - lVar7);
  if (plVar6 < (longlong *)0x7ffffffffffffff9) goto LAB_003b9489;
  puVar2 = (ulonglong *)0x0;
  while( true ) {
    param_1 = puVar2;
    lVar3 = (*(code *)PTR_handle_error_00798ff0)();
    param_2 = plVar6;
LAB_003b9489:
    uVar4 = (ulonglong)plVar6 >> 5;
    if (lVar3 == lVar7) break;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_68 = (undefined4 *)(*(code *)PTR___rust_alloc_00799000)();
    puVar2 = (ulonglong *)&DAT_00000008;
    if (local_68 != (undefined4 *)0x0) {
      lVar3 = param_2[2];
      lVar1 = param_2[3];
      uVar5 = 0;
      puVar8 = local_68;
      do {
        <craggemini_core[66f3c71560d70857]::schema::RefResolver>::resolve
                  (&local_50,lVar3,lVar7,lVar1);
        *(undefined8 *)(puVar8 + 4) = local_40;
        *(undefined8 *)(puVar8 + 6) = uStack_38;
        *puVar8 = local_50;
        puVar8[1] = uStack_4c;
        puVar8[2] = uStack_48;
        puVar8[3] = uStack_44;
        uVar5 = uVar5 + 1;
        puVar8 = puVar8 + 8;
        lVar7 = lVar7 + 0x20;
        local_70 = uVar4;
      } while (uVar4 != uVar5);
LAB_003b952a:
      param_1[2] = uVar4;
      *param_1 = local_70;
      param_1[1] = (ulonglong)local_68;
      return;
    }
  }
  local_70 = 0;
  local_68 = (undefined4 *)&DAT_00000008;
  goto LAB_003b952a;
}


