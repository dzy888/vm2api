// 00412c80 <craggemini_core[66f3c71560d70857]::server::WebToolRequest>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::server::WebToolRequest>
    */

longlong * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::server::WebToolRequest>
          (longlong *param_1,longlong param_2,ulonglong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_148 [4];
  ulonglong local_128;
  ulonglong local_120;
  undefined8 uStack_118;
  undefined1 local_110;
  undefined8 local_108 [3];
  undefined1 local_f0 [224];
  
  local_148[0] = 0;
  local_120 = 0;
  uStack_118 = 0;
  local_148[1] = 1;
  local_148[2] = 0;
  local_110 = 0x80;
  local_148[3] = param_2;
  local_128 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::server::WebToolRequest_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_148);
  if (*param_1 != -1) {
    uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0xe0);
    if (local_120 < local_128) {
      do {
        uVar2 = local_120 + 1;
        uVar3 = (ulonglong)*(byte *)(local_148[3] + -1 + uVar2);
        if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
          local_108[0] = 0x16;
          lVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                  ::peek_error(local_148,local_108);
          param_1[1] = lVar1;
          *param_1 = -1;
          uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                  <craggemini_core[66f3c71560d70857]::server::WebToolRequest>(local_f0);
          break;
        }
        local_120 = uVar2;
      } while (uVar2 != local_128);
    }
  }
  if (local_148[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


