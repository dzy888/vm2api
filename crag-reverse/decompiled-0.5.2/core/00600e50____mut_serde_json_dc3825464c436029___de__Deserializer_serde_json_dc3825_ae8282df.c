// 00600e50 <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>

/* <core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>
   as serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::<&mut
   serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>> */

longlong * __rustcall
<core[c0acaeba6ab4c2e0]::option::Option<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta>as_serde_core[48776c27239fa21f]::de::Deserialize>
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
  longlong local_70;
  longlong lStack_68;
  longlong local_60;
  longlong lStack_58;
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  longlong lStack_28;
  longlong local_20;
  longlong lStack_18;
  longlong local_10;
  
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
              if (uVar4 <= uVar6) goto LAB_00600fc0;
              cVar3 = *(char *)(lVar5 + uVar6);
              *(ulonglong *)(param_2 + 0x28) = uVar6 + 1;
              if (cVar3 == 'l') {
                if (uVar4 <= uVar6 + 1) goto LAB_00600fc0;
                cVar3 = *(char *)(lVar5 + 1 + uVar6);
                *(ulonglong *)(param_2 + 0x28) = uVar6 + 2;
                if (cVar3 == 'l') {
                  *param_1 = -1;
                  return param_1;
                }
              }
            }
            local_70 = 9;
          }
          else {
LAB_00600fc0:
            local_70 = 5;
          }
          lStack_68 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                      ::error(param_2,&local_70);
          goto LAB_00600fac;
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
  <<craggemini_core[66f3c71560d70857]::resume::ResumeCutMeta_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
            (&local_70,param_2,anon_ec7f14c74815bf4c93b295cfd0665412_36_llvm_7806621557641746444,0xd
             ,&anon_ec7f14c74815bf4c93b295cfd0665412_44_llvm_7806621557641746444,7);
  if (local_70 != -1) {
    param_1[0xc] = local_10;
    param_1[10] = local_20;
    param_1[0xb] = lStack_18;
    param_1[8] = local_30;
    param_1[9] = lStack_28;
    param_1[6] = local_40;
    param_1[7] = lStack_38;
    param_1[4] = local_50;
    param_1[5] = lStack_48;
    param_1[2] = local_60;
    param_1[3] = lStack_58;
    *param_1 = local_70;
    param_1[1] = lStack_68;
    return param_1;
  }
LAB_00600fac:
  param_1[1] = lStack_68;
  *param_1 = -2;
  return param_1;
}


