// 005c3150 <alloc[12e961f32105355]::string::String>

/* <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::entry::<alloc[12e961f32105355]::string::String> */

void __rustcall
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::entry::<alloc[12e961f32105355]::string::String>
          (longlong *param_1,longlong *param_2,longlong *param_3)

{
  ushort uVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  longlong *plVar7;
  byte bVar8;
  ulonglong uVar9;
  longlong *plVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong *unaff_R14;
  bool bVar14;
  ulonglong local_50;
  
  lVar2 = *param_3;
  plVar3 = (longlong *)param_3[1];
  uVar4 = param_3[2];
  plVar10 = (longlong *)*param_2;
  if (plVar10 == (longlong *)0x0) {
    plVar10 = (longlong *)0x0;
LAB_005c3267:
    if (lVar2 == -1) {
      plVar7 = plVar10;
      local_50 = uVar4;
      plVar10 = plVar3;
      unaff_R14 = param_2;
LAB_005c32aa:
      param_1[1] = (longlong)plVar10;
      param_1[2] = local_50;
      param_1[3] = (longlong)unaff_R14;
      param_1[4] = (longlong)plVar7;
      *param_1 = -1;
    }
    else {
      *param_1 = lVar2;
      param_1[1] = (longlong)plVar3;
      param_1[2] = uVar4;
      param_1[3] = (longlong)param_2;
      param_1[4] = (longlong)plVar10;
      param_1[5] = 0;
      param_1[6] = (longlong)unaff_R14;
    }
    return;
  }
  local_50 = param_2[1];
  do {
    uVar1 = *(ushort *)((longlong)plVar10 + 0x272);
    uVar9 = (ulonglong)((uint)uVar1 * 8);
    lVar13 = uVar9 * 3;
    unaff_R14 = (longlong *)0xffffffffffffffff;
    plVar7 = plVar10 + 0x2d;
    do {
      if (lVar13 == 0) {
        unaff_R14 = (longlong *)(ulonglong)uVar1;
        goto LAB_005c3215;
      }
      uVar5 = plVar7[2];
      uVar11 = uVar5;
      if (uVar4 < uVar5) {
        uVar11 = uVar4;
      }
      iVar6 = (*(code *)PTR_memcmp_00799528)(uVar9,uVar11);
      lVar12 = uVar4 - uVar5;
      if (iVar6 != 0) {
        lVar12 = (longlong)iVar6;
      }
      bVar8 = (0 < lVar12) - (lVar12 < 0);
      uVar9 = (ulonglong)bVar8;
      unaff_R14 = (longlong *)((longlong)unaff_R14 + 1);
      lVar13 = lVar13 + -0x18;
      plVar7 = plVar7 + 3;
    } while (bVar8 == 1);
    if (bVar8 == 0) {
      if (lVar2 != 0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
      }
      plVar7 = param_2;
      goto LAB_005c32aa;
    }
LAB_005c3215:
    bVar14 = local_50 == 0;
    local_50 = local_50 - 1;
    if (bVar14) goto LAB_005c3267;
    plVar10 = (longlong *)plVar10[(longlong)unaff_R14 + 0x4f];
  } while( true );
}


