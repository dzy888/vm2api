// 00413d00 <serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::Config>

/* serde_json[dc3825464c436029]::de::from_trait::<serde_json[dc3825464c436029]::read::SliceRead,
   craggemini_core[66f3c71560d70857]::Config> */

int * __rustcall
serde_json[dc3825464c436029]::de::from_trait::
<serde_json[dc3825464c436029]::read::SliceRead,craggemini_core[66f3c71560d70857]::Config>
          (int *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_338 [3];
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  ulonglong local_310;
  undefined4 uStack_308;
  undefined4 uStack_304;
  undefined1 local_300;
  undefined8 local_2f8 [3];
  undefined1 local_2e0 [720];
  
  local_320 = *param_2;
  uStack_31c = param_2[1];
  uStack_318 = param_2[2];
  uStack_314 = param_2[3];
  local_310 = *(ulonglong *)(param_2 + 4);
  uStack_308 = param_2[6];
  uStack_304 = param_2[7];
  local_338[0] = 0;
  local_338[1] = 1;
  local_338[2] = 0;
  local_300 = 0x80;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::Config_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_338);
  if (*param_1 != 2) {
    uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0x2d0);
    if (local_310 < CONCAT44(uStack_314,uStack_318)) {
      do {
        uVar2 = local_310 + 1;
        uVar3 = (ulonglong)*(byte *)(CONCAT44(uStack_31c,local_320) + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_2f8[0] = 0x16;
          uVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_338,local_2f8);
          *(undefined8 *)(param_1 + 2) = uVar1;
          param_1[0] = 2;
          param_1[1] = 0;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::Config>(local_2e0);
          break;
        }
        local_310 = uVar2;
      } while (uVar2 != CONCAT44(uStack_314,uStack_318));
    }
  }
  if (local_338[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


