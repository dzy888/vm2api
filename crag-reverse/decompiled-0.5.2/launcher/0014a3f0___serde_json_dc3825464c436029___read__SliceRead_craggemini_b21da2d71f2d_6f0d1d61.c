// 0014a3f0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::Entitlement>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini[b21da2d71f2da7a3]::license::host::Entitlement> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::Entitlement>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined4 uVar6;
  undefined4 extraout_XMM0_Da;
  longlong local_80 [3];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined1 local_48;
  undefined8 local_40 [3];
  
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = *(ulonglong *)(param_2 + 4);
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  local_80[0] = 0;
  local_80[1] = 1;
  local_80[2] = 0;
  local_48 = 0x80;
  uVar6 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini[b21da2d71f2da7a3]::license::host::Entitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_80);
  if (*param_1 != -1) {
    if (local_58 < CONCAT44(uStack_5c,uStack_60)) {
      lVar1 = *param_1;
      lVar2 = param_1[3];
      do {
        uVar4 = local_58 + 1;
        uVar5 = (ulonglong)*(byte *)(CONCAT44(uStack_64,local_68) + -1 + uVar4);
        if ((0x20 < uVar5) || ((0x100002600U >> (uVar5 & 0x3f) & 1) == 0)) {
          local_40[0] = 0x16;
          lVar3 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_80,local_40);
          param_1[1] = lVar3;
          *param_1 = -1;
          uVar6 = extraout_XMM0_Da;
          if (lVar1 != 0) {
            uVar6 = (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da,1);
          }
          if (lVar2 != 0) {
            uVar6 = (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
          }
          break;
        }
        local_58 = uVar4;
      } while (uVar4 != CONCAT44(uStack_5c,uStack_60));
    }
  }
  if (local_80[0] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar6,1);
  }
  return param_1;
}


