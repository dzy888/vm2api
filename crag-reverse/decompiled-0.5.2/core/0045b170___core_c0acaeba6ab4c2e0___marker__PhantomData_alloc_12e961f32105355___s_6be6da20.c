// 0045b170 <core[c0acaeba6ab4c2e0]::marker::PhantomData<alloc[12e961f32105355]::string::String>>

/* <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead> as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_key_seed::<core[c0acaeba6ab4c2e0]::marker::PhantomData<alloc[12e961f32105355]::string::String>>
    */

longlong * __rustcall
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::StrRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_key_seed::
<core[c0acaeba6ab4c2e0]::marker::PhantomData<alloc[12e961f32105355]::string::String>>
          (longlong *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  undefined4 local_40;
  longlong local_38;
  longlong local_30;
  
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::StrRead>(&local_40);
  if ((char)local_40 == '\x01') {
    param_1[1] = local_38;
    *param_1 = -2;
  }
  else if (local_40._1_1_ == '\0') {
    *param_1 = -1;
  }
  else {
    lVar2 = *param_2;
    plVar1 = (longlong *)(lVar2 + 0x28);
    *plVar1 = *plVar1 + 1;
    *(undefined8 *)(lVar2 + 0x10) = 0;
    (*(code *)PTR_parse_str_007998f0)();
    if (local_40 == 2) {
      param_1[1] = local_38;
      *param_1 = -2;
    }
    else {
      uVar3 = local_30 == 0;
      if (-1 < local_30) goto LAB_0045b215;
      do {
        uVar3 = 1;
        (*(code *)PTR_handle_error_00798ff0)();
LAB_0045b215:
        if ((bool)uVar3) {
          lVar2 = 1;
          goto LAB_0045b250;
        }
        (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
        lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      } while (lVar2 == 0);
      (*(code *)PTR_memcpy_00799008)(param_4,local_30);
LAB_0045b250:
      *param_1 = local_30;
      param_1[1] = lVar2;
      param_1[2] = local_30;
    }
  }
  return param_1;
}


