// 003ac5d0 <serde_json[dc3825464c436029]::value::Value>

/* WARNING: Switch with 1 destination removed at 0x003ac6a1 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value> */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_90 [2];
  longlong local_80;
  ulonglong local_78 [3];
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  bVar1 = *param_1;
  if (2 < bVar1) {
    if (bVar1 == 3) {
      lVar3 = *(longlong *)(param_1 + 8);
    }
    else {
      if (bVar1 != 4) {
        lVar3 = *(longlong *)(param_1 + 8);
        if (lVar3 == 0) {
          local_38 = 0;
        }
        else {
          local_60 = *(undefined8 *)(param_1 + 0x10);
          local_38 = *(undefined8 *)(param_1 + 0x18);
          local_78[1] = 0;
          local_50 = 0;
          local_78[2] = lVar3;
          local_48 = lVar3;
          local_40 = local_60;
        }
        local_78[0] = (ulonglong)(lVar3 != 0);
        local_58 = local_78[0];
        ::
        <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::dying_next(local_90,local_78);
        puVar2 = PTR___rust_dealloc_00798fc8;
        if (local_90[0] == 0) {
          return;
        }
        do {
          lVar4 = local_80;
          lVar3 = local_90[0];
          if (*(longlong *)(local_90[0] + 0x168 + local_80 * 0x18) != 0) {
            (*(code *)puVar2)();
          }
          <serde_json[dc3825464c436029]::value::Value>(lVar3 + lVar4 * 0x20);
          ::
          <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
          ::dying_next(local_90,local_78);
        } while (local_90[0] != 0);
        return;
      }
      lVar3 = *(longlong *)(param_1 + 0x10);
      for (lVar4 = *(longlong *)(param_1 + 0x18) + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
        <serde_json[dc3825464c436029]::value::Value>(lVar3);
        lVar3 = lVar3 + 0x20;
      }
      lVar3 = *(longlong *)(param_1 + 8);
    }
    if (lVar3 != 0) {
      (*(code *)PTR_free_0079adc8)();
      return;
    }
  }
  return;
}


