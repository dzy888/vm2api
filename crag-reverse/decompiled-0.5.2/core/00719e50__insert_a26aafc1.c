// 00719e50 insert

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::insert */

undefined8 * __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::insert(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  longlong lVar9;
  byte bVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong *unaff_R15;
  longlong *plVar16;
  longlong lVar17;
  bool bVar18;
  longlong local_c8;
  longlong local_b0;
  longlong local_a8;
  ulonglong local_a0;
  longlong *local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_50 [32];
  
  lVar15 = *param_2;
  if (lVar15 != 0) {
    local_c8 = param_2[1];
    lVar17 = param_3[1];
    uVar3 = param_3[2];
    do {
      uVar2 = *(ushort *)(lVar15 + 0x272);
      uVar11 = (ulonglong)((uint)uVar2 * 8);
      lVar14 = uVar11 * 3;
      plVar16 = (longlong *)0xffffffffffffffff;
      lVar9 = lVar15 + 0x168;
      do {
        if (lVar14 == 0) {
          plVar16 = (longlong *)(ulonglong)uVar2;
          goto LAB_00719f15;
        }
        uVar4 = *(ulonglong *)(lVar9 + 0x10);
        uVar12 = uVar4;
        if (uVar3 < uVar4) {
          uVar12 = uVar3;
        }
        iVar8 = (*(code *)PTR_memcmp_00799528)(uVar11,uVar12);
        lVar13 = uVar3 - uVar4;
        if (iVar8 != 0) {
          lVar13 = (longlong)iVar8;
        }
        bVar10 = (0 < lVar13) - (lVar13 < 0);
        uVar11 = (ulonglong)bVar10;
        plVar16 = (longlong *)((longlong)plVar16 + 1);
        lVar14 = lVar14 + -0x18;
        lVar9 = lVar9 + 0x18;
      } while (bVar10 == 1);
      if (bVar10 == 0) {
        if (*param_3 != 0) {
          (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
        }
        goto LAB_00719ff8;
      }
LAB_00719f15:
      bVar18 = local_c8 == 0;
      local_c8 = local_c8 + -1;
      if (bVar18) goto LAB_00719fd3;
      lVar15 = *(longlong *)(lVar15 + 0x278 + (longlong)plVar16 * 8);
    } while( true );
  }
  local_b0 = *param_3;
  lVar17 = param_3[1];
  local_a0 = param_3[2];
  local_90 = 0;
  local_80 = unaff_R15;
joined_r0x00719f7a:
  lVar15 = lVar17;
  if (local_b0 == -1) {
    plVar16 = param_2;
LAB_00719ff8:
    lVar17 = (longlong)plVar16 * 0x20;
    uVar5 = *(undefined8 *)(lVar15 + lVar17);
    uVar6 = ((undefined8 *)(lVar15 + lVar17))[1];
    puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
    uVar7 = puVar1[1];
    param_1[2] = *puVar1;
    param_1[3] = uVar7;
    *param_1 = uVar5;
    param_1[1] = uVar6;
    uVar5 = param_4[1];
    uVar6 = param_4[2];
    uVar7 = param_4[3];
    *(undefined8 *)(lVar15 + lVar17) = *param_4;
    ((undefined8 *)(lVar15 + lVar17))[1] = uVar5;
    puVar1 = (undefined8 *)(lVar15 + 0x10 + lVar17);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
  }
  else {
    local_88 = 0;
    local_78 = *(undefined4 *)param_4;
    uStack_74 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_70 = *(undefined4 *)(param_4 + 1);
    uStack_6c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_68 = *(undefined4 *)(param_4 + 2);
    uStack_64 = *(undefined4 *)((longlong)param_4 + 0x14);
    uStack_60 = *(undefined4 *)(param_4 + 3);
    uStack_5c = *(undefined4 *)((longlong)param_4 + 0x1c);
    local_a8 = lVar15;
    local_98 = param_2;
    <alloc[12e961f32105355]::collections::btree::map::entry::VacantEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
    ::insert_entry(local_50,&local_b0,&local_78);
    *(undefined1 *)param_1 = 0xff;
  }
  return param_1;
LAB_00719fd3:
  local_b0 = *param_3;
  local_a0 = uVar3;
  local_90 = lVar15;
  local_80 = plVar16;
  goto joined_r0x00719f7a;
}


