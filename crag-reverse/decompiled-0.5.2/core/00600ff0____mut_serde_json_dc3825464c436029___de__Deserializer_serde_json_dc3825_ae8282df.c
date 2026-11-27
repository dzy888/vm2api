// 00600ff0 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta>as_serde_core[48776c27239fa21f]::de::Deserialize>
::deserialize::
<&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
          (longlong *param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
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
              if (uVar4 <= uVar6) goto LAB_00601141;
              cVar3 = *(char *)(lVar5 + uVar6);
              *(ulonglong *)(param_2 + 0x28) = uVar6 + 1;
              if (cVar3 == 'l') {
                if (uVar4 <= uVar6 + 1) goto LAB_00601141;
                cVar3 = *(char *)(lVar5 + 1 + uVar6);
                *(ulonglong *)(param_2 + 0x28) = uVar6 + 2;
                if (cVar3 == 'l') {
                  *param_1 = -1;
                  return param_1;
                }
              }
            }
            local_48 = 9;
          }
          else {
LAB_00601141:
            local_48 = 5;
          }
          lStack_40 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::error(param_2,&local_48);
          goto LAB_0060112d;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar6 - 1;
      lVar1 = uVar6 - uVar4;
      uVar6 = uVar6 + 1;
    } while (lVar1 != 1);
  }
  <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
  ::deserialize_struct::
  <<craggemini_core[66f3c71560d70857]::resume::InterruptionMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
            (&local_48,param_2,anon_ec7f14c74815bf4c93b295cfd0665412_45_llvm_7806621557641746444,
             0x10,&anon_ec7f14c74815bf4c93b295cfd0665412_51_llvm_7806621557641746444,5);
  if (local_48 != -1) {
    param_1[6] = local_18;
    param_1[7] = lStack_10;
    param_1[4] = local_28;
    param_1[5] = lStack_20;
    param_1[2] = local_38;
    param_1[3] = lStack_30;
    *param_1 = local_48;
    param_1[1] = lStack_40;
    return param_1;
  }
LAB_0060112d:
  param_1[1] = lStack_40;
  *param_1 = -2;
  return param_1;
}


