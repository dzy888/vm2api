// 00399ec0 <<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending::{closure#0}>

/* <alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>>::retain::<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending::{closure#0}>
    */

void __rustcall
<alloc[12e961f32105355]::vec::Vec<craggemini_core[66f3c71560d70857]::mcp::ParkedCall>>::retain::
<<craggemini_core[66f3c71560d70857]::mcp::McpCoordinator>::remove_pending::_closure_0_>
          (undefined4 param_1,longlong param_2,undefined8 *param_3)

{
  ulonglong uVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined *puVar14;
  int iVar15;
  ulonglong uVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar19;
  
  puVar14 = PTR_bcmp_00799020;
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  if (uVar1 != 0) {
    puVar2 = *(undefined4 **)(param_2 + 8);
    uVar3 = *param_3;
    lVar4 = param_3[1];
    uVar16 = 0;
    puVar17 = puVar2;
    do {
      if ((*(longlong *)(puVar17 + 4) == lVar4) &&
         (iVar15 = (*(code *)puVar14)(param_1,lVar4), param_1 = extraout_XMM0_Da, iVar15 == 0)) {
        uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                 <craggemini_core[66f3c71560d70857]::mcp::ParkedCall>(puVar17,uVar3);
        uVar13 = uVar16;
        while (uVar13 = uVar13 + 1, uVar13 < uVar1) {
          puVar18 = puVar17 + 0x14;
          if ((*(longlong *)(puVar17 + 0x18) == lVar4) &&
             (iVar15 = (*(code *)puVar14)(uVar19,lVar4), iVar15 == 0)) {
            uVar19 = core[c0acaeba6ab4c2e0]::ptr::drop_glue::
                     <craggemini_core[66f3c71560d70857]::mcp::ParkedCall>(puVar18,uVar3);
            puVar17 = puVar18;
          }
          else {
            uVar8 = *(undefined8 *)(puVar17 + 0x26);
            *(undefined8 *)(puVar2 + uVar16 * 0x14 + 0x10) = *(undefined8 *)(puVar17 + 0x24);
            *(undefined8 *)((longlong)(puVar2 + uVar16 * 0x14 + 0x10) + 8) = uVar8;
            uVar19 = *puVar18;
            uVar5 = puVar17[0x15];
            uVar6 = puVar17[0x16];
            uVar7 = puVar17[0x17];
            uVar8 = *(undefined8 *)(puVar17 + 0x18);
            uVar9 = *(undefined8 *)(puVar17 + 0x1a);
            uVar10 = *(undefined8 *)(puVar17 + 0x1c);
            uVar11 = *(undefined8 *)(puVar17 + 0x1e);
            uVar12 = *(undefined8 *)(puVar17 + 0x22);
            *(undefined8 *)(puVar2 + uVar16 * 0x14 + 0xc) = *(undefined8 *)(puVar17 + 0x20);
            *(undefined8 *)((longlong)(puVar2 + uVar16 * 0x14 + 0xc) + 8) = uVar12;
            *(undefined8 *)(puVar2 + uVar16 * 0x14 + 8) = uVar10;
            *(undefined8 *)((longlong)(puVar2 + uVar16 * 0x14 + 8) + 8) = uVar11;
            *(undefined8 *)(puVar2 + uVar16 * 0x14 + 4) = uVar8;
            *(undefined8 *)((longlong)(puVar2 + uVar16 * 0x14 + 4) + 8) = uVar9;
            puVar17 = puVar2 + uVar16 * 0x14;
            *puVar17 = uVar19;
            puVar17[1] = uVar5;
            puVar17[2] = uVar6;
            puVar17[3] = uVar7;
            uVar16 = uVar16 + 1;
            puVar17 = puVar18;
          }
        }
        *(ulonglong *)(param_2 + 0x10) = uVar16;
        return;
      }
      uVar16 = uVar16 + 1;
      puVar17 = puVar17 + 0x14;
    } while (uVar1 != uVar16);
  }
  return;
}


