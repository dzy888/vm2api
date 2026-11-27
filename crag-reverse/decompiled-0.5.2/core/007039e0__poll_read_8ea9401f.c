// 007039e0 poll_read

/* <tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream as
   tokio[d7d91d38da47d894]::io::async_read::AsyncRead>::poll_read */

undefined1  [16] __rustcall
<tokio[d7d91d38da47d894]::net::tcp::stream::TcpStream_as_tokio[d7d91d38da47d894]::io::async_read::AsyncRead>
::poll_read(ulonglong param_1,ulonglong param_2,longlong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  bool bVar15;
  undefined1 auVar16 [16];
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined8 uStack_70;
  
  uVar10 = *(ulonglong *)(param_3 + 8);
  uVar13 = *(ulonglong *)(param_3 + 0x10);
  uVar6 = uVar10 - uVar13;
  if (uVar10 < uVar13) {
    (*(code *)PTR_poll_ready_0079a880)(0,param_2);
    if (uStack_70._2_1_ == -1) goto LAB_0070241a;
    if (uStack_70._2_1_ != '\x02') {
      uStack_70._2_1_ = 'P';
      (*(code *)PTR_slice_index_fail_007993c8)
                (&PTR_anon_d3057478e380898db632effa827bd31f_622_llvm_2674179329317868992_00795050,
                 uVar10);
      goto LAB_00702408;
    }
  }
  else {
    iVar3 = *(int *)(param_1 + 0x18);
    (*(code *)PTR_poll_ready_0079a880)(0,param_2);
    uVar10 = param_1;
    if (iVar3 != -1) {
      uVar7 = 1;
      if (uStack_70._2_1_ != -1) {
        lVar4 = *(longlong *)(param_1 + 0x10);
        do {
          if (uStack_70._2_1_ == '\x02') {
            uVar7 = 0;
            param_2 = CONCAT71(uStack_77,uStack_78);
            goto LAB_007023c2;
          }
          uVar12 = uVar6;
          lVar8 = (*(code *)PTR_read_0079a960)();
          uVar11 = (uint)CONCAT71(uStack_77,uStack_78);
          uVar14 = (uint)(ushort)uStack_70;
          if (lVar8 != 1) {
            if (uVar12 == 0 || uVar6 <= uVar12) goto LAB_00702393;
            lVar4 = *(longlong *)(param_1 + 0x10);
            uVar10 = *(ulonglong *)(lVar4 + 0x90);
            goto LAB_00702370;
          }
          uVar9 = (uint)uVar12 & 3;
          switch(uVar9) {
          case 0:
            if (*(char *)(uVar12 + 0x10) == '\r') goto LAB_0070229d;
            goto LAB_007023b6;
          case 1:
            cVar5 = *(char *)(uVar12 + 0x1f);
            break;
          case 2:
            lVar8 = (*(code *)PTR_get_os_functions_007992e0)();
            cVar5 = (**(code **)(lVar8 + 8))();
            break;
          case 3:
            cVar5 = (char)(uVar12 >> 0x20);
          }
          if (cVar5 != '\r') goto LAB_007023b6;
LAB_0070229d:
          uVar10 = *(ulonglong *)(lVar4 + 0x90);
          do {
            if (((uint)(uVar10 >> 0x10) & 0x7fff) != (uint)(ushort)uStack_70) break;
            puVar1 = (ulonglong *)(lVar4 + 0x90);
            LOCK();
            uVar2 = *puVar1;
            bVar15 = uVar10 == uVar2;
            if (bVar15) {
              *puVar1 = (ulonglong)
                        ((uint)uVar10 & (uVar11 & 0x33 ^ 0x8000003f) | (uVar14 & 0x7fff) << 0x10);
            }
            else {
              uVar10 = uVar2;
            }
            UNLOCK();
          } while (!bVar15);
          if ((1 < uVar9 - 2) && ((uVar12 & 3) != 0)) {
            uStack_70 = uVar12 - 1;
            uStack_78 = 3;
            (*(code *)PTR_drop_00799040)();
          }
          (*(code *)PTR_poll_ready_0079a880)(0,param_2);
        } while (uStack_70._2_1_ != -1);
        uVar7 = 1;
      }
      goto LAB_007023c2;
    }
LAB_00702408:
    if (uStack_70._2_1_ == -1) {
LAB_0070241a:
      uVar7 = 1;
      goto LAB_007023c2;
    }
    if (uStack_70._2_1_ != '\x02') {
LAB_0070243a:
      (*(code *)PTR_unwrap_failed_00799278)();
      core[c0acaeba6ab4c2e0]::ptr::drop_glue::<core[c0acaeba6ab4c2e0]::io::error::Error>
                (uVar13,uVar10);
                    /* WARNING: Subroutine does not return */
      _Unwind_Resume();
    }
  }
  param_2 = CONCAT71(uStack_77,uStack_78);
  uVar7 = 0;
LAB_007023c2:
  auVar16._8_8_ = param_2;
  auVar16._0_8_ = uVar7;
  return auVar16;
  while( true ) {
    puVar1 = (ulonglong *)(lVar4 + 0x90);
    LOCK();
    uVar6 = *puVar1;
    bVar15 = uVar10 == uVar6;
    if (bVar15) {
      *puVar1 = (ulonglong)((uint)uVar10 & (uVar11 & 0x33 ^ 0x8000003f) | (uVar14 & 0x7fff) << 0x10)
      ;
    }
    else {
      uVar10 = uVar6;
    }
    UNLOCK();
    if (bVar15) break;
LAB_00702370:
    if (((uint)(uVar10 >> 0x10) & 0x7fff) != uVar14) break;
  }
LAB_00702393:
  uVar12 = uVar12 + uVar13;
  if (*(ulonglong *)(param_3 + 0x18) < uVar12) {
    *(ulonglong *)(param_3 + 0x18) = uVar12;
  }
  if (uVar12 < uVar13) {
    uVar10 = 0xf;
    (*(code *)PTR_expect_failed_00799440)
              (param_3,&
                       PTR_anon_ed01ef58651a73351ccd2244bf431f77_2_llvm_1588049147593173555_007950b0
              );
    uVar13 = uVar12;
    goto LAB_0070243a;
  }
  *(ulonglong *)(param_3 + 0x10) = uVar12;
  uVar12 = 0;
LAB_007023b6:
  uVar7 = 0;
  param_2 = uVar12;
  goto LAB_007023c2;
}


