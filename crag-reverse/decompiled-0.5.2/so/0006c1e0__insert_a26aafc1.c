// 0006c1e0 insert

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::insert */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::insert(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 *puVar10;
  byte bVar11;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong lVar17;
  longlong *unaff_R15;
  longlong *plVar18;
  bool bVar19;
  longlong local_d8;
  longlong *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  longlong *local_90;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong *local_58;
  undefined1 local_48 [24];
  
  lVar13 = *param_2;
  if (lVar13 != 0) {
    local_d8 = param_2[1];
    lVar15 = param_3[1];
    uVar2 = param_3[2];
    do {
      uVar1 = *(ushort *)(lVar13 + 0x272);
      uVar12 = (ulonglong)((uint)uVar1 * 8);
      lVar17 = uVar12 * 3;
      plVar18 = (longlong *)0xffffffffffffffff;
      lVar9 = lVar13 + 0x168;
      do {
        if (lVar17 == 0) {
          plVar18 = (longlong *)(ulonglong)uVar1;
          goto LAB_0006c2a5;
        }
        uVar3 = *(ulonglong *)(lVar9 + 0x10);
        uVar14 = uVar3;
        if (uVar2 < uVar3) {
          uVar14 = uVar2;
        }
        iVar8 = (*(code *)PTR_memcmp_000c3fa8)(uVar12,uVar14);
        lVar16 = uVar2 - uVar3;
        if (iVar8 != 0) {
          lVar16 = (longlong)iVar8;
        }
        bVar11 = (0 < lVar16) - (lVar16 < 0);
        uVar12 = (ulonglong)bVar11;
        plVar18 = (longlong *)((longlong)plVar18 + 1);
        lVar17 = lVar17 + -0x18;
        lVar9 = lVar9 + 0x18;
      } while (bVar11 == 1);
      if (bVar11 == 0) {
        if (*param_3 != 0) {
          (*(code *)PTR___rust_dealloc_000c3aa0)(0,1);
        }
        goto LAB_0006c444;
      }
LAB_0006c2a5:
      bVar19 = local_d8 == 0;
      local_d8 = local_d8 + -1;
      if (bVar19) goto LAB_0006c421;
      lVar13 = *(longlong *)(lVar13 + 0x278 + (longlong)plVar18 * 8);
    } while( true );
  }
  lVar17 = *param_3;
  lVar15 = param_3[1];
  local_a0 = 0;
  local_90 = unaff_R15;
joined_r0x0006c309:
  lVar13 = lVar15;
  if (lVar17 == -1) {
    plVar18 = param_2;
LAB_0006c444:
    lVar15 = (longlong)plVar18 * 0x20;
    uVar5 = *(undefined8 *)(lVar13 + lVar15);
    uVar6 = ((undefined8 *)(lVar13 + lVar15))[1];
    puVar10 = (undefined8 *)(lVar13 + 0x10 + lVar15);
    uVar7 = puVar10[1];
    param_1[2] = *puVar10;
    param_1[3] = uVar7;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    uVar7 = param_4[3];
    *(undefined8 *)(lVar13 + lVar15) = *param_4;
    ((undefined8 *)(lVar13 + lVar15))[1] = uVar5;
    puVar10 = (undefined8 *)(lVar13 + 0x10 + lVar15);
    *puVar10 = uVar6;
    puVar10[1] = uVar7;
  }
  else {
    lVar15 = param_3[2];
    uStack_98 = 0;
    local_a8 = param_2;
    if (local_a0 == 0) {
      (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_000c3a88)();
      puVar10 = (undefined8 *)(*(code *)PTR___rust_alloc_000c3a90)();
      if (puVar10 == (undefined8 *)0x0) {
        (*(code *)PTR_handle_alloc_error_000c3d10)();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      puVar10[0x2c] = 0;
      *param_2 = (longlong)puVar10;
      param_2[1] = 0;
      *(undefined2 *)((longlong)puVar10 + 0x272) = 1;
      puVar10[0x2d] = lVar17;
      puVar10[0x2e] = lVar13;
      puVar10[0x2f] = lVar15;
      uVar5 = param_4[1];
      uVar6 = param_4[2];
      uVar7 = param_4[3];
      *puVar10 = *param_4;
      puVar10[1] = uVar5;
      puVar10[2] = uVar6;
      puVar10[3] = uVar7;
      local_a8 = param_2;
    }
    else {
      local_a0._4_4_ = (undefined4)((ulonglong)local_a0 >> 0x20);
      local_68 = (undefined4)local_a0;
      uStack_64 = local_a0._4_4_;
      uStack_60 = 0;
      uStack_5c = 0;
      local_88 = lVar17;
      local_80 = lVar13;
      local_78 = lVar15;
      local_58 = local_90;
      <alloc[12e961f32105355]::collections::btree::node::Handle<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::Leaf>,alloc[12e961f32105355]::collections::btree::node::marker::Edge>>
      ::insert_recursing::
      <alloc[12e961f32105355]::alloc::Global,<alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>::insert_entry::_closure_0_>
                (local_48,&local_68,&local_88,param_4,&local_a8,&local_88);
    }
    local_a8[2] = local_a8[2] + 1;
    *(undefined1 *)param_1 = 0xff;
  }
  return param_1;
LAB_0006c421:
  lVar17 = *param_3;
  local_a0 = lVar13;
  local_90 = plVar18;
  goto joined_r0x0006c309;
}


