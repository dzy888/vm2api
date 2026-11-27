// 004134b0 <craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_210 [4];
  ulonglong local_1f0;
  ulonglong local_1e8;
  undefined8 uStack_1e0;
  undefined1 local_1d8;
  undefined8 local_1d0 [3];
  undefined1 local_1b8 [424];
  
  local_210[0] = 0;
  local_1e8 = 0;
  uStack_1e0 = 0;
  local_210[1] = 1;
  local_210[2] = 0;
  local_1d8 = 0x80;
  local_210[3] = param_2;
  local_1f0 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_map::
          <<craggemini_core[66f3c71560d70857]::server::AccountUpsertRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_210);
  if ((*param_1 != -1) &&
     (uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0x1a8), local_1e8 < local_1f0)) {
    do {
      uVar2 = local_1e8 + 1;
      uVar3 = (ulonglong)*(byte *)(local_210[3] + -1 + uVar2);
      if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
        local_1d0[0] = 0x16;
        lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(local_210,local_1d0);
        param_1[1] = lVar1;
        *param_1 = -1;
        uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::binding::AccountBindingConfig>(local_1b8);
        if (local_210[0] == 0) {
          return param_1;
        }
        goto LAB_00413570;
      }
      local_1e8 = uVar2;
    } while (uVar2 != local_1f0);
  }
  if (local_210[0] != 0) {
LAB_00413570:
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


