// 003ae350 <&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>>

/* <<alloc[12e961f32105355]::vec::Vec<_> as
   serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>
   as serde_core[48776c27239fa21f]::de::Visitor>::visit_seq::<&mut
   serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>>
    */

ulonglong * __rustcall
<<alloc[12e961f32105355]::vec::Vec<_>as_serde_core[48776c27239fa21f]::de::Deserialize>::deserialize::VecVisitor<alloc[12e961f32105355]::string::String>as_serde_core[48776c27239fa21f]::de::Visitor>
::visit_seq::
<&mut_serde[8f836fbdfa2c5b5d]::private::de::content::SeqDeserializer<serde_json[dc3825464c436029]::error::Error>>
          (ulonglong *param_1,longlong param_2)

{
  char *pcVar1;
  undefined *puVar2;
  ulonglong *puVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  char *pcVar9;
  undefined4 uVar10;
  ulonglong local_98;
  ulonglong local_90;
  ulonglong local_88;
  ulonglong *local_80;
  longlong local_78;
  char *local_70;
  longlong local_68;
  ulonglong local_60;
  undefined8 local_58;
  char local_50;
  undefined4 local_4f;
  undefined4 uStack_4b;
  undefined4 uStack_47;
  undefined4 uStack_43;
  undefined3 uStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar9 = *(char **)(param_2 + 8);
  local_70 = *(char **)(param_2 + 0x18);
  uVar6 = (ulonglong)((longlong)local_70 - (longlong)pcVar9) >> 5;
  uVar7 = 0xaaaa;
  if (uVar6 < 0xaaaa) {
    uVar7 = uVar6;
  }
  local_80 = param_1;
  if (local_70 == pcVar9) {
    local_98 = 0;
    local_90 = 8;
    local_88 = 0;
  }
  else {
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    local_90 = (*(code *)PTR___rust_alloc_00799000)();
    if (local_90 == 0) {
      uVar10 = (*(code *)PTR_handle_error_00798ff0)();
      if (pcVar9 == (char *)0x0) {
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::
        <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>
                  (&local_98,(ulonglong)(uint)((int)uVar7 * 8) * 3);
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,1);
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::
      <alloc[12e961f32105355]::vec::Vec<alloc[12e961f32105355]::string::String>>(&local_98,pcVar9);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
    local_88 = 0;
    lVar8 = *(longlong *)(param_2 + 0x20);
    local_98 = uVar7;
    local_78 = param_2;
    do {
      lVar8 = lVar8 + 1;
      pcVar1 = pcVar9 + 0x20;
      *(char **)(local_78 + 8) = pcVar1;
      local_50 = *pcVar9;
      if (local_50 == -1) break;
      local_4f = *(undefined4 *)(pcVar9 + 1);
      uStack_4b = *(undefined4 *)(pcVar9 + 5);
      uStack_47 = *(undefined4 *)(pcVar9 + 9);
      uStack_43 = *(undefined4 *)(pcVar9 + 0xd);
      uStack_3c = *(undefined4 *)(pcVar9 + 0x14);
      uStack_38 = *(undefined4 *)(pcVar9 + 0x18);
      uStack_34 = *(undefined4 *)(pcVar9 + 0x1c);
      uStack_3f = (undefined3)((uint)*(undefined4 *)(pcVar9 + 0x10) >> 8);
      *(longlong *)(local_78 + 0x20) = lVar8;
      uVar10 = <serde[8f836fbdfa2c5b5d]::private::de::content::ContentDeserializer<serde_json[dc3825464c436029]::error::Error>as_serde_core[48776c27239fa21f]::de::Deserializer>
               ::deserialize_string::<serde_core[48776c27239fa21f]::de::impls::StringVisitor>
                         (&local_68,&local_50);
      uVar5 = local_58;
      uVar6 = local_60;
      lVar4 = local_68;
      puVar3 = local_80;
      uVar7 = local_88;
      if (local_68 == -1) {
        local_80[1] = local_60;
        *local_80 = 0xffffffffffffffff;
        puVar2 = PTR___rust_dealloc_00798fc8;
        if (local_88 != 0) {
          lVar8 = local_90 + 8;
          do {
            if (*(longlong *)(lVar8 + -8) != 0) {
              uVar10 = (*(code *)puVar2)(uVar10,1);
            }
            lVar8 = lVar8 + 0x18;
            uVar7 = uVar7 - 1;
          } while (uVar7 != 0);
        }
        if (local_98 == 0) {
          return puVar3;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar10,8);
        return puVar3;
      }
      if (local_88 == local_98) {
        (*(code *)PTR_grow_one_00799328)();
      }
      *(longlong *)(local_90 + uVar7 * 0x18) = lVar4;
      *(ulonglong *)(local_90 + 8 + uVar7 * 0x18) = uVar6;
      *(undefined8 *)(local_90 + 0x10 + uVar7 * 0x18) = uVar5;
      local_88 = uVar7 + 1;
      pcVar9 = pcVar1;
    } while (pcVar1 != local_70);
  }
  local_80[2] = local_88;
  *local_80 = local_98;
  local_80[1] = local_90;
  return local_80;
}


