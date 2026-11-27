// 006428f0 <craggemini_core[66f3c71560d70857]::binding::ProxyScheme>

/* WARNING: Switch with 1 destination removed at 0x00642915 */
/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeStruct>::serialize_field::<craggemini_core[66f3c71560d70857]::binding::ProxyScheme>
    */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeStruct>
::serialize_field::<craggemini_core[66f3c71560d70857]::binding::ProxyScheme>
          (longlong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar4;
  undefined8 local_a0;
  longlong local_98;
  longlong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  char local_40 [32];
  
  lVar1 = *param_1;
  if (lVar1 == -2) {
    uVar3 = (*(code *)PTR_syntax_00799910)(param_4,0);
    return uVar3;
  }
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar2 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar2 == (undefined8 *)0x0) {
    uVar4 = (*(code *)PTR_handle_error_00798ff0)();
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  *puVar2 = 0x63735f79786f7270;
  *(undefined4 *)(puVar2 + 1) = 0x656d6568;
  if ((lVar1 != -1) && (lVar1 != 0)) {
    (*(code *)PTR___rust_dealloc_00798fc8)(extraout_XMM0_Da,1);
  }
  param_1[1] = (longlong)puVar2;
  param_1[2] = 0xc;
  *param_1 = -1;
  local_98 = param_1[1];
  local_90 = param_1[2];
  local_a0 = 0xc;
  uVar4 = <craggemini_core[66f3c71560d70857]::binding::ProxyScheme_as_serde_core[48776c27239fa21f]::ser::Serialize>
          ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_88,param_2);
  if ((char)local_88 == -1) {
    uVar3 = CONCAT44(uStack_7c,uStack_80);
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar4,1);
  }
  else {
    local_58 = local_78;
    uStack_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    local_68 = local_88;
    uStack_64 = uStack_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert(local_40,param_1 + 3,&local_a0,&local_68);
    if (local_40[0] != -1) {
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>(local_40)
      ;
    }
    uVar3 = 0;
  }
  return uVar3;
}


