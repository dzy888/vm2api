// 005c32d0 <&str>

/* <serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,
   serde_json[dc3825464c436029]::value::Value>>::entry::<&str> */

void __rustcall
<serde_json[dc3825464c436029]::map::Map<alloc[12e961f32105355]::string::String,serde_json[dc3825464c436029]::value::Value>>
::entry::<&str>(undefined8 *param_1,longlong *param_2,undefined8 param_3,longlong *param_4)

{
  ushort uVar1;
  longlong *plVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 *puVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong unaff_R15;
  bool bVar13;
  undefined1 uVar14;
  longlong local_58;
  
  uVar14 = param_4 == (longlong *)0x0;
  if (-1 < (longlong)param_4) goto LAB_005c32f4;
  puVar10 = (undefined8 *)0x0;
  do {
    uVar14 = 1;
    (*(code *)PTR_handle_error_00798ff0)();
    param_2 = param_4;
    param_1 = puVar10;
LAB_005c32f4:
    if ((bool)uVar14) {
      lVar4 = 1;
      lVar9 = *param_2;
      if (lVar9 == 0) goto LAB_005c344e;
      goto LAB_005c3349;
    }
    (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
    puVar10 = (undefined8 *)0x1;
    lVar4 = (*(code *)PTR___rust_alloc_00799000)();
  } while (lVar4 == 0);
  (*(code *)PTR_memcpy_00799008)();
  lVar9 = *param_2;
  if (lVar9 == 0) {
LAB_005c344e:
    lVar9 = 0;
LAB_005c3450:
    *param_1 = param_4;
    param_1[1] = lVar4;
    param_1[2] = param_4;
    param_1[3] = param_2;
    param_1[4] = lVar9;
    param_1[5] = 0;
    param_1[6] = unaff_R15;
    return;
  }
LAB_005c3349:
  local_58 = param_2[1];
  do {
    uVar1 = *(ushort *)(lVar9 + 0x272);
    uVar7 = (ulonglong)((uint)uVar1 * 8);
    lVar11 = uVar7 * 3;
    unaff_R15 = 0xffffffffffffffff;
    lVar5 = lVar9 + 0x168;
    do {
      if (lVar11 == 0) {
        unaff_R15 = (ulonglong)uVar1;
        goto LAB_005c33d5;
      }
      plVar2 = *(longlong **)(lVar5 + 0x10);
      plVar8 = plVar2;
      if (param_4 < plVar2) {
        plVar8 = param_4;
      }
      iVar3 = (*(code *)PTR_memcmp_00799528)(uVar7,plVar8);
      lVar12 = (longlong)param_4 - (longlong)plVar2;
      if (iVar3 != 0) {
        lVar12 = (longlong)iVar3;
      }
      bVar6 = (0 < lVar12) - (lVar12 < 0);
      uVar7 = (ulonglong)bVar6;
      unaff_R15 = unaff_R15 + 1;
      lVar11 = lVar11 + -0x18;
      lVar5 = lVar5 + 0x18;
    } while (bVar6 == 1);
    if (bVar6 == 0) {
      if (param_4 != (longlong *)0x0) {
        (*(code *)PTR___rust_dealloc_00798fc8)(0,1);
      }
      param_1[1] = lVar9;
      param_1[2] = local_58;
      param_1[3] = unaff_R15;
      param_1[4] = param_2;
      *param_1 = 0xffffffffffffffff;
      return;
    }
LAB_005c33d5:
    bVar13 = local_58 == 0;
    local_58 = local_58 + -1;
    if (bVar13) goto LAB_005c3450;
    lVar9 = *(longlong *)(lVar9 + 0x278 + unaff_R15 * 8);
  } while( true );
}


