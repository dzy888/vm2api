// 004d8390 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined1 * __rustcall
<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (undefined1 *param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined1 uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  undefined8 local_38;
  longlong local_30;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      uVar6 = (ulonglong)bVar2;
      if (0x22 < uVar6) {
LAB_004d842d:
        if (bVar2 != 0x7b) {
          local_38 = 10;
          goto LAB_004d83eb;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_38 = 0x18;
          goto LAB_004d83eb;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar4;
        <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_38);
        if ((byte)local_38 < 2) {
          local_30 = <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
                     ::unit_variant(local_30);
        }
        else {
          if ((byte)local_38 != 2) goto LAB_004d8495;
          local_30 = <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
                     ::unit_variant(local_30);
        }
        if (local_30 != 0) {
LAB_004d8495:
          *(longlong *)(param_1 + 8) = local_30;
          *param_1 = 1;
          *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
          return param_1;
        }
        *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
        param_1[1] = (byte)local_38;
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar4) goto LAB_004d84e9;
        goto LAB_004d84c4;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_004d842d;
        <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<craggemini_core[66f3c71560d70857]::protocol::SchedulingStrategy_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_38);
        if ((byte)local_38 < 2) {
          if ((byte)local_38 == 0) {
            param_1[1] = 0;
          }
          else {
            param_1[1] = 1;
          }
        }
        else {
          if ((byte)local_38 != 2) {
            *(longlong *)(param_1 + 8) = local_30;
            *param_1 = 1;
            return param_1;
          }
          param_1[1] = 2;
        }
        goto LAB_004d8510;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_38 = 5;
LAB_004d83eb:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_38);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *param_1 = 1;
  return param_1;
LAB_004d84c4:
  uVar4 = uVar4 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
  if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    if (bVar2 == 0x7d) {
      *(ulonglong *)(param_2 + 0x28) = uVar4;
LAB_004d8510:
      uVar3 = 0;
      goto LAB_004d8512;
    }
    local_38 = 10;
    goto LAB_004d84f1;
  }
  *(ulonglong *)(param_2 + 0x28) = uVar4;
  if (uVar4 == *(ulonglong *)(param_2 + 0x20)) {
LAB_004d84e9:
    local_38 = 3;
LAB_004d84f1:
    uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::error(param_2,&local_38);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar3 = 1;
LAB_004d8512:
    *param_1 = uVar3;
    return param_1;
  }
  goto LAB_004d84c4;
}


