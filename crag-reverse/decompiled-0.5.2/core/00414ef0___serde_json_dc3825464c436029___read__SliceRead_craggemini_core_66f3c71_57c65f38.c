// 00414ef0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::SlotPermit>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::license::host::SlotPermit> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::license::host::SlotPermit>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_160 [3];
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  ulonglong local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined1 local_128;
  undefined8 local_120 [3];
  undefined1 local_108 [248];
  
  local_148 = *param_2;
  uStack_144 = param_2[1];
  uStack_140 = param_2[2];
  uStack_13c = param_2[3];
  local_138 = *(ulonglong *)(param_2 + 4);
  uStack_130 = param_2[6];
  uStack_12c = param_2[7];
  local_160[0] = 0;
  local_160[1] = 1;
  local_160[2] = 0;
  local_128 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::license::host::SlotPermit_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_160);
  if (*param_1 != -1) {
    uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0xf8);
    if (local_138 < CONCAT44(uStack_13c,uStack_140)) {
      do {
        uVar2 = local_138 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_144,local_148) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_120[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_160,local_120);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::license::host::SlotPermit>(local_108);
          if (local_160[0] == 0) {
            return param_1;
          }
          goto LAB_00414fb0;
        }
        local_138 = uVar2;
      } while (uVar2 != CONCAT44(uStack_13c,uStack_140));
    }
  }
  if (local_160[0] != 0) {
LAB_00414fb0:
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


