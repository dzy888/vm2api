// 000588d0 <serde_json[dc3825464c436029]::read::SliceRead,agy_bridge[64a9e9deac6c45ce]::Command>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   agy_bridge[64a9e9deac6c45ce]::Command> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,agy_bridge[64a9e9deac6c45ce]::Command>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_110 [3];
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  ulonglong local_e8;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8;
  undefined8 local_d0 [3];
  undefined1 local_b8 [168];
  
  local_f8 = *param_2;
  uStack_f4 = param_2[1];
  uStack_f0 = param_2[2];
  uStack_ec = param_2[3];
  local_e8 = *(ulonglong *)(param_2 + 4);
  uStack_e0 = param_2[6];
  uStack_dc = param_2[7];
  local_110[0] = 0;
  local_110[1] = 1;
  local_110[2] = 0;
  local_d8 = 0x80;
  uVar4 = <agy_bridge[64a9e9deac6c45ce]::Command_as_serde_core[48776c27239fa21f]::de::Deserialize>::
          deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (param_1,local_110);
  if (*param_1 != -1) {
    uVar4 = (*(code *)PTR_memcpy_000c3aa8)(uVar4,0xa8);
    if (local_e8 < CONCAT44(uStack_ec,uStack_f0)) {
      do {
        uVar2 = local_e8 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_f4,local_f8) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_d0[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_110,local_d0);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::<agy_bridge[64a9e9deac6c45ce]::Command>
                            (local_b8);
          if (local_110[0] == 0) {
            return param_1;
          }
          goto LAB_00058990;
        }
        local_e8 = uVar2;
      } while (uVar2 != CONCAT44(uStack_ec,uStack_f0));
    }
  }
  if (local_110[0] != 0) {
LAB_00058990:
    (*(code *)PTR___rust_dealloc_000c3aa0)(uVar4,1);
  }
  return param_1;
}


