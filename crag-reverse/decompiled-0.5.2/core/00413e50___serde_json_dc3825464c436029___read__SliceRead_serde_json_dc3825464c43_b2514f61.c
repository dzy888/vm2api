// 00413e50 <serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   serde_json[dc3825464c436029]::value::Value> */

char * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,serde_json[dc3825464c436029]::value::Value>
          (char *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_88 [3];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  ulonglong local_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28 [3];
  
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
  uVar4 = <serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (param_1,local_88);
  if (*param_1 != -1) {
    uVar4 = *(undefined4 *)param_1;
    uStack_44 = *(undefined4 *)(param_1 + 4);
    uStack_40 = *(undefined4 *)(param_1 + 8);
    uStack_3c = *(undefined4 *)(param_1 + 0xc);
    local_38 = *(undefined4 *)(param_1 + 0x10);
    uStack_34 = *(undefined4 *)(param_1 + 0x14);
    uStack_30 = *(undefined4 *)(param_1 + 0x18);
    uStack_2c = *(undefined4 *)(param_1 + 0x1c);
    local_48 = uVar4;
    if (local_60 < CONCAT44(uStack_64,uStack_68)) {
      do {
        uVar2 = local_60 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_6c,local_70) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_28[0] = 0x16;
          uVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_88,local_28);
          *(undefined8 *)(param_1 + 8) = uVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <serde_json[dc3825464c436029]::value::Value>(&local_48);
          break;
        }
        local_60 = uVar2;
      } while (uVar2 != CONCAT44(uStack_64,uStack_68));
    }
  }
  if (local_88[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


