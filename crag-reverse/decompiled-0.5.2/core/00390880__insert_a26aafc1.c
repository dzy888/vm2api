// 00390880 insert

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<u32,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
::insert(longlong *param_1,uint param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  bool bVar8;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined8 local_50;
  longlong local_48 [4];
  undefined1 local_28 [24];
  
  local_68 = *param_1;
  local_70 = param_1;
  if (local_68 != 0) {
    lVar5 = param_1[1];
    do {
      local_58 = (ulonglong)*(ushort *)(local_68 + 0x36);
      lVar7 = (ulonglong)*(ushort *)(local_68 + 0x36) << 2;
      uVar6 = 0xffffffffffffffff;
      do {
        if (lVar7 == 0) goto LAB_003908e3;
        uVar1 = *(uint *)(local_68 + 0xc + uVar6 * 4);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + -4;
      } while ((char)((uVar1 < param_2) - (param_2 < uVar1)) == '\x01');
      local_58 = uVar6;
      if (uVar1 < param_2 == param_2 < uVar1) {
        return CONCAT71((int7)((ulonglong)local_68 >> 8),1);
      }
LAB_003908e3:
      bVar8 = lVar5 == 0;
      lVar5 = lVar5 + -1;
      if (bVar8) goto LAB_0039094c;
      local_68 = *(longlong *)(local_68 + 0x38 + local_58 * 8);
    } while( true );
  }
  local_50 = (ulonglong)param_2;
  (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
  puVar3 = (undefined8 *)(*(code *)PTR___rust_alloc_00799000)();
  if (puVar3 == (undefined8 *)0x0) {
    (*(code *)PTR_handle_alloc_error_007991d8)();
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return uVar4;
  }
  *puVar3 = 0;
  *param_1 = (longlong)puVar3;
  param_1[1] = 0;
  *(undefined2 *)((longlong)puVar3 + 0x36) = 1;
  *(uint *)(puVar3 + 1) = param_2;
LAB_0039093e:
  local_70[2] = local_70[2] + 1;
  return 0;
LAB_0039094c:
  local_50 = (ulonglong)param_2;
  local_60 = 0;
  local_48[1] = 0;
  local_48[0] = local_68;
  local_48[2] = local_58;
  <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
  ::insert_recursing::
  <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<u32,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert_entry::_closure_0_>
            (local_28,local_48,param_2,&local_70,(longlong)&local_50 + 4);
  goto LAB_0039093e;
}


