// 0035ae50 <str>

/* <alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::remove::<str> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::map::BTreeMap<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::remove::<str>(undefined8 *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  bool bVar12;
  undefined4 uVar13;
  longlong local_b0;
  longlong local_88;
  longlong local_80;
  ulonglong local_78;
  longlong *local_70;
  longlong local_68 [3];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar6 = *param_2;
  if (lVar6 != 0) {
    local_b0 = param_2[1];
    while( true ) {
      uVar1 = *(ushort *)(lVar6 + 0x272);
      uVar7 = (ulonglong)((uint)uVar1 * 8);
      lVar9 = uVar7 * 3;
      uVar10 = 0xffffffffffffffff;
      lVar4 = lVar6 + 0x168;
      do {
        if (lVar9 == 0) {
          uVar10 = (ulonglong)uVar1;
          goto LAB_0035af15;
        }
        uVar2 = *(ulonglong *)(lVar4 + 0x10);
        uVar8 = uVar2;
        if (param_4 < uVar2) {
          uVar8 = param_4;
        }
        iVar3 = (*(code *)PTR_memcmp_00799528)(uVar7,uVar8);
        lVar11 = param_4 - uVar2;
        if (iVar3 != 0) {
          lVar11 = (longlong)iVar3;
        }
        bVar5 = (0 < lVar11) - (lVar11 < 0);
        uVar7 = (ulonglong)bVar5;
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + -0x18;
        lVar4 = lVar4 + 0x18;
      } while (bVar5 == 1);
      if (bVar5 == 0) break;
LAB_0035af15:
      bVar12 = local_b0 == 0;
      local_b0 = local_b0 + -1;
      if (bVar12) goto LAB_0035afa3;
      lVar6 = *(longlong *)(lVar6 + 0x278 + uVar10 * 8);
    }
    local_80 = local_b0;
    local_88 = lVar6;
    local_78 = uVar10;
    local_70 = param_2;
    uVar13 = <alloc[12e961f32105355]::collections::btree::map::entry::OccupiedEntry<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
             ::remove_kv(local_68,&local_88);
    if (local_68[0] != -1) {
      if (local_68[0] != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(uVar13,1);
      }
      param_1[2] = local_40;
      param_1[3] = uStack_38;
      *param_1 = local_50;
      param_1[1] = uStack_48;
      return;
    }
  }
LAB_0035afa3:
  *(undefined1 *)param_1 = 0xff;
  return;
}


