// 00149df0 <serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::Claims>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini[b21da2d71f2da7a3]::license::Claims> */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini[b21da2d71f2da7a3]::license::Claims>
          (longlong *param_1,undefined4 *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_178 [3];
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  ulonglong local_150;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined1 local_140;
  undefined8 local_138 [3];
  undefined1 local_120 [272];
  
  local_160 = *param_2;
  uStack_15c = param_2[1];
  uStack_158 = param_2[2];
  uStack_154 = param_2[3];
  local_150 = *(ulonglong *)(param_2 + 4);
  uStack_148 = param_2[6];
  uStack_144 = param_2[7];
  local_178[0] = 0;
  local_178[1] = 1;
  local_178[2] = 0;
  local_140 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini[b21da2d71f2da7a3]::license::Claims_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_178);
  if (*param_1 != -1) {
    uVar4 = (*(code *)PTR_memcpy_00219c60)(uVar4,0x110);
    if (local_150 < CONCAT44(uStack_154,uStack_158)) {
      do {
        uVar2 = local_150 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_15c,local_160) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_138[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_178,local_138);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini[b21da2d71f2da7a3]::license::Claims>(local_120);
          if (local_178[0] == 0) {
            return param_1;
          }
          goto LAB_00149eaf;
        }
        local_150 = uVar2;
      } while (uVar2 != CONCAT44(uStack_154,uStack_158));
    }
  }
  if (local_178[0] != 0) {
LAB_00149eaf:
    (*(code *)PTR___rust_dealloc_00219c40)(uVar4,1);
  }
  return param_1;
}


