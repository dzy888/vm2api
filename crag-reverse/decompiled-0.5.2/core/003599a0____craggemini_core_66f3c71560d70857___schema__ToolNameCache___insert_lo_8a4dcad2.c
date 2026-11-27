// 003599a0 <<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::{closure#0}>

/* <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::retain::<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::{closure#0}>
   <alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::retain::<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::resolve_at::{closure#1}>
    */

void __rustcall
<alloc[12e961f32105355]::collections::vec_deque::VecDeque<alloc[12e961f32105355]::string::String>>::
retain::<<craggemini_core[66f3c71560d70857]::schema::ToolNameCache>::insert_locked::_closure_0_>
          (ulonglong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 *puVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  uVar2 = param_1[3];
  if (uVar2 == 0) {
    uVar17 = 0;
    uVar15 = 0;
LAB_00359a57:
    if (uVar15 != uVar17) {
LAB_00359bb2:
      truncate(param_1,uVar17);
      return;
    }
  }
  else {
    uVar15 = param_1[2];
    uVar3 = *param_1;
    lVar4 = *(longlong *)(param_2 + 0x10);
    lVar18 = param_1[1] + uVar15 * 0x18 + 0x10;
    uVar17 = 0;
    do {
      uVar13 = 0;
      if (uVar3 <= uVar15 + uVar17) {
        uVar13 = uVar3;
      }
      if ((*(longlong *)(lVar18 + uVar13 * -0x18) == lVar4) &&
         (iVar12 = (*(code *)PTR_bcmp_00799020)(uVar13 * 0x18,lVar4), iVar12 == 0)) {
        uVar15 = uVar17 + 1;
        if (uVar15 < uVar2) {
          uVar3 = param_1[2];
          uVar13 = *param_1;
          uVar5 = param_1[1];
          lVar4 = *(longlong *)(param_2 + 0x10);
          local_48 = extraout_XMM0_Da;
          do {
            lVar18 = uVar5 + (uVar3 + uVar15) * 0x18;
            uVar19 = uVar15;
            while( true ) {
              uVar14 = uVar13;
              if (uVar3 + uVar19 < uVar13) {
                uVar14 = 0;
              }
              puVar16 = (undefined8 *)(lVar18 + uVar14 * -0x18);
              if ((puVar16[2] != lVar4) ||
                 (iVar12 = (*(code *)PTR_bcmp_00799020)(0,lVar4), local_48 = extraout_XMM0_Da_00,
                 iVar12 != 0)) break;
              uVar19 = uVar19 + 1;
              lVar18 = lVar18 + 0x18;
              if (uVar2 <= uVar19) {
                uVar19 = uVar15 + 1;
                if (uVar15 + 1 < uVar2) {
                  uVar19 = uVar2;
                }
                goto LAB_00359ba4;
              }
            }
            if (uVar2 <= uVar17) {
              (*(code *)PTR_panic_00799338)
                        (local_48,&anon_869a44742910931491f4b62d80901a16_71_llvm_763634721200370616)
              ;
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar15 = 0;
            if (uVar13 <= uVar17 + uVar3) {
              uVar15 = uVar13;
            }
            lVar18 = (uVar17 + uVar3) - uVar15;
            uVar6 = *(undefined8 *)(uVar5 + 0x10 + lVar18 * 0x18);
            puVar1 = (undefined8 *)(uVar5 + lVar18 * 0x18);
            uVar9 = *puVar1;
            uVar10 = puVar1[1];
            uVar7 = puVar16[2];
            uVar11 = puVar16[1];
            puVar1 = (undefined8 *)(uVar5 + lVar18 * 0x18);
            *puVar1 = *puVar16;
            puVar1[1] = uVar11;
            *(undefined8 *)(uVar5 + 0x10 + lVar18 * 0x18) = uVar7;
            puVar16[2] = uVar6;
            local_48 = (undefined4)uVar9;
            uStack_44 = (undefined4)((ulonglong)uVar9 >> 0x20);
            uStack_40 = (undefined4)uVar10;
            uStack_3c = (undefined4)((ulonglong)uVar10 >> 0x20);
            *(undefined4 *)puVar16 = local_48;
            *(undefined4 *)((longlong)puVar16 + 4) = uStack_44;
            *(undefined4 *)(puVar16 + 1) = uStack_40;
            *(undefined4 *)((longlong)puVar16 + 0xc) = uStack_3c;
            uVar15 = uVar19 + 1;
            uVar17 = uVar17 + 1;
          } while (uVar15 < uVar2);
          uVar19 = uVar19 + 1;
LAB_00359ba4:
          if (uVar19 == uVar17) {
            return;
          }
          goto LAB_00359bb2;
        }
        goto LAB_00359a57;
      }
      uVar17 = uVar17 + 1;
      lVar18 = lVar18 + 0x18;
    } while (uVar2 != uVar17);
  }
  return;
}


