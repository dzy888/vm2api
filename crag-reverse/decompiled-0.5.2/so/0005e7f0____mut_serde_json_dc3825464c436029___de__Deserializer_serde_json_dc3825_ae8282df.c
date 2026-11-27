// 0005e7f0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

undefined1 * __rustcall
<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>
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
  undefined8 local_30;
  longlong local_28;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar4 = uVar4 + 1;
      bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
      uVar6 = (ulonglong)bVar2;
      if (0x22 < uVar6) {
LAB_0005e897:
        if (bVar2 != 0x7b) {
          local_30 = 10;
          goto LAB_0005e84b;
        }
        pcVar1 = (char *)(param_2 + 0x38);
        *pcVar1 = *pcVar1 + -1;
        if (*pcVar1 == '\0') {
          local_30 = 0x18;
          goto LAB_0005e84b;
        }
        *(ulonglong *)(param_2 + 0x28) = uVar4;
        <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_30);
        if ((char)local_30 == '\0') {
          local_28 = <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
                     ::unit_variant(local_28);
          if (local_28 != 0) goto LAB_0005e8fd;
          uVar3 = 0;
        }
        else {
          if (((char)local_30 == '\x02') ||
             (local_28 = <serde_json[dc3825464c436029]::de::VariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::VariantAccess>
                         ::unit_variant(local_28), local_28 != 0)) {
LAB_0005e8fd:
            *(longlong *)(param_1 + 8) = local_28;
            *param_1 = 1;
            *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
            return param_1;
          }
          uVar3 = 1;
        }
        *(char *)(param_2 + 0x38) = *(char *)(param_2 + 0x38) + '\x01';
        param_1[1] = uVar3;
        uVar4 = *(ulonglong *)(param_2 + 0x28);
        if (*(ulonglong *)(param_2 + 0x20) <= uVar4) goto LAB_0005e952;
        goto LAB_0005e92d;
      }
      if ((0x100002600U >> (uVar6 & 0x3f) & 1) == 0) {
        if (uVar6 != 0x22) goto LAB_0005e897;
        <serde_json[dc3825464c436029]::de::UnitVariantAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::EnumAccess>
        ::variant_seed::
        <core[c0acaeba6ab4c2e0]::marker::PhantomData<<agy_bridge[64a9e9deac6c45ce]::protocol::SystemPromptMode_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Field>>
                  (&local_30);
        if ((char)local_30 == '\0') {
          param_1[1] = 0;
        }
        else {
          if ((char)local_30 == '\x02') {
            *(longlong *)(param_1 + 8) = local_28;
            *param_1 = 1;
            return param_1;
          }
          param_1[1] = 1;
        }
        goto LAB_0005e976;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4;
    } while (uVar4 != *(ulonglong *)(param_2 + 0x20));
  }
  local_30 = 5;
LAB_0005e84b:
  uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          ::peek_error(param_2,&local_30);
  *(undefined8 *)(param_1 + 8) = uVar5;
  *param_1 = 1;
  return param_1;
LAB_0005e92d:
  uVar4 = uVar4 + 1;
  bVar2 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar4);
  if ((0x20 < (ulonglong)bVar2) || ((0x100002600U >> ((ulonglong)bVar2 & 0x3f) & 1) == 0)) {
    if (bVar2 == 0x7d) {
      *(ulonglong *)(param_2 + 0x28) = uVar4;
LAB_0005e976:
      uVar3 = 0;
      goto LAB_0005e978;
    }
    local_30 = 10;
    goto LAB_0005e95b;
  }
  *(ulonglong *)(param_2 + 0x28) = uVar4;
  if (uVar4 == *(ulonglong *)(param_2 + 0x20)) {
LAB_0005e952:
    local_30 = 3;
LAB_0005e95b:
    uVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
            ::error(param_2,&local_30);
    *(undefined8 *)(param_1 + 8) = uVar5;
    uVar3 = 1;
LAB_0005e978:
    *param_1 = uVar3;
    return param_1;
  }
  goto LAB_0005e92d;
}


