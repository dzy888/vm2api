// 0045b350 <serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>

/* <serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead> as
   serde_core[48776c27239fa21f]::de::MapAccess>::next_key_seed::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
    */

undefined1 * __rustcall
<serde_json[dc3825464c436029]::de::MapAccess<serde_json[dc3825464c436029]::read::SliceRead>as_serde_core[48776c27239fa21f]::de::MapAccess>
::next_key_seed::<serde[8f836fbdfa2c5b5d]::private::de::content::ContentVisitor>
          (undefined1 *param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  longlong lVar2;
  undefined1 uVar3;
  char local_48;
  char cStack_47;
  undefined6 uStack_46;
  longlong local_40;
  longlong local_38;
  
  <serde_json[dc3825464c436029]::de::MapAccess<_>as_serde_core[48776c27239fa21f]::de::MapAccess>::
  next_key_seed::has_next_key::<serde_json[dc3825464c436029]::read::SliceRead>(&local_48);
  if (local_48 == '\x01') {
    *(longlong *)(param_1 + 8) = local_40;
    *param_1 = 0xfe;
    return param_1;
  }
  if (cStack_47 == '\0') {
    *param_1 = 0xff;
    return param_1;
  }
  lVar2 = *param_2;
  plVar1 = (longlong *)(lVar2 + 0x28);
  *plVar1 = *plVar1 + 1;
  *(undefined8 *)(lVar2 + 0x10) = 0;
  (*(code *)PTR_parse_str_007998f8)();
  lVar2 = CONCAT62(uStack_46,CONCAT11(cStack_47,local_48));
  if (lVar2 == 2) {
    *(longlong *)(param_1 + 8) = local_40;
    *param_1 = 0xfe;
    return param_1;
  }
  if ((int)lVar2 == 1) {
    if (-1 < local_38) {
      uVar3 = 0xc;
      if (local_38 == 0) {
        lVar2 = 1;
        local_38 = 0;
        local_40 = 0;
        goto LAB_0045b433;
      }
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
      lVar2 = (*(code *)PTR___rust_alloc_00799000)();
      if (lVar2 != 0) {
        (*(code *)PTR_memcpy_00799008)(param_4,local_38);
        local_40 = local_38;
        goto LAB_0045b433;
      }
    }
    (*(code *)PTR_handle_error_00798ff0)();
  }
  uVar3 = 0xd;
  lVar2 = local_38;
LAB_0045b433:
  *param_1 = uVar3;
  *(longlong *)(param_1 + 8) = local_40;
  *(longlong *)(param_1 + 0x10) = lVar2;
  *(longlong *)(param_1 + 0x18) = local_38;
  return param_1;
}


