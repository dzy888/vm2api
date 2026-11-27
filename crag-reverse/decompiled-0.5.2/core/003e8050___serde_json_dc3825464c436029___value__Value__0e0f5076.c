// 003e8050 <serde_json[dc3825464c436029]::value::Value>

/* WARNING: Switch with 1 destination removed at 0x003e80f6 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
          (byte *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar2 = 1;
        goto LAB_003e80e8;
      }
    }
    else {
      if (bVar1 != 4) {
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>as_core[c0acaeba6ab4c2e0]::ops::drop::Drop>
        ::drop(param_1 + 8);
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x10);
      for (lVar4 = *(longlong *)(param_1 + 0x18) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
        <serde_json[dc3825464c436029]::value::Value>(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      if (*(longlong *)(param_1 + 8) != 0) {
        uVar2 = 8;
LAB_003e80e8:
        (*(code *)PTR_free_0079adc8)(param_4,uVar2);
        return;
      }
    }
  }
  return;
}


