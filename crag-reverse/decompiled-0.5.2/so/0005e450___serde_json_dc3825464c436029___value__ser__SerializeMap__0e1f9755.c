// 0005e450 <serde_json[dc3825464c436029]::value::ser::SerializeMap>

/* WARNING: Switch with 1 destination removed at 0x0005e566 */
/* core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
    */

void __rustcall
core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::ser::SerializeMap>
          (longlong *param_1)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong local_78;
  undefined8 local_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48;
  longlong local_40;
  longlong local_38;
  
  lVar2 = *param_1;
  if (lVar2 == -2) {
    bVar1 = *(byte *)(param_1 + 1);
    if (bVar1 < 3) {
      if (bVar1 < 3) {
        return;
      }
    }
    else {
      if (bVar1 == 3) {
        lVar2 = param_1[2];
        goto joined_r0x0005e546;
      }
      if (bVar1 == 4) {
        lVar2 = param_1[3];
        for (lVar3 = param_1[4] + 1; lVar3 != 1; lVar3 = lVar3 + -1) {
          <serde_json[dc3825464c436029]::value::Value>(lVar2);
          lVar2 = lVar2 + 0x20;
        }
        if (param_1[2] == 0) {
          return;
        }
        goto LAB_0005e558;
      }
      if (bVar1 == 0xff) {
        return;
      }
    }
    lVar2 = param_1[2];
    if (lVar2 == 0) {
      local_38 = 0;
    }
    else {
      local_60 = param_1[3];
      local_38 = param_1[4];
      local_70 = 0;
      local_50 = 0;
      local_68 = lVar2;
      local_48 = lVar2;
      local_40 = local_60;
    }
    local_78 = (ulonglong)(lVar2 != 0);
    local_58 = local_78;
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              (&local_78);
  }
  else {
    lVar3 = param_1[3];
    if (lVar3 == 0) {
      local_38 = 0;
    }
    else {
      local_60 = param_1[4];
      local_38 = param_1[5];
      local_70 = 0;
      local_50 = 0;
      local_68 = lVar3;
      local_48 = lVar3;
      local_40 = local_60;
    }
    local_78 = (ulonglong)(lVar3 != 0);
    local_58 = local_78;
    <alloc[12e961f32105355]::collections::btree::map::IntoIter<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
              (&local_78);
    if (lVar2 == -1) {
      return;
    }
joined_r0x0005e546:
    if (lVar2 != 0) {
LAB_0005e558:
      (*(code *)PTR_free_000c4290)();
      return;
    }
  }
  return;
}


