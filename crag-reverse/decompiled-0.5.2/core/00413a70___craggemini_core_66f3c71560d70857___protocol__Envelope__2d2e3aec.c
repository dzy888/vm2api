// 00413a70 <craggemini_core[66f3c71560d70857]::protocol::Envelope>

/* serde_json[dc3825464c436029]::de::from_slice::<craggemini_core[66f3c71560d70857]::protocol::Envelope>
    */

int * __rustcall
serde_json[dc3825464c436029]::de::from_slice::
<craggemini_core[66f3c71560d70857]::protocol::Envelope>
          (int *param_1,longlong param_2,ulonglong param_3)

{
  undefined8 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined4 uVar4;
  longlong local_120 [4];
  ulonglong local_100;
  ulonglong local_f8;
  undefined8 uStack_f0;
  undefined1 local_e8;
  undefined8 local_e0 [3];
  undefined1 local_c8 [184];
  
  local_120[0] = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_120[1] = 1;
  local_120[2] = 0;
  local_e8 = 0x80;
  local_120[3] = param_2;
  local_100 = param_3;
  uVar4 = <&mut_serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::Deserializer>
          ::deserialize_struct::
          <<craggemini_core[66f3c71560d70857]::protocol::Envelope_as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::__Visitor>
                    (param_1,local_120);
  if ((*param_1 != -1) && (uVar4 = (*(code *)PTR_memcpy_00799008)(uVar4,0xb8), local_f8 < local_100)
     ) {
    do {
      uVar2 = local_f8 + 1;
      uVar3 = (ulonglong)*(byte *)(local_120[3] + -1 + uVar2);
      if ((0x20 < uVar3) || ((0x100002600U >> (uVar3 & 0x3f) & 1) == 0)) {
        local_e0[0] = 0x16;
        uVar1 = <serde_json[dc3825464c436029]::de::Deserializer<serde_json[dc3825464c436029]::read::SliceRead>>
                ::peek_error(local_120,local_e0);
        *(undefined8 *)(param_1 + 2) = uVar1;
        param_1[0] = -1;
        param_1[1] = -1;
        uVar4 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                <craggemini_core[66f3c71560d70857]::protocol::Envelope>(local_c8);
        break;
      }
      local_f8 = uVar2;
    } while (uVar2 != local_100);
  }
  if (local_120[0] != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  return param_1;
}


