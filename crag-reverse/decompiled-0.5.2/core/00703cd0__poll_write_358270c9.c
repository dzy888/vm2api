// 00703cd0 poll_write

/* <tokio[d7d91d38da47d894]::process::ChildStdin as
   tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>::poll_write */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::process::ChildStdin_as_tokio[d7d91d38da47d894]::io::async_write::AsyncWrite>
::poll_write(longlong param_1,undefined8 param_2,undefined8 param_3,ulonglong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong unaff_R14;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 uStack_60;
  undefined7 uStack_5f;
  undefined8 uStack_58;
  
  iVar3 = *(int *)(param_1 + 0x18);
  (*(code *)PTR_poll_ready_0079a880)(1);
  if (iVar3 == -1) {
    if (uStack_58._2_1_ == -1) {
      uVar9 = 2;
    }
    else {
      if (uStack_58._2_1_ != '\x02') {
        (*(code *)PTR_unwrap_failed_00799278)();
        core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>();
                    /* WARNING: Subroutine does not return */
        _Unwind_Resume();
      }
      uVar9 = 1;
      unaff_R14 = CONCAT71(uStack_5f,uStack_60);
    }
  }
  else {
    uVar9 = 2;
    if (uStack_58._2_1_ != -1) {
      lVar4 = *(longlong *)(param_1 + 0x10);
      do {
        if (uStack_58._2_1_ == '\x02') {
          uVar9 = 1;
          unaff_R14 = CONCAT71(uStack_5f,uStack_60);
          goto LAB_00703633;
        }
        unaff_R14 = param_4;
        lVar6 = (*(code *)PTR_write_0079a980)();
        uVar11 = (uint)CONCAT71(uStack_5f,uStack_60);
        uVar10 = (uint)(ushort)uStack_58;
        if (lVar6 != 1) {
          if (!(param_4 <= unaff_R14 || unaff_R14 == 0)) {
            lVar4 = *(longlong *)(param_1 + 0x10);
            uVar7 = *(ulonglong *)(lVar4 + 0x90);
            uVar9 = 0;
            goto LAB_007035e0;
          }
          uVar9 = 0;
          goto LAB_00703633;
        }
        uVar8 = (uint)unaff_R14 & 3;
        switch(uVar8) {
        case 0:
          if (*(char *)(unaff_R14 + 0x10) == '\r') goto LAB_0070351c;
          goto LAB_00703605;
        case 1:
          cVar5 = *(char *)(unaff_R14 + 0x1f);
          break;
        case 2:
          lVar6 = (*(code *)PTR_get_os_functions_007992e0)();
          cVar5 = (**(code **)(lVar6 + 8))();
          break;
        case 3:
          cVar5 = (char)(unaff_R14 >> 0x20);
        }
        if (cVar5 != '\r') {
LAB_00703605:
          uVar9 = 1;
          goto LAB_00703633;
        }
LAB_0070351c:
        uVar7 = *(ulonglong *)(lVar4 + 0x90);
        uVar12 = (ulonglong)(uVar11 & 0x33) ^ 0x8000003f;
        do {
          if (((uint)(uVar7 >> 0x10) & 0x7fff) != (uint)(ushort)uStack_58) break;
          puVar1 = (ulonglong *)(lVar4 + 0x90);
          LOCK();
          uVar2 = *puVar1;
          bVar13 = uVar7 == uVar2;
          if (bVar13) {
            *puVar1 = (ulonglong)((uint)uVar7 & (uint)uVar12 | (uVar10 & 0x7fff) << 0x10);
          }
          else {
            uVar7 = uVar2;
          }
          UNLOCK();
        } while (!bVar13);
        if ((1 < uVar8 - 2) && ((unaff_R14 & 3) != 0)) {
          uStack_58 = unaff_R14 - 1;
          uStack_60 = 3;
          (*(code *)PTR_drop_00799040)();
        }
        (*(code *)PTR_poll_ready_0079a880)(1,param_2);
      } while (uStack_58._2_1_ != -1);
      uVar9 = 2;
      unaff_R14 = uVar12;
    }
  }
  goto LAB_00703633;
  while( true ) {
    puVar1 = (ulonglong *)(lVar4 + 0x90);
    LOCK();
    uVar12 = *puVar1;
    bVar13 = uVar7 == uVar12;
    if (bVar13) {
      *puVar1 = (ulonglong)((uint)uVar7 & (uVar11 & 0x33 ^ 0x8000003f) | (uVar10 & 0x7fff) << 0x10);
    }
    else {
      uVar7 = uVar12;
    }
    UNLOCK();
    if (bVar13) break;
LAB_007035e0:
    if (((uint)(uVar7 >> 0x10) & 0x7fff) != uVar10) break;
  }
LAB_00703633:
  auVar14._8_8_ = unaff_R14;
  auVar14._0_8_ = uVar9;
  return auVar14;
}


