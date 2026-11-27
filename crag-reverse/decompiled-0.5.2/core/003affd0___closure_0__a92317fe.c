// 003affd0 {closure#0}

/* <alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::<craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>::{closure#0}
    */

byte __rustcall
<alloc[12e961f32105355]::vec::Vec<serde_json[dc3825464c436029]::value::Value>>::retain::
<craggemini_core[66f3c71560d70857]::tools::filter_sse_for_client::{closure#1}>::_closure_0_
          (undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong *plVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong *plVar5;
  code *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  longlong lVar10;
  longlong lVar11;
  byte bVar12;
  longlong lVar13;
  longlong lVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  ulonglong uVar18;
  bool bVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar20;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  longlong local_98;
  longlong local_48;
  longlong local_40;
  undefined8 local_38;
  
  pcVar8 = (char *)(*(code *)PTR_index_into_00799300)(param_4,param_2);
  if ((pcVar8 == (char *)0x0) &&
     (pcVar8 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da,param_2),
     pcVar8 == (char *)0x0)) {
    return 1;
  }
  if (*pcVar8 != '\x05') {
    return 1;
  }
  uVar20 = craggemini_core[66f3c71560d70857]::tools::resolve_client_mcp_call_name
                     (&local_48,pcVar8 + 8,*param_1);
  if (local_48 == -1) {
    return *(byte *)param_1[3] ^ 1;
  }
  *(undefined1 *)param_1[1] = 1;
  pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(uVar20,param_2);
  uVar20 = extraout_XMM0_Da_00;
  if ((pcVar9 == (char *)0x0) &&
     (pcVar9 = (char *)(*(code *)PTR_index_into_00799300)(extraout_XMM0_Da_00,param_2),
     uVar20 = extraout_XMM0_Da_01, pcVar9 == (char *)0x0)) {
    lVar14 = *(longlong *)(pcVar8 + 8);
    if (lVar14 != 0) {
      local_98 = *(longlong *)(pcVar8 + 0x10);
      do {
        uVar3 = *(ushort *)(lVar14 + 0x272);
        pcVar9 = (char *)(lVar14 + -0x20);
        uVar15 = (ulonglong)((uint)uVar3 * 8);
        lVar10 = uVar15 * 3;
        uVar18 = 0xffffffffffffffff;
        lVar11 = lVar14 + 0x168;
        do {
          if (lVar10 == 0) {
            uVar18 = (ulonglong)uVar3;
            goto LAB_003b0249;
          }
          uVar16 = *(ulonglong *)(lVar11 + 0x10);
          lVar17 = uVar16 - 0x10;
          if (0xf < uVar16) {
            uVar16 = 0x10;
          }
          iVar7 = (*(code *)PTR_memcmp_00799528)(uVar15,uVar16);
          lVar17 = -lVar17;
          if (iVar7 != 0) {
            lVar17 = (longlong)iVar7;
          }
          bVar12 = (0 < lVar17) - (lVar17 < 0);
          uVar15 = (ulonglong)bVar12;
          pcVar9 = pcVar9 + 0x20;
          uVar18 = uVar18 + 1;
          lVar10 = lVar10 + -0x18;
          lVar11 = lVar11 + 0x18;
          uVar20 = extraout_XMM0_Da_03;
        } while (bVar12 == 1);
        if (bVar12 == 0) goto LAB_003b00ab;
LAB_003b0249:
        bVar19 = local_98 == 0;
        local_98 = local_98 + -1;
        if (bVar19) break;
        lVar14 = *(longlong *)(lVar14 + 0x278 + uVar18 * 8);
      } while( true );
    }
  }
  else {
LAB_003b00ab:
    if (*pcVar9 == '\x03') {
      lVar14 = *(longlong *)(pcVar9 + 0x18);
      if (lVar14 != 0) {
        if (-1 < lVar14) {
          uVar4 = *(undefined8 *)(pcVar9 + 0x10);
          plVar5 = (longlong *)param_1[2];
          (*(code *)PTR___rust_no_alloc_shim_is_unstable_v2_00798ff8)();
          lVar10 = (*(code *)PTR___rust_alloc_00799000)();
          if (lVar10 != 0) {
            (*(code *)PTR_memcpy_00799008)(extraout_XMM0_Da_02,lVar14);
            lVar11 = plVar5[2];
            if (lVar11 == *plVar5) {
              <alloc[12e961f32105355]::raw_vec::RawVec<craggemini_core[66f3c71560d70857]::tools::GroundingChunk>>
              ::grow_one(plVar5,uVar4);
            }
            lVar17 = plVar5[1];
            lVar13 = lVar11 * 0x30;
            plVar1 = (longlong *)(lVar17 + 0x20 + lVar13);
            *plVar1 = lVar10;
            plVar1[1] = lVar14;
            puVar2 = (undefined8 *)(lVar17 + 0x10 + lVar13);
            *puVar2 = local_38;
            puVar2[1] = lVar14;
            *(longlong *)(lVar17 + lVar13) = local_48;
            ((longlong *)(lVar17 + lVar13))[1] = local_40;
            plVar5[2] = lVar11 + 1;
            return 0;
          }
        }
        (*(code *)PTR_handle_error_00798ff0)();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
    }
  }
  if (local_48 != 0) {
    (*(code *)PTR___rust_dealloc_00798fc8)(uVar20,1);
  }
  return 0;
}


