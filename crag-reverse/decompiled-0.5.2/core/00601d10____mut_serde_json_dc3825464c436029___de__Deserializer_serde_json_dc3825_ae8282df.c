// 00601d10 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::option::Option<bool> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined2 * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<bool>as_serde_core[48776c27239fa21f]::de::Deserialize>::
deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined2 *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 local_20;
  undefined8 local_18;
  
  uVar4 = *(ulonglong *)(param_2 + 0x20);
  if (*(ulonglong *)(param_2 + 0x28) < uVar4) {
    lVar5 = *(longlong *)(param_2 + 0x18);
    uVar6 = *(ulonglong *)(param_2 + 0x28) + 2;
    do {
      bVar2 = *(byte *)(lVar5 + -2 + uVar6);
      if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
        if (bVar2 == 0x6e) {
          *(ulonglong *)(param_2 + 0x28) = uVar6 - 1;
          if (uVar6 - 1 < uVar4) {
            cVar3 = *(char *)(lVar5 + -1 + uVar6);
            *(ulonglong *)(param_2 + 0x28) = uVar6;
            if (cVar3 == 'u') {
              if (uVar4 <= uVar6) goto LAB_00601e23;
              cVar3 = *(char *)(lVar5 + uVar6);
              *(ulonglong *)(param_2 + 0x28) = uVar6 + 1;
              if (cVar3 == 'l') {
                if (uVar4 <= uVar6 + 1) goto LAB_00601e23;
                cVar3 = *(char *)(lVar5 + 1 + uVar6);
                *(ulonglong *)(param_2 + 0x28) = uVar6 + 2;
                if (cVar3 == 'l') {
                  *param_1 = 0x200;
                  return param_1;
                }
              }
            }
            local_20 = 9;
          }
          else {
LAB_00601e23:
            local_20 = 5;
          }
          uVar7 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::error(param_2,&local_20);
          *(undefined8 *)(param_1 + 4) = uVar7;
          *(undefined1 *)param_1 = 1;
          return param_1;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6 - 1;
      lVar1 = uVar6 - uVar4;
      uVar6 = uVar6 + 1;
    } while (lVar1 != 1);
  }
  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
  ::deserialize_bool::<serde_core[48776c27239fa21f]::de::impls::BoolVisitor>(&local_20);
  if ((char)local_20 == '\x01') {
    *(undefined8 *)(param_1 + 4) = local_18;
    *(undefined1 *)param_1 = 1;
    return param_1;
  }
  *(undefined1 *)((longlong)param_1 + 1) = local_20._1_1_;
  *(undefined1 *)param_1 = 0;
  return param_1;
}


