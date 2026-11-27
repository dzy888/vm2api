// 0014a560 <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  undefined4 uVar10;
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
  uVar10 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
           ::deserialize_struct::
           <<craggemini[b21da2d71f2da7a3]::license::host::RosterEntitlement_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                     (param_1,local_88);
  if (*param_1 != -1) {
    if (local_60 < CONCAT44(uStack_64,uStack_68)) {
      lVar1 = *param_1;
      lVar2 = param_1[3];
      lVar3 = param_1[6];
      lVar9 = param_1[7];
      lVar8 = param_1[8];
      do {
        uVar6 = local_60 + 1;
        uVar7 = (ulonglong)*(byte *)(CONCAT44(uStack_6c,local_70) + -1 + uVar6);
        if ((0x20 < uVar7) || ((0x100002600U >> (uVar7 & 0x3f) & 1) == 0)) {
          local_48[0] = 0x16;
          lVar5 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_88,local_48);
          param_1[1] = lVar5;
          *param_1 = -1;
          uVar10 = extraout_XMM0_Da;
          if (lVar1 != 0) {
            uVar10 = (*(code *)PTR___rust_dealloc_00219c40)(extraout_XMM0_Da,1);
          }
          if (lVar2 != 0) {
            uVar10 = (*(code *)PTR___rust_dealloc_00219c40)(uVar10,1);
          }
          puVar4 = PTR___rust_dealloc_00219c40;
          if (lVar8 != 0) {
            lVar9 = lVar9 + 8;
            do {
              if (*(longlong *)(lVar9 + -8) != 0) {
                uVar10 = (*(code *)puVar4)(uVar10,1);
              }
              lVar9 = lVar9 + 0x20;
              lVar8 = lVar8 + -1;
            } while (lVar8 != 0);
          }
          if (lVar3 != 0) {
            uVar10 = (*(code *)PTR___rust_dealloc_00219c40)(uVar10,8);
          }
          break;
        }
        local_60 = uVar6;
      } while (uVar6 != CONCAT44(uStack_64,uStack_68));
    }
  }
  if (local_88[0] != 0) {
    (*(code *)PTR___rust_dealloc_00219c40)(uVar10,1);
  }
  return param_1;
}


