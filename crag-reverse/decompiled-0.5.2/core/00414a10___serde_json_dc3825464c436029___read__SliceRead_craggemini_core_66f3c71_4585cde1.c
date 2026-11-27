// 00414a10 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::FromBridge>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::protocol::FromBridge> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::protocol::FromBridge>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_188 [3];
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  ulonglong local_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined1 local_150;
  undefined8 local_148 [3];
  undefined1 local_130 [296];
  
  local_170 = *param_2;
  uStack_16c = param_2[1];
  uStack_168 = param_2[2];
  uStack_164 = param_2[3];
  local_160 = *(ulonglong *)(param_2 + 4);
  uStack_158 = param_2[6];
  uStack_154 = param_2[7];
  local_188[0] = 0;
  local_188[1] = 1;
  local_188[2] = 0;
  local_150 = 0x80;
  uVar4 = <craggemini_core[66f3c71560d70857]::protocol::FromBridge_as_serde_core[48776c27239fa21f]::de::Deserialize>
          ::deserialize::
          <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                    (param_1,local_188);
  if (*param_1 != -1) {
    uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0x128);
    if (local_160 < CONCAT44(uStack_164,uStack_168)) {
      do {
        uVar2 = local_160 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_16c,local_170) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_148[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_188,local_148);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::protocol::FromBridge>(local_130);
          if (local_188[0] == 0) {
            return param_1;
          }
          goto LAB_00414abf;
        }
        local_160 = uVar2;
      } while (uVar2 != CONCAT44(uStack_164,uStack_168));
    }
  }
  if (local_188[0] != 0) {
LAB_00414abf:
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


