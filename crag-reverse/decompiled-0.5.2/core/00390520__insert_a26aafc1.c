// 00390520 insert

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>::insert */

undefined8 __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
::insert(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  longlong lVar5;
  undefined8 uVar6;
  byte bVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong unaff_R13;
  ulonglong uVar14;
  bool bVar15;
  longlong local_a8;
  longlong local_88;
  longlong local_80;
  longlong local_78;
  longlong *local_70;
  longlong local_68;
  undefined8 local_60;
  ulonglong local_58;
  undefined1 local_50 [32];
  
  lVar10 = *param_1;
  if (lVar10 != 0) {
    local_a8 = param_1[1];
    lVar1 = param_2[1];
    uVar2 = param_2[2];
    do {
      uVar8 = (ulonglong)*(ushort *)(lVar10 + 0x112);
      uVar9 = (ulonglong)((uint)*(ushort *)(lVar10 + 0x112) * 8);
      lVar13 = uVar9 * 3;
      uVar14 = 0xffffffffffffffff;
      lVar5 = lVar10 + 8;
      do {
        if (lVar13 == 0) goto LAB_003905d5;
        uVar3 = *(ulonglong *)(lVar5 + 0x10);
        uVar11 = uVar3;
        if (uVar2 < uVar3) {
          uVar11 = uVar2;
        }
        iVar4 = (*(code *)PTR_memcmp_00799528)(uVar9,uVar11);
        lVar12 = uVar2 - uVar3;
        if (iVar4 != 0) {
          lVar12 = (longlong)iVar4;
        }
        bVar7 = (0 < lVar12) - (lVar12 < 0);
        uVar9 = (ulonglong)bVar7;
        uVar14 = uVar14 + 1;
        lVar13 = lVar13 + -0x18;
        lVar5 = lVar5 + 0x18;
      } while (bVar7 == 1);
      uVar8 = uVar14;
      if (bVar7 == 0) {
        if (*param_2 == 0) {
          return 1;
        }
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
        goto LAB_00390676;
      }
LAB_003905d5:
      bVar15 = local_a8 == 0;
      local_a8 = local_a8 + -1;
      if (bVar15) goto LAB_00390663;
      lVar10 = *(longlong *)(lVar10 + 0x118 + uVar8 * 8);
    } while( true );
  }
  local_88 = *param_2;
  local_80 = param_2[1];
  local_68 = 0;
  local_58 = unaff_R13;
joined_r0x00390623:
  if (local_88 == -1) {
LAB_00390676:
    uVar6 = 1;
  }
  else {
    local_78 = param_2[2];
    local_60 = 0;
    local_70 = param_1;
    <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,alloc[12e961f32105355]::collections::btree::set_val::SetValZST>>
    ::insert_entry(local_50,&local_88);
    uVar6 = 0;
  }
  return uVar6;
LAB_00390663:
  local_88 = *param_2;
  local_80 = lVar1;
  local_68 = lVar10;
  local_58 = uVar8;
  goto joined_r0x00390623;
}


