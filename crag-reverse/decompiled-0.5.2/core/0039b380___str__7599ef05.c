// 0039b380 <str>

/* <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>::search_tree::<str>
   <alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Immut,
   alloc[12e961f32105355]::string::String, serde_json[dc3825464c436029]::value::Value,
   alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>::search_tree::<str> */

void __rustcall
<alloc[12e961f32105355]::collections::btree::node::NodeRef<alloc[12e961f32105355]::collections::btree::node::marker::Mut,alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value,alloc[12e961f32105355]::collections::btree::node::marker::LeafOrInternal>>
::search_tree::<str>
          (undefined8 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
          ulonglong param_5)

{
  ushort uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  byte bVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong local_50;
  
  local_50 = param_3;
  while( true ) {
    uVar1 = *(ushort *)(param_2 + 0x272);
    uVar6 = (ulonglong)((uint)uVar1 * 8);
    lVar9 = uVar6 * 3;
    uVar11 = 0xffffffffffffffff;
    lVar4 = param_2 + 0x168;
    do {
      uVar2 = (ulonglong)uVar1;
      if (lVar9 == 0) goto joined_r0x0039b441;
      uVar2 = *(ulonglong *)(lVar4 + 0x10);
      uVar8 = uVar2;
      if (param_5 < uVar2) {
        uVar8 = param_5;
      }
      iVar3 = (*(code *)PTR_memcmp_00799528)(uVar6,uVar8);
      lVar10 = param_5 - uVar2;
      if (iVar3 != 0) {
        lVar10 = (longlong)iVar3;
      }
      bVar5 = (0 < lVar10) - (lVar10 < 0);
      uVar6 = (ulonglong)bVar5;
      uVar11 = uVar11 + 1;
      lVar9 = lVar9 + -0x18;
      lVar4 = lVar4 + 0x18;
    } while (bVar5 == 1);
    uVar2 = uVar11;
    if (bVar5 == 0) break;
joined_r0x0039b441:
    uVar11 = uVar2;
    if (local_50 == 0) {
      uVar7 = 1;
LAB_0039b45c:
      param_1[1] = param_2;
      param_1[2] = local_50;
      param_1[3] = uVar11;
      *param_1 = uVar7;
      return;
    }
    local_50 = local_50 + -1;
    param_2 = *(longlong *)(param_2 + 0x278 + uVar11 * 8);
  }
  uVar7 = 0;
  goto LAB_0039b45c;
}


