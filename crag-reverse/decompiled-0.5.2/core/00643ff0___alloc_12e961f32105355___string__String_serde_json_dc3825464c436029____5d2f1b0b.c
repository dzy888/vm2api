// 00643ff0 <alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>

/* <serde_json[dc3825464c436029]::value::ser::SerializeMap as
   serde_core[48776c27239fa21f]::ser::SerializeMap>::serialize_entry::<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value> */

undefined8 __rustcall
<serde_json[dc3825464c436029]::value::ser::SerializeMap_as_serde_core[48776c27239fa21f]::ser::SerializeMap>
::serialize_entry::
<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>
          (undefined4 param_1,longlong *param_2,longlong param_3,undefined8 param_4,
          undefined8 param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  undefined1 uVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
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
  char local_50 [32];
  
  lVar1 = *param_2;
  if (lVar1 == -2) {
    uVar7 = (*(code *)PTR_panic_00799338)
                      (param_5,&anon_63b06cc94833867f683611f039574387_75_llvm_6903579140370050947);
    if (unaff_RBX != 0) {
      (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
    }
                    /* WARNING: Subroutine does not return */
    _Unwind_Resume();
  }
  lVar2 = *(longlong *)(param_3 + 0x10);
  uVar6 = lVar2 == 0;
  uVar4 = param_4;
  if (-1 < lVar2) goto LAB_00644025;
  plVar5 = (longlong *)0x0;
  uVar6 = true;
  while( true ) {
    param_1 = (*(code *)PTR_handle_error_00798ff0)();
    uVar4 = param_4;
    param_2 = plVar5;
LAB_00644025:
    if ((bool)uVar6) break;
    param_4 = uVar4;
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    plVar5 = (longlong *)0x1;
    lVar3 = (*(code *)PTR___rust_alloc_00799000)();
    uVar6 = lVar3 == 0;
    if (!(bool)uVar6) {
      param_1 = (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da,lVar2);
      if (lVar1 != -1) {
LAB_0064407a:
        if (lVar1 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(param_1,1);
        }
      }
LAB_00644091:
      param_2[1] = lVar3;
      param_2[2] = lVar2;
      *param_2 = -1;
      local_a8 = param_2[1];
      local_a0 = param_2[2];
      local_b0 = lVar2;
      uVar7 = <&serde_json[dc3825464c436029]::value::Value_as_serde_core[48776c27239fa21f]::ser::Serialize>
              ::serialize::<serde_json[dc3825464c436029]::value::ser::Serializer>(&local_98,uVar4);
      if ((char)local_98 == -1) {
        uVar4 = CONCAT44(uStack_8c,uStack_90);
        if (lVar2 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(uVar7,1);
        }
      }
      else {
        local_68 = local_88;
        uStack_64 = uStack_84;
        uStack_60 = uStack_80;
        uStack_5c = uStack_7c;
        local_78 = local_98;
        uStack_74 = uStack_94;
        uStack_70 = uStack_90;
        uStack_6c = uStack_8c;
        <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
        ::insert(local_50,param_2 + 3,&local_b0,&local_78);
        if (local_50[0] != -1) {
          core[c0acaeba6ab4c2e0]::ptr::drop_glue::<serde_json[dc3825464c436029]::value::Value>
                    (local_50);
        }
        uVar4 = 0;
      }
      return uVar4;
    }
  }
  lVar3 = 1;
  if (lVar1 == -1) goto LAB_00644091;
  goto LAB_0064407a;
}


