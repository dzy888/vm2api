// 004140e0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedReceipts>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::resume::PersistedReceipts> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::resume::PersistedReceipts>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da;
  longlong local_88 [3];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined8 local_48 [3];
  
  local_70 = *param_2;
  uStack_6c = param_2[1];
  uStack_68 = param_2[2];
  uStack_64 = param_2[3];
  local_60 = *(ulonglong *)(param_2 + 4);
  uStack_58 = param_2[6];
  uStack_54 = param_2[7];
  local_88[0] = 0;
  local_88[1] = 1;
  local_88[2] = 0;
  local_50 = 0x80;
  uVar7 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::resume::PersistedReceipts_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_88);
  if (*param_1 != -1) {
    if (local_60 < CONCAT44(uStack_64,uStack_68)) {
      lVar1 = *param_1;
      lVar6 = param_1[1];
      lVar4 = param_1[2];
      do {
        uVar3 = local_60 + 1;
        uVar5 = (ulonglong)*(byte *)(CONCAT44(uStack_6c,local_70) + -1 + uVar3);
        if ((0x20 < uVar5) || ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0)) {
          local_48[0] = 0x16;
          lVar2 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_88,local_48);
          param_1[1] = lVar2;
          *param_1 = -1;
          uVar7 = extraout_XMM0_Da;
          for (lVar4 = lVar4 + 1; lVar4 != 1; lVar4 = lVar4 + -1) {
            uVar7 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                    <craggemini_core[66f3c71560d70857]::resume::ContinuationReceipt>(lVar6);
            lVar6 = lVar6 + 0xd8;
          }
          if (lVar1 != 0) {
            uVar7 = (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,8);
          }
          break;
        }
        local_60 = uVar3;
      } while (uVar3 != CONCAT44(uStack_64,uStack_68));
    }
  }
  if (local_88[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
  }
  return param_1;
}


