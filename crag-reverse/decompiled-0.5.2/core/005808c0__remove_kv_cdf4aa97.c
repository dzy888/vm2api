// 005808c0 remove_kv

/* <alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::remove_kv */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::remove_kv(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  char local_99;
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
  undefined8 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 local_30;
  
  local_99 = '\0';
  <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>,alloc[12e961f32105355]::collections::btree::node::marker::KV>>
  ::remove_kv_tracking::
  <<alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::remove_kv::_closure_0_,alloc[12e961f32105355]::alloc::Global>
            (&local_60,param_2,&local_99);
  local_68 = local_30;
  local_78 = local_40;
  uStack_74 = uStack_3c;
  uStack_70 = uStack_38;
  uStack_6c = uStack_34;
  local_88 = local_50;
  uStack_84 = uStack_4c;
  uStack_80 = uStack_48;
  uStack_7c = uStack_44;
  local_98 = local_60;
  uStack_94 = uStack_5c;
  uStack_90 = uStack_58;
  uStack_8c = uStack_54;
  plVar1 = *(longlong **)(param_2 + 0x18);
  plVar1[2] = plVar1[2] + -1;
  if (local_99 != '\x01') {
LAB_00580958:
    param_1[6] = local_68;
    param_1[4] = CONCAT44(uStack_74,local_78);
    param_1[5] = CONCAT44(uStack_6c,uStack_70);
    param_1[2] = CONCAT44(uStack_84,local_88);
    param_1[3] = CONCAT44(uStack_7c,uStack_80);
    *param_1 = CONCAT44(uStack_94,local_98);
    param_1[1] = CONCAT44(uStack_8c,uStack_90);
    return param_1;
  }
  if (*plVar1 == 0) {
    (*(code *)PTR_unwrap_failed_00799278)();
  }
  else {
    if (plVar1[1] != 0) {
      lVar2 = *(longlong *)(*plVar1 + 0x278);
      *plVar1 = lVar2;
      lVar4 = plVar1[1] + -1;
      plVar1[1] = lVar4;
      *(undefined8 *)(lVar2 + 0x160) = 0;
      (*(code *)PTR___rust_dealloc_00798fc8)(lVar4,8);
      goto LAB_00580958;
    }
    (*(code *)PTR_panic_00799338)
              (0,&anon_f98aad3bb3e6c606de146d8493d2cfe7_25_llvm_13619962878011216390);
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


